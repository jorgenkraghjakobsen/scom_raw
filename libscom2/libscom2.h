

#ifndef _LIBSCOM2_H_INCLUDED_
#define _LIBSCOM2_H_INCLUDED_

#ifdef __cplusplus
extern "C" {
#endif

enum device_bus_t {I2C_BUS_0, I2C_BUS_1};

// Wapper code for ma120.h and ma120_all.h included macros.
//uint8_t ma_read_byte(uint16_t adr);
//uint8_t ma_write_byte(uint16_t adr, uint8_t data);

int scom_open(uint8_t i2c_bus);                            // Reuse
int scom_w(int fd, uint8_t i2c_address, uint16_t reg_adr, uint8_t *data, uint16_t length);
int scom_r(int fd, uint8_t i2c_address, uint16_t reg_adr, uint8_t *data, uint16_t length);


#ifdef __cplusplus
}
#endif

#endif /* _LIBSCOM2_H_INCLUDED_  */
