cmd_/tmp/consumer/100AAPP7D0/shared/opensource/boardparms/bcm963xx/boardparms.o := /opt/toolchains/uclibc-crosstools-gcc-4.4.2-1/usr/bin/mips-linux-uclibc-gcc -Wp,-MD,/tmp/consumer/100AAPP7D0/shared/opensource/boardparms/bcm963xx/.boardparms.o.d  -nostdinc -isystem /opt/toolchains/uclibc-crosstools-gcc-4.4.2-1/usr/bin/../lib/gcc/mips-linux-uclibc/4.4.2/include -Iinclude  -I/tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include -include include/linux/autoconf.h -D__KERNEL__ -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -O2 -mno-check-zero-division -mabi=32 -G 0 -mno-abicalls -fno-pic -pipe -msoft-float -ffreestanding -march=mips32 -Wa,-mips32 -Wa,--trap -I/tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/mach-bcm963xx -I/tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/mach-generic -D"VMLINUX_LOAD_ADDRESS=0x80020000" -Wframe-larger-than=1024 -fno-stack-protector -fomit-frame-pointer -Wdeclaration-after-statement -Wno-pointer-sign -fwrapv -fno-dwarf2-cfi-asm -DCFG_LINUX_NET_PACKED -DCONFIG_BCM963268 -I/tmp/consumer/100AAPP7D0/shared/opensource/include/bcm963xx   -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(boardparms)"  -D"KBUILD_MODNAME=KBUILD_STR(boardparms)"  -c -o /tmp/consumer/100AAPP7D0/shared/opensource/boardparms/bcm963xx/boardparms.o /tmp/consumer/100AAPP7D0/shared/opensource/boardparms/bcm963xx/boardparms.c

deps_/tmp/consumer/100AAPP7D0/shared/opensource/boardparms/bcm963xx/boardparms.o := \
  /tmp/consumer/100AAPP7D0/shared/opensource/boardparms/bcm963xx/boardparms.c \
    $(wildcard include/config/bcm96362.h) \
    $(wildcard include/config/mmap.h) \
    $(wildcard include/config/spi/ssb/2.h) \
    $(wildcard include/config/bcm96368.h) \
    $(wildcard include/config/spi/ssb/1.h) \
    $(wildcard include/config/bcm96816.h) \
    $(wildcard include/config/bcm96328.h) \
    $(wildcard include/config/bcm963268.h) \
    $(wildcard include/config/mdio.h) \
    $(wildcard include/config/hs/spi/ssb/5.h) \
    $(wildcard include/config/hs/spi/ssb/0.h) \
    $(wildcard include/config/bcm96828.h) \
    $(wildcard include/config/bcm96318.h) \
    $(wildcard include/config/bcm/ext/switch.h) \
  /tmp/consumer/100AAPP7D0/shared/opensource/include/bcm963xx/boardparms.h \
    $(wildcard include/config/mdio/pseudo/phy.h) \
    $(wildcard include/config/spi/ssb/0.h) \
    $(wildcard include/config/spi/ssb/3.h) \
    $(wildcard include/config/gpio/mdio.h) \
    $(wildcard include/config/hs/spi/ssb/1.h) \
    $(wildcard include/config/hs/spi/ssb/2.h) \
    $(wildcard include/config/hs/spi/ssb/3.h) \
    $(wildcard include/config/hs/spi/ssb/4.h) \
    $(wildcard include/config/hs/spi/ssb/6.h) \
    $(wildcard include/config/hs/spi/ssb/7.h) \

/tmp/consumer/100AAPP7D0/shared/opensource/boardparms/bcm963xx/boardparms.o: $(deps_/tmp/consumer/100AAPP7D0/shared/opensource/boardparms/bcm963xx/boardparms.o)

$(deps_/tmp/consumer/100AAPP7D0/shared/opensource/boardparms/bcm963xx/boardparms.o):
