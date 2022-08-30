EXE = AutoFWcli
dynamic: generic_exe_install

clean:
	rm -f AutoFWcli


AutoFWcli:
	cp AutoFWcli_$(PROFILE)_save AutoFWcli

CURR_DIR := $(shell pwd)
BUILD_DIR := $(subst /userspace, /userspace,$(CURR_DIR))
BUILD_DIR := $(word 1, $(BUILD_DIR))
include $(BUILD_DIR)/make.common
