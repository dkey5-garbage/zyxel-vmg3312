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

void writeCFunction(int argc, char** argv,FILE *fpOutputAutoC);

#define pre_arg_num	2

int main(int argc, char** argv)
{
	FILE *fpSource=NULL;
	char  filename_tmp[MAX_FILENAME_LENGTH];
	char filename_basetmp[MAX_FILENAME_LENGTH];
	char fileinString[MAX_LINE_LENGTH], fileoutString[MAX_LINE_LENGTH];
	FILE *fpOutputAutoC=NULL;	
	FILE *fpOutputAutoH=NULL;		
	int i=0,tokenCnt=0;
	char *tmp;

   if(argc<3){
   		fprintf(stderr,"the arugment is not enough!! exit.\n");
   		return 0;
   }else{   	
   		tokenCnt = argc-pre_arg_num;
		for(i=0;i<tokenCnt;i++){
			fprintf(stderr,"	tokenName=%s \n",argv[i+pre_arg_num]);
		}
   }
   		
   fprintf(stderr,"	tokenCnt=%d \n",tokenCnt);

	/* file open for multiple language output */
	sprintf(filename_basetmp,"%s",argv[1]);
	
	sprintf(filename_tmp,"%s.c",filename_basetmp);
	fpOutputAutoC = fopen(filename_tmp,"w");
	if (fpOutputAutoC== NULL)
	{
		printf("Can't open output C file: %s\r\n", filename_tmp);
		goto END_PROCESS;
	}	
	sprintf(filename_tmp,"%s.h",filename_basetmp);
	fpOutputAutoH = fopen(filename_tmp,"w");
	if (fpOutputAutoH== NULL)
	{
		printf("Can't open output C file: %s\r\n", filename_tmp);
		goto END_PROCESS;
	}	
	
/*auto.c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>	
*/
	fputs("#include <stdio.h>	\n",fpOutputAutoC);
	fputs("#include <string.h>	\n",fpOutputAutoC);
	fputs("#include <stdlib.h>	\n",fpOutputAutoC);
	fputs("#include <signal.h>	\n\n",fpOutputAutoC);



	for(i=0;i<tokenCnt;i++){
		/*auto.h
			#include "voipMLG.h"
		*/
		sprintf(fileoutString,"#include \"%sMLG.h\" \n",argv[i+pre_arg_num],i);		  
		fputs(fileoutString,fpOutputAutoH);	
	}
	fputs("\n",fpOutputAutoH);

	for(i=0;i<tokenCnt;i++){
		/*auto.c
			#include "voipMLG.h"		
		*/
		sprintf(fileoutString,"#include \"%sMLG.h\"	\n",argv[i+pre_arg_num]);
		fputs(fileoutString,fpOutputAutoC);		
		
		/*auto.h
		  #define MLG_voip 0
		  */
		sprintf(fileoutString,"#define MLG_%s		%d \n",argv[i+pre_arg_num],i);		  
		fputs(fileoutString,fpOutputAutoH);						
	}
/* auto.c
#include "languages.h"
#include "languagesF.h"
#include "languagesAuto.h"
MAPPING_ITEM *mlg_pre = NULL;
int mlg_MappingItemCounter=0;
int mlg_UsedLanguage=0;
char* mlg_not_found;
*/
	fputs("\n",fpOutputAutoC);
	fputs("#include \"languages.h\"	\n",fpOutputAutoC);
	fputs("#include \"languagesF.h\"	\n",fpOutputAutoC);
	fputs("#include \"languagesAuto.h\"	\n\n",fpOutputAutoC);		
	fputs("MAPPING_ITEM *mlg_pre = NULL;	\n",fpOutputAutoC);			
	fputs("int mlg_MappingItemCounter=0;	\n",fpOutputAutoC);			
	fputs("int mlg_UsedLanguage=0;	\n",fpOutputAutoC);			
	fputs("char* mlg_not_found;	\n\n",fpOutputAutoC);		
	writeCFunction(argc, argv, fpOutputAutoC);


/*auto.h
extern MAPPING_ITEM *mlg_pre;
extern int mlg_MappingItemCounter;
extern char* mlg_not_found;
extern void mlg_initLanguage();	//implement by myself
extern void mlg_cgiGetValue(char* varName, char* varValue);//implement by myself
extern int mlg_cgiGetMLScope(char* scope); //implement by myself
extern void mlg_initSorting();

#define MLG_naming_prefix 			"MLG_"
#define MLG_naming_prefix_end 		"_"
*/
	fputs("\n",fpOutputAutoH);
	fputs("extern MAPPING_ITEM *mlg_pre;	\n",fpOutputAutoH);
	fputs("extern int mlg_MappingItemCounter;	\n",fpOutputAutoH);
	fputs("extern char* mlg_not_found;	\n\n",fpOutputAutoH);
	fputs("extern void mlg_initLanguage();		\n",fpOutputAutoH);
	fputs("extern void mlg_cgiGetValue(char* varName, char* varValue);	\n",fpOutputAutoH);
	fputs("extern int mlg_cgiGetMLScope(char* scope); 	\n\n",fpOutputAutoH);
	fputs("extern void mlg_initSorting(); 	\n\n",fpOutputAutoH);
	fputs("#define MLG_naming_prefix 			\"MLG_\" 	\n",fpOutputAutoH);
	fputs("#define MLG_naming_prefix_end 		\"_\" 	\n",fpOutputAutoH);

	
END_PROCESS:
	/* file close*/
	if (fpOutputAutoH!=NULL)
		fclose(fpOutputAutoH);

	if (fpOutputAutoC != NULL){
		fclose(fpOutputAutoC);		
	}
	
	printf("Process Module %s End\r\n",argv[1]);
	return 0;
}

