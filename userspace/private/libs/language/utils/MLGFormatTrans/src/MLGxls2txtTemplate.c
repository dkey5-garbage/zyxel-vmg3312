#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<sys/types.h>
#include<dirent.h>
#include<time.h>

#define MAX_LINE_LENGTH 2048
#define MAX_FILENAME_LENGTH 256
//void ChangeEncode(char*, char*);

/* Action Define */
#define ACTION_CREATE	0 //create new language string
#define ACTION_UPDATE	1 // update language string

#define FALSE	0
#define TRUE		1

/* 
 * argv[1]: PATH of source xls directory
 * argv[2]: PATH of output txt directory
 * argv[3]: xls2txtTemplate 
 * argv[4]: inserted language name -> 3 char
 */
 void outputHeader(FILE* output);
int MLGxls2txtTemplate(int argc, char** argv)
{
	DIR * srcDir;
	struct dirent * srcPtr;
	char srcxlsFileName[MAX_FILENAME_LENGTH],  outputFileName[MAX_FILENAME_LENGTH];
	FILE *fpSourcexls, *fpOutput;
	char fileinStringxls[MAX_LINE_LENGTH], fileoutString[MAX_LINE_LENGTH];
	char *tmp, *strtoken;
	time_t timep;
	struct tm *p;
	int searchRepeat=0; 
	
	time(&timep);
	p=localtime(&timep); 

	int preToekn=4;
	int tokenCnt=argc-preToekn;

	if (argc<4)
		return 0;

	int i=0;
	for(i=0;i<argc;i++){
		printf("  argv[%d]=%s\n",i,argv[i]);
	}
	printf("tokenCnt=%d\n",tokenCnt);
	
	
	printf("Process Start\r\n");
	srcDir = opendir(argv[1]);
	
	while((srcPtr = readdir(srcDir))!=NULL)
	{
		if (strcmp(srcPtr->d_name,".")==0)
			continue;
		if (strcmp(srcPtr->d_name,"..")==0)
			continue;

		printf("process file:%s Start\r\n",srcPtr->d_name);

		if (argv[1][strlen(argv[1])-1]=='/')
			sprintf(srcxlsFileName,"%s%s",argv[1],srcPtr->d_name);
		else
			sprintf(srcxlsFileName,"%s/%s",argv[1],srcPtr->d_name);

		if (argv[2][strlen(argv[2])-1]=='/')
			sprintf(outputFileName,"%s%s",argv[2],srcPtr->d_name);
		else
			sprintf(outputFileName,"%s/%s",argv[2],srcPtr->d_name);
		strcpy(&outputFileName[strlen(outputFileName)-3],"txt");

		printf("Translate source xls file:%s\r\n",srcxlsFileName);
		printf("Translate output file:%s\r\n",outputFileName);


		/* file open */
		fpOutput = fopen(outputFileName,"w");
		if (fpOutput == NULL)
		{
			printf("[ERROR]: open %s FAIL\r\n", outputFileName);
			goto END_PROCESS;
		}
		fpSourcexls= fopen(srcxlsFileName,"r");
		if (fpSourcexls == NULL)
		{
			printf("[ERROR]: open %s FAIL\r\n", srcxlsFileName);
			goto END_PROCESS;
		}

		char VarName[MAX_LINE_LENGTH],NeedToBeTranslatedString[MAX_LINE_LENGTH],TranslatedString[MAX_LINE_LENGTH], encodeString[4096];
		long position_xls, position_txt;
		char tempLang[10]={0};

		outputHeader(fpOutput);			
SEARCH_XLS:
					position_xls = ftell(fpSourcexls);
					strcpy(fileinStringxls,"");	
					strcpy(VarName,"");		
					while (fgets(fileinStringxls,MAX_LINE_LENGTH,fpSourcexls))
					{
						//printf("fileinStringxls=%s\n",fileinStringxls);
						position_xls = ftell(fpSourcexls);
						if (strstr(fileinStringxls,"MLG_") != NULL)
						{
							strtoken = strtok(fileinStringxls,"\t\n");
							sprintf(VarName,"$NAME$%s$",strtoken);							
							printf("VarName=%s\n",strtoken);
							
							strtoken = strtok(NULL, "\t\n");
							//strcpy(NeedToBeTranslatedString, strtoken);							
							//printf("NeedToBeTranslatedString=%s\n\n",NeedToBeTranslatedString);	
							
							strtoken = strtok(NULL, "\t\n");
							//strcpy(TranslatedString, strtoken);
							
							//TranslatedString[strlen(TranslatedString)-1]='\0';
							//ChangeEncode(TranslatedString, encodeString);
							//printf("TranslatedString=%s\n",TranslatedString);
							//strcpy(TranslatedString, encodeString);

							fputs(VarName,fpOutput);
							fputs("\n",fpOutput);
							for(i=0;i<tokenCnt;i++){
								sprintf(tempLang,"$Zy_%s$(null)$",argv[i+preToekn]);
								fputs(tempLang,fpOutput);							
								fputs("\n",fpOutput);															
							}
							
							//break;
						}
						fputs("\n",fpOutput);	
					}
					


		if (fpSourcexls != NULL)
		{
			fclose(fpSourcexls);
			fpSourcexls = NULL;
		}
		if (fpOutput != NULL)
		{
			fclose(fpOutput);
			fpOutput = NULL;
		}
		printf("process file:%s End\r\n",srcPtr->d_name);
		
	}
	
END_PROCESS:
	if (srcDir != NULL)
		closedir(srcDir);
	if (fpSourcexls != NULL)
		fclose(fpSourcexls);
	if (fpOutput != NULL)
		fclose(fpOutput);
	
	
	printf("Process End\r\n");

	return 0;
}

void outputHeader(FILE* output){
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include "languages.h"
*/
	fputs("#include<stdio.h>	\n",output);
	fputs("#include<string.h>	\n",output);
	fputs("#include<stdlib.h>	\n",output);
	fputs("#include<time.h>	\n",output);
	fputs("#include \"languages.h\"	\n\n\n",output);
}

