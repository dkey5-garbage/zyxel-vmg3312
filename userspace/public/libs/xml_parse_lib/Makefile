#############################################################################
#	Makefile for IPP_SPT
#	CMLAI 
#############################################################################

########## set up compiler environment
#CC			= gcc
#CPP			= g++
#AR			= ar
CFLAGS += -fPIC -g -c -Wall
LIB 			= libxmltools.so

INC_PATH += -I./

CURR_DIR := $(shell pwd)
BUILD_DIR:=$(subst /userspace, /userspace,$(CURR_DIR))
BUILD_DIR:=$(word 1, $(BUILD_DIR))

include $(BUILD_DIR)/make.common

####### Implicit rules
.c.o:
	$(CC) -c $(CFLAGS) $(INC_PATH) $< -o $@ 

####### Files

HEADERS = $(wildcard ./*.h)

SOURCES = $(wildcard ./*.c)

OBJS = $(patsubst %.c, %.o, $(SOURCES))

all: sanity_check $(OBJS) $(LIB) generic_public_lib_install copyfilter

libxmltools.so:
	$(CC) -shared -Wl -o libxmltools.so config_proc.o unit_convertors.o xml_parse_lib.o xml_xsd_checker.o -lc -lm

copyfilter:
	cp -f ./unconfigurable_filter.xml $(FSSRC_DIR)/etc

clean:
	rm -f $(OBJS)
	rm -f libxmltools.so

include $(BUILD_DIR)/make.deprules

-include $(OBJS:.o=.d)

