cmd_/tmp/consumer/100AAPP7D0/shared/opensource/flash/flash_api.o := /opt/toolchains/uclibc-crosstools-gcc-4.4.2-1/usr/bin/mips-linux-uclibc-gcc -Wp,-MD,/tmp/consumer/100AAPP7D0/shared/opensource/flash/.flash_api.o.d  -nostdinc -isystem /opt/toolchains/uclibc-crosstools-gcc-4.4.2-1/usr/bin/../lib/gcc/mips-linux-uclibc/4.4.2/include -Iinclude  -I/tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include -include include/linux/autoconf.h -D__KERNEL__ -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -O2 -mno-check-zero-division -mabi=32 -G 0 -mno-abicalls -fno-pic -pipe -msoft-float -ffreestanding -march=mips32 -Wa,-mips32 -Wa,--trap -I/tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/mach-bcm963xx -I/tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/mach-generic -D"VMLINUX_LOAD_ADDRESS=0x80020000" -Wframe-larger-than=1024 -fno-stack-protector -fomit-frame-pointer -Wdeclaration-after-statement -Wno-pointer-sign -fwrapv -fno-dwarf2-cfi-asm -DCFG_LINUX_NET_PACKED -I/tmp/consumer/100AAPP7D0/shared/broadcom/include/bcm963xx -I/tmp/consumer/100AAPP7D0/bcmdrivers/broadcom/include/bcm963xx -DCFG_RAMAPP -DCONFIG_BCM963268 -I/tmp/consumer/100AAPP7D0/bcmdrivers/opensource/include/bcm963xx -I/tmp/consumer/100AAPP7D0/shared/opensource/include/bcm963xx -DINC_CFI_FLASH_DRIVER=0 -DINC_SPI_FLASH_DRIVER=1 -DINC_NAND_FLASH_DRIVER=1 -DMLD_GLOB_TTNET_FEATURE -DSUPPORT_BACKUP_PSI -DMSTC_OBM_IMAGE_DEFAULT   -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(flash_api)"  -D"KBUILD_MODNAME=KBUILD_STR(flash_api)"  -c -o /tmp/consumer/100AAPP7D0/shared/opensource/flash/flash_api.o /tmp/consumer/100AAPP7D0/shared/opensource/flash/flash_api.c

