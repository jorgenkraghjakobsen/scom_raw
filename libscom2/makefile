
# Set to git tag to enable building with recent libftdi. Requires git to be installed.
# Code will be cloned from the repo here http://developer.intra2net.com/git/?p=libftdi
LIBFTDI_VERSION := 1.4

# Set to git tag to enable building with recent libftdispi. Requires git and scons to be installed.
# Code will be cloned from the repo here https://github.com/ynsta/libftdispi
LIBFTDISPI_VERSION := v0.2.5

OS := $(shell uname)               # Linux
ARCH := $(strip $(shell uname -m))

ifeq ($(ARCH), armv7l)
  install_db_target = /opt/bin/
  SRC   = libscom2.c 
  DEFS	= -D_GNU_SOURCE -DARM
  SUDO := ""
endif
 
ifeq ($(ARCH), armv6l)
#  install_db_target = /opt/rpi/bin/
  install_db_target = /opt/bin/
  SRC   = libscom2.c 
  DEFS	= -D_GNU_SOURCE -DARM
  SUDO := 
endif 

ifeq ($(ARCH), x86_64)
  SUDO := sudo
  install_db_target = /bin/
  SRC   = i2c_mpsse.c libscom2.c
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
CFLAGS	= $(DEBUG) $(DEFS) -Wformat=2 -Wall -Winline $(INCLUDE) -pipe -fPIC


HEADERS  =      libscom2.h
DEV_HEADERS =   ma120_rev1_all.h

OBJ	=	$(SRC:.c=.o)

 

#-------------------------------------------------------------------------
# libftdi - clone git repo and build
#-------------------------------------------------------------------------

LF      = libftdi1-$(LIBFTDI_VERSION).tar.bz2

libftdi1-$(LIBFTDI_VERSION)/build: libftdi1-$(LIBFTDI_VERSION)/build/src/libftdi1.a

libftdi1-$(LIBFTDI_VERSION)/build/src/libftdi1.a: libftdi1-$(LIBFTDI_VERSION)/README
	mkdir -p libftdi1-$(LIBFTDI_VERSION)/build; \
	cd libftdi1-$(LIBFTDI_VERSION)/build; \
	cmake ../ 
	
	make ftdi1-static

libftdi1-$(LIBFTDI_VERSION)/README:
	curl https://www.intra2net.com/en/developer/libftdi/download/$(LF) --output $(LF) ; \
	tar jxf $(LF) ; \
	cd libftdi1-$(LIBFTDI_VERSION)  

ifeq ($(LIBFTDI_VERSION),)
  FTDI_CFLAGS =
  FTDI_DEPS =
  FTDI_LDFLAGS = -lftdi1
else
  FTDI_CFLAGS = -fPIC -DFTDI_HAS_VER -I libftdi1-$(LIBFTDI_VERSION)/src
  FTDI_DEPS = libftdi1-$(LIBFTDI_VERSION)/build/src/libftdi1.a
  FTDI_LDFLAGS = -L libftdi1-$(LIBFTDI_VERSION)/build/src -lftdi1 -lusb-1.0
endif

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
	@install -m 0644 ../include/$(DEV_HEADERS)	                $(DESTDIR)$(PREFIX)/include
	@echo "[Install Dynamic Lib]"
	@install -m 0755 -d						$(DESTDIR)$(PREFIX)/lib
	@install -m 0755 libscom2.so.$(VERSION)				$(DESTDIR)$(PREFIX)/lib/libscom2.so.$(VERSION)
	@ln -sf $(DESTDIR)$(PREFIX)/lib/libscom2.so.$(VERSION)		$(DESTDIR)/lib/libscom2.so
	@ldconfig
