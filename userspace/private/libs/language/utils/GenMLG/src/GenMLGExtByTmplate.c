#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>

#define MAX_LINE_LENGTH 2048
#define MAX_FILENAME_LENGTH 256


#define debug 0
#define db(out,str,var) ({		\
	if(debug)					\
		fprintf(out,str,var);	\
})	

int main(int argc, char** argv)
{
	FILE *fpSource=NULL;
	char  filename_tmp[MAX_FILENAME_LENGTH];
	char filename_basetmp[MAX_FILENAME_LENGTH];
	char fileinString[MAX_LINE_LENGTH], fileoutString[MAX_LINE_LENGTH];
	FILE *fpOutputAuto=NULL;	
	int i=0,tokenCnt=0;
	char *tmp;

   if(argc<3){
   		fprintf(stderr,"the arugment is not enough!! exit.\n");
   		return 0;
   }else{   	
   		tokenCnt = argc-3;
		for(i=0;i<tokenCnt;i++){
			fprintf(stderr,"	tokenName=%s \n",argv[i+3]);
		}
   }
   		
   fprintf(stderr,"	tokenCnt=%d \n",tokenCnt);


	/* file open for multiple language source *MLG.txt */
	if ((strlen(argv[1])+8)>MAX_FILENAME_LENGTH)
	{
		printf("Source FILENAME LENGTH is too long\r\n");
		goto END_PROCESS;
	}
	sprintf(filename_tmp,"%s",argv[1]);
	fpSource = fopen(filename_tmp,"r");
	if (fpSource == NULL)
	{
		printf("Can't Find Source file: %s\r\n", filename_tmp);
		goto END_PROCESS;
	}   

	/* file open for multiple language output */
	sprintf(filename_basetmp,"%s",argv[2]);
	
	sprintf(filename_tmp,"%s",filename_basetmp);
	fpOutputAuto = fopen(filename_tmp,"w");
	if (fpOutputAuto== NULL)
	{
		printf("Can't open output C file: %s\r\n", filename_tmp);
		goto END_PROCESS;
	}	

	/* Start parsing source txt file */
	while(fgets(fileinString,MAX_LINE_LENGTH,fpSource))
	{
		if ((tmp = strstr(fileinString,"$Zy_token")) != NULL)
		{
			char* start=NULL;
			char* end=NULL;
			char temp[256]={0};
			strcpy(temp,fileinString);
												db(stderr,"---line=%s--\n",temp);
			strcpy(fileoutString,"");				
			sprintf(fileoutString,fileinString);
			start=temp;
			end = strchr(temp,'$'); 			db(stderr,"---1-%s-\n",start);
			if(end!=NULL){
				*end='\0';						db(stderr,"---2-%s-\n",start);
				strcpy(fileoutString,start);	
				start=++end;
				start=start+strlen("Zy_token");	db(stderr,"---3-%s-\n",start);
				end=strchr(start,'$');	
				if(end!=NULL){
					*end='\0';					db(stderr,"--4--%s--\n",argv[atoi(start)+2]);
					strcat(fileoutString,argv[atoi(start)+2]);
				}
				start=++end;
				strcat(fileoutString,start);	db(stderr,"---5-%s-\n",fileoutString);
			}
			fputs(fileoutString,fpOutputAuto);
		}else
			fputs(fileinString,fpOutputAuto);
	}

	
END_PROCESS:
	/* file close*/
	if (fpSource!=NULL)
		fclose(fpSource);

	if (fpOutputAuto != NULL){
		fclose(fpOutputAuto);		
	}
	
	printf("Process Module %s End\r\n",argv[2]);
	return 0;
}
