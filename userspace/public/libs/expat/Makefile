################################################################
# Process this file with top-level configure script to produce Makefile
#
# Copyright 2000 Clark Cooper
#
#  This file is part of EXPAT.
#
#  EXPAT is free software; you can redistribute it and/or modify it
#  under the terms of the License (based on the MIT/X license) contained
#  in the file COPYING that comes with this distribution.
#
# EXPAT IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
# EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
# IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
# CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
# TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
# SOFTWARE OR THE USE OR OTHER DEALINGS IN EXPAT.
#
CURR_DIR := $(shell pwd)
BUILD_DIR:=$(subst /userspace, /userspace,$(CURR_DIR))
BUILD_DIR:=$(word 1, $(BUILD_DIR))
TARGETS_DIR = $(BUILD_DIR)/targets
include $(BUILD_DIR)/make.common

SHELL = /bin/sh

srcdir = .
top_srcdir = .


prefix = /usr/local
exec_prefix = ${prefix}

bindir = ${exec_prefix}/bin
libdir = ${exec_prefix}/lib
includedir = ${prefix}/include
man1dir = ${prefix}/man/man1

top_builddir = .


INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
mkinstalldirs = $(SHELL) $(top_srcdir)/conftools/mkinstalldirs

MANFILE = $(srcdir)/doc/xmlwf.1
APIHEADER = $(srcdir)/lib/expat.h $(srcdir)/lib/expat_external.h
LIBRARY = libexpat.la


default:  buildlib xmlwf/xmlwf

buildlib: $(LIBRARY)

all: $(LIBRARY) xmlwf/xmlwf examples/elements examples/outline

clean:
	cd lib && rm -f $(LIBRARY) *.o *.lo && rm -rf .libs _libs
	cd xmlwf && rm -f xmlwf *.o *.lo && rm -rf .libs _libs
	cd examples && rm -f elements outline *.o *.lo && rm -rf .libs _libs
	cd tests && rm -rf .libs runtests runtests.o chardata.o
	rm -rf .libs libexpat.la
	rm -f examples/core tests/core xmlwf/core
	rm -f $(INSTALL_DIR)/lib/public/libexpat.so*

clobber: clean

distclean: clean
	rm -f expat_config.h config.status config.log config.cache libtool
	rm -f Makefile

extraclean: distclean
	rm -f expat_config.h.in configure
	rm -f conftools/ltconfig conftools/ltmain.sh conftools/libtool.m4

check: tests/runtests
	tests/runtests

install: xmlwf/xmlwf installlib
#	$(mkinstalldirs) $(bindir) $(man1dir)
#	$(LIBTOOL) --mode=install $(INSTALL_PROGRAM) xmlwf/xmlwf $(bindir)/xmlwf
#	$(INSTALL_DATA) $(MANFILE) $(man1dir)

installlib: $(LIBRARY) $(APIHEADER)
#	$(mkinstalldirs) $(libdir) $(includedir)
#	$(LIBTOOL) --mode=install $(INSTALL) $(LIBRARY) $(libdir)/$(LIBRARY)
#	$(INSTALL_DATA) $(APIHEADER) $(includedir)
	mkdir -p $(INSTALL_DIR)/lib/public
#	$(LIBTOOL) --mode=install $(INSTALL) $(LIBRARY) $(INSTALL_DIR)/lib/public
	install -m 755 ./.libs/libexpat.so.0.5.0 $(INSTALL_DIR)/lib/public
	(cd $(INSTALL_DIR)/lib/public; rm -f libexpat.so.0; ln -s libexpat.so.0.5.0 libexpat.so.0)
	(cd $(INSTALL_DIR)/lib/public; rm -f libexpat.so; ln -s libexpat.so.0.5.0 libexpat.so)

uninstall: uninstalllib
	$(LIBTOOL) --mode=uninstall rm -f $(bindir)/xmlwf
	rm -f $(man1dir)/xmlwf.1

uninstalllib:
	$(LIBTOOL) --mode=uninstall rm -f $(libdir)/$(LIBRARY)
	rm -f $(includedir)/$(APIHEADER)

