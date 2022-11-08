//-------------------------------------------------------------------------------------------
//                        Merus Audio Low level communication library
//
//
//
// Supported platforms:
//    Raspberry pi
// Supported device:
//    MA120
// Functions provided:
//    Single/block read/write spi/i2c
//
// Usage:
// int fd = scom_open(0x00,SPI_BUS_0);            // Open device spi mode
// or
// int fd = scom_open(0x23,I2C_BUS_0|I2C_BUS_1);  // Open device i2c mode address 0x23 using pin 3(SDA)/5(SCL) or pin 27(SDA)/28(SCL)
//
// uint8_t adr = 0x20;
// uint8_t data = 0xff;
// scom_w(fd,adr,data);          // Write 0xff to address 0x20
//
// adr = 0x40; n=2; uint8_t rx_data[8];
// scom_r(fd,adr,&rx_data,n);    // Read 2 bytes from address 0x40, Data returned in rx_data
//
//
// close(fd);

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <sys/types.h>

#include <linux/types.h>
#include <linux/spi/spidev.h>
#include <linux/i2c.h>
#include <linux/i2c-dev.h>
#include <termios.h>

#ifdef X86_LINUX
  #include <ftdi.h>
  #include <ftdispi.h>
  #include "../i2c_mpsse.h"
#endif


#include "libscom2.h"

#ifdef X86_LINUX
  int scom_open(uint8_t address,uint8_t dev_bus)
  { if (ftdi_init(&fc) < 0)
    {
      fprintf(stderr, "ftdi_init failed\n");
      return 1;
    }
    int i = ftdi_usb_open_desc(&fc, 0x0403, 0x6010,NULL, NULL);
    if (i < 0 && i != -5) {
      fprintf(stderr, "Error: ftdi_usb_open_desc failed (%d): %s\n", i, ftdi_get_error_string(&fc));
      exit(-1);
    }
    if (address == 0)             // Use spi communication - Ignore dev_bus
    {
      ftdispi_open(&fsc, &fc, INTERFACE_A);
      ftdispi_setmode(&fsc, 1, 0, 0, 0, 0, 0);
      ftdispi_setclock(&fsc, speed );		// 100 min.
      ftdispi_setloopback(&fsc, 0);
    }
    else
    { i2c_adr = address;
      initI2C(fc);
    }
    return 1;
  }

int scom_w(uint16_t adr, uint8_t data)
{ if (i2c_adr == 0x00)    // spi
  {
    printf("SPI not implemeted deprecediated\n");
  }
  else
  { I2CStart();  // repeated start
    int b = SendByteAndCheckACK(fc,(unsigned char) ((i2c_adr<<1) ));
    if (b==0)
		{ printf("No ACK from device using i2c address: 0x%02x - Will exit with ERROR -1\n",i2c_adr);
	 	  I2CStop();
	    ftdi_write_data(&fc, mem, dw); dw = 0;
	  }
    SendByteAndCheckACK(fc,(unsigned char)((adr&0xffF00)>>8));
    SendByteAndCheckACK(fc,(unsigned char)(adr&0x00FF));
    SendByteAndCheckACK(fc,(unsigned char)data);
    I2CStop();

    ftdi_write_data(&fc, mem, dw); dw = 0;
	}
  return 0;
 }
int scom_r(uint16_t adr, uint8_t *rx, uint8_t nr )
{ if (i2c_adr == 0x00)    // spi
    printf("SPI not implemeted deprecediated\n");
  else
  { I2CStart();  // repeated start
    int b = SendByteAndCheckACK(fc,(unsigned char) ((i2c_adr<<1) ));
    if (b==0)
		{ printf("No ACK from device using i2c address: 0x%02x - Will exit with ERROR -1\n",i2c_adr);
	 	  I2CStop();
	    ftdi_write_data(&fc, mem, dw); dw = 0;
	  }
    SendByteAndCheckACK(fc,(unsigned char)((adr&0xff00)>>8));
    SendByteAndCheckACK(fc,(unsigned char)(adr&0x00ff));
    I2CStart();  // repeated start
	  b = SendByteAndCheckACK(fc,(unsigned char) ((i2c_adr<<1) + 1) );
    b = ReadnByteAndSendNAK(fc,nr);
    I2CStop();
    ftdi_write_data(&fc, mem, dw); dw = 0;
    for (int i=0; i<nr;i++)
    {
      rx[i] = r_mem[i];
    }
  }
  return 1;
}
#endif


#ifdef ARM

