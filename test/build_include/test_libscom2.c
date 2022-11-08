#include <stdio.h>
#include <stdlib.h>

#include <libscom2.h>				            		// Include x86/Raspberry i2c communication
#include <ma120.h>                          // Include full registermap symbols

int fd;
uint8_t i2c_adr;
uint32_t speed;

int main()
{
   uint8_t res;

   scom_open(0x20);
   scom_r(MA_core__test__dsp_ram_pm_bist__a,&res,1);
   printf("Read all 8 bits from register 0: 0x%02x\n",res);

   for (int pmp = 0; pmp <= 7 ; pmp++)
   {
      s_MA__core__pa__PMP_select(pmp);								// Set new power mode using macro

      printf("Read symbol using macro     : 0x%02x\n",r_MA__core__pa__PMP_select());
   }
} 
