To provide a array that easy can provide device reset to a software tool.
Used for generate dif between a virgin device, trimmed and configured device and a device with setup by user interface.

Internal classification of IC states:
Virgin device : Early production phase, device has not been tested. Device is only know by marking, revision and hwid.
Tested device : Production phase, Device is tested according to marking and revision evt hwid.
                If device tested at wafer level tracking is filled : wtest_location, wtester_id, wdevice_id (epoch time stamp)
                If device tested at final test tracking is filled : ftest_location, ftester_id, fdevice_id (epoch time stamp)
                At final test device version is done a according to marking followling a part mapping table.
                Any where during the test process reset values of non volatile register entries can get out of sync if not also tracked in database

                Any versoing done at test need to be tracked in database at MerusAudio.
                ECO and Version procedure
                following change can be applied to OTP test level wafer or final.
                  ECO         : Default reset value common for all variations   -  common  to a rev, eco patch release
                  trim        : Process and performance changes.                   RCosillaor frequency, bias current, vddreg, commonmode callibaration
                  traking     : Common to all devices done at wafer and/or final test
                  Version     : Feature set and performance , Basic, DSP, Lowpower, HighDefinition. xxx fixme max 1 more and voding requied

                Trim and Tracking sections are considered volatile
                Other form a uniq key and any change must be tracked in revision control database

                We find error and need to change a reset value in register x, y and z.
                A new OTP version number is issued from database, change is applied and test program is updated and 
				released and approved by ECO engineer in ECO database


  1. Reset values is only provided pr symbol in database
  2. A tool can not know all symbols or other way pass through all symbol.
  3. Function also work as a save guard for double entries in memory map

  6 Will describe section and any limitation on each section

                                Reset from DB
core.x.y          0x0000              x              read/write    public        static
                  0x04ff
mlpin.x.y         0x0500              x              read/write    Not public    static
                  0x05ff
acfg.x.y          0x0600           all zero          read/write    Not public    Volatile
                  0x06ff
dsp.x.y           0x1000           all random        read/write    public        static
                  0x2fff
otp.x.y           0x8000           all 0xff          read only     Not public    Volatile
                  0x8fff

Implementation / algorithm

Obtaain a array with reset value covering, core, mlpin

Fill an array dev_mem_mapped[0x1000] = 0;
Fill an array dev_mem_reset[0x1000]  = 0;
Fill an array dev_mem_volatile[0x1000] = 0;

for each symbol
  Find real address, mask, reset, pos
  if dev_mem_mapped[addr] & mask == 0
    dev_mem_mapped[addr] = dev_mem_mapped[addr] | mask<<pos;
    dev_mem_reset[addr] = dev_mem_reset[addr] | reset<<pos ;
    dev_mem_volatile[addr] = readonly xxx fix me
  else
    flag error double memory map entry
  end if
end for

in include file create an array of int lenngth 0x1000
for addr = 0 to 0x1000
  if dev_mem_mapped[addr]
    if dev_mem_volatile[addr]
      if dev_mem_mapped[addr] == dev_mem_volatile[addr]
        reset_value = -2 ; // Entry volatile/readonly
      else
        flag error at addr not all symbols in a full addrees is declare volatile/readnoly
      end if
    else
      reset_value = dev_mem_reset[addr];
    end if;
  else
    reset_value = -1;
  end if;
end for;