void writeCFunction(int argc, char** argv,FILE *fpOutputAutoC){
int i=0,tokenCnt=argc-2;
char fileoutString[MAX_LINE_LENGTH]={0};
/*
	void mlg_initLanguage(){
	if(!mlg_not_found){
		mlg_not_found = malloc(strlen("(null)")*sizeof(char));
		strcpy(mlg_not_found,"(null)");
	}
*/	
	fputs("\n",fpOutputAutoC);
	fputs("void mlg_initLanguage(){	\n",fpOutputAutoC);
	fputs("\t	if(!mlg_not_found){	\n",fpOutputAutoC);
	fputs("\t\t		mlg_not_found = malloc(strlen(\"(null)\")*sizeof(char));	\n",fpOutputAutoC);
	fputs("\t\t		strcpy(mlg_not_found,\"(null)\");	\n",fpOutputAutoC);
	fputs("\t	}	\n",fpOutputAutoC);
	for(i=0;i<tokenCnt;i++){
		/* 	if(!voipMappingItem[0].varName)
		voipMappingItemMapping();		*/
		//sprintf(fileoutString,"\t	if(!%sMappingItem[0].varName)	\n",argv[i+pre_arg_num]);
		//fputs(fileoutString,fpOutputAutoC);	
		sprintf(fileoutString,"\t\t		%sMappingItemMapping();	\n",argv[i+pre_arg_num]);
		fputs(fileoutString,fpOutputAutoC);	
	}
	fputs("}	\n\n",fpOutputAutoC);		
	
	
	fputs("\n",fpOutputAutoC);
	fputs("void mlg_initSorting(){	\n",fpOutputAutoC);		
	for(i=0;i<tokenCnt;i++){
		sprintf(fileoutString,"\t\t		mlg_initSortingMappingItem(&%sMappingItem[0],MAPPING_%sMappingItem_COUNTER);	\n",argv[i+pre_arg_num],argv[i+pre_arg_num]);
		fputs(fileoutString,fpOutputAutoC);		
	}
	fputs("}		\n\n",fpOutputAutoC);	
		
	
/*
void mlg_cgiGetValue(char* varName, char* varValue){
	//cmsLog_error("Enter");
	int scope = mlg_cgiGetMLScope(varScope);
	mlg_pre=NULL;
	switch (scope){	
*/
	fputs("\n",fpOutputAutoC);
	fputs("void mlg_cgiGetValue(char* varName, char* varValue){	\n",fpOutputAutoC);
	fputs("\t	int scope = mlg_cgiGetMLScope(varName);	\n",fpOutputAutoC);
	fputs("\t	mlg_pre=NULL;	\n",fpOutputAutoC);
	fputs("\t	switch (scope){	\n",fpOutputAutoC);	
	for(i=0;i<tokenCnt;i++){
		/* 	
		case MLG_voip:
			mlg_pre = &voipMappingItem[0];
			mlg_MappingItemCounter = MAPPING_voipMappingItem_COUNTER;
			break;		
		*/
		sprintf(fileoutString,"\t	case MLG_%s:	\n",argv[i+pre_arg_num]);
		fputs(fileoutString,fpOutputAutoC);		
		sprintf(fileoutString,"\t\t		mlg_pre = &%sMappingItem[0];	\n",argv[i+pre_arg_num]);
		fputs(fileoutString,fpOutputAutoC);		
		sprintf(fileoutString,"\t\t		mlg_MappingItemCounter = MAPPING_%sMappingItem_COUNTER;	\n",argv[i+pre_arg_num]);
		fputs(fileoutString,fpOutputAutoC);				
		fputs("\t\t		break;		\n",fpOutputAutoC);			
	}
	/*
		}	
		mlg_search(varName,varValue);
		//cmsLog_error("Exit");	
	}	
	*/
	fputs("\t	}	\n",fpOutputAutoC);	
	fputs("\t	mlg_search(varName,varValue);	\n",fpOutputAutoC);	
	fputs("}		\n\n",fpOutputAutoC);		

/*
int mlg_cgiGetMLScope(char* scope){
*/
	fputs("\n",fpOutputAutoC);
	fputs("int mlg_cgiGetMLScope(char* scope){	\n",fpOutputAutoC);
	char tmp_if[10]={0};
	for(i=0;i<tokenCnt;i++){
		/*		if(!strcmp(scope,"voip"))
		return MLG_voip;		*/
		if(i==0)
			strcpy(tmp_if,"if");
		else
			strcpy(tmp_if,"else if");
		
		sprintf(fileoutString,"\t	%s (strstr(scope,\"MLG_%s_\"))	\n",tmp_if,argv[i+pre_arg_num]);
		fputs(fileoutString,fpOutputAutoC);			
		sprintf(fileoutString,"\t\t	return MLG_%s; \n",argv[i+pre_arg_num]);
		fputs(fileoutString,fpOutputAutoC);			
	}
	fputs("\t	else	{\n",fpOutputAutoC); 
	fputs("\t\t	fprintf(stderr,\"--->scope:%s is not defined in mlg_cgiGetMLScope()! \",scope);	\n",fpOutputAutoC); 	
	fputs("\t\t	return 0;	\n",fpOutputAutoC); 		
	fputs("\t\t}\n",fpOutputAutoC); 		
	fputs("}	\n\n",fpOutputAutoC); 	
}

