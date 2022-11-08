#include <stdio.h>
#include <stdlib.h>
#include <ftdi.h>
#include <time.h>
#include <unistd.h>

extern int debug;

const unsigned char MSB_FALLING_EDGE_CLOCK_BYTE_IN = '\x24';
const unsigned char MSB_FALLING_EDGE_CLOCK_BYTE_OUT = '\x11';
const unsigned char MSB_RISING_EDGE_CLOCK_BIT_IN = '\x22';

extern unsigned char mem[1024]; // Buffer to hold MPSSE commands and data to be sent to FT4232H
extern unsigned char r_mem[1024];  // Buffer to hold Data unsigned chars to be read from FT4232H
extern unsigned int dwClockDivisor;
extern unsigned int dw;
extern unsigned int dwSent, dwNumInputBuffer;
extern int dwRead;


/*
 | HighSpeedSetI2CStart:
 | Generate start condition for I2C bus.
 | Set SDA and SCL high.
 | Set SDA low (while SCL remains high)
 | Set SCL low
 */
void I2CStart(void) {
  int i;
  for (i = 0; i < 4; i++) {
    mem[dw++] = 0x80;
    mem[dw++] = 0x03;  // SCL high, SDA high
    mem[dw++] = 0x13;  // SCL out,  SDA out
  }
  for (i = 0; i < 4; i++) {
    mem[dw++] = 0x80;
    mem[dw++] = 0x01;  // SCL high, SDA low
    mem[dw++] = 0x13;  // SCL out,  SDA out
  }
  for (i = 0; i < 4; i++) {
    mem[dw++] = 0x80;
    mem[dw++] = 0x00;    // SCL low, SDA low
    mem[dw++] = 0x13;    // SCL out, SDA out
  }
  // Note! Commands are not send to device until the following SendByteAndCheckACK
}


/*
 | HighSpeedSetI2CStop:
 | Generate stop condition for I2C bus.
 | Set SDA low, SCL high.
 | Set SDA high (while SCL remains high)
 | Release both pins by setting them to input mode so they are in tristate (high impidance)
 */

void I2CStop(void) {
  int i;
  for(i=0; i<4; i++) {
    mem[dw++] = 0x80;
    mem[dw++] = 0x00;  // SCL low,  SDA low
    mem[dw++] = 0x13;  // SCL out,  SDA out
  }
  for(i=0; i<4; i++) {
    mem[dw++] = 0x80;
    mem[dw++] = 0x01;  // SCL high, SDA low
    mem[dw++] = 0x13;  // SCL out,  SDA out
  }
  // Tristate the SCL, SDA pins
  mem[dw++] = 0x80;
  mem[dw++] = 0x03;  // SCL high, SDA high
  mem[dw++] = 0x10;  // SCL in,   SDA in

  // Note! Commands are not send to device here
}

int initI2C(struct ftdi_context fc) {
      int i = 0;
      int bCommandEchoed;

      // Init mpsse
      ftdi_set_bitmode(&fc, 0xFF, BITMODE_RESET);
      ftdi_set_bitmode(&fc, 0xFF, BITMODE_MPSSE);

      // Syncronize check
      mem[dw++] = 0xAA;  	// Add BAD command 0xxAA
      dwSent = ftdi_write_data(&fc, mem, dw);
      dw = 0;
      do {
	    dwRead = ftdi_read_data(&fc, r_mem, 2);
        if(dwRead < 0)
	    { if(debug) printf("Error: %s\n", ftdi_get_error_string(&fc));
	      break;
	    }
	    if(debug) printf("Got %d bytes %02X %02X\n", dwRead, r_mem[0], r_mem[1]);
	    if(++i > 5)	/* up to 5 times read */
	      break;
	  } while (dwRead == 0);
      for (i = 0; i < dwRead; i++)
      { if ((r_mem[i] == 0xFA) && (r_mem[i+1] == 0xAA))
        {  if (debug) printf("FTDI synchronized\n");
	       bCommandEchoed = 1; break;
        }
      }
      if (bCommandEchoed == 0) { return 1; } // Error

	  // Setup sys and clock divider
      mem[dw++] = 0x8A;  //Ensure disable clock divide by 5 for 60Mhz master clock
      mem[dw++] = 0x97;
      mem[dw++] = 0x8C;
      dwSent = ftdi_write_data(&fc, mem, dw); dw=0; 	     // Send off the commands and clear pointer



     mem[dw++] = 0x80;   // Is this needed ?
     mem[dw++] = 0x03;
     mem[dw++] = 0x13;

      mem[dw++] = 0x86;   // Command to set clock divisor
      mem[dw++] = dwClockDivisor & 0xFF;  //Set 0xValueL of clock divisor
      mem[dw++] = (dwClockDivisor >> 8) & 0xFF;
      dwSent = ftdi_write_data(&fc, mem, dw); dw = 0;

      mem[dw++] = 0x9e;   // Enable drive-zero mode
     mem[dw++] = 0x07;   // on AD0, AD1 and AD2
    mem[dw++] = 0x00;

      mem[dw++] = 0x85;   // Turn off loop back
      dwSent = ftdi_write_data(&fc, mem, dw); dw = 0;
      return 0;
}


