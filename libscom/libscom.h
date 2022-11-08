#ifndef _LIBSCOM_H_INCLUDED_
#define _LIBSCOM_H_INCLUDED_


#ifdef X86_LINUX
  extern struct ftdi_context     fc;
  extern struct ftdispi_context  fsc;
#endif

#ifdef ARM
  extern int fd;
#endif

extern uint32_t speed ;
extern uint8_t i2c_adr; 

#ifdef __cplusplus
extern "C" {
#endif

enum device_bus_t {SPI_BUS_CE0, SPI_BUS_CE1, I2C_BUS_0, I2C_BUS_1};


int scom_open(uint8_t address, uint8_t i2c_bus);           // Reuse 
int scom_w(uint16_t adr, uint8_t data);
int scom_r(uint16_t adr, uint8_t * rx, uint8_t nr );

int scom_wb(uint16_t adr, uint8_t *txbuffer, uint8_t nw ); // scom block write, 16bit address space, uchar buffer ptr and length
int scom_rb(uint16_t adr, uint8_t *rxbuffer, uint8_t nr ); // scom block read, 16bit adderss space, uchar buffer ptr and length          


#ifdef __cplusplus
}
#endif

#endif /* _LIBSCOM_H_INCLUDED_  */  
