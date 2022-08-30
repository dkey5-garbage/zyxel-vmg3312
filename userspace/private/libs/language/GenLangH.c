#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>

#define langHFileName	"languages.h"
#define MAX_LINE_LENGTH 1024
#define LANGUAGE_ALL	LANGALL //Total number of supported language


int main(int argc, char** argv)
{
	FILE *fpLangH=NULL;
	char fileOutString[MAX_LINE_LENGTH];
	int languageCount = 0;
	unsigned int languageEnable = LANGENABLE;
	char langList[LANGUAGE_ALL][8] = LANGLIST; //{"Eng", "Tur", "Ger", "Fre", "Ita"}
	char langCode[MAX_LINE_LENGTH] = LANGCODE; //"{\"Eng\", \"Tur\", \"Ger\", \"Fre\", \"Ita\"}"
	int i;


	//create languages.h
	fpLangH = fopen(langHFileName, "w");
	if(fpLangH == NULL){
		printf("Can't open: %s\r\n", langHFileName);
		goto END_PROCESS;
	}

	sprintf(fileOutString, "/* Auto Generate by \"web-2.0.0/src/languages/GenLangH.c\" */\r\n\n");
	fputs(fileOutString, fpLangH);
	
	sprintf(fileOutString, "#ifndef _LANGUAGES_H\r\n#define _LANGUAGES_H\r\n\n");
	fputs(fileOutString, fpLangH);

	for(i=0; i < LANGUAGE_ALL; i++){
		if(languageEnable & (1<<i)){
			sprintf(fileOutString, "#define LANGUAGE_%s\t%d\r\n", langList[i], languageCount);
			fputs(fileOutString, fpLangH);
			languageCount++;
		}
	}
	
	if(languageCount == 0){
		sprintf(fileOutString, "#define LANGUAGE_%s\t%d\r\n", langList[i], languageCount);
		fputs(fileOutString, fpLangH);
		languageCount++;
	}

	if(languageCount > 0){
		sprintf(fileOutString, "#define LANGUAGE_END\t%d\r\n", languageCount);
		sprintf(fileOutString, "%s\n#define LANGUAGE_ALL\t%d\r\n", fileOutString, LANGUAGE_ALL);
		sprintf(fileOutString, "%s\nextern int mlg_UsedLanguage;\r\n\n", fileOutString);
		fputs(fileOutString, fpLangH);
	}
	
	sprintf(fileOutString, "#define LANGUAGE_ENABLE\t%d\r\n", languageEnable);
	fputs(fileOutString, fpLangH);

	sprintf(fileOutString, "#define LANGUAGE_CODE\t%s\r\n", langCode);
	fputs(fileOutString, fpLangH);

#if 1 //__Telus__
/*
	typedef struct {   
		char *varName;	
		char *varValue;
	} MAPPPING_ITEM;*/

	fputs("\ntypedef struct {    \n", fpLangH);
	fputs("		char *varName; \n", fpLangH);
	fputs("		char **varValue;\n", fpLangH);
	fputs("}MAPPING_ITEM;   \n", fpLangH);	

	//extern void initLanguage();
	//fputs("\nextern void initLanguage();   \n", fpLangH);	
#endif

	sprintf(fileOutString, "\r\n#endif\r\n");
	fputs(fileOutString, fpLangH);
	
END_PROCESS:
	if(fpLangH != NULL)
		fclose(fpLangH);

	printf("Generate %s done.\r\n", langHFileName);
	return 0;
}
