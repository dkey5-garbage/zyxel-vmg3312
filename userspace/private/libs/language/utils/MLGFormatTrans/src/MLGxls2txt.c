#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<sys/types.h>
#include<dirent.h>
#include<time.h>

#define MAX_LINE_LENGTH 2048
#define MAX_FILENAME_LENGTH 256
void ChangeEncode(char*, char*);

/* Action Define */
#define ACTION_CREATE	0 //create new language string
#define ACTION_UPDATE	1 // update language string

#define FALSE	0
#define TRUE		1

/* 
 * argv[1]: PATH of source xls directory
 * argv[2]: PATH of source txt directory
 * argv[3]: PATH of output txt directory
 * argv[4]: inserted language name -> 3 char
 * argv[5]: 0: create new language string, 1: update string 
 */
int MLGxls2txt(int argc, char** argv)
{
	DIR * srcDir;
	struct dirent * srcPtr;
	char srcxlsFileName[MAX_FILENAME_LENGTH], srctxtFileName[MAX_FILENAME_LENGTH], outputFileName[MAX_FILENAME_LENGTH];
	FILE *fpSourcexls, *fpSourcetxt, *fpOutput;
	char fileinStringxls[MAX_LINE_LENGTH], fileinStringtxt[MAX_LINE_LENGTH], fileoutString[MAX_LINE_LENGTH];
	char *tmp, *strtoken;
	time_t timep;
	struct tm *p;
	int searchRepeat=0, action=ACTION_CREATE; 
	
	time(&timep);
	p=localtime(&timep); 


	if (argc<6)
		return 0;
	printf("Process Start\r\n");
	srcDir = opendir(argv[1]);
	action = atoi(argv[5]);
	switch (action)
	{
		case ACTION_CREATE:
		case ACTION_UPDATE:
			break;
		default:
			printf("\r\n[ERROR]: UnKnown Action");
			goto END_PROCESS;
			break;
	}
	
	while((srcPtr = readdir(srcDir))!=NULL)
	{
		if (strcmp(srcPtr->d_name,".")==0)
			continue;
		if (strcmp(srcPtr->d_name,"..")==0)
			continue;

		printf("process file:%s\r\n",srcPtr->d_name);		

		if (argv[1][strlen(argv[1])-1]=='/')
			sprintf(srcxlsFileName,"%s%s",argv[1],srcPtr->d_name);
		else
			sprintf(srcxlsFileName,"%s/%s",argv[1],srcPtr->d_name);

		if (argv[2][strlen(argv[2])-1]=='/')
			sprintf(srctxtFileName,"%s%s",argv[2],srcPtr->d_name);
		else
			sprintf(srctxtFileName,"%s/%s",argv[2],srcPtr->d_name);
		strcpy(&srctxtFileName[strlen(srctxtFileName)-3],"txt");

		if (argv[3][strlen(argv[3])-1]=='/')
			sprintf(outputFileName,"%s%s",argv[3],srcPtr->d_name);
		else
			sprintf(outputFileName,"%s/%s",argv[3],srcPtr->d_name);
		strcpy(&outputFileName[strlen(outputFileName)-3],"txt");

		printf("Translate source xls file:%s\r\n",srcxlsFileName);
		printf("Translate source txt file:%s\r\n",srctxtFileName);
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
		fpSourcetxt= fopen(srctxtFileName,"r");
		if (fpSourcetxt == NULL)
		{
			printf("[ERROR]: open %s FAIL\r\n", srctxtFileName);
			goto END_PROCESS;
		}
		if (action==ACTION_CREATE)
		{
			sprintf(fileinStringtxt, "/* ZyXEL update on %d/%d/%d:  Support %s Languaged */\n", (1900+p->tm_year),( 1+p->tm_mon), p->tm_mday, argv[4] );
			fputs(fileinStringtxt,fpOutput);
		}
		
		/* Base on source txt file to create new language string or to update language string */
		while (fgets(fileinStringtxt,MAX_LINE_LENGTH,fpSourcetxt))
		{sprintf(fileoutString,"%s\n",fileinStringtxt);//fprintf(stderr,"---%s",fileoutString);
			char VarName[MAX_LINE_LENGTH],TranslatedString[MAX_LINE_LENGTH], encodeString[4096];
			long position_xls, position_txt;

			position_txt = ftell(fpSourcetxt);	
			if (strstr(fileinStringtxt,"$") == NULL)
			{
				fputs(fileinStringtxt,fpOutput);
			}else
			{
				if ((tmp = strstr(fileinStringtxt,"$NAME$")) != NULL)
				{
					fputs(fileinStringtxt,fpOutput);
					strtoken = strtok(&tmp[6],"$");
					strcpy(VarName, strtoken);
					searchRepeat=0;
SEARCH_XLS:
					position_xls = ftell(fpSourcexls);
					strcpy(TranslatedString,"");
					//printf("VarName=%s\n",VarName);
					while (fgets(fileinStringxls,MAX_LINE_LENGTH,fpSourcexls))
					{
						//printf("VarName=%s\n",VarName);
						position_xls = ftell(fpSourcexls);
						if (strstr(fileinStringxls,VarName) != NULL)
						{
							strtoken = strtok(fileinStringxls,"\t\n");
							if(!strcmp(strtoken,VarName)){
								strtoken = strtok(NULL, "\t\n");
								strtoken = strtok(NULL, "\t\n");
								strcpy(TranslatedString, strtoken);
								TranslatedString[strlen(TranslatedString)-1]='\0';
								ChangeEncode(TranslatedString, encodeString);
								strcpy(TranslatedString, encodeString);
								break;
							}
						}
					}
					if (strlen(TranslatedString)==0)
					{
						//can't find translated string in xls file
						rewind(fpSourcexls);
						searchRepeat++;
						if (searchRepeat<=1)
						{
							//search translated string in xls file again.
							goto SEARCH_XLS;
						}else
						{
							switch (action)
							{
								case ACTION_CREATE:
									printf("[ERROR]: Can't find translated String in %s\r\n", srcxlsFileName);
									goto END_PROCESS;
									break;
								case ACTION_UPDATE:
									goto WRITE_VARNAME_ALLTRING;
									break;
								default:
										printf("\r\n[ERROR]: UnKnown Action");
										goto END_PROCESS;
										break;
							}
						}
					}else
					{
						//found translated string in xls file
						int write_done = FALSE;	
						// remove the first and the last " if necessary.
						if (TranslatedString[0]=='"' && TranslatedString[strlen(TranslatedString)-1]=='"')
						{
							char tempString[MAX_LINE_LENGTH];
							strcpy(tempString, TranslatedString);
							strncpy(TranslatedString,&tempString[1], strlen(tempString)-2);
							TranslatedString[strlen(tempString)-2]='\0';
						}
						// write translated string to outout txt file
WRITE_VARNAME_ALLTRING:
						write_done = FALSE;
						while (fgets(fileinStringtxt,MAX_LINE_LENGTH,fpSourcetxt))
						{
							printf("%s",fileinStringtxt);
							if (strstr(fileinStringtxt,"$Zy_") != NULL)
							{
								char operateLang[32];
								sprintf(operateLang,"$Zy_%s",argv[4]);
								switch (action)
								{
									case ACTION_UPDATE:
										if (strstr(fileinStringtxt,operateLang)!=NULL) 
										{
											//find the language in source txt, need to updated the language string.
											if (strlen(TranslatedString)!=0)
											{
												printf("ACTION update: argv[4]=%s\n",argv[4]);
												printf("TranslatedString=%s\n",TranslatedString);
												sprintf(fileoutString,"$Zy_%s$%s$\n",argv[4],TranslatedString);
												fputs(fileoutString,fpOutput);
											}else
											{
												//TranslatedString is empty, so no need to update
												fputs(fileinStringtxt,fpOutput);
											}
											write_done = TRUE;
											break;
										}
										//can't find the language in source txt, so just copy.
									case ACTION_CREATE:
										fputs(fileinStringtxt,fpOutput);
										break;
									default:
										printf("\r\n[ERROR]: UnKnown Action");
										goto END_PROCESS;
										break;
								}
								
							}else
							{
								switch (action)
								{
									case ACTION_CREATE:
										printf("argv[4]=%s\n",argv[4]);
										printf("TranslatedString=%s\n",TranslatedString);
										sprintf(fileoutString,"$Zy_%s$%s$\n",argv[4],TranslatedString);
										fputs(fileoutString,fpOutput);
										write_done = TRUE;
										break;
									case ACTION_UPDATE:
										break;
									default:
										printf("\r\n[ERROR]: UnKnown Action");
										goto END_PROCESS;
										break;
								}
								if  (strstr(fileinStringtxt,"$") == NULL)
								{
									fputs(fileinStringtxt,fpOutput);	
								}else
								{
									fseek(fpSourcetxt,position_txt,SEEK_SET);
								}
								break;
							}
							position_txt = ftell(fpSourcetxt);
						}
						if (write_done == FALSE)
						{
							switch (action)
							{
								case ACTION_CREATE:
									printf("argv[4]=%s\n",argv[4]);
									printf("TranslatedString=%s\n",TranslatedString);
									sprintf(fileoutString,"$Zy_%s$%s$\n",argv[4],TranslatedString);
									fputs(fileoutString,fpOutput);
									write_done = TRUE;
									break;
								case ACTION_UPDATE:
									printf("\r\n[ERROR]: Can't find Zy_%s to update string for VarName=%s in %s",argv[4], VarName, srctxtFileName);
									goto END_PROCESS;
									break;
								default:
									printf("\r\n[ERROR]: UnKnown Action");
									goto END_PROCESS;
									break;
							}
						}
					}
				}
			}
		}

		if (fpSourcetxt != NULL)
		{
			fclose(fpSourcetxt);
			fpSourcetxt = NULL;
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
		
	}
	
END_PROCESS:
	if (srcDir != NULL)
		closedir(srcDir);
	if (fpSourcetxt != NULL)
		fclose(fpSourcetxt);
	if (fpSourcexls != NULL)
		fclose(fpSourcexls);
	if (fpOutput != NULL)
		fclose(fpOutput);
	
	
	printf("Process End\r\n");

	return 0;
}

/* change Encode from UTF-8 to HTML encoding (Unicode). */
void ChangeEncode(char* src, char* out)
{
	unsigned char tmp,tmp1,tmp2,tmp3;
	unsigned short encode;
	int ii;

	strcpy(out,"");
	
	for (ii=0; ii<strlen(src); ii++)
	{
		tmp = (unsigned char) src[ii];
		if (tmp < 0x80)
		{
			sprintf(out,"%s%c",out,src[ii]);
		}
		else if ((tmp >= 0x80) && (tmp <= 0xC1))
		{
			printf("Don't know how to process, tmp=%x\r\n",tmp);
		}
		else if ((tmp >= 0xC2) && (tmp <= 0xDF)) /* c2 80 ~ df bf */
		{
			encode = tmp<<8;
			ii++;
			tmp1=src[ii];
			encode = encode | tmp1;

			if (tmp1<0x80 || tmp1 >=0xC0)
			{
				printf("Don't know how to process, tmp=%x, tmp1=%x\r\n",tmp,tmp1);
			}else
			{
				sprintf(out,"%s&#%d;",out,(tmp-0xC2)*0x40+tmp1);
			}
		}
		else if (tmp==0xE0)
		{
			ii++;
			tmp1=src[ii];
			ii++;
			tmp2=src[ii];

			if (tmp1 < 0xA0 || tmp1 >=0xC0)
			{
				printf("Don't know how to process, tmp=%x, tmp1=%x, tmp2=%x\r\n",tmp,tmp1,tmp2);
			}
			else if (tmp2 <0x80 || tmp2>=0xC0)
			{
				printf("Don't know how to process, tmp=%x, tmp1=%x, tmp2=%x\r\n",tmp,tmp1,tmp2);
			}
			else
			{
				sprintf(out,"%s&#%d;",out,0x800+(tmp1-0xA0)*0x40+tmp2-0x80);
			}
		}
		else if (tmp>=0xE1 && tmp<=0xEF)
		{
			ii++;
			tmp1=src[ii];
			ii++;
			tmp2=src[ii];
			if (tmp1 < 0x80 || tmp1 >=0xC0)
			{
				printf("Don't know how to process, tmp=%x, tmp1=%x, tmp2=%x\r\n",tmp,tmp1,tmp2);
			}
			else if (tmp2 <0x80 || tmp2>=0xC0)
			{
				printf("Don't know how to process, tmp=%x, tmp1=%x, tmp2=%x\r\n",tmp,tmp1,tmp2);
			}
			else
			{
				sprintf(out,"%s&#%d;",out, (tmp-0xE0)*0x1000+(tmp1-0x80)*0x40+tmp2-0x80);
			}
		}
		else if (tmp==0xF0)
		{
			ii++;
			tmp1=src[ii];
			ii++;
			tmp2=src[ii];
			ii++;
			tmp3=src[ii];
			if (tmp1<0x90 || tmp1 >=0xC0)
			{
				printf("Don't know how to process, tmp=%x, tmp1=%x, tmp2=%x,tmp3=%x\r\n",tmp,tmp1,tmp2,tmp3);
			}
			else if (tmp2 <0x80 || tmp2>=0xC0)
			{
				printf("Don't know how to process, tmp=%x, tmp1=%x, tmp2=%x,tmp3=%x\r\n",tmp,tmp1,tmp2,tmp3);
			}
			else if (tmp3 <0x80 || tmp3>=0xC0)
			{
				printf("Don't know how to process, tmp=%x, tmp1=%x, tmp2=%x,tmp3=%x\r\n",tmp,tmp1,tmp2,tmp3);
			}
			else
			{
				sprintf(out,"%s&#%d;",out, (0x10000+(tmp1-0x90)*0x1000+(tmp2-0x80)*0x40+tmp3-0x80));
			}
		}
		else if (tmp>=0xF1 && tmp<=0xF4)
		{
			ii++;
			tmp1=src[ii];
			ii++;
			tmp2=src[ii];
			ii++;
			tmp3=src[ii];

			if (tmp1<0x80 || tmp1 >=0xC0)
			{
				printf("Don't know how to process, tmp=%x, tmp1=%x, tmp2=%x,tmp3=%x\r\n",tmp,tmp1,tmp2,tmp3);
			}
			else if (tmp2 <0x80 || tmp2>=0xC0)
			{
				printf("Don't know how to process, tmp=%x, tmp1=%x, tmp2=%x,tmp3=%x\r\n",tmp,tmp1,tmp2,tmp3);
			}
			else if (tmp3 <0x80 || tmp3>=0xC0)
			{
				printf("Don't know how to process, tmp=%x, tmp1=%x, tmp2=%x,tmp3=%x\r\n",tmp,tmp1,tmp2,tmp3);
			}
			else
			{
				sprintf(out,"%s&#%d;",out, ((tmp-0xF0)*0x40000+(tmp1-0x80)*0x1000+(tmp2-0x80)*0x40+tmp3-0x80));
			}
		}
		else
		{
			printf("Don't know how to process, tmp=%x\r\n",tmp);
		}
	}
	return;
}

