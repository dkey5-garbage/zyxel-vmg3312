
#ifeq (${ZLD_WEB_MULTI_LANGUAGE_SUPPORT}, ZLD_WEB_MULTI_LANGUAGE_SUPPORT)
#export LANGUAGE_GEN = MLG
#else ifeq (${ZLD_WEB_ENG}, ZLD_WEB_ENG)
#export LANGUAGE_GEN = Eng
#else ifeq (${ZLD_WEB_TUR}, ZLD_WEB_TUR)
#export LANGUAGE_GEN = Tur
#else ifeq (${ZLD_WEB_GER}, ZLD_WEB_GER)
#export LANGUAGE_GEN = Ger
#else ifeq (${ZLD_WEB_FRE}, ZLD_WEB_FRE)
#export LANGUAGE_GEN = Fre
#else ifeq (${ZLD_WEB_ITA}, ZLD_WEB_ITA)
#export LANGUAGE_GEN = Ita
#else 
#export LANGUAGE_GEN = Eng
#endif
#export LANGUAGE_GEN = MLG


#Support multilingual or singual language
LANGBITS := 0
LANGCOUNT := 0
#English
LANGCOUNT := ${LANGCOUNT}+1
ifdef MSTC_MULTI_LANGUAGES_ENG
LANGFLAGS += -DZLD_WEB_ENG
LANGBITS := ${LANGBITS}+1
endif

#Turkish
LANGCOUNT := ${LANGCOUNT}+1
ifdef MSTC_MULTI_LANGUAGES_TUR
LANGFLAGS += -DZLD_WEB_TUR
LANGBITS := ${LANGBITS}+2
endif

#German
LANGCOUNT := ${LANGCOUNT}+1
ifdef MSTC_MULTI_LANGUAGES_GER
LANGFLAGS += -DZLD_WEB_GER
LANGBITS := ${LANGBITS}+4
endif

#French
LANGCOUNT := ${LANGCOUNT}+1
ifdef MSTC_MULTI_LANGUAGES_FRE
LANGFLAGS += -DZLD_WEB_FRE
LANGBITS := ${LANGBITS}+8
endif

#Italian
LANGCOUNT := ${LANGCOUNT}+1
ifdef MSTC_MULTI_LANGUAGES_ITA
LANGFLAGS += -DZLD_WEB_ITA
LANGBITS := ${LANGBITS}+16
endif

#if not select any language in menu config, select English as default
ifeq (${LANGBITS},0)
	LANGBITS := 1
endif

LANGTOK:= '{"ENG", "TUR", "GER", "FRE", "ITA"}'
LANGTOK1:= '"{\"Eng\", \"Tur\", \"Ger\", \"Fre\", \"Ita\"}"'

LANGFLAGS += -DLANGLIST=${LANGTOK} -DLANGCODE=${LANGTOK1} -DLANGENABLE=${LANGBITS} -DLANGALL=${LANGCOUNT}

export LANGFLAGS

MLG_UTILITY_PATH = ./utils
MLG_PATH = ./
#MLG_PATH = $(BUILD_DIR)/userspace/private/libs/language
#MLG_UTILITY_PATH = $(MLG_PATH)/utils

#//--LC--start
LIBS_INCLUDE_PATH = $(BUILD_DIR)/userspace/private/include
MLG_TXT_PATH = $(MLG_PATH)/txt
MLG_XLS_PATH = $(MLG_PATH)/xls
#//--LC--end

#//--LC--start, for debug
MLG_CURRENT_PATH = $(shell pwd)
MLG_CURRENT_UTILITY_PATH = $(MLG_CURRENT_PATH)/utils
MLG_LIBS_INCLUDE_PATH = $(MLG_CURRENT_PATH)/../../include
#//--LC--end


all: clean preconfig libweblanguage.so

after-preconfig: libweblanguage.so 

preinstall: 
	gcc $(LANGFLAGS) GenLangH.c -o GenLangH
	./GenLangH
#	cp -rfL ./languages.h $(MLG_UTILITY_PATH)/GenMLG/src/languages.h
#	gcc ${MLG_UTILITY_PATH}/GenMLG/src/GenMLG.c -o ${MLG_UTILITY_PATH}/GenMLG/GenMLG	
#	gcc ${MLG_UTILITY_PATH}/GenMLG/src/GenMLGExt.c -o ${MLG_UTILITY_PATH}/GenMLG/GenMLGExt	
	cp -rfL ./languages.h $(MLG_CURRENT_UTILITY_PATH)/GenMLG/src/languages.h
	gcc ${MLG_CURRENT_UTILITY_PATH}/GenMLG/src/GenMLG.c -o ${MLG_CURRENT_UTILITY_PATH}/GenMLG/GenMLG
	gcc ${MLG_CURRENT_UTILITY_PATH}/GenMLG/src/GenMLGExt.c -o ${MLG_CURRENT_UTILITY_PATH}/GenMLG/GenMLGExt

preconfig: preinstall
	chmod 755 ./genMlgFiles.sh
#	./genMlgFiles.sh ${MLG_UTILITY_PATH}/GenMLG MLG;		
	./genMlgFiles.sh ${MLG_CURRENT_UTILITY_PATH}/GenMLG MLG;	


LANGUAGE_LIB_SRC = CommonMLG.c ConnStatusMLG.c MaintenanceMLG.c MenuMLG.c NATMLG.c \
	NetworkMLG.c QOSMLG.c  SystemMLG.c SecurityMLG.c WANMLG.c WLANMLG.c VoIPMLG.c\
	CommonMapping.c ConnStatusMapping.c MaintenanceMapping.c MenuMapping.c NATMapping.c \
	NetworkMapping.c QOSMapping.c  SystemMapping.c SecurityMapping.c WANMapping.c WLANMapping.c VoIPMapping.c\
	languagesAuto.c languagesF.c 			   
LANGUAGE_LIB_OBJ = $(LANGUAGE_LIB_SRC:.c=.o)



%.o: %.c
	$(CC) -fPIC -c $(CFLAGS) -o $@ $<	



libweblanguage.so: $(LANGUAGE_LIB_OBJ)
	$(LD) -shared -soname libweblanguage.so -o libweblanguage.so $(LANGUAGE_LIB_OBJ)	
#	install -m 755 libweblanguage.so $(INSTALL_DIR)/lib	
#	cp -rf *.h $(LIBS_INCLUDE_PATH)	
	install -m 755 libweblanguage.so $(MLG_CURRENT_PATH)/../../../../targets//$(PROFILE)/fs.install/lib/			
	cp -rf *.h $(MLG_LIBS_INCLUDE_PATH)	


#mingw32 and cygwin users: replace .cgi with .exe
#gcc cgictest.o -o cgictest.cgi -L./ -lcgic



clean:
	rm -f *.o *.a *.so *MLG.h *MLG.c *Auto.c *Auto.h *Mapping*.c GenLangH languages.h
