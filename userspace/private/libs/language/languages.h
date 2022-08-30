/* Auto Generate by "web-2.0.0/src/languages/GenLangH.c" */

#ifndef _LANGUAGES_H
#define _LANGUAGES_H

#define LANGUAGE_ENG	0
#define LANGUAGE_TUR	1
#define LANGUAGE_END	2

#define LANGUAGE_ALL	5

extern int mlg_UsedLanguage;

#define LANGUAGE_ENABLE	3
#define LANGUAGE_CODE	{"Eng", "Tur", "Ger", "Fre", "Ita"}

typedef struct {    
		char *varName; 
		char **varValue;
}MAPPING_ITEM;   

#endif
