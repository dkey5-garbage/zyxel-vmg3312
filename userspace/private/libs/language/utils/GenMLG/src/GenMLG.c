#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>


#include "languages.h"

#define MAX_LINE_LENGTH 2048
#define MAX_FILENAME_LENGTH 256

/* Action Define */
//#define ACTION_COPY_ONCE 1
//#define ACTION_COPY_FROM_EACH_SOURCE 2

/* 
 * argv[1]: PATH of source
 * argv[2]: PATH of output
 * argv[3]: prefix word of module, e.g. voip, common...
 * argv[4]: language you like to generate. e.g. Eng, Tur or MLG.
 * the source file will argv[1]/argv[3]MLG.txt
 * the output files will argv[2]/argv[3]Eng.c, argv[2]/argv[3]Fra.c, argv[2]/argv[3]Ger.c... and argv[2]/argv[3]MLG.c
 */
int main(int argc, char** argv)
{
	FILE *fpOutputC=NULL, *fpOutputH=NULL, *fpSource=NULL;
	char fileinString[MAX_LINE_LENGTH], fileoutString[MAX_LINE_LENGTH];
	char filename_basetmp[MAX_FILENAME_LENGTH], filename_tmp[MAX_FILENAME_LENGTH],cmpTok[16];
	char *tmp, *strtoken;
	int loopIndex, inGroup=0;
	char languageTok[LANGUAGE_ALL][8] = LANGUAGE_CODE;
	int languageCount = 0;
	int languageGen=LANGUAGE_ALL;
	int i = 0, tmpCnt = 0;
#if 1//__Telus__
	FILE *fpOutputMappingC=NULL;
	int tokenCnt=0;
#endif

	printf("Process Module %s Start\r\n",argv[3]);
		

	/* file open for multiple language source *MLG.txt */
	if ((strlen(argv[1])+strlen(argv[3])+8)>MAX_FILENAME_LENGTH)
	{
		printf("Source FILENAME LENGTH is too long\r\n");
		goto END_PROCESS;
	}
	sprintf(filename_tmp,"%s/%sMLG.txt",argv[1],argv[3]);
	fpSource = fopen(filename_tmp,"r");
	if (fpSource == NULL)
	{
		printf("Can't Find Source file: %s\r\n", filename_tmp);
		goto END_PROCESS;
	}

	/* file open for multiple language output */
	if ((strlen(argv[2])+strlen(argv[3])+6)>MAX_FILENAME_LENGTH)
	{
		printf("Output FILENAME LENGTH is too long\r\n");
		goto END_PROCESS;
	}

	sprintf(filename_basetmp,"%s/%s",argv[2],argv[3]);

	sprintf(filename_tmp,"%sMLG.c",filename_basetmp);
	fpOutputC = fopen(filename_tmp,"w");
	if (fpOutputC== NULL)
	{
		printf("Can't open output C file: %s\r\n", filename_tmp);
		goto END_PROCESS;
	}
	
	sprintf(filename_tmp,"%sMLG.h",filename_basetmp);
	fpOutputH = fopen(filename_tmp,"w");
	if (fpOutputH == NULL)
	{
		printf("Can't open output H file: %s\r\n", filename_tmp);
		goto END_PROCESS;
	}
#if 1 //__Telus__,
	sprintf(filename_tmp,"%sMapping.c",filename_basetmp);
	fpOutputMappingC = fopen(filename_tmp,"w");
	if (fpOutputMappingC == NULL)
	{
		printf("Can't open output Mapping C file: %s\r\n", filename_tmp);
		goto END_PROCESS;
	}


	char mappingname_basetmp[128]={0};
	sprintf(mappingname_basetmp,"%sMappingItem",argv[3]);

	//#include<stdio.h>
	//#include<string.h>
	//#include<stdlib.h>
	//#include<time.h>
	//#include "loginMLG.h"
	//extern MAPPPING_ITEM loginMappingItem;
	fputs("#include<stdio.h>\n",fpOutputMappingC);		
	fputs("#include<string.h>\n",fpOutputMappingC);		
	fputs("#include<stdlib.h>\n",fpOutputMappingC);		
	fputs("#include<time.h>\n",fpOutputMappingC);		
	sprintf(fileoutString,"#include \"%sMLG.h\"",argv[3]);	
	fputs(fileoutString,fpOutputMappingC);		
	fputs("\n\n",fpOutputMappingC);		
	/*
	sprintf(fileoutString,"extern MAPPING_ITEM %s;",mappingname_basetmp);	
	fputs(fileoutString,fpOutputMappingC);		
	fputs("\n\n",fpOutputMappingC);		*/

	//#include "languages.h"
	fputs("\n#include \"languages.h\"\n",fpOutputMappingC);
	fputs("\n#include \"languages.h\"\n",fpOutputH);	

#if 0 //__Telus
						//if(tokenCnt>0){
							//MAPPPING_ITEM mappingItem[2]; 
							fputs("\n",fpOutputC);	
							sprintf(fileoutString,"MAPPPING_ITEM %s[%d];\n",mappingname_basetmp,1000);
							fputs(fileoutString,fpOutputMappingC);			
						//}
#endif


	//void BaseMapping(){
	char mappingname_function[128]={0};	
	sprintf(fileoutString,"void %sMapping()",mappingname_basetmp);	
	sprintf(mappingname_function, "extern %s;\n\n" ,fileoutString);	
	//fputs(mappingname_function,fpOutputMappingC);		
	fputs(fileoutString,fpOutputMappingC);	
	fputs("\n",fpOutputMappingC);		
	fputs("{\n",fpOutputMappingC);				

	
	fputs(mappingname_function,fpOutputH);		
	
#endif

	/* Start parsing source txt file */
	strcpy(fileinString,"");

	while(fgets(fileinString,MAX_LINE_LENGTH,fpSource))
	{
		if (strstr(fileinString,"$") == NULL)
		{
			/* directly copy this line to output Cfile */
			fputs(fileinString,fpOutputC);

			/* directly copy this line to h file when this is not #include */
			if (strstr(fileinString,"#include") == NULL)
			{
				fputs(fileinString,fpOutputH);
			}
		}else
		{
StartArrayGen:
			strcpy(fileoutString,"");
			if ((tmp = strstr(fileinString,"$NAME$")) != NULL)
			{
				strtoken = strtok(&tmp[6],"$");
				/* copy to c output file */
				sprintf(fileoutString,"char* %s[] = {\n",strtoken);
				fputs(fileoutString,fpOutputC);				
				
				/* copy to h include file */
				sprintf(fileoutString,"extern char* %s[];\n",strtoken);
				fputs(fileoutString,fpOutputH);

#if 1 //__Telus__
				/* copy to h include file */
				sprintf(fileoutString,"  %s[%d].varName = \"%s\";\n",mappingname_basetmp,tokenCnt,strtoken);
				fputs(fileoutString,fpOutputMappingC);
				sprintf(fileoutString,"  %s[%d].varValue = %s;\n",mappingname_basetmp,tokenCnt,strtoken);
				fputs(fileoutString,fpOutputMappingC);
				tokenCnt++;
	//mappingItem[0].varName = "MLG_Button_Apply";
	//mappingItem[0].varValue = MLG_Button_Apply[mlg_UsedLanguage];				
#else
				tokenCnt++;
#endif

				tmpCnt = 0;
				for (loopIndex=0;loopIndex<LANGUAGE_ALL;loopIndex++)
				{

					fgets(fileinString,MAX_LINE_LENGTH,fpSource);
					if (strstr(fileinString,"$") != NULL)
					{
						sprintf(cmpTok,"$Zy_%s$",languageTok[loopIndex]);
						if ((tmp = strstr(fileinString,cmpTok)) != NULL)
						{
							if (tmp[8]=='$') //empty string
							{
								sprintf(fileoutString,"#error \"Languages string is Empty!! you should check the language text %sMLG.txt\"\n",argv[3]);
								fputs(fileoutString,fpOutputC);
								goto END_PROCESS;
							}else
							{
								strtoken = strtok(&tmp[8],"$");
								if (languageGen == LANGUAGE_ALL)
								{
									if(LANGUAGE_ENABLE & (1<<loopIndex))
									{
										if(tmpCnt == LANGUAGE_END-1)
										{
											sprintf(fileoutString,"\t\"%s\"\n",strtoken);
											sprintf(fileoutString,"%s\t};\n",fileoutString);
										}
										else
										{
											sprintf(fileoutString,"\t\"%s\",\n",strtoken);
										}

										tmpCnt++;
										fputs(fileoutString,fpOutputC);
									}
								}else if (languageGen == loopIndex)
								{									
									sprintf(fileoutString,"\t\"%s\"\n",strtoken);
									sprintf(fileoutString,"%s\t};\n",fileoutString);
									fputs(fileoutString,fpOutputC);
								}
							}
						}else /* language sequence error */
						{
							sprintf(fileoutString,"#error \"Languages sequence error!! you should check the language text %sMLG.txt\"\n",argv[3]);
							fputs(fileoutString,fpOutputC);
							goto END_PROCESS;
						}
					}else{ /* Error: some languages text miss*/
						sprintf(fileoutString,"#error \"Languages missing!! you should check the language text %sMLG.txt\"\n",argv[3]);
						fputs(fileoutString,fpOutputC);
						goto END_PROCESS;
					}
				}
			}
		}
	}

	
END_PROCESS:
	/* file close*/
	if (fpSource!=NULL)
		fclose(fpSource);

	if (fpOutputC != NULL){
#if 1 //__Telus
		if(tokenCnt>0){
			//MAPPPING_ITEM mappingItem[2]; 
			fputs("\n",fpOutputC);	
			sprintf(fileoutString,"MAPPING_ITEM %s[%d];\n",mappingname_basetmp,tokenCnt);
			fputs(fileoutString,fpOutputC);				
		}
#endif		
		fclose(fpOutputC);		
	}
	if (fpOutputH != NULL){
#if 1//__Telus__
		if(tokenCnt>0){
		//extern MAPPPING_ITEM commonMappingItem			
			fputs("\n",fpOutputH);	
			sprintf(fileoutString,"extern MAPPING_ITEM %s[%d];\n",mappingname_basetmp,tokenCnt);
			fputs(fileoutString,fpOutputH);				

		//#define MAPPPING_ITEM_COUNTER (sizeof(commonMappingItem) / sizeof(MAPPPING_ITEM))			
			fputs("\n",fpOutputH);	
			sprintf(fileoutString,"#define MAPPING_%s_COUNTER (sizeof(%s) / sizeof(MAPPING_ITEM))\n",mappingname_basetmp,mappingname_basetmp);
			fputs(fileoutString,fpOutputH); 					
		}		
#endif
		fclose(fpOutputH);
	}

#if 1 //__Telus__
	if (fpOutputMappingC != NULL){
		if(tokenCnt>0){
			//void BaseMapping(){
			sprintf(fileoutString,"}\n");
			fputs(fileoutString,fpOutputMappingC);	
		}
		fclose(fpOutputMappingC);
	}
#endif
	
	printf("Process Module %s End\r\n",argv[3]);
	return 0;
}