# for VPATH builds (invoked by configure)
mkdir-init:
	@for d in lib xmlwf examples tests ; do \
		(mkdir $$d 2> /dev/null || test 1) ; \
	done

#CC = gcc
LIBTOOL = $(SHELL) $(top_builddir)/libtool

INCLUDES = -I$(srcdir)/lib -I.
LDFLAGS = 
CPPFLAGS = 
CFLAGS = -g -O2 -Wall -Wmissing-prototypes -Wstrict-prototypes -fexceptions -DHAVE_EXPAT_CONFIG_H
VSNFLAG = -version-info 5:0:5

### autoconf this?
LTFLAGS = --silent

COMPILE = $(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) $(INCLUDES)
LTCOMPILE = $(LIBTOOL) $(LTFLAGS) --mode=compile $(COMPILE)
LINK_LIB = $(LIBTOOL) $(LTFLAGS) --mode=link $(COMPILE) -no-undefined $(VSNFLAG) -rpath $(libdir) $(LDFLAGS) -o $@
LINK_EXE = $(LIBTOOL) $(LTFLAGS) --mode=link $(COMPILE) $(LDFLAGS) -o $@

LIB_OBJS = lib/xmlparse.lo lib/xmltok.lo lib/xmlrole.lo
$(LIBRARY): $(LIB_OBJS)
	$(LINK_LIB) $(LIB_OBJS)

lib/xmlparse.lo: lib/xmlparse.c lib/expat.h lib/xmlrole.h lib/xmltok.h \
	$(top_builddir)/expat_config.h lib/expat_external.h lib/internal.h

lib/xmlrole.lo: lib/xmlrole.c lib/ascii.h lib/xmlrole.h \
	$(top_builddir)/expat_config.h lib/expat_external.h lib/internal.h

lib/xmltok.lo: lib/xmltok.c lib/xmltok_impl.c lib/xmltok_ns.c \
	lib/ascii.h lib/asciitab.h lib/iasciitab.h lib/latin1tab.h \
	lib/nametab.h lib/utf8tab.h lib/xmltok.h lib/xmltok_impl.h \
	$(top_builddir)/expat_config.h lib/expat_external.h lib/internal.h


XMLWF_OBJS = xmlwf/xmlwf.o xmlwf/xmlfile.o xmlwf/codepage.o xmlwf/unixfilemap.o
xmlwf/xmlwf.o: xmlwf/xmlwf.c
xmlwf/xmlfile.o: xmlwf/xmlfile.c
xmlwf/codepage.o: xmlwf/codepage.c
xmlwf/unixfilemap.o: xmlwf/unixfilemap.c
xmlwf/xmlwf: $(XMLWF_OBJS) $(LIBRARY)
	$(LINK_EXE) $(XMLWF_OBJS) $(LIBRARY)

examples/elements.o: examples/elements.c
examples/elements: examples/elements.o $(LIBRARY)
	$(LINK_EXE) $< $(LIBRARY)

examples/outline.o: examples/outline.c
examples/outline: examples/outline.o $(LIBRARY)
	$(LINK_EXE) $< $(LIBRARY)

tests/chardata.o: tests/chardata.c tests/chardata.h
tests/minicheck.o: tests/minicheck.c tests/minicheck.h
tests/runtests.o: tests/runtests.c tests/chardata.h
tests/runtests: tests/runtests.o tests/chardata.o tests/minicheck.o $(LIBRARY)
	$(LINK_EXE) $^ 

tests/xmlts.zip:
	wget --output-document=tests/xmlts.zip \
		http://www.w3.org/XML/Test/xmlts20020606.zip

tests/XML-Test-Suite: tests/xmlts.zip
	cd tests && unzip -q xmlts.zip

run-xmltest: xmlwf/xmlwf tests/XML-Test-Suite
	tests/xmltest.sh

.SUFFIXES: .c .lo .o

.c.o:
	$(COMPILE) -o $@ -c $<
.c.lo:
	$(LTCOMPILE) -o $@ -c $<

.PHONY: buildlib all \
	clean distclean extraclean maintainer-clean \
	dist distdir \
	install uninstall