int scom_open(uint8_t address,uint8_t dev_bus)
{ static char *device;
  device = malloc(16);

  speed = 1000000;
  // If address == 0x00 use spi communictaion, Global variable com_adr set
  if (address == 0x00)                          // Select spi communiction
  { i2c_adr = 0;
    if (dev_bus == SPI_BUS_CE1)
      strcpy(device,"/dev/spidev0.1");
	  else if (dev_bus == SPI_BUS_CE0)
	    strcpy(device,"/dev/spidev0.0");
	  else
	  { printf("no valid spi device selected");
	    exit(-1);
	  }
	  static uint32_t  mode = SPI_MODE_0;
      static uint8_t   bits = 8;
	  int res;

	  fd = open(device, O_RDWR);
      if (fd < 0)
      { printf("Open error\n");
        exit(-1);
      }
      res = ioctl(fd, SPI_IOC_WR_MAX_SPEED_HZ, &speed);
      if (res < 0)
      { printf("Could not set SPI speed (WR)...ioctl fail");
        exit(-11);
      }
      ioctl(fd, SPI_IOC_RD_MAX_SPEED_HZ, &speed);

      res = ioctl(fd, SPI_IOC_WR_MODE, &mode);
      if(res < 0) {
        printf("Could not set SPIMode (RD)...ioctl fail");
        exit(-1);
      }
      res = ioctl(fd, SPI_IOC_RD_MODE, &mode);
      if (res < 0) {
        printf("Could not set SPIMode (RD)...ioctl fail");
        exit(1);
      }
      ioctl(fd, SPI_IOC_WR_BITS_PER_WORD, &bits);
      ioctl(fd, SPI_IOC_RD_BITS_PER_WORD, &bits);
      return fd;
    }
  else                                  // Select and open I2C mode
  {
    if (dev_bus == I2C_BUS_0)
      fd = open("/dev/i2c-0",O_RDWR);
    else
      fd = open("/dev/i2c-1",O_RDWR);
    if (fd < 0) {
      printf("Error open i2c device: %s\n", strerror(errno));
      return -1;
    }

    i2c_adr = address;
	  if (ioctl(fd, I2C_SLAVE, i2c_adr) < 0) {
      printf("ioctl error: %s\n", strerror(errno));
	    return -1;
    }
    return fd;
  }
}

int scom_w(uint16_t adr, uint8_t data)
{  if (i2c_adr == 0x00)    // spi
   { struct spi_ioc_transfer xfer;
     memset(&xfer, 0, sizeof(xfer));
     uint8_t tx1[10] ; // = { 0b00000010, 0x00,0x00,0x00 } ;

     tx1[0] = 0x02;                  // Opcode
     tx1[1] = adr;                   // Address
     tx1[2] = data;                  // Data

     xfer.tx_buf        = (unsigned long)tx1;
     xfer.rx_buf        = (unsigned long)NULL;
     xfer.len           = 3;
     xfer.cs_change     = 0;
     xfer.delay_usecs   = 0;
     xfer.speed_hz      = speed;
     xfer.bits_per_word = 8;
     if( ioctl(fd, SPI_IOC_MESSAGE(1), &xfer)< 0)
     {
       printf("SPI lowlevel WRITE: ioctl failed and returned errno %s \n",strerror(errno));
     }
     return 0;
   }
  else          // I2C communitation
  {
    uint8_t tx[10] ;
    tx[0] = (adr & 0xff00)>>8;
	  tx[1] = (adr & 0xff);
	  tx[2] = data;

    if (write(fd, tx, 3) != 3)
	    printf("Error writing to device: %s\n", strerror(errno));
    return 0;
  }
}

int scom_r(uint16_t adr, uint8_t *rx, uint8_t nr )
{  if (i2c_adr == 0)            // Use spi
   {
     // When using spi_ioc_transfer on RPI make sure all structs members init'ed
     if (nr > 7)
     { printf("Max read 7 bytes from spi block read\n");
     return -1; }
     else if (nr > 1)  // Read one extra to compensate for first read repeated
     {
       nr++;
     }

     int res = 0;
     struct spi_ioc_transfer xfer[2];
     memset(&xfer, 0, sizeof(xfer));
     uint8_t tx[10] ;

     tx[0] = ((nr-1)<<5) + 0x01;                 // Opcode
     tx[1] = adr;                                // Address
     xfer[0].tx_buf       = (unsigned long)tx;
     xfer[0].rx_buf       = (unsigned long)NULL;
     xfer[0].len          = 2;
     xfer[0].cs_change    = 0;
     xfer[0].delay_usecs  = 0;
     xfer[0].speed_hz     = speed;
     xfer[0].bits_per_word = 8;

     xfer[1].tx_buf       = (unsigned long)NULL;
     xfer[1].rx_buf       = (unsigned long)rx;
     xfer[1].len          = nr; // (nr>1)?(nr):1;                  /* Length of bytes to read back*/
     xfer[1].cs_change    = 0;
     xfer[1].delay_usecs  = 0;
     xfer[1].speed_hz     = speed;
     xfer[1].bits_per_word = 8;  // bites per word 8

     res = ioctl(fd, SPI_IOC_MESSAGE(2), xfer);
     if (res < 0)
     { printf("SPI lowlevel READ: ioctl failed and returned errno %s \n",strerror(errno));
     }
     if (nr>1)             // compensate for error in spi block read
     { int i=0;
  	   for (i=0;i<nr;i++)
       { rx[i] = rx[i+1]; }
     }
     return res;
   }
  else   // i2c mode
  { int res;
	uint8_t tx[128];
    tx[0] = (adr & 0xff00) >> 8;
	tx[1] = (adr & 0xff);
    if (write(fd, tx,2) != 2)
	  printf("Error writing to device: %s\n", strerror(errno));

	res = read(fd,rx,nr);
    return res;
  }
}
#endif

uint8_t ma_read_byte(uint16_t adr)
{ uint8_t rx[8];
  //rx;
  //rx = malloc(16);
  scom_r(adr, rx, 1);
  return rx[0];
}

uint8_t ma_write_byte(uint16_t adr, uint8_t data)
{ scom_w(adr,data);
  return 0;
}
