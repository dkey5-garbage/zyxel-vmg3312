#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<sys/types.h>
#include<dirent.h>

#define MAX_LINE_LENGTH 2048
#define MAX_FILENAME_LENGTH 256

/* Action Define */
//#define ACTION_COPY_ONCE 1
//#define ACTION_COPY_FROM_EACH_SOURCE 2

/* 
 * argv[1]: PATH of source directory
 * argv[2]: PATH of output directory
 */
int MLGtxt2xls(int argc, char** argv)
{
	DIR * srcDir;
	struct dirent * srcPtr;
	char srcFileName[MAX_FILENAME_LENGTH], outputFileName[MAX_FILENAME_LENGTH];
	FILE *fpSource, *fpOutput;
	char fileinString[MAX_LINE_LENGTH], fileoutString[MAX_LINE_LENGTH];
	char *tmp, *strtoken;

	printf("Process Start\r\n");
	srcDir = opendir(argv[1]);
	
	while((srcPtr = readdir(srcDir))!=NULL)
	{
		printf("process file:%s\r\n",srcPtr->d_name);
		if (strcmp(srcPtr->d_name,".")==0)
			continue;
		if (strcmp(srcPtr->d_name,"..")==0)
			continue;

		if (argv[1][strlen(argv[1])-1]=='/')
			sprintf(srcFileName,"%s%s",argv[1],srcPtr->d_name);
		else
			sprintf(srcFileName,"%s/%s",argv[1],srcPtr->d_name);

		if (argv[2][strlen(argv[2])-1]=='/')
			sprintf(outputFileName,"%s%s",argv[2],srcPtr->d_name);
		else
			sprintf(outputFileName,"%s/%s",argv[2],srcPtr->d_name);
		strcpy(&outputFileName[strlen(outputFileName)-3],"csv");

		printf("Translate source file:%s\r\n",srcFileName);
		printf("Translate output file:%s\r\n",outputFileName);


		/* file open */
		fpSource = fopen(srcFileName,"r");
		if (fpSource == NULL)
		{
			printf("[ERROR]: open %s FAIL\r\n", srcFileName);
			goto END_PROCESS;
		}
		fpOutput = fopen(outputFileName,"w");
		if (fpOutput == NULL)
		{
			printf("[ERROR]: open %s FAIL\r\n", outputFileName);
			goto END_PROCESS;
		}

		/**/
		strcpy(fileoutString,"Identifier\tNeed to be translated\tTranslated result\n");
		fputs(fileoutString,fpOutput);
		/* Start parsing source txt file */
		while(fgets(fileinString,MAX_LINE_LENGTH,fpSource))
		{
			if (strstr(fileinString,"$") == NULL)
			{
				/* skip*/
				continue;
			}else
			{
				if ((tmp = strstr(fileinString,"$NAME$")) != NULL)
				{
					strtoken = strtok(&tmp[6],"$");
					strcpy(fileoutString,strtoken);
					fgets(fileinString,MAX_LINE_LENGTH,fpSource);
					if (strstr(fileinString,"$Zy_Eng$") != NULL)
					{
						strtoken = strtok(&tmp[8],"$");
						sprintf(fileoutString,"%s\t%s\t\n",fileoutString,strtoken);
						fputs(fileoutString,fpOutput);
					}
				}
			}
		}

		if (fpSource != NULL)
		{
			fclose(fpSource);
			fpSource = NULL;
		}
		if (fpOutput != NULL)
		{
			fclose(fpOutput);
			fpOutput = NULL;
		}
		
	}
	
END_PROCESS:
	if (srcDir != NULL)
		closedir(srcDir);
	if (fpSource != NULL)
		fclose(fpSource);
	if (fpOutput != NULL)
		fclose(fpOutput);
	
	
	printf("Process End\r\n");

	return 0;
}
