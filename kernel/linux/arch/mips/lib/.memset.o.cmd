cmd_arch/mips/lib/memset.o := /opt/toolchains/uclibc-crosstools-gcc-4.4.2-1/usr/bin/mips-linux-uclibc-gcc -Wp,-MD,arch/mips/lib/.memset.o.d  -nostdinc -isystem /opt/toolchains/uclibc-crosstools-gcc-4.4.2-1/usr/bin/../lib/gcc/mips-linux-uclibc/4.4.2/include -Iinclude  -I/tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include -include include/linux/autoconf.h -D__KERNEL__ -D__ASSEMBLY__   -mno-check-zero-division -mabi=32 -G 0 -mno-abicalls -fno-pic -pipe -msoft-float -ffreestanding  -march=mips32 -Wa,-mips32 -Wa,--trap -I/tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/mach-bcm963xx -I/tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/mach-generic       -c -o arch/mips/lib/memset.o arch/mips/lib/memset.S

deps_arch/mips/lib/memset.o := \
  arch/mips/lib/memset.S \
    $(wildcard include/config/cpu/daddi/workarounds.h) \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/asm.h \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/cpu/has/prefetch.h) \
    $(wildcard include/config/sgi/ip28.h) \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/sgidefs.h \
  include/asm/asm-offsets.h \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/regdef.h \

arch/mips/lib/memset.o: $(deps_arch/mips/lib/memset.o)

$(deps_arch/mips/lib/memset.o):
