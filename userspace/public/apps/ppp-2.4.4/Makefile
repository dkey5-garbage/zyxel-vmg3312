# PPP top-level Makefile for Linux.

DESTDIR = $(INSTROOT)/usr/local
BINDIR = $(DESTDIR)/sbin
INCDIR = $(DESTDIR)/include
MANDIR = $(DESTDIR)/share/man
ETCDIR = $(INSTROOT)/etc/ppp

# uid 0 = root
INSTALL= install

all:
	cd pppd
	make -C pppd

install:
	mkdir -p $(INSTALL_DIR)/bin
	cp -rf pppd/pppd pppd/pppd-2.4.4
	install -m 755 pppd/pppd-2.4.4 $(INSTALL_DIR)/bin
	$(STRIP) $(INSTALL_DIR)/bin/pppd-2.4.4

install-progs:
	cd chat; $(MAKE) $(MFLAGS) install
	cd pppd/plugins; $(MAKE) $(MFLAGS) install
	cd pppd; $(MAKE) $(MFLAGS) install
	cd pppstats; $(MAKE) $(MFLAGS) install
	cd pppdump; $(MAKE) $(MFLAGS) install

install-etcppp: $(ETCDIR) $(ETCDIR)/options $(ETCDIR)/pap-secrets \
	$(ETCDIR)/chap-secrets

install-devel:
	cd pppd; $(MAKE) $(MFLAGS) install-devel

$(ETCDIR)/options:
	$(INSTALL) -c -m 644 etc.ppp/options $@
$(ETCDIR)/pap-secrets:
	$(INSTALL) -c -m 600 etc.ppp/pap-secrets $@
$(ETCDIR)/chap-secrets:
	$(INSTALL) -c -m 600 etc.ppp/chap-secrets $@

$(BINDIR):
	$(INSTALL) -d -m 755 $@
$(MANDIR)/man8:
	$(INSTALL) -d -m 755 $@
$(ETCDIR):
	$(INSTALL) -d -m 755 $@

clean:
	rm -f `find . -name '*.[oas]' -print`
	rm -f `find . -name 'core' -print`
	rm -f `find . -name '*~' -print`
	cd chat; $(MAKE) clean
	cd pppd/plugins; $(MAKE) clean
	cd pppd; $(MAKE) clean
	cd pppstats; $(MAKE) clean
	cd pppdump; $(MAKE) clean

dist-clean:	clean
	rm -f Makefile `find . -name Makefile -print`

#kernel:
#	cd linux; ./kinstall.sh

# no tests yet, one day...
installcheck:
	true