/*
 | SendByteAndCheckACK:
 | Send byte and check ACK
 */
int SendByteAndCheckACK(struct ftdi_context fc,unsigned char DataSend) {
	int ftStatus = 0;
	int r;
        if (debug) printf("Info: Send %d\n", DataSend);

	mem[dw++] = MSB_FALLING_EDGE_CLOCK_BYTE_OUT;
	mem[dw++] = 0x00;
	mem[dw++] = 0x00;  //Data length of 0x0000 means 1 byte data to clock out
	mem[dw++] = DataSend;

	mem[dw++] = 0x80;
	mem[dw++] = 0x00;
	mem[dw++] = 0x11;
	mem[dw++] = MSB_RISING_EDGE_CLOCK_BIT_IN;
	mem[dw++] = 0x00;
	mem[dw++] = 0x87;
	dwSent = ftdi_write_data(&fc, mem, dw); dw = 0;

        r = 0;
        do {
          dwRead = ftdi_read_data(&fc, r_mem, 1);
        } while (dwRead == 0 && r++ < 5);

        if (dwRead < 0) {
          printf("Error: FTDI failed - %s\n", ftdi_get_error_string(&fc));
          return 0;

        } else if (dwRead > 0) {
          // proper data was read, return true (1) if ACK was received
          r =  ~r_mem[0] & 0x01;

        } else /* dwRead == 0 */ {
          printf("Error: FTDI returned no data\n");
          // still no data, time-out and return false
          r = 0;
        }
        if(debug) printf("Received: %d, %02X\n", dwRead, r_mem[0]);

	mem[dw++] = 0x80;
	mem[dw++] = 0x02;
	mem[dw++] = 0x13;
	return r;
}

