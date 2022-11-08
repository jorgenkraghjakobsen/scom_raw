//-------------------------------------------------------------------------------------------
//                        Merus Audio Low level communication library 
// 
//  
//
// Supported platforms:
//    Raspberry pi   
//    
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
#include <linux/types.h>
#include <linux/spi/spidev.h>
#include <wiringPiI2C.h>

#include "libscom.h"

int scom_open(uint8_t address,uint8_t dev_bus)
{  static char *device;
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
	   exit(1); 
	 }
	 static uint32_t  mode = SPI_MODE_0;
     static uint8_t   bits = 8; 
	 int res;
	 
	 fd = open(device, O_RDWR);
     if (fd < 0)
     { printf("Open error\n");
       exit(1);
     }
     res = ioctl(fd, SPI_IOC_WR_MAX_SPEED_HZ, &speed);
     if(res < 0)
     {  printf("Could not set SPI speed (WR)...ioctl fail");
        exit(1);
     }
     ioctl(fd, SPI_IOC_RD_MAX_SPEED_HZ, &speed);

     res = ioctl(fd, SPI_IOC_WR_MODE, &mode);
     if(res < 0) { 
       printf("Could not set SPIMode (RD)...ioctl fail");
       exit(1);
     }
     res = ioctl(fd, SPI_IOC_RD_MODE, &mode);
     if(res < 0) { 
       printf("Could not set SPIMode (RD)...ioctl fail");
       exit(1);
     }
     ioctl(fd, SPI_IOC_WR_BITS_PER_WORD, &bits);
     ioctl(fd, SPI_IOC_RD_BITS_PER_WORD, &bits);
     return fd;
   }
   else                                  // Select and open I2C mode
   {  
     printf("Open as I2C\n");
	 if (dev_bus == I2C_BUS_0)
	 { 
	   fd = wiringPiI2CSetupInterface(device, address ); 
	 } else if (dev_bus == I2C_BUS_1)
	 { 
	   fd = wiringPiI2CSetupInterface(device, address ); 
	 } else 
	 {
	   printf("Not a valid I2C BUS selected\n");
	   exit(1);
	 }  
	 i2c_adr = address; 
	 if (fd < 0) 
	 { printf("Error open i2c device\n");
       exit(1);
     }
   }

   return fd;
}     


int scom_w(uint16_t adr, uint8_t data)
{  if (i2c_adr == 0x00)
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
     int res; 
	 res = wiringPiI2CWriteReg8(fd,adr,data);                        // Write address + data 
     return res; 
	 //if (1) printf("Adress  : 0x%02x\n",wbuf[1]);
     //for (i = 0; i < nw-2; i++)
     //{ writePiI2CWriteReg8(fd,wbuf[i+2]); 
     // if (1) printf(" Data[%0d] : 0x%02x\n",i,wbuf[i+2]);
     //} 
     }
}      

int scom_r(uint16_t adr, uint8_t * rx, uint8_t nr )
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
   { 
	  wiringPiI2CWrite(fd,adr) ;                                  // Write address to DUT    
      int i;
	  for (i=0; i < nr;i++) 
	  {
	    rx[i] = wiringPiI2CReadReg8(fd,adr+i);
	  }
   }    
  return 0;
}    
	
	
  
          


