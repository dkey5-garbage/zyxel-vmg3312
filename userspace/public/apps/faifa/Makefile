#
# Makefile for the faifa program and library
#
#
# Copyright (C) 2007-2009
#	Xavier Carcelle <xavier.carcelle@gmail.com>
#	Florian Fainelli <florian@openwrt.org>
#	Nicolas Thill <nico@openwrt.org>
#
# License:
#	GPLv2
#

CC	= /opt/toolchains/uclibc-crosstools-gcc-4.4.2-1/usr/bin/mips-linux-uclibc-gcc
CFLAGS	+=  -I/opt/toolchains/uclibc-crosstools-gcc-4.4.2-1/usr/include -L/opt/toolchains/uclibc-crosstools-gcc-4.4.2-1/usr/lib -Werror=return-type -Werror=uninitialized -Werror=frame-larger-than=1024 -DMSTC_HOMEPLUG_DEVICE_DISCOVER -I$(BUILD_DIR)/userspace/public/libs/libpcap -I$(BUILD_DIR)/userspace/public/libs/openssl/include -L$(BUILD_DIR)/userspace/public/libs/libpcap  -L$(BUILD_DIR)/userspace/public/libs/openssl -Wall -Wno-unused-result
LIBS	= -L$(BUILD_DIR)/userspace/public/libs/libpcap -lpcap  -lpthread -L$(BUILD_DIR)/userspace/public/libs/openssl -lcrypto
INSTALL = /usr/bin/install -c
prefix		= /usr
exec_prefix	= /usr
bindir		= ${exec_prefix}/bin
mandir		= ${datarootdir}/man
libdir		= ${exec_prefix}/lib
datarootdir	= ${prefix}/share
includedir	= ${prefix}/include

OS?=$(shell uname -s | tr a-z A-Z)
APP:=faifa
SVN_REV?=$(shell LC_ALL=C svn info | awk '/Revision/ { print $$2 }')

# Object files for the library
LIB_OBJS:=faifa.o frame.o crypto.o
LIB_NAME:=lib$(APP).a
LIB_SONAME:=lib$(APP).so.0

# Object files for the program
OBJS:= main.o
HEADERS:= faifa.h faifa_compat.h faifa_priv.h homeplug.h homeplug_av.h crypto.h device.h endian.h

ifeq ($(OS),DARWIN)
LDFLAGS:=-dynamiclib -Wl,-dylib_install_name -Wl,$(LIB_SONAME)
endif

LIBS:=$(LDFLAGS) $(LIBS)

ifeq ($(OS),CYGWIN_NT-5.1)
LIBS+=-lwpcap
APP:=$(APP).exe
else
CFLAGS+= -fPIC
endif

man8dir = $(mandir)/man8
# Man page
MANTYP=8
MANFIL=$(APP).8.gz

all: $(APP) $(LIB_NAME) $(LIB_SONAME)

$(APP): $(OBJS) $(HEADERS) $(LIB_SONAME)
	$(CC) -D$(OS) $(CFLAGS) -o $@ $(OBJS) $(LIBS) $(LIB_SONAME)

$(LIB_NAME): $(LIB_OBJS) $(HEADERS)
	$(AR) rcs $(LIB_NAME)	$(LIB_OBJS)

$(LIB_SONAME): $(LIB_OBJS) $(HEADERS)
	$(CC) -shared -Wl,-soname,$(LIB_SONAME) -o $@ $(LIB_OBJS) $(LIBS)

%.o: %.c $(HEADERS)
	$(CC) -D$(OS) -DSVN_REV=$(SVN_REV) $(CFLAGS) -c $<

clean:
	rm -f $(APP) faifa-dump-devel-stdout \
		*.o \
		*.a \
		*.so* \
		$(MANFIL)

autoclean:
	-rm -f configure config.log config.status Makefile

distclean: clean autoclean
mstc_install:
	$(INSTALL) -m 755 faifa $(INSTALL_DIR)/bin
	$(STRIP) $(INSTALL_DIR)/bin/faifa
	$(INSTALL) -m 755 $(LIB_SONAME) $(INSTALL_DIR)/lib/public

#install: installman strip
#	$(INSTALL) -d $(DESTDIR)$(bindir)
#	$(INSTALL) -m0755 $(APP) $(DESTDIR)$(bindir)
#	$(INSTALL) -d $(DESTDIR)$(libdir)
#	$(INSTALL) -m0644 $(LIB_SONAME) $(DESTDIR)$(libdir)
#	$(INSTALL) -d $(DESTDIR)$(includedir)/faifa
#	cp $(HEADERS) $(DESTDIR)$(includedir)/faifa

strip:
	$(STRIP) $(APP)
	$(STRIP) $(LIB_SONAME)

man:
	-rm -f $(MANFIL)
	gzip -c -q -9v $(APP).$(MANTYP) > $(MANFIL)

installman: man
	$(INSTALL) -d $(DESTDIR)$(man8dir)
	$(INSTALL) -m0644 $(MANFIL) $(DESTDIR)$(man8dir)

uninstallman:
	-rm -f $(DESTDIR)$(man8dir)/$(MANFIL)

uninstall: uninstallman
	-rm -f $(DESTDIR)$(bindir)/$(APP)
	-rm -f $(DESTDIR)$(libdir)/$(LIB_SONAME)
	-rm -rf $(DESTDIR)$(includedir)/faifa

.PHONY:
	clean faifa
