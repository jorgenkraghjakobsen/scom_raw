
OS := $(shell uname)               # Linux
ARCH := $(strip $(shell uname -m))
BINDIR := ./bin

# Set to git tag to enable building with recent libftdi. Requires git to be installed.
# Code will be cloned from the repo here http://developer.intra2net.com/git/?p=libftdi
LIBFTDI_VERSION := v1.4

# Set to git tag to enable building with recent libftdispi. Requires git and scons to be installed.
# Code will be cloned from the repo here https://github.com/ynsta/libftdispi
LIBFTDISPI_VERSION := v0.2.5

$(info arch=$(ARCH))

# mysql vs mariadb compability
SQL := $(shell mariadb_config --libs --cflags)

ifeq ($(ARCH), armv7l)
  install_db_target = /opt/rpi/bin/
  DIF_ARCH := -DRPI
  SUDO := ""
scom: scom_rpi
endif

ifeq ($(ARCH), armv6l)
#  install_db_target = /opt/rpi/bin/
  install_db_target = /usr/bin/
  SUDO :=
scom: scom_rpi
endif

ifeq ($(ARCH), x86_64)
	SUDO := sudo
	DIF_ARCH := -DX86_LINUX
	install_db_target = /bin/
scom: scom_x86
endif

SHELL := /bin/bash

$(BINDIR):
	mkdir -p $@

get_dev:
	gcc -o bin/get_new_device_id src/get_new_device_id.c -lmysqlclient

rune_install:
	cp bin/scom /opt/rpi/bin ;	\
	cp bin/db_list /opt/rpi/bin; \
	cp bin/db_lookup /opt/rpi/bin ; \
	mkdir -p /etc/bash_completion.d ; \
	cp bash_comp/scom /etc/bash_completion.d ; \
	cp bin/get_new_device_id /opt/rpi/bin

dif2: src/scom2_dif.c
	gcc -g -c src/argparse.c ; \
	gcc -g -L libftdi/libftdi1-1.4/build/src -lftdi1 -lusb-1.0 -c src/i2c_mpsse.c ;\
	gcc -o bin/dif argparse.o i2c_mpsse.o -DREV2 $(DIF_ARCH) src/scom2_dif.c $(SQL) -lscom2 -lftdi1 -lusb-1.0 
dif:
	gcc -o bin/sdif src/scom_dif.c -lmysqlclient

difinst:
	sudo cp bin/dif /opt/bin
difinst_rune:
	cp bin/sdif /opt/rpi/bin

scom_rpi:
	mkdir -p bin ;\
	gcc -o bin/scom -DRPI src/scom.c -lmysqlclient -lwiringPi


#-------------------------------------------------------------------------
# libftdi - wget and build 
#-------------------------------------------------------------------------

libftdi/libftdi1-1.4/build/src/libftdi1.a:
	wget https://www.intra2net.com/en/developer/libftdi/download/libftdi1-1.4.tar.bz2 
	mkdir -p libftdi; \
	mv libftdi1-1.4.tar.bz2 build_ftdi/;\
	cd libftdi;\
	pwd;\
	tar xf libftdi1-1.4.tar.bz2;\
	cd libftdi1-1.4;\
	pwd;\
	mkdir build;\
	cd build;\
	cmake ../;\
	make ftdi1-static

#-------------------------------------------------------------------------
# libftdi - clone git repo and build
#-------------------------------------------------------------------------
libftdi/README:
	git clone git://developer.intra2net.com/libftdi libftdi
	cd libftdi; \
	git checkout tags/$(LIBFTDI_VERSION)

libftdi/build/src/libftdi1.a: libftdi/README
	mkdir -p build
	cd libftdi/build; \
	cmake ../; \
	make ftdi1-static

libftdi-build: libftdi/build/src/libftdi1.a

ifeq ($(LIBFTDI_VERSION),)
  FTDI_CFLAGS =
  FTDI_DEPS =
  FTDI_LDFLAGS = -lftdi1
else
  FTDI_CFLAGS = -fPIC -DFTDI_HAS_VER -I libftdi/libftdi1-1.4/build/src
  FTDI_DEPS = libftdi/libftdi1-1.4/build/src/libftdi1.a
  FTDI_LDFLAGS = -L libftdi/libftdi1-1.4/build/src -lftdi1 -lusb-1.0
endif

scom2_diff: src/scom2_diff.c
	gcc -g -c argparse.c ;\

scom_x86: $(libftdi)
	gcc -g $(FTDI_CFLAGS) -c src/i2c_mpsse.c ;\
	gcc -g -c src/ftdispi.c ;\
	gcc -o $(BINDIR)/scom -DX86_LINUX $(FTDI_CFLAGS) $(FTDISPI_CFLAGS) src/scom.c $(FTDISPI_LDFLAGS) $(FTDI_LDFLAGS) -lmariadbclient ftdispi.o i2c_mpsse.o

install_scom:
	cp $(BINDIR)/scom $(install_db_target)

complete_install:
	mkdir -p /etc/bash_completion.d ; \
	cp bash_comp/scom /etc/bash_completion.d/

complete_test:
	source bash_comp/scom


db: $(BINDIR)
	mkdir -p $(BINDIR) ;\
	gcc src/db_lookup.c -o $(BINDIR)/db_lookup $(SQL) ;\
	gcc src/db_list.c -o $(BINDIR)/db_list $(SQL) 

#db: $(BINDIR)
#	mkdir -p $(BINDIR) ;\
#	gcc -I/usr/include/mariadb -o $(BINDIR)/db_lookup src/db_lookup.c $(SQL)  ;\
#	gcc -I/usr/include/mariadb -o $(BINDIR)/db_list src/db_list.c $(SQL)

