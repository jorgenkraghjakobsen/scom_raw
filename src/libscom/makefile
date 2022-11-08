
VERSION = $(shell cat ./VERSION)

DESTDIR=/usr
PREFIX=/local

DYNAMIC=libscom.so.$(VERSION)

DEBUG	= -O2
CC	= gcc
INCLUDE	= -I.
DEFS	= -D_GNU_SOURCE -DARM
CFLAGS	= $(DEBUG) $(DEFS) -Wformat=2 -Wall -Winline $(INCLUDE) -pipe -fPIC


SRC	=	libscom.c

HEADERS  =      libscom.h
DEV_HEADERS =   ../../build_include/ma120x0.h ../../build_include/ma120x0_all.h

OBJ	=	$(SRC:.c=.o)


all:		$(DYNAMIC)

$(DYNAMIC):	$(OBJ)
	@echo "[Link (Dynamic)]"
	@$(CC) -shared -Wl,-soname,libscom.so -o libscom.so.$(VERSION) $(OBJ)

.c.o:
	@echo [Compile] $<
	@$(CC) -c $(CFLAGS) $< -o $@

clean:
	@echo "[Clean]"
	@rm -f $(OBJ) *~ libscom.so.*


install:	$(DYNAMIC)
	@echo "[Install Headers]"
	@install -m 0755 -d						$(DESTDIR)$(PREFIX)/include
	@install -m 0644 $(HEADERS)					$(DESTDIR)$(PREFIX)/include
	@install -m 0644 $(DEV_HEADERS)                                 $(DESTDIR)$(PREFIX)/include
	@echo "[Install Dynamic Lib]"
	@install -m 0755 -d						$(DESTDIR)$(PREFIX)/lib
	@install -m 0755 libscom.so.$(VERSION)				$(DESTDIR)$(PREFIX)/lib/libscom.so.$(VERSION)
	@ln -sf $(DESTDIR)$(PREFIX)/lib/libscom.so.$(VERSION)		$(DESTDIR)/lib/libscom.so


	@ldconfig
