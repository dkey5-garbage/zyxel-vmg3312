#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>

#include "languages.h"
#include "languagesAuto.h"
#include "languagesF.h"

void quick_sort(MAPPING_ITEM* mappingItem,int low,int high);

char* mlg_getValue(char** varName){
	char* p_value=NULL;							
	p_value=*(varName+mlg_UsedLanguage);
	if(p_value==NULL){							
		p_value=mlg_not_found;
		fprintf(stderr,"[Multi-Lingual][mlg_getValue]varName=%s,not found!!\n",varName);
	}	
	return p_value;
}

char* mlg_null(){
	return mlg_not_found;
}


void mlg_swap(char** s, char** t){
	char* temp;
	temp=*s;
	*s=*t;
	*t=temp;	
}

void mlg_swap2(char*** s, char*** t){
	char** temp;
	temp=*s;
	*s=*t;
	*t=temp;	
}

int mlg_isLarge(char* t,char* s){
	int i=0,j=0;
	for(i=0,j=0; i < strlen(t) && j < strlen(s); i++,j++ ){
		if(t[i]>s[j])
				return 1;			
		else if(t[i]<s[j])		
				return 0;
	}
	if(strlen(t)>strlen(s))
		return 1;
		
	return 0;
}


void mlg_search(char *varName,char* varValue){ 
	int i=0;
	int found=0;
#if 0	// no need to sorting
	int i=0;
	for (i=0; (i < mlg_MappingItemCounter && mlg_pre!=NULL); i++,mlg_pre++){
		if(strcmp(mlg_pre->varName,varName)==0){
			sprintf(varValue,mlg_getValue(mlg_pre->varValue));
			found=1;
			break;
		}		
	}	
#else // need to sorting
	int low=0;
	int high=mlg_MappingItemCounter-1;
	MAPPING_ITEM *mlg_target = mlg_pre;
	while (low <= high && mlg_target && mlg_pre)                  
	{                                
	    int mid = (low + high) / 2;   
	    mlg_target = mlg_pre + mid;  //fprintf(stderr,"--mid=%d target:%s-- varName=%s\n",mid,mlg_target->varName,varName);                                 
	    if (mlg_target != NULL)
		{ 
			if(strcmp(mlg_target->varName,varName)==0)      
		    {                            
					sprintf(varValue,mlg_getValue(mlg_target->varValue));                        
					found=1;                                                    
					break;                                                
			}                            
		    else if (mlg_isLarge(mlg_target->varName, varName)==1) 
		    {          //fprintf(stderr,"--<<--\n");                  
		        high = mid - 1;   
		    }                            
		    else if (mlg_isLarge(mlg_target->varName, varName)==0) 
		    {          //fprintf(stderr,"-->>--\n");                   
		        low = mid + 1;    
		    }     	    
	    }
	}                        
#endif	
	if(found==0){
		sprintf(varValue,mlg_not_found);      
		fprintf(stderr,"[Multi-Lingual]varName=%s,not found!!\n",varName);
	}
}        


void mlg_initSortingMappingItem(MAPPING_ITEM* mappingItem,int mappingItemCounter){	
	int i=0,j=0,pre=0;;
	char* t;
	char** t1;
// bubble sort
#if 0	
//fprintf(stderr,"[mlg_initSortingMappingItem]mappingItemCounter=%d \n",mappingItemCounter);	
/*
	for(i=0; i<mappingItemCounter; i++){
			for(j=mappingItemCounter-1; j>i; j--){			
				if(mlg_isLarge((mappingItem+j-1)->varName,(mappingItem+j)->varName)==1){
					mlg_swap(&((mappingItem+j-1)->varName),&((mappingItem+j)->varName));					
					mlg_swap2(&((mappingItem+j-1)->varValue),&((mappingItem+j)->varValue));							
				}
			}
	}	
*/
#else 
/* Use quick sort to improve sorting performance
We decrease the sorting time from 13 sec to 1 sec. :P
: Peter.Lee.MitraStar 2012-09-26*/
	quick_sort(&mappingItem[0], 0, mappingItemCounter-1);
#endif	

}


/*this function not consider stack overflow. 
It should not to process large amount data.
: Peter.Lee.MitraStar 2012-09-26*/
#if 0
int quick_sort(MAPPING_ITEM* mappingItem,int low,int high)
{  
   int pivot_point,pivot_item,i,j,temp;  
   char *ptr;


   if(high<=low){return 1;}  

   //choose pivot
   ptr = (mappingItem+low)->varName;  
   j=low;  
    

   for(i=low+1; i<=high; i++) {  
       if( mlg_isLarge((mappingItem+i)->varName,ptr)==1 ) {
	   	continue;		
	   }
       j++;  
	   
		mlg_swap(&((mappingItem+i)->varName),&((mappingItem+j)->varName));					
		mlg_swap2(&((mappingItem+i)->varValue),&((mappingItem+j)->varValue));							
   }
  
   pivot_point=j;  
   mlg_swap(&((mappingItem+low)->varName),&((mappingItem+pivot_point)->varName));					
   mlg_swap2(&((mappingItem+low)->varValue),&((mappingItem+pivot_point)->varValue));							
  //process left part
   quick_sort(&mappingItem[0],low,pivot_point-1);     
  //process right part
   quick_sort(&mappingItem[0],pivot_point+1,high);  
  
   return 1;  
}  
#endif

/*This function is faster then above. 
But it has more times of element swap.
: Peter.Lee.MitraStar 2012-09-26*/
void quick_sort(MAPPING_ITEM* mappingItem,int low,int high)
{
   int i,j,k;
   char *ptr;
   
   if( low < high)
   {
      k = ((low+high) /2);
	  mlg_swap(&((mappingItem+low)->varName),&((mappingItem+k)->varName));					
	  mlg_swap2(&((mappingItem+low)->varValue),&((mappingItem+k)->varValue));							
  
      //choose pivot
      ptr = (mappingItem+low)->varName;  
	  
      i = low+1;
      j = high;
      while(i <= j)
      {  	  	
	  	 //compare pivot and element 
         while((i <= high) && ( mlg_isLarge(ptr,(mappingItem+i)->varName)==1 ) )
                i++;
         while((j >= low) && ( mlg_isLarge((mappingItem+j)->varName,ptr)==1 ) )
                j--;
		 
         if( i < j)  {
			  mlg_swap(&((mappingItem+i)->varName),&((mappingItem+j)->varName));					
			  mlg_swap2(&((mappingItem+i)->varValue),&((mappingItem+j)->varValue));						              
         }
      }
      // swap two elements
	   mlg_swap(&((mappingItem+low)->varName),&((mappingItem+j)->varName));					
	   mlg_swap2(&((mappingItem+low)->varValue),&((mappingItem+j)->varValue));							
    
      // recursively sort the lesser list
	  //process left part
	  quick_sort(&mappingItem[0],low,j-1);     
	  //process right part
	  quick_sort(&mappingItem[0],j+1,high);  

   }
}
          



