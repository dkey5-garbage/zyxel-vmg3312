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

#define MLG_Common		0 
#define MLG_ConnStatus		1 
#define MLG_Maintenance		2 
#define MLG_Menu		3 
#define MLG_NAT		4 
#define MLG_Network		5 
#define MLG_QOS		6 
#define MLG_Security		7 
#define MLG_System		8 
#define MLG_WAN		9 
#define MLG_WLAN		10 
#define MLG_VoIP		11 

extern MAPPING_ITEM *mlg_pre;	
extern int mlg_MappingItemCounter;	
extern char* mlg_not_found;	

extern void mlg_initLanguage();		
extern void mlg_cgiGetValue(char* varName, char* varValue);	
extern int mlg_cgiGetMLScope(char* scope); 	

extern void mlg_initSorting(); 	

#define MLG_naming_prefix 			"MLG_" 	
#define MLG_naming_prefix_end 		"_" 	
