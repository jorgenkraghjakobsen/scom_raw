#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


#ifdef X86_LINUX
  #include <ftdi.h>
  #include <ftdispi.h>
  struct ftdi_context    fc;
  struct ftdispi_context fsc;
#endif

#include <libscom2.h>			                          // Include x86/Raspberry i2c/spi communication
#include <ma120_rev0_all.h>                         // Include full registermap symbols

//serial interface
int fd ; 
int debug = 0;
uint8_t i2c_adr;                                    // 0: spi or i2c address (0x20-0x23)
uint32_t speed;                                     // default spi: 1 Mbps , i2c 400 Kbps

int main()
{

   uint8_t res[12];

   scom_open(0x20,I2C_BUS_1);

   scom_w(MA_core__pa__volume_ch0__a, 0x2e);
   scom_w(MA_core__pa__volume_ch1__a, 0x6a);

   //printf("Read all 8 bits from register 0: 0x%02x\n",res[0]);

  if (1)
  {
    for (int pm = 0; pm <=7 ; pm++)
    {
      set_MA_core__pa__PMP_select(pm);	  // Set new power mode using macro
      printf("Read symbol using macro     : 0x%02x\n",get_MA_core__pa__PMP_select());
    }
  }
}
