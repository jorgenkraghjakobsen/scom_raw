#include <stdio.h>
#include <stdlib.h> 

#include "../libscom.h"						// Include x86/Raspberry i2c communication 
#include "../ma120_rev0_register_map_all.h" // Include full registermap symbols 			

int fd;
uint8_t i2c_adr;
uint32_t speed;

int main()
{  
   uint8_t res;
   
   scom_open(0x20);
   scom_r(MA_PM_man__a,&res,1);			
   printf("Read all 8 bits from register 0: 0x%02x\n",res);

   for (int pm = 0; pm <=8 ; pm++) 
   {  
      set_MA_core__pa__PMP_select(pm);								// Set new power mode using macro
    	
      printf("Read symbol using macro     : 0x%02x\n",get_MA_core__pa__PMP_select());
	  
   }  

} 

 

