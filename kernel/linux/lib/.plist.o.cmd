cmd_lib/plist.o := /opt/toolchains/uclibc-crosstools-gcc-4.4.2-1/usr/bin/mips-linux-uclibc-gcc -Wp,-MD,lib/.plist.o.d  -nostdinc -isystem /opt/toolchains/uclibc-crosstools-gcc-4.4.2-1/usr/bin/../lib/gcc/mips-linux-uclibc/4.4.2/include -Iinclude  -I/tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include -include include/linux/autoconf.h -D__KERNEL__ -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -O2 -mno-check-zero-division -mabi=32 -G 0 -mno-abicalls -fno-pic -pipe -msoft-float -ffreestanding -march=mips32 -Wa,-mips32 -Wa,--trap -I/tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/mach-bcm963xx -I/tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/mach-generic -D"VMLINUX_LOAD_ADDRESS=0x80020000" -Wframe-larger-than=1024 -fno-stack-protector -fomit-frame-pointer -Wdeclaration-after-statement -Wno-pointer-sign -fwrapv -fno-dwarf2-cfi-asm -DCFG_LINUX_NET_PACKED -g -Werror -Wfatal-errors   -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(plist)"  -D"KBUILD_MODNAME=KBUILD_STR(plist)"  -c -o lib/plist.o lib/plist.c

deps_lib/plist.o := \
  lib/plist.c \
    $(wildcard include/config/debug/pi/list.h) \
  include/linux/plist.h \
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
  include/linux/list.h \
    $(wildcard include/config/debug/list.h) \
  include/linux/poison.h \
  include/linux/prefetch.h \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/processor.h \
    $(wildcard include/config/cavium/octeon/cvmseg/size.h) \
    $(wildcard include/config/mips/mt/fpaff.h) \
    $(wildcard include/config/cpu/has/prefetch.h) \
  include/linux/cpumask.h \
    $(wildcard include/config/disable/obsolete/cpumask/functions.h) \
    $(wildcard include/config/hotplug/cpu.h) \
    $(wildcard include/config/cpumask/offstack.h) \
    $(wildcard include/config/debug/per/cpu/maps.h) \
  include/linux/threads.h \
    $(wildcard include/config/nr/cpus.h) \
    $(wildcard include/config/base/small.h) \
  include/linux/bitmap.h \
  include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/string.h \
    $(wildcard include/config/cpu/r3000.h) \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/cachectl.h \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/mipsregs.h \
    $(wildcard include/config/cpu/vr41xx.h) \
    $(wildcard include/config/page/size/4kb.h) \
    $(wildcard include/config/page/size/8kb.h) \
    $(wildcard include/config/page/size/16kb.h) \
    $(wildcard include/config/page/size/32kb.h) \
    $(wildcard include/config/page/size/64kb.h) \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/prefetch.h \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/system.h \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/addrspace.h \
    $(wildcard include/config/cpu/r8000.h) \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/mach-generic/spaces.h \
    $(wildcard include/config/dma/noncoherent.h) \
  include/linux/const.h \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/cmpxchg.h \
  include/asm-generic/cmpxchg-local.h \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/dsp.h \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/watch.h \
    $(wildcard include/config/hardware/watchpoints.h) \
  include/linux/spinlock_types.h \
    $(wildcard include/config/generic/lockbreak.h) \
    $(wildcard include/config/debug/spinlock.h) \
    $(wildcard include/config/debug/lock/alloc.h) \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/spinlock_types.h \
  include/linux/lockdep.h \
    $(wildcard include/config/lockdep.h) \
    $(wildcard include/config/lock/stat.h) \
    $(wildcard include/config/generic/hardirqs.h) \
  include/linux/spinlock.h \
    $(wildcard include/config/preempt.h) \
  include/linux/preempt.h \
    $(wildcard include/config/debug/preempt.h) \
    $(wildcard include/config/preempt/notifiers.h) \
  include/linux/thread_info.h \
    $(wildcard include/config/compat.h) \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/thread_info.h \
    $(wildcard include/config/debug/stack/usage.h) \
    $(wildcard include/config/mips32/o32.h) \
    $(wildcard include/config/mips32/n32.h) \
  include/linux/stringify.h \
  include/linux/bottom_half.h \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/spinlock.h \
  include/linux/spinlock_api_smp.h \
  /tmp/consumer/100AAPP7D0/kernel/linux/arch/mips/include/asm/atomic.h \
  include/asm-generic/atomic.h \

lib/plist.o: $(deps_lib/plist.o)

$(deps_lib/plist.o):
