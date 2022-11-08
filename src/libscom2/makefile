OS := $(shell uname)               # Linux
ARCH := $(strip $(shell uname -m))

ifeq ($(ARCH), armv7l)
  install_db_target = /opt/rpi/bin/
  SRC   = libscom2.c 
  DEFS	= -D_GNU_SOURCE -DARM
  SUDO := ""
endif
 
ifeq ($(ARCH), armv6l)
#  install_db_target = /opt/rpi/bin/
  install_db_target = /usr/bin/
  SRC   = libscom2.c 
  DEFS	= -D_GNU_SOURCE -DARM
  SUDO := 
endif 

ifeq ($(ARCH), x86_64)
  SUDO := sudo
  install_db_target = /bin/
  SRC   = ../i2c_mpsse.c libscom2.c
  DEFS	= -DX86_LINUX -D_GNU_SOURCE
endif

SHELL := /bin/bash

VERSION = $(shell cat ./VERSION)

DESTDIR=/usr
PREFIX=/local

DYNAMIC=libscom2.so.$(VERSION)

DEBUG	= -O2
CC	= gcc
INCLUDE	= -I.
CFLAGS	= $(DEBUG) $(DEFS) -Wformat=2 -Wall -Winline $(INCLUDE) -pipe -fPIC -std=gnu99 


HEADERS  =      libscom2.h

OBJ	=	$(SRC:.c=.o)

all:		$(DYNAMIC)

$(DYNAMIC):	$(OBJ)
	@echo "[Link (Dynamic)]"
	@$(CC) -shared $(FTDISPI_LDFLAGS) $(FTDI_LDFLAGS) -Wl,-soname,libscom2.so -o libscom2.so.$(VERSION) $(OBJ)

.c.o:
	@echo [cflags] $(CFLAGS) 
	@echo [source] $(SRC) 
	@echo [Compile] $<
	@$(CC) -c $(CFLAGS) $(FTDI_CFLAGS) $(FTDISPI_CFLAGS) $< -o $@ 

clean:
	@echo "[Clean]"
	@rm -f $(OBJ) *~ libscom2.so.*


install:	$(DYNAMIC)
	@echo "[Install Headers]"
	@install -m 0755 -d						$(DESTDIR)$(PREFIX)/include
	@install -m 0644 $(HEADERS)					$(DESTDIR)$(PREFIX)/include
	@echo "[Install Dynamic Lib]"
	@install -m 0755 -d						$(DESTDIR)$(PREFIX)/lib
	@install -m 0755 libscom2.so.$(VERSION)				$(DESTDIR)$(PREFIX)/lib/libscom2.so.$(VERSION)
	@ln -sf $(DESTDIR)$(PREFIX)/lib/libscom2.so.$(VERSION)		$(DESTDIR)/lib/libscom2.so
	@ldconfig
