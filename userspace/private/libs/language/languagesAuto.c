#include <stdio.h>	
#include <string.h>	
#include <stdlib.h>	
#include <signal.h>	

#include "CommonMLG.h"	
#include "ConnStatusMLG.h"	
#include "MaintenanceMLG.h"	
#include "MenuMLG.h"	
#include "NATMLG.h"	
#include "NetworkMLG.h"	
#include "QOSMLG.h"	
#include "SecurityMLG.h"	
#include "SystemMLG.h"	
#include "WANMLG.h"	
#include "WLANMLG.h"	
#include "VoIPMLG.h"	

#include "languages.h"	
#include "languagesF.h"	
#include "languagesAuto.h"	

MAPPING_ITEM *mlg_pre = NULL;	
int mlg_MappingItemCounter=0;	
int mlg_UsedLanguage=0;	
char* mlg_not_found;	


void mlg_initLanguage(){	
		if(!mlg_not_found){	
				mlg_not_found = malloc(strlen("(null)")*sizeof(char));	
				strcpy(mlg_not_found,"(null)");	
		}	
				CommonMappingItemMapping();	
				ConnStatusMappingItemMapping();	
				MaintenanceMappingItemMapping();	
				MenuMappingItemMapping();	
				NATMappingItemMapping();	
				NetworkMappingItemMapping();	
				QOSMappingItemMapping();	
				SecurityMappingItemMapping();	
				SystemMappingItemMapping();	
				WANMappingItemMapping();	
				WLANMappingItemMapping();	
				VoIPMappingItemMapping();	
}	


void mlg_initSorting(){	
				mlg_initSortingMappingItem(&CommonMappingItem[0],MAPPING_CommonMappingItem_COUNTER);	
				mlg_initSortingMappingItem(&ConnStatusMappingItem[0],MAPPING_ConnStatusMappingItem_COUNTER);	
				mlg_initSortingMappingItem(&MaintenanceMappingItem[0],MAPPING_MaintenanceMappingItem_COUNTER);	
				mlg_initSortingMappingItem(&MenuMappingItem[0],MAPPING_MenuMappingItem_COUNTER);	
				mlg_initSortingMappingItem(&NATMappingItem[0],MAPPING_NATMappingItem_COUNTER);	
				mlg_initSortingMappingItem(&NetworkMappingItem[0],MAPPING_NetworkMappingItem_COUNTER);	
				mlg_initSortingMappingItem(&QOSMappingItem[0],MAPPING_QOSMappingItem_COUNTER);	
				mlg_initSortingMappingItem(&SecurityMappingItem[0],MAPPING_SecurityMappingItem_COUNTER);	
				mlg_initSortingMappingItem(&SystemMappingItem[0],MAPPING_SystemMappingItem_COUNTER);	
				mlg_initSortingMappingItem(&WANMappingItem[0],MAPPING_WANMappingItem_COUNTER);	
				mlg_initSortingMappingItem(&WLANMappingItem[0],MAPPING_WLANMappingItem_COUNTER);	
				mlg_initSortingMappingItem(&VoIPMappingItem[0],MAPPING_VoIPMappingItem_COUNTER);	
}		


void mlg_cgiGetValue(char* varName, char* varValue){	
		int scope = mlg_cgiGetMLScope(varName);	
		mlg_pre=NULL;	
		switch (scope){	
		case MLG_Common:	
				mlg_pre = &CommonMappingItem[0];	
				mlg_MappingItemCounter = MAPPING_CommonMappingItem_COUNTER;	
				break;		
		case MLG_ConnStatus:	
				mlg_pre = &ConnStatusMappingItem[0];	
				mlg_MappingItemCounter = MAPPING_ConnStatusMappingItem_COUNTER;	
				break;		
		case MLG_Maintenance:	
				mlg_pre = &MaintenanceMappingItem[0];	
				mlg_MappingItemCounter = MAPPING_MaintenanceMappingItem_COUNTER;	
				break;		
		case MLG_Menu:	
				mlg_pre = &MenuMappingItem[0];	
				mlg_MappingItemCounter = MAPPING_MenuMappingItem_COUNTER;	
				break;		
		case MLG_NAT:	
				mlg_pre = &NATMappingItem[0];	
				mlg_MappingItemCounter = MAPPING_NATMappingItem_COUNTER;	
				break;		
		case MLG_Network:	
				mlg_pre = &NetworkMappingItem[0];	
				mlg_MappingItemCounter = MAPPING_NetworkMappingItem_COUNTER;	
				break;		
		case MLG_QOS:	
				mlg_pre = &QOSMappingItem[0];	
				mlg_MappingItemCounter = MAPPING_QOSMappingItem_COUNTER;	
				break;		
		case MLG_Security:	
				mlg_pre = &SecurityMappingItem[0];	
				mlg_MappingItemCounter = MAPPING_SecurityMappingItem_COUNTER;	
				break;		
		case MLG_System:	
				mlg_pre = &SystemMappingItem[0];	
				mlg_MappingItemCounter = MAPPING_SystemMappingItem_COUNTER;	
				break;		
		case MLG_WAN:	
				mlg_pre = &WANMappingItem[0];	
				mlg_MappingItemCounter = MAPPING_WANMappingItem_COUNTER;	
				break;		
		case MLG_WLAN:	
				mlg_pre = &WLANMappingItem[0];	
				mlg_MappingItemCounter = MAPPING_WLANMappingItem_COUNTER;	
				break;		
		case MLG_VoIP:	
				mlg_pre = &VoIPMappingItem[0];	
				mlg_MappingItemCounter = MAPPING_VoIPMappingItem_COUNTER;	
				break;		
		}	
		mlg_search(varName,varValue);	
}		


int mlg_cgiGetMLScope(char* scope){	
		if (strstr(scope,"MLG_Common_"))	
			return MLG_Common; 
		else if (strstr(scope,"MLG_ConnStatus_"))	
			return MLG_ConnStatus; 
		else if (strstr(scope,"MLG_Maintenance_"))	
			return MLG_Maintenance; 
		else if (strstr(scope,"MLG_Menu_"))	
			return MLG_Menu; 
		else if (strstr(scope,"MLG_NAT_"))	
			return MLG_NAT; 
		else if (strstr(scope,"MLG_Network_"))	
			return MLG_Network; 
		else if (strstr(scope,"MLG_QOS_"))	
			return MLG_QOS; 
		else if (strstr(scope,"MLG_Security_"))	
			return MLG_Security; 
		else if (strstr(scope,"MLG_System_"))	
			return MLG_System; 
		else if (strstr(scope,"MLG_WAN_"))	
			return MLG_WAN; 
		else if (strstr(scope,"MLG_WLAN_"))	
			return MLG_WLAN; 
		else if (strstr(scope,"MLG_VoIP_"))	
			return MLG_VoIP; 
		else	{
			fprintf(stderr,"--->scope:%s is not defined in mlg_cgiGetMLScope()! ",scope);	
			return 0;	
		}
}	

