EXE = mobiled
dynamic: generic_exe_install

clean:
	rm -f mobiled


mobiled:
	cp mobiled_$(PROFILE)_save mobiled

CURR_DIR := $(shell pwd)
BUILD_DIR := $(subst /userspace, /userspace,$(CURR_DIR))
BUILD_DIR := $(word 1, $(BUILD_DIR))
include $(BUILD_DIR)/make.common