install_db:
	cp $(BINDIR)/db_lookup $(install_db_target) ;\
	cp $(BINDIR)/db_list $(install_db_target)

tag:
	gcc -o tag src/ftdi_tag.c -lftdi

clean:
	rm -f *.o $(BINDIR)/scom

inst:
	cp scom /home/jakobsen/bin/

src/build_include.o: CFLAGS=$(shell mariadb_config --cflags)

bin/build_include: LDFLAGS=$(shell mariadb_config --libs)
bin/build_include: src/build_include.o src/argparse.o
	mkdir -p bin ; \
	$(CC) $^ -o $@ $(LDFLAGS)

include_rev0: bin/build_include
	bin/build_include -t ma120_rev0 -d 2 -o 2 > include/dot_reg_file_ma120_rev0 ;\
	bin/build_include -t ma120_rev0 -d 2 -p -o 0 > include/ma120_rev0_public.h ;\
	bin/build_include -t ma120_rev0 -d 2 -o 0 > include/ma120_rev0_all.h ;\
	bin/build_include -t ma120_rev0 -d 2 -a -o 0 > include/ma120_rev0_all_w_accesslevel.h ;\
	bin/build_include -t ma120_rev0 -d 2 -o 3 > include/dot_reg_file_ma120_rev0

include_rev1: bin/build_include
	bin/build_include -t ma120_rev1 -d 2 -o 2 > include/dot_reg_file_ma120_rev1 ;\
	bin/build_include -t ma120_rev1 -d 2 -p -o 0 > include/ma120_rev1_public.h ;\
	bin/build_include -t ma120_rev1 -d 2 -o 0 > include/ma120_rev1_all.h ;\
	bin/build_include -t ma120_rev1 -d 2 -a -o 0 > include/ma120_rev1_all_w_accesslevel.h ;\
	bin/build_include -t ma120_rev1 -d 2 -o 3 > include/dot_reg_file_ma120_rev1 ; \
	bin/build_include -t ma120_rev1 -d 2 -o 4 > include/ma120_rev1.v

include_rev2: bin/build_include
	bin/build_include -t ma120_rev2 -d 2 -o 4 > include/ma120_rev2.v
	bin/build_include -t ma120_rev2 -d 2 -o 2 > include/dot_reg_file_ma120_rev2 ;\
	bin/build_include -t ma120_rev2 -d 2 -p -o 0 > include/ma120_rev2_public.h ;\
	bin/build_include -t ma120_rev2 -d 2 -o 0 > include/ma120_rev2_all.h ;\
	bin/build_include -t ma120_rev2 -d 2 -a -o 0 > include/ma120_rev2_all_w_accesslevel.h ;\
	bin/build_include -t ma120_rev2 -d 2 -o 3 > include/dot_reg_file_ma120_rev2 ; \
	bin/build_include -t ma120_rev2 -d 2 -o 4 > include/ma120_rev2.v


include_cpld: bin/build_include
	bin/build_include -t ma120_auto_test_pcb_cpld0 -d 1 -o 2 > include/dot_reg_file_ma120_auto_test_pcb_cpld0 ;\
	bin/build_include -t ma120_auto_test_pcb_cpld1 -d 1 -o 2 > include/dot_reg_file_ma120_auto_test_pcb_cpld1

include_ma12070: bin/build_include
	bin/build_include -t ma12070_register_spec_rev6_1 -d 1 -o 2 > include/dot_reg_file_ma12070_register_spec_rev6_1
	bin/build_include -t ma12070_register_spec_rev6_1 -d 1 -o 0 > include/ma120x0_all_rev6_1.h
	bin/build_include -t ma12070_register_spec_rev6_1 -d 1 -p -m -o 0 > include/ma120x0_rev6_1.h
	
include_ma12071: bin/build_include
	bin/build_include -t ma12070_register_spec_rev8 -d 1 -o 2 > include/dot_reg_file_ma12070_register_spec_rev8
	bin/build_include -t ma12070_register_spec_rev8 -d 1 -o 0 > include/ma120x0_rev8.h

include_json:
	echo "select * from ma12070_register_spec_rev8" | mysqlsh --sql --result-format=json/array --uri=jakobsen@192.168.1.21/merus_ic_trunk > ma12070_rev8.json

include_json_rev2:
	echo "select * from rs_ma120_rev2" | mysqlsh --sql --result-format=json/array --uri=merus_r01@devrd-db.vih.infineon.com/merus > rs_ma120_rev2.json ;\
	echo "select * from sl_ma120_rev2" | mysqlsh --sql --result-format=json/array --uri=merus_r01@devrd-db.vih.infineon.com/merus > ls_ma120_rev2.json  
install:
	sudo cp sdif /opt/bin ; \
	sudo cp $(BINDIR)/scom /opt/bin ;	\
	sudo cp $(BINDIR)/db_lookup /opt/bin ; \
	sudo cp $(BINDIR)/db_list /opt/bin ; \
	sudo cp bash_comp/scom /etc/bash_completion.d

#        sudo cp tag /opt/bin ; \

dev:
	echo "ACTION==\"add\", SUBSYSTEM==\"usb_device\", ATTRS{idVendor}==\"0403\",ATTRS{idProduct}==\"6010\", MODE=\"0666\", RUN+=\"/opt/bin/ftdi_loaded\"" > /etc/udev/rules.d/ftdi.rules ;\
	echo "echo \"ftdi dev ready\" > /var/log/ftdi_loaded.log" > /opt/bin/ftdi_loaded ; \
	chmod 755 /opt/bin/ftdi_loaded
