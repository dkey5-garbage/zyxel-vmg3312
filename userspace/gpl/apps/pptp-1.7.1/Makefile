# $Id: Makefile,v 1.40 2006/02/13 03:06:25 quozl Exp $
VERSION=1.7.1
RELEASE=

#################################################################
# CHANGE THIS LINE to point to the location of your pppd binary.
PPPD = /bin/pppd
#################################################################

BINDIR=$(DESTDIR)/usr/bin
#MANDIR=$(DESTDIR)/usr/share/man/man8
PPPDIR=$(DESTDIR)/etc/ppp

#export PATH :=/opt/trendchip/mips-linux-3.4.6/bin:$(PATH)
#CC	= mips-linux-gcc
RM	= rm -f
OPTIMIZE= -O0
DEBUG	= -g
INCLUDE =
CFLAGS  = -Wall $(OPTIMIZE) $(DEBUG) $(INCLUDE)
LIBS	= -lutil
LDFLAGS	=

PPTP_BIN = pptp

PPTP_OBJS = pptp.o pptp_gre.o ppp_fcs.o \
            pptp_ctrl.o dirutil.o vector.o \
            inststr.o util.o version.o \
	    pptp_quirks.o orckit_quirks.o pqueue.o pptp_callmgr.o

PPTP_DEPS = pptp_callmgr.h pptp_gre.h ppp_fcs.h util.h \
	    pptp_quirks.h orckit_quirks.h config.h pqueue.h

all: config.h $(PPTP_BIN)

$(PPTP_BIN): $(PPTP_OBJS) $(PPTP_DEPS)
	$(CC) -o $(PPTP_BIN) $(PPTP_OBJS) $(LDFLAGS) $(LIBS)

config.h: 
	echo "/* text added by Makefile target config.h */" > config.h
	echo "#define PPTP_LINUX_VERSION \"$(VERSION)$(RELEASE)\"" >> config.h
	echo "#define PPPD_BINARY \"$(PPPD)\"" >> config.h

vector_test: vector_test.o vector.o
	$(CC) -o vector_test vector_test.o vector.o

clean:
	$(RM) *.o config.h

clobber: clean
	$(RM) $(PPTP_BIN) vector_test

distclean: clobber

test: vector_test


install: $(PPTP_BIN)
	install -m 755 $(PPTP_BIN) $(INSTALL_DIR)/bin
	$(STRIP) $(INSTALL_DIR)/bin/$(PPTP_BIN)

uninstall:
	$(RM) $(BINDIR)/$(PPTP_BIN) $(MANDIR)/pptp.8

dist: clobber
	$(RM) pptp-$(VERSION)$(RELEASE).tar.gz
	$(RM) -r pptp-$(VERSION)
	mkdir pptp-$(VERSION)
	cp --recursive ChangeLog Makefile *.c *.h options.pptp pptp.8 \
		Documentation Reference AUTHORS COPYING INSTALL NEWS \
		README DEVELOPERS TODO USING PROTOCOL-SECURITY \
		pptp-$(VERSION)/
	$(RM) -r pptp-$(VERSION)/CVS pptp-$(VERSION)/*/CVS
	tar czf pptp-$(VERSION)$(RELEASE).tar.gz pptp-$(VERSION)
	$(RM) -r pptp-$(VERSION)
	md5sum pptp-$(VERSION)$(RELEASE).tar.gz

#deb:
#	chmod +x debian/rules 
#	fakeroot dpkg-buildpackage -us -uc
#	mv ../pptp_$(VERSION)-0_i386.deb .

#WEB=~/public_html/external/mine/pptp/pptpconfig
#release:
#	cp pptp_$(VERSION)-0_i386.deb $(WEB)
#	cd $(WEB);make
