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
//    Single/block read/write i2c
//
// Rev. 1.5.2019 : I2C address applyed to each i2c transaction block, Block read/write added to library call
//               : SPI phased out     
//                 

// New call interface 
//    Byte read/write 
//    Block read/write 
//
// int scom_w(uint8_t i2c_address,uint16_t register_address,uint8_t *tx_buf, uint16_t length);
// int scom_r(uint8_t i2c_address,uint16_t register_address,uint8_t *rx_buf, uint16_t length);
//
//  


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
#include <linux/i2c.h>
#include <linux/i2c-dev.h>

#include "libscom2.h"

int scom_open(uint8_t dev_bus)
{ int fd; 
  if (dev_bus == I2C_BUS_0)
    fd = open("/dev/i2c-0",O_RDWR);
  else
    fd = open("/dev/i2c-1",O_RDWR);
    
  if (fd < 0) {
    printf("Error open i2c device: %s\n", strerror(errno));
    return -1;
  }
  return fd;
}

int scom_w(int fd, uint8_t i2c_address, uint16_t register_addr,  uint8_t *data, uint16_t length)
{   int i, j = 0; 
    int ret; 
	uint8_t *buf; 
	size_t buff_size = 2 + length; 
	buf = malloc(buff_size);
	if (buf == NULL)
	{ return -ENOMEM; 
	} 
	buf[j++] = (register_addr & 0xff00)>>8;
	buf[j++] = (register_addr & 0xff);
	for (i = 0; i < length; i++) 
	{ buf[j++] = data[i]; }
	struct i2c_msg messages[] = { 
	  { .addr = i2c_address,
	    .buf  = buf,
	    .len  = buff_size, 
	  }, 
	};	 
	       
	struct i2c_rdwr_ioctl_data payload = {
        .msgs = messages,
        .nmsgs = 1,
    };
    ret = ioctl(fd, I2C_RDWR, &payload); 
	if (ret < 0) 
	{ ret = -errno; 
	}
	free(buf);
	return ret; 
}
 
int scom_r(int fd, uint8_t i2c_address, uint16_t register_addr,  uint8_t *data, uint16_t length)
{   
  int j = 0; 
  int ret; 
  uint8_t *buf; 
  size_t buff_size = 2 + length; 
  buf = malloc(buff_size);
  if (buf == NULL)
  { return -ENOMEM; 
  } 
  buf[j++] = (register_addr & 0xff00)>>8;
  buf[j++] = (register_addr & 0xff);
	
  struct i2c_msg messages[] = { 
    { .addr  = i2c_address,
      .buf   = buf,
	  .len   = 2, 
	  .flags = 0,
    }, 
	{ .addr  = i2c_address,
	  .buf   = buf,
	  .len   = length,
	  .flags = I2C_M_RD,  
	},
  };	  
  
  struct i2c_rdwr_ioctl_data payload = {
    .msgs  = messages,
    .nmsgs = 2,
  };
	
  ret = ioctl(fd, I2C_RDWR, &payload);
  if (ret < 0) 
  { return ret;
  }  
  memcpy(data,buf,length);
  return length;
}