unsigned char ReadnByteAndSendNAK(struct ftdi_context fc,unsigned char n)
{   dw = 0;    // Clear output buffer
    int i;
    if (debug) printf("Info: Read n %d\n", n);
    for (i=0 ; i<n ; i++)
    {
	  // Clock one byte of data in...
      mem[dw++] = 0x20; // Command: clock data byte in on clk rising edge
      mem[dw++] = 0x00; // Length
      mem[dw++] = 0x00; // Length 0x0000 means clock ONE byte in

      mem[dw++] = 0x80; // Command to set ADbus direction/ data
      mem[dw++] = 0x00; // Set the value of the pins
      mem[dw++] = 0x13; // Set pins o/p except bit 2 (data_in)

      // Now clock out one bit (ACK/NAK). This bit has value '1' to send a NAK to the I2C Slave
      mem[dw++] = 0x13; // Command: clock data bits out on clk falling edge
      mem[dw++] = 0x00; // Length of 0x00 means clock out ONE bit
      mem[dw++] = (i+1==n)?0xff:0x00; // Nack only on last
      // Put I2C line back to idle (during transfer) state... Clock line low, Data line high
      mem[dw++] = 0x80; // Command to set ADbus direction/ data
      mem[dw++] = 0x02; // Set the value of the pins
      mem[dw++] = 0x11; // Set pins o/p except bit 2 (data_in)
    }

    // AD0 (SCL) is output driven low
    // AD1 (DATA OUT) is output high (open drain)
    // AD2 (DATA IN) is input (therefore the output value specified is ignored)
    // AD3 to AD7 are inputs driven high (not used in this application)
    // This command then tells the MPSSE to send any results gathered back immediately

	mem[dw++] = 0x87; // Send answer back immediate command
    // Send off the commands to the FT232H
    dwSent = ftdi_write_data(&fc, mem, dw); dw = 0;

	// ===============================================================
    // Now wait for the byte which we read to come back to the host PC
    // ===============================================================
   usleep(100);

   i = 0;
   do {
     dwRead = ftdi_read_data(&fc, r_mem, n+1);
     if(dwRead < 0) {
       // error occured
       if (debug) printf("Error: Code: %d, %s\n", dwRead, ftdi_get_error_string(&fc));
       break;
     }
     if(debug) printf("Info: Got %d bytes %02X\n", dwRead, r_mem[0]);
     if(++i > 5) {	/* up to 5 times read */
       if (debug) printf("Error: No data returned after several retries\n");
       break;
     }
   } while (dwRead == 0);

   return r_mem[0];

}
unsigned char ReadByteAndSendNAK(struct ftdi_context fc)
{   dw = 0;    // Clear output buffer
    // Clock one byte of data in...
    mem[dw++] = 0x20; // Command: clock data byte in on clk rising edge
    mem[dw++] = 0x00; // Length
    mem[dw++] = 0x00; // Length 0x0000 means clock ONE byte in
    // Now clock out one bit (ACK/NAK). This bit has value '1' to send a NAK to the I2C Slave
    mem[dw++] = 0x13; // Command: clock data bits out on clk falling edge
    mem[dw++] = 0x00; // Length of 0x00 means clock out ONE bit
    mem[dw++] = 0x00; // Command will send bit 7 of this byte (= \u20181\u2019)
    // Put I2C line back to idle (during transfer) state... Clock line low, Data line high
    mem[dw++] = 0x80; // Command to set ADbus direction/ data
    mem[dw++] = 0xFE; // Set the value of the pins
    mem[dw++] = 0xFB; // Set pins o/p except bit 2 (data_in)
    // AD0 (SCL) is output driven low
    // AD1 (DATA OUT) is output high (open drain)
    // AD2 (DATA IN) is input (therefore the output value specified is ignored)
    // AD3 to AD7 are inputs driven high (not used in this application)
    // This command then tells the MPSSE to send any results gathered back immediately
    mem[dw++] = 0x87; // Send answer back immediate command
    // Send off the commands to the FT232H
    dwSent = ftdi_write_data(&fc, mem, dw);

	// ===============================================================
    // Now wait for the byte which we read to come back to the host PC
    // ===============================================================
   usleep(100);
   dwRead = ftdi_read_data(&fc, r_mem, 2);
   return r_mem[0];

}




/*
 | ReadByte:
 | Read I2C byte.
 | Note that read address must be sent beforehand
 */
unsigned char ReadByte(struct ftdi_context fc) {
	// Command to set directions of lower 8 pins and force value on bits set as output
	mem[dw++] = 0x80;
	// Set SCL low
	mem[dw++] = 0x00;
	// Set SK, GPIOL0 pins as output
	mem[dw++] = 0x11;
	// Command to clock data byte in on –ve Clock Edge MSB first
	mem[dw++] = MSB_FALLING_EDGE_CLOCK_BYTE_IN;
	mem[dw++] = 0x00;
	mem[dw++] = 0x00;

	// Data length of 0x0000 means 1 byte data to clock in
	// Command to scan in acknowledge bit , -ve clock Edge MSB first
	mem[dw++] = MSB_RISING_EDGE_CLOCK_BIT_IN;
	mem[dw++] = 0x00;  // Length of 0 means to scan in 1 bit
	mem[dw++] = 0x87; // Send answer back immediate command
	dwSent = ftdi_write_data(&fc, mem, dw);  dw = 0;

	// Read two bytes from device receive buffer, first byte is data read, second byte is ACK bit
	dwRead = ftdi_read_data(&fc, r_mem, 2);
	if(dwRead < 2) {
		printf("Error reading i2c\n");
		return 0xFF;
	}
	if(debug)
		printf("Data read: %02X\n", r_mem[0]);
	return r_mem[0];
}
