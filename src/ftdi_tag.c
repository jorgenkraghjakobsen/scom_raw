#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ftdi.h>



int main(int argc, char **argv)
{ struct ftdi_context ftdic;
//  struct ftdi_eeprom *eeprom;
  struct usb_device *dev;
  struct ftdi_device_list *devlist;
  unsigned char raweeprom[256];
  unsigned char rawreadeeprom[256];
  unsigned char fpgaserial[8];
  unsigned char j, ser_ptr, ser_length;
  char string[256];
  int res,i,debug,cmd;
  unsigned char read_bytes;
  debug = 0;
  if (debug) printf("argc: %d\n",argc);
  if (argc == 1)
  { cmd = 0;					// Read eprom
  }
  else if (strcmp(argv[1],"w") == 0)
  { cmd = 1;					// Write serial number
  }
  else if (strcmp(argv[1],"-h") == 0)		// print usage
  { printf("\nFTDI USB Eeprom util\n\n");
    printf("Usage:\n  tag [w \"SERIAL ADDRESS\"|-h]\n\n");
    printf("Default function:\n  Read current eeprom serial address from single devise on USB bus.\n\n");
    printf("Written by Jørgen Kragh Jakobsen, Merus Audio, November 2014\n");
    exit(0);
  }

  ftdi_init(&ftdic);
  if (debug) printf("Init error    :%s\n", ftdi_get_error_string(&ftdic));
  res = ftdi_usb_find_all(&ftdic, &devlist, 0x0403, 0x6010);
  printf("USB devices found on the bus: %d\n",res);
  ftdi_list_free(&devlist);
  if (res>1) {
    printf("Only one USB FTDI device must be connected on the bus.\n");
    exit(0);
  }

  res = ftdi_usb_open_desc(&ftdic, 0x0403, 0x6010,NULL,NULL);
  if (debug) printf("Open          :%s\n", ftdi_get_error_string(&ftdic));

  if (res < 0)
  {  printf("Open error code  : %02d\n",res);
     if (res == -3)
     { printf("Fpga board       : %s not found\n",fpgaserial);
     }
     if (res == -5)
     { printf("FTDI usb device claimed by ftdi_sio and usbserial kernel module,\n");
       printf("Log in as root and remove.\n");
       printf("sudo bash; rmmod ftdi_sio usbserial\n");
     }
     ftdi_deinit (&ftdic);
     exit(0);
  }
  //res = ftdi_read_eeprom_getsize(&ftdic,raweeprom,1024);
  //printf("Getsize : %d\n",res);


//  Dose not get what I want ?
//  res = usb_get_string_simple( ftdic.usb_dev,dev->descriptor.iSerialNumber,string,256);
//  printf("USB device:%d, %s",res,string);

  if (cmd == 1)
  {  //ftdi_erase_eeprom(&ftdic);
     if (debug) printf("Erase         :%s\n", ftdi_get_error_string(&ftdic));
     system("sleep 2");
      
     res = ftdi_eeprom_initdefaults(&ftdic, "DLP Design","DLP-USB1232","1234");
     if (res < 0)
     { printf("Eeprom init defaults : %d\n",res);
       ftdi_usb_close(&ftdic);
       ftdi_deinit (&ftdic);
       exit(0);
     }  
   
     // eeprom.vendor_id = 0x0403;
     //eeprom->product_id = 0x6010;
     res = ftdi_eeprom_set_strings(&ftdic, "DLP Design","DLP-USB1232",argv[2]);
     if (res < 0)
     { printf("Eeprom set stings error : %d\n",res);
       ftdi_usb_close(&ftdic);
       ftdi_deinit (&ftdic);
       exit(0);
     }  
   
     //eeprom->self_powered = 0;
     //eeprom->remote_wakeup = 0;
     //eeprom->BM_type_chip = 1;
     //eeprom->in_is_isochronous = 0;
     //eeprom->out_is_isochronous = 0;
     //eeprom->suspend_pull_downs = 0;
     //eeprom->use_serial = 1;
     //eeprom->change_usb_version = 1;
     //eeprom->usb_version = 0x0200;
     //eeprom->max_power = 0x32;
     
     res = ftdi_eeprom_build(&ftdic); //eeprom,raweeprom);
     if (res < 0)
     { printf("Eeprom size more then 128 bits : %d\n",res);
       ftdi_usb_close(&ftdic);
       ftdi_deinit (&ftdic);
       exit(0);
     }  
     printf("Tagging USB device with:\n");
     printf("Manufacturer  :%s\n", "DLP Design");
     printf("Product       :%s\n", "DLP-USB1232");
     printf("Serial        :%s\n", argv[2]);

     ftdi_write_eeprom(&ftdic);
     if (debug) printf("Write         :%s\n", ftdi_get_error_string(&ftdic));
  }
  else
  {  res = ftdi_read_eeprom(&ftdic);
     res = ftdi_eeprom_decode(&ftdic,1);
     if (res < 0)
     { printf("Eeprom decod eerror  : %d\n",res);
       ftdi_usb_close(&ftdic);
       ftdi_deinit (&ftdic);
       exit(0);
     }  
       printf("ok\n");
  }
  ftdi_usb_close(&ftdic);
  ftdi_deinit (&ftdic);
}
