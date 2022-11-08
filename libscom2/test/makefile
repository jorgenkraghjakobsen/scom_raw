
ARCH := $(strip $(shell uname -m))

ifeq ($(ARCH), armv7l)
  install_db_target = /opt/rpi/bin/
  DEFS	= -D_GNU_SOURCE -DARM
  SUDO := ""
endif

ifeq ($(ARCH), armv6l)
#  install_db_target = /opt/rpi/bin/
  install_db_target = /usr/bin/
  SRC   = libscom2.c
  SUDO :=
endif

ifeq ($(ARCH), x86_64)
  SUDO := sudo
  install_db_target = /bin/
  DEFS	= -DX86_LINUX -D_GNU_SOURCE
  CFLAG = -lftdispi
endif

all:	random_read_write

random_read_write:	random_read_write.c
	gcc -o rrw $(DEFS) random_read_write.c -lscom2 -lftdi1 $(CFLAGS)

clean:
	rm rrw
	
