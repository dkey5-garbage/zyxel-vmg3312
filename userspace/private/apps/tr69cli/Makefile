EXE = tr69cli
dynamic: generic_exe_install

clean:
	rm -f tr69cli


tr69cli:
	cp tr69cli_$(PROFILE)_save tr69cli

CURR_DIR := $(shell pwd)
BUILD_DIR := $(subst /userspace, /userspace,$(CURR_DIR))
BUILD_DIR := $(word 1, $(BUILD_DIR))
include $(BUILD_DIR)/make.common