deps_/tmp/consumer/100AAPP7D0/shared/opensource/flash/flash_api.o := \
  /tmp/consumer/100AAPP7D0/shared/opensource/flash/flash_api.c \
    $(wildcard include/config/bcm96816.h) \
    $(wildcard include/config/bcm96368.h) \
    $(wildcard include/config/bcm96362.h) \
    $(wildcard include/config/bcm96328.h) \
    $(wildcard include/config/bcm963268.h) \
  include/linux/kernel.h \
    $(wildcard include/config/lbd.h) \
    $(wildcard include/config/mips/brcm.h) \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/spinlock/sleep.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/dynamic/debug.h) \
    $(wildcard include/config/ring/buffer.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/numa.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
  /opt/toolchains/uclibc-crosstools-gcc-4.4.2-1/usr/bin/../lib/gcc/mips-linux-uclibc/4.4.2/include/stdarg.h \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
    $(wildcard include/config/brcm/bounce.h) \
  include/linux/compiler-gcc4.h \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/linkage.h \
  include/linux/stddef.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/types.h \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/64bit/phys/addr.h) \
  include/asm-generic/int-ll64.h \
  include/linux/posix_types.h \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/posix_types.h \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/sgidefs.h \
  include/linux/bitops.h \
    $(wildcard include/config/generic/find/first/bit.h) \
    $(wildcard include/config/generic/find/last/bit.h) \
    $(wildcard include/config/generic/find/next/bit.h) \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/bitops.h \
    $(wildcard include/config/cpu/mipsr2.h) \
  include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
    $(wildcard include/config/x86.h) \
  include/linux/typecheck.h \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/irqflags.h \
    $(wildcard include/config/mips/mt/smtc.h) \
    $(wildcard include/config/irq/cpu.h) \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/hazards.h \
    $(wildcard include/config/cpu/cavium/octeon.h) \
    $(wildcard include/config/cpu/mipsr1.h) \
    $(wildcard include/config/mach/alchemy.h) \
    $(wildcard include/config/cpu/loongson2.h) \
    $(wildcard include/config/cpu/r10000.h) \
    $(wildcard include/config/cpu/r5500.h) \
    $(wildcard include/config/cpu/rm9000.h) \
    $(wildcard include/config/cpu/sb1.h) \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/cpu-features.h \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/32bit.h) \
    $(wildcard include/config/cpu/mipsr2/irq/vi.h) \
    $(wildcard include/config/cpu/mipsr2/irq/ei.h) \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/cpu.h \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/cpu-info.h \
    $(wildcard include/config/mips/mt/smp.h) \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/cache.h \
    $(wildcard include/config/mips/l1/cache/shift.h) \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/mach-generic/kmalloc.h \
    $(wildcard include/config/dma/coherent.h) \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/mach-bcm963xx/cpu-feature-overrides.h \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/barrier.h \
    $(wildcard include/config/cpu/has/sync.h) \
    $(wildcard include/config/sgi/ip28.h) \
    $(wildcard include/config/cpu/has/wb.h) \
    $(wildcard include/config/weak/ordering.h) \
    $(wildcard include/config/weak/reordering/beyond/llsc.h) \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/bug.h \
    $(wildcard include/config/bug.h) \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/break.h \
  include/asm-generic/bug.h \
    $(wildcard include/config/generic/bug.h) \
    $(wildcard include/config/generic/bug/relative/pointers.h) \
    $(wildcard include/config/debug/bugverbose.h) \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/byteorder.h \
  include/linux/byteorder/big_endian.h \
  include/linux/swab.h \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/swab.h \
    $(wildcard include/config/cpu/mips64/r2.h) \
  include/linux/byteorder/generic.h \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/war.h \
    $(wildcard include/config/cpu/r4000/workarounds.h) \
    $(wildcard include/config/cpu/r4400/workarounds.h) \
    $(wildcard include/config/cpu/daddi/workarounds.h) \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/mach-bcm963xx/war.h \
  include/asm-generic/bitops/non-atomic.h \
  include/asm-generic/bitops/fls64.h \
  include/asm-generic/bitops/ffz.h \
  include/asm-generic/bitops/find.h \
  include/asm-generic/bitops/sched.h \
  include/asm-generic/bitops/hweight.h \
  include/asm-generic/bitops/ext2-non-atomic.h \
  include/asm-generic/bitops/le.h \
  include/asm-generic/bitops/ext2-atomic.h \
  include/asm-generic/bitops/minix.h \
  include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  include/linux/ratelimit.h \
  include/linux/param.h \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/param.h \
    $(wildcard include/config/hz.h) \
  include/linux/dynamic_debug.h \
  /tmp/consumer/100AAPP7D0/bcmdrivers/opensource/include/bcm963xx/bcm_map_part.h \
    $(wildcard include/config/bcm96318.h) \
  /tmp/consumer/100AAPP7D0/shared/opensource/include/bcm963xx/63268_map_part.h \
    $(wildcard include/config/lock.h) \
    $(wildcard include/config/2/bar1/size/mask.h) \
    $(wildcard include/config/2/bar1/disable.h) \
    $(wildcard include/config/bcm/gmac.h) \
  /tmp/consumer/100AAPP7D0/bcmdrivers/opensource/include/bcm963xx/bcmtypes.h \
  /tmp/consumer/100AAPP7D0/shared/opensource/include/bcm963xx/bcm_hwdefs.h \
    $(wildcard include/config/brcm/ikos.h) \
  /tmp/consumer/100AAPP7D0/shared/opensource/include/bcm963xx/flash_api.h \

/tmp/consumer/100AAPP7D0/shared/opensource/flash/flash_api.o: $(deps_/tmp/consumer/100AAPP7D0/shared/opensource/flash/flash_api.o)

$(deps_/tmp/consumer/100AAPP7D0/shared/opensource/flash/flash_api.o):
