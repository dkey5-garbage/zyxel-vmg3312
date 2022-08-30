#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<sys/types.h>
#include<dirent.h>

extern int MLGxls2txt(int argc, char** argv);
extern int MLGtxt2xls(int argc, char** argv);


#define MAX_LINE_LENGTH 1024
#define MAX_FILENAME_LENGTH 256

/* Action Define */
//#define ACTION_COPY_ONCE 1
//#define ACTION_COPY_FROM_EACH_SOURCE 2

/* 
 * MLGtxt2xls(int argc, char** argv)
 * argv[1]: PATH of source directory
 * argv[2]: PATH of output directory
 */
 /* 
 * MLGxls2txt(int argc, char** argv)
 * argv[1]: PATH of source xls directory
 * argv[2]: PATH of source txt directory
 * argv[3]: PATH of output txt directory
 * argv[4]: inserted language name -> 3 char
 * argv[5]: 0: create new language string, 1: update string 
 */
 /*
 * argc == 4 ---> MLGtxt2xls
 * argv[3] should be txt2xls
 * argc == 7 ---> MLGxls2txt
 * argv[6] should be xls2txt
*/
int main(int argc, char** argv)
{printf("--%s\n",argv[3]);
	if(!strcmp(argv[3],"xls2txtTemplate")){
					printf("--22\n");
			MLGxls2txtTemplate(argc, argv);
	}else{printf("--23\n");
		switch (argc)
		{	
			case 4:
				if (strcmp(argv[3], "txt2xls")==0)
				{
					MLGtxt2xls(argc-1,argv);
				}else
					goto ERROR_PROCESS;			
				break;
			case 7:
				if (strcmp(argv[6], "xls2txt")==0)
				{
					MLGxls2txt(argc-1, argv);
				}else
				{
					goto ERROR_PROCESS;
				}
				break;
			default:
				printf("\r\nparameter number is WRONG");
				goto ERROR_PROCESS;
				break;
		}
	}
	return 0;
ERROR_PROCESS:
	printf("\r\nparameter input is WRONG");
	printf("\r\n\r\n[Usage of MLGFormatTrans]");
	printf("\r\nTranslate from txt to xls");
	printf("\r\n\t./MLGFormatTrans [txt source directory] [xls output directory] txt2xls");
	printf("\r\nTranslate from xls to txtTemplate");
	printf("\r\n\t./MLGFormatTrans [xls source directory] [txt output directory] xls2txtTemplate [3 chars Language name, e.g. Tur, Ger] ");	
	printf("\r\nTranslate from xls to txt");
	printf("\r\n\t./MLGFormatTrans [xls source directory] [txt original source directory] [txt output directory] [3 chars Language name, e.g. Tur, Ger] [Action, 0: create new language string, 1: update string ] xls2txt");
	printf("\r\n");
	return 0;
	
}
