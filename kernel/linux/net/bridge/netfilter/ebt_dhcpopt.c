/*
 *  ebt_dhcpopt
 *
 *	Authors:
 *	Julian Su <julian.su@zyxel.com.tw>
 *
 *  July, 2009
 *
 *  Changes:
 *    Support DHCP option classifier on bridge netfilter
 *    ZyXEL Communications Corp. <julian.su@zyxel.com.tw>
 *    July, 2009
 */

#include <linux/netfilter/x_tables.h>
#include <linux/netfilter_bridge/ebtables.h>
#include <linux/netfilter_bridge/ebt_dhcpopt.h>
#include <linux/netfilter_bridge/ebt_ip.h>
#include <linux/netfilter_bridge/ebt_log.h>
#include <linux/ip.h>
#include <net/ip.h>
#include <linux/in.h>
#include <linux/module.h>

int add_option82_len=0;
char AGinfo[142]={0};
struct tcpudphdr {
	__be16 src;
	__be16 dst;
	__be16 len;
};
/*struct udphdr {
	__be16	source;
	__be16	dest;
	__be16	len;
	__sum16	check;
};*/

struct bootp_pkt {		/* BOOTP packet format */
//	struct iphdr iph;	/* IP header */
//	struct udphdr udph;	/* UDP header */

	u8 op;			/* 1=request, 2=reply */
	u8 htype;		/* HW address type */
	u8 hlen;		/* HW address length */
	u8 hops;		/* Used only by gateways */
	__be32 xid;		/* Transaction ID */
	__be16 secs;		/* Seconds since we started */
	__be16 flags;		/* Just what it says */
	__be32 client_ip;		/* Client's IP address if known */
	__be32 your_ip;		/* Assigned IP address */
	__be32 server_ip;		/* (Next, e.g. NFS) Server's IP address */
	__be32 relay_ip;		/* IP address of BOOTP relay */
	u8 hw_addr[16];		/* Client's HW address */
	u8 serv_name[64];	/* Server host name */
	u8 boot_file[128];	/* Name of boot file */
	__be32 cookie;		/* IP address of BOOTP relay */
	u8 exten[308];		/* DHCP options / BOOTP vendor extensions */
};

/* packet ops */
#define BOOTP_REQUEST	1
#define BOOTP_REPLY	2

#define DHCP_MAGIC		0x63825363
#define DHCP_MARK		0x63825330 //for mark match packet
/* DHCP option codes (partial list) */
#define DHCP_PADDING		0x00
#define DHCP_SUBNET		0x01
#define DHCP_TIME_OFFSET	0x02
#define DHCP_ROUTER		0x03
#define DHCP_TIME_SERVER	0x04
#define DHCP_NAME_SERVER	0x05
#define DHCP_DNS_SERVER		0x06
#define DHCP_LOG_SERVER		0x07
#define DHCP_COOKIE_SERVER	0x08
#define DHCP_LPR_SERVER		0x09
#define DHCP_HOST_NAME		0x0c
#define DHCP_BOOT_SIZE		0x0d
#define DHCP_DOMAIN_NAME	0x0f
#define DHCP_SWAP_SERVER	0x10
#define DHCP_ROOT_PATH		0x11
#define DHCP_IP_TTL		0x17
#define DHCP_MTU		0x1a
#define DHCP_BROADCAST		0x1c
#define DHCP_NTP_SERVER		0x2a
#define DHCP_WINS_SERVER	0x2c
#define DHCP_REQUESTED_IP	0x32
#define DHCP_LEASE_TIME		0x33
#define DHCP_OPTION_OVER	0x34
#define DHCP_MESSAGE_TYPE	0x35
#define DHCP_SERVER_ID		0x36
#define DHCP_PARAM_REQ		0x37
#define DHCP_MESSAGE		0x38
#define DHCP_MAX_SIZE		0x39
#define DHCP_T1			0x3a
#define DHCP_T2			0x3b
#define DHCP_VENDOR		0x3c
#define DHCP_CLIENT_ID		0x3d
#define DHCP_VENDOR_IDENTIFYING	0x7d
#define DHCP_USER_CLASS_ID 0x4d
#define DHCP_END		0xFF
/*DHCP MESSAGE TYPE*/
#define DHCPDISCOVER		1
#define DHCPOFFER		2
#define DHCPREQUEST		3
#define DHCPDECLINE		4
#define DHCPACK			5
#define DHCPNAK			6
#define DHCPRELEASE		7
#define DHCPINFORM		8

#define OPTION_FIELD		0
#define FILE_FIELD		1
#define SNAME_FIELD		2

#define OPT_CODE 0
#define OPT_LEN 1
#define RULE_SIZE 255

#define VENDOR_BRCM_ENTERPRISE_NUMBER     4413
#if 1 // ZyXEL, Hong-Yu
#define VENDOR_ZYXEL_ENTERPRISE_NUMBER    890
#endif
#define VENDOR_ENTERPRISE_LEN             4    /* 4 bytes */
#define VENDOR_IDENTIFYING_INFO_LEN       142
#define VENDOR_IDENTIFYING_OPTION_CODE    125
#define VENDOR_OPTION_CODE_OFFSET         0
#define VENDOR_OPTION_LEN_OFFSET          1
#define VENDOR_OPTION_ENTERPRISE_OFFSET   2
#define VENDOR_OPTION_DATA_OFFSET         6
#define VENDOR_OPTION_DATA_LEN            1
#define VENDOR_OPTION_SUBCODE_LEN         1
#define VENDOR_SUBCODE_AND_LEN_BYTES      2
#if 1 // ZyXEL, Hong-Yu
#define VENDOR_DEVICE_OUI_SUBCODE            1
#define VENDOR_DEVICE_PRODUCT_CLASS_SUBCODE  2
#define VENDOR_DEVICE_MODEL_NAME_SUBCODE     3
#define VENDOR_DEVICE_SERIAL_NUMBER_SUBCODE  4
#define VENDOR_GATEWAY_OUI_SUBCODE           5
#define VENDOR_GATEWAY_PRODUCT_CLASS_SUBCODE 6
#define VENDOR_GATEWAY_MODEL_NAME_SUBCODE    7
#define VENDOR_GATEWAY_SERIAL_NUMBER_SUBCODE 8
#define CLIENT_IDENTIFIER_IAID_INFO_LEN      4
#define CLIENT_IDENTIFIER_IAID_INFO_OFFSET   3
#define CLIENT_IDENTIFIER_TYPE		     255
#define CLIENT_IDENTIFIER_TYPE_LEN	     1
#define VENDOR_DUID_LLT			     1
#define VENDOR_DUID_EN			     2
#define VENDOR_DUID_LL			     3
#define VENDOR_HARDWARE_TYPE		     1
#else
#define VENDOR_DEVICE_OUI_SUBCODE            1
#define VENDOR_DEVICE_SERIAL_NUMBER_SUBCODE  2
#define VENDOR_DEVICE_PRODUCT_CLASS_SUBCODE  3
#define VENDOR_GATEWAY_OUI_SUBCODE           4
#define VENDOR_GATEWAY_SERIAL_NUMBER_SUBCODE 5
#define VENDOR_GATEWAY_PRODUCT_CLASS_SUBCODE 6
#endif
#define VENDOR_IDENTIFYING_FOR_GATEWAY       1
#define VENDOR_IDENTIFYING_FOR_DEVICE        2
#define VENDOR_GATEWAY_OUI_MAX_LEN           6
#define VENDOR_GATEWAY_SERIAL_NUMBER_MAX_LEN 64 
#define VENDOR_GATEWAY_PRODUCT_CLASS_MAX_LEN 64

#define RELAY_AGENT_OPTION_CODE	82
#define AGENT_SPACE		0
#define AGENT_NOSECURITY		0
#define AGENT_SECURITY		1
#define AGENT_CIRCUIT_ID	1
#define AGENT_REMOTE_ID	2
#define AGENT_OPTION_CODE_OFFSET         0
#define AGENT_OPTION_LEN_OFFSET          1
#define AGENT_OPTION_DATA_OFFSET 2
#define AGENT_INFO_LEN       142
#define AGENT_SUBCODE_AND_LEN_BYTES      2


typedef struct cfgOption{
	char option[RULE_SIZE];
	struct cfgOption *next;
}cfgOption;

/************Global Variables************/
int DHCP_KERNEL_DEBUG = 0;  // 0:disable 1:important 2:full
struct bootp_pkt *glb_bootp = NULL;
char *glb_optionValuep = NULL; 	
u8 *glb_atoistrp=NULL;

/* get an option with bounds checking (warning, not aligned). */	

static unsigned char *get_dhcp_option(struct bootp_pkt *packet, int code)
{
	int i, length;
	//static char err[] = "bogus packet, option fields too long."; /* save a few bytes */
	unsigned char *optionptr;
	int over = 0, done = 0, curr = OPTION_FIELD;

	if (packet->cookie != htonl(DHCP_MAGIC)){
		return NULL;
	}
	
	optionptr = packet->exten;
	#if 0
		printk("\n\r packet-exten");	
		for(i=0;i<20;i++){
			printk(" [%2d] %2x",i,packet->exten[i]);	
		}
	#endif
	i = 0;
#if 1 
	length = 1024;
#else
	length = 308;
#endif
	while (!done) {
		if (i >= length) {
			//LOG(LOG_WARNING, err);
			return NULL;
		}
		if (optionptr[i + OPT_CODE] == code) {
			if (i + 1 + optionptr[i + OPT_LEN] >= length) {
				//LOG(LOG_WARNING, err);
				return NULL;
			}
			return optionptr + i + 2;
		}			
		switch (optionptr[i + OPT_CODE]) {
		case DHCP_PADDING:
			i++;
			break;
		case DHCP_OPTION_OVER:
			if (i + 1 + optionptr[i + OPT_LEN] >= length) {
				//LOG(LOG_WARNING, err);
				return NULL;
			}
			over = optionptr[i + 3];
			i += optionptr[OPT_LEN] + 2;
			break;
		case DHCP_END:
			if (curr == OPTION_FIELD && over & FILE_FIELD) {
				optionptr = packet->boot_file;
				i = 0;
				length = 128;
				curr = FILE_FIELD;
			} else if (curr == FILE_FIELD && over & SNAME_FIELD) {
				optionptr = packet->serv_name;
				i = 0;
				length = 64;
				curr = SNAME_FIELD;
			} else done = 1;
			break;
		default:
			i += optionptr[OPT_LEN + i] + 2;
		}
	}
	return NULL;
}

	
int createAGoption(char *AGinfo, char *Circuit, char *Remote)	/* OPTION 82 */
{
	char optionData[AGENT_INFO_LEN], *dataPtr;
	int len, totalLen = 0;
       char productClass[32]={0};
	char ssid[32]={0};
	char NoSecurity[2]={0};

	memset(productClass,0,32);
	memset(ssid,0,32);
	memset(NoSecurity,0,2);
	
	/* optionData[0] = Suboption. */
	optionData[AGENT_OPTION_CODE_OFFSET] = (char)RELAY_AGENT_OPTION_CODE;

	dataPtr = optionData + AGENT_OPTION_DATA_OFFSET;
	
	/* Suboption data. */
	//CIRCUIT_ID = " ProductClass + SSID + IsNoSecurity "
        *dataPtr++ = (char)AGENT_CIRCUIT_ID;

	len = strlen(Circuit);
     	*dataPtr++ = len;
	strncpy(dataPtr, Circuit, len);
	dataPtr += len;
     	totalLen += (len + AGENT_SUBCODE_AND_LEN_BYTES);

   	 //REMOTE_ID = First CPE MACAddress
	
        *dataPtr++ = (char)AGENT_REMOTE_ID;
  	len = strlen(Remote);
     	*dataPtr++ = len;
  	strncpy(dataPtr, Remote, len);
     	dataPtr += len;
    	totalLen += (len + AGENT_SUBCODE_AND_LEN_BYTES);

	/* optionData[1] = totalLen. */
     	optionData[AGENT_OPTION_LEN_OFFSET] = totalLen;
       
     	/* also copy the option code and option len which is not counted in total len */
     	memcpy((void*)AGinfo,(void*)optionData,(totalLen+AGENT_OPTION_DATA_OFFSET));
  return 0;
}

#if 1 //ZyXEL, Elina
static int cmp_option60(char *optval60, char *cfgOption60)
{
	int len;
	cfgOption *cfgopt60;
	char optionData[128];
	bool isInvert = false;
	char *invert_id = NULL;

	memset(optionData, 0, 128);
	if (optval60 == NULL) return -1;

	len = (int)(*((unsigned char *)optval60 - 1));
	strncpy(optionData, optval60, len);
	
	cfgopt60 = (cfgOption *)cfgOption60;
	while(cfgopt60){
		//printk("\n\r cmp_option60  optionData:[%s],cfgopt60->option:[%s]",optionData,cfgopt60->option);

		if( (invert_id = strchr(cfgopt60->option, '!')) != NULL )
				isInvert = true;
		
		if(!isInvert)
		{
			if(!strcmp(cfgopt60->option, optionData))
			{
				//printk("\n\r Match cmp_option60  Match");
				return 0;
			}
		}
		else
		{
			if(strcmp(invert_id+1, optionData))
			{
				//printk("\n\r (invert)Match cmp_option60  Match");
				return 0;
			}
		}
		cfgopt60 = cfgopt60->next;
	}
	return -1;
}

#endif

#if 1 //ZyXEL, Elina
static int cmp_option61(char *optval61, char *cfgOption61)
{	
	int len, type;

	char *dataPtr=NULL;
	char optionData[5][32]={{0},{0},{0},{0},{0}};
	cfgOption *cfgopt61;
	char tmp[128]={0};
	char clientid_cfg[5][32]={{0},{0},{0},{0},{0}};
	char *p_start=NULL, *p_end=NULL;
	int i=0, noItem=0;
	bool allMatch = true; 
	bool lastItem = false;	

	if ((optval61 == NULL) || ((unsigned char) (*optval61) != 0xff)) return -1;

	len = (int)(*((unsigned char *)optval61 - 1));
	dataPtr = optval61 + 1;

	sprintf(optionData[0], "%u", (int)(*((unsigned int *)dataPtr))); // IAID

	dataPtr += CLIENT_IDENTIFIER_IAID_INFO_LEN;
	type = (int) (*(unsigned short *)(dataPtr));
	if (type == VENDOR_DUID_LLT) {
		sprintf(optionData[1], "llt");
		dataPtr += 2;
		sprintf(optionData[2], "%u", *(unsigned short *)(dataPtr));  //hardware type
		dataPtr += 2;
		sprintf(optionData[3], "%u", *(unsigned int *)(dataPtr));  //time
		dataPtr += 4;
			sprintf(optionData[4], "%02x:%02x:%02x:%02x:%02x:%02x", ((unsigned char)(*(dataPtr + 0))), 
			((unsigned char)(*(dataPtr + 1))), ((unsigned char)(*(dataPtr + 2))), 
			((unsigned char)(*(dataPtr + 3))), ((unsigned char)(*(dataPtr + 4))), 
			((unsigned char)(*(dataPtr + 5))));
	} else if (type == VENDOR_DUID_EN) {
		sprintf(optionData[1], "en");
		dataPtr += 2;
		sprintf(optionData[2], "%u", *(unsigned int *)(dataPtr));  //enterprise number
		dataPtr += 4;
		strncpy(optionData[3], dataPtr, len - 11); // 11 = FF+IAID+DUID type+EN		
	} else if (type == VENDOR_DUID_LL) {
		sprintf(optionData[1], "ll");
		dataPtr += 2;
		sprintf(optionData[2], "%u", *(unsigned short *)(dataPtr)); 	  //hardware type
		dataPtr += 2;
		sprintf(optionData[3], "%02x:%02x:%02x:%02x:%02x:%02x", ((unsigned char)(*(dataPtr + 0))), 
			((unsigned char)(*(dataPtr + 1))), ((unsigned char)(*(dataPtr + 2))), 
			((unsigned char)(*(dataPtr + 3))), ((unsigned char)(*(dataPtr + 4))), 
			((unsigned char)(*(dataPtr + 5))));
	} else {
		strncpy(optionData[1], "other", 5);
		strncpy(optionData[2], dataPtr, len - 5); // 5 = FF+IAID
	}

	cfgopt61 = (cfgOption *)cfgOption61;

	while(cfgopt61)
	{

		allMatch = true;
		lastItem = false;
		memset(tmp, 0, sizeof(tmp));
		strcpy(tmp, cfgopt61->option);
		sprintf(tmp, "%s/", tmp);

		if( strstr(tmp, "llt")!=NULL )
			noItem = 5;
		else if(strstr( tmp, "ll")!=NULL )
			noItem = 4;
		else if(strstr( tmp, "en")!=NULL )
			noItem = 4;
		else if(strstr( tmp, "other")!=NULL )
			noItem = 3;
		else
			noItem = 1;  //only IAID

		//printk("\n\r %s %d : noItem[%d]",__FUNCTION__,__LINE__, noItem);

		i = 0;
		p_start = tmp;
		while(i<noItem && (p_end = strstr(p_start, "/"))!=NULL && p_start<(tmp+strlen(tmp)))
		{
			if(p_start != p_end)
				strncpy(clientid_cfg[i], p_start, (size_t) (p_end - p_start));
			else
				strncpy(clientid_cfg[i], "none", 4);

			p_start = p_end +1;
			i++;
		}

		for(i=0;i<noItem;i++)
		{
			if( strncmp(clientid_cfg[i],"none",4) )
			{
				//printk("\n\r %s %d optionData[%d]:[%s]",__FUNCTION__,__LINE__, i, optionData[i]);
				//printk("\n\r %s %d clientid_cfg[%d]:[%s]",__FUNCTION__,__LINE__, i, clientid_cfg[i]);
				if( memcmp(clientid_cfg[i],optionData[i], strlen(optionData[i])) )
				{
					//printk("\n\r %s %d clientid_cfg[%d]:[%s]!= optionData[%d][%s] ",__FUNCTION__,__LINE__, i, clientid_cfg[i], i, optionData[i]);					
					allMatch = false;
				}
			}

			if(i==(noItem-1))
			{
				lastItem = true;
			}

			if(lastItem && allMatch)
			{
				//printk("\n\r Match cmp_option61");
				return 0;
			}		

			memset(clientid_cfg[i], 0, sizeof(clientid_cfg[i]));
		}

		cfgopt61 = cfgopt61->next;
	}
	return -1;
}

#endif

#if 1 //ZyXEL, Elina
static int cmp_option125(char *optval125, char *cfgOption125)
{
	int len, i;
	char *dataPtr=NULL;
	char optionData[5][32]={{0},{0},{0},{0},{0}};
	cfgOption *cfgopt125;
	char vsi_cfg[5][32]={{0},{0},{0},{0},{0}};	
	char tmp[128]={0};
	char *p_start=NULL, *p_end=NULL;
	bool allMatch = true;
	bool lastItem = false;

	if (optval125 == NULL) return -1;

	dataPtr = optval125;
	sprintf(optionData[0], "%d", *(unsigned int*) (dataPtr));

	dataPtr += (VENDOR_ENTERPRISE_LEN + 3);
	len = (int) (*((unsigned char *)dataPtr - 1));
	strncpy(optionData[1], dataPtr, len);
	dataPtr += (len + 2);
	len = (int) (*((unsigned char *)dataPtr - 1));
	strncpy(optionData[2], dataPtr, len);
	dataPtr += (len + 2);
	len = (int) (*((unsigned char *)dataPtr - 1));
	strncpy(optionData[3], dataPtr, len);
	dataPtr += (len + 2);
	len = (int) (*((unsigned char *)dataPtr - 1));
	strncpy(optionData[4], dataPtr, len);

	cfgopt125 = (cfgOption *)cfgOption125;

	while(cfgopt125)
	{		
		allMatch = true;
		lastItem = false;
		memset(tmp, 0, sizeof(tmp));
		strncpy(tmp, cfgopt125->option, strlen(cfgopt125->option));
		sprintf(tmp, "%s/", tmp);

		i = 0;
		p_start = tmp;
		while(i<5 && (p_end = strstr(p_start, "/"))!=NULL && p_start<(tmp+strlen(tmp)))
		{
			if(p_start != p_end)
				strncpy(vsi_cfg[i], p_start, (size_t) (p_end - p_start));
			else
				strncpy(vsi_cfg[i], "none", 4);

			p_start = p_end +1;
			i++;
		}

		for(i=0;i<5;i++)
		{
			//printk("\n\r %s %d optionData[%d][%s] ",__FUNCTION__,__LINE__,i, optionData[i]);
			//printk("\n\r %s %d vsi_cfg[%d]:[%s]",__FUNCTION__,__LINE__, i, vsi_cfg[i]);


			if( strncmp(vsi_cfg[i],"none", 4) )
			{
				if( memcmp(vsi_cfg[i],optionData[i], strlen(optionData[i])) )
				{
					//printk("\n\r %s %d vsi_cfg[%d]:[%s]!= optionData[%d][%s] ",__FUNCTION__,__LINE__, i, vsi_cfg[i], i, optionData[i]);					
					allMatch = false;
				}
			}

			if(i==4)
			{			
				lastItem = true;
			}
			
			if(lastItem && allMatch)
			{
				//printk("\n\r Match cmp_option125");
				return 0;
			}
		
			memset(vsi_cfg[i], 0, sizeof(vsi_cfg[i]));
		}
		cfgopt125 = cfgopt125->next;
	}
	return -1;
}

#endif

 //------------ HexAscii to String-----------------//
 //Example: 41424344 ==> ABCD
static void HexAsciiToString(char *in, char *out){
 	int i;
	char atoistr1[4]={0};
	unsigned long atoistrC[128]={0};
	char cc[4]={0};
	memset(atoistrC,0,sizeof(atoistrC));
	memset(cc,0,sizeof(cc));
	for(i=0; i<(strlen(in)/2); i++){
		memset(atoistr1, 0, sizeof(atoistr1));
		strncpy(atoistr1, in+2*i, 2);
		atoistrC[i] = simple_strtoul(atoistr1, NULL, 16);
		//printk("\n\r HexAsciiToString [%d]:%s->%c",i,atoistr1,atoistrC[i]);
		sprintf(cc, "%c", (int)atoistrC[i]);       //int => char
		strcat(out,cc);
	}
	if(DHCP_KERNEL_DEBUG > 1)
		printk("\n\rHexAsciiToString in:[%s], out:[%s]",in,out);
}
 //Example: 41424344 ==> 0x41 0x42 0x43 0x44
static void HexAsciiToU8(char *in, u8 *out){
 	int i=0;
	char atoistr1[4]={0};
	char cc[4]={0};
	memset(cc,0,sizeof(cc));
	if(DHCP_KERNEL_DEBUG > 1)
		printk("\n\r HexAsciiToU8 in:[%s], out:[",in);
		for(i=0; i<(strlen(in)/2); i++){
			memset(atoistr1, 0, sizeof(atoistr1));
			strncpy(atoistr1, in+2*i, 2);
			*(out+i) = (u8)simple_strtoul(atoistr1, NULL, 16);
			if(DHCP_KERNEL_DEBUG > 1)
				printk(" 0x%02x", *(out+i));
		}
	if(DHCP_KERNEL_DEBUG > 1)
		printk("]");
}


static bool ebt_filter_dhcpopt(const struct sk_buff *skb, const struct xt_match_param *par)
{
	struct ebt_dhcpopt_info *dhcpoptinfo  = (struct ebt_dhcpopt_info *)par->matchinfo;

	struct iphdr _iph, *ih=NULL;
	struct tcpudphdr _ports, *pptr=NULL;
	struct bootp_pkt *_bootp=NULL,*bootp=NULL;
	char optionNum[10]={0}, optionType[10]={0};
	char *option60 = NULL, *option61 = NULL, *option53 = NULL,*option125 = NULL;
	char *optionValue_p=NULL, *atoistr=NULL;
	char optionValue_82[10]={0};
	char option82_circuit_id[64]={0};
	char option82_remote_id[32]={0};
       int i =0 ;
	   
	if((_bootp = glb_bootp) == NULL){ 
		printk("\n _bootp is NULL\n");
		return false;
	}
	if((optionValue_p = glb_optionValuep) == NULL){
		printk("\n optionValue_p is NULL\n");
		return false;
	}
	if((atoistr = glb_atoistrp) == NULL){
		printk("\n atoistr is NULL\n");		
		return false;	
	}

	ih = skb_header_pointer(skb, 0, sizeof(_iph), &_iph);

	if (ih == NULL){		
		return false;
	}
#if 0
	if(DHCP_KERNEL_DEBUG > 1){	
		printk("\n\r data:[%s]",dhcpoptinfo->optionString);
		printk("\n\r\n\r skb->len %d",skb->len);
		printk("\n\r skb->data_len %d",skb->data_len);
		printk("\n\r ih->protocol %d",ih->protocol);
		printk("\n\r ih->ihl %d",ih->ihl);
	}
#endif	
	pptr = skb_header_pointer(skb, ih->ihl*4,
					  sizeof(_ports), &_ports);
	if (pptr == NULL){				
		return false;		
	}
#if 0
	if(DHCP_KERNEL_DEBUG > 1){
		printk("\n\r pptr->len %d",pptr->len);	
	}
#endif	
	memset(_bootp,0,sizeof(struct bootp_pkt));

	bootp = skb_header_pointer(skb, ih->ihl*4 + 8,
					  skb->len - (ih->ihl*4 + 8), _bootp);
	if (bootp == NULL){	
		return false;		
	}
#if 0
	if(DHCP_KERNEL_DEBUG > 1){	
		printk("\n\r bootp->op %d",bootp->op);	
		printk("\n\r bootp->htype %d",bootp->htype);	
		printk("\n\r bootp->hlen %d",bootp->hlen);	
		printk("\n\r bootp->hops %d",bootp->hops);	
		printk("\n\r bootp-exten");	
		for(i=0;i<312;i++){
			printk(" [%2d] %2x",i,bootp->exten[i]);	
		}
	}
#endif	
	/* parse the DHCP packet and find the specified options */
	memset(optionNum,0,10);
	memset(optionType,0,10);
	memset(optionValue_p,0,256);
	memset(optionValue_82,0,sizeof(optionValue_82));
	memset(option82_circuit_id,0,64);
	memset(option82_remote_id,0,32);
	strncpy(optionNum,dhcpoptinfo->optionString,strstr(dhcpoptinfo->optionString,"/")-dhcpoptinfo->optionString);
	strncpy(optionType,(strstr(dhcpoptinfo->optionString,"/")+1),strstr((strstr(dhcpoptinfo->optionString,"/")+1),"/")-(strstr(dhcpoptinfo->optionString,"/")+1));
	strncpy(optionValue_p,(strstr((strstr(dhcpoptinfo->optionString,"/")+1),"/")+1),strlen((strstr((strstr(dhcpoptinfo->optionString,"/")+1),"/")+1)));
/*
	EBT_MATCH -> true
	EBT_NOMATCH -> false
*/
	memset(atoistr,0,128);
	if (strcmp(optionNum, "60") == 0){
		option60 = get_dhcp_option(bootp, DHCP_VENDOR);
		if (option60){
			if(DHCP_KERNEL_DEBUG > 1){
				printk("\n\r Rule String [%s]",dhcpoptinfo->optionString);
				printk("\n\r option Num [%s]",optionNum);
				printk(" Type [%s]",optionType);
				printk(" Value [%s]",optionValue_p);
				printk("\n dump ok \n");
			}			
			if(strcmp(optionType, "str") == 0){				
				if (cmp_option60(option60, optionValue_p) == 0){
					if(DHCP_KERNEL_DEBUG){
						printk("\n\r option60 str match [%s]\n", optionValue_p);
						printk("\n\r !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");	
					}
					return  true;				
				}else{
					char option60_s[128]={0};
					strncpy(option60_s,option60,(int)(*((unsigned char *)option60 - 1)));
					if(DHCP_KERNEL_DEBUG){
						printk("\n\r option60 str no-match Packet[%s] != Rule[%s]", option60_s, optionValue_p);
						printk("\n\r !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");	
					}
					return  false;
				}
			}
			else if(strcmp(optionType,"hex") == 0){
				HexAsciiToString(optionValue_p, atoistr);
				if(memcmp(option60, atoistr, *(option60-1)) == 0){
					if(DHCP_KERNEL_DEBUG){
						printk("\n\r option60 hex match ");
						for(i=0 ; i<*(option60-1); i++){
							printk(" %02x", (u8)*(option60+i));	
						}
					}
					return  true;					
				}else{
					char option60_s[128]={0};
					strncpy(option60_s,option60,(int)(*((unsigned char *)option60 - 1)));
					if(DHCP_KERNEL_DEBUG)
						printk("\n\r option60 hex no-match Packet[%s] != Rule[%s=%s]", option60_s, optionValue_p, atoistr);
					return  false;						
				}
			}else{
				if(DHCP_KERNEL_DEBUG)
					printk("\n\r option60 no-match RuleType error Rule[%s]", dhcpoptinfo->optionString);
				return  false;
			}
		}else{
			//printk("\n\r option60 no-match Packet[NULL] != Rule[%s]", optionValue_p);
			return  false;
		}
	}
	else if (strcmp(optionNum, "61") == 0){			
		option61 = get_dhcp_option(bootp, DHCP_CLIENT_ID);
		if (option61){
			if(DHCP_KERNEL_DEBUG > 1){
				printk("\n\r Rule String [%s]",dhcpoptinfo->optionString);
				printk("\n\r option Num [%s]",optionNum);
				printk(" Type [%s]",optionType);
				printk(" Value [%s]",optionValue_p);
				printk("\n dump ok \n");
			}			
			if(strcmp(optionType, "str") == 0){
				if (cmp_option61(option61, optionValue_p) == 0){
					if(DHCP_KERNEL_DEBUG){
						printk("\n\r option61 str match Rule[%s]", optionValue_p);
						printk(" Packet:");
						for(i=0 ; i<*(option61-1); i++){
							printk(" %02x", (u8)*(option61+i));	
						}
					}
					return  true;					
				}else{
					//char option61_s[128];
					//memset(option61_s,0,sizeof(option61_s));
					//strncpy(option61_s,option61,(int)(*((unsigned char *)option61 - 1)));
					if(DHCP_KERNEL_DEBUG){
						printk("\n\r option61 str no-match Rule[%s]", optionValue_p);
						printk(" Packet: ");

						for(i=0 ; i<*(option61-1); i++){
							printk(" %02x", (u8)*(option61+i));	
						}
					}					
					return  false;					
				}
			}
			else if(strcmp(optionType,"hex") == 0){
				HexAsciiToU8(optionValue_p, atoistr);
				if(memcmp((u8 *)option61, atoistr, *(option61-1)) == 0){
					if(DHCP_KERNEL_DEBUG){
						printk("\n\r option61 hex match ");
						for(i=0 ; i<*(option61-1); i++){
							printk(" %02x", (u8)*(option61+i));	
						}
					}
					return  true;					
				}else{
					if(DHCP_KERNEL_DEBUG){
						printk("\n\r option61 hex no-match Rule[%s]", optionValue_p);
						printk(" Packet:");
						for(i=0 ; i<*(option61-1); i++){
							printk(" %02x", (u8)*(option61+i));	
						}
					}					
					return  false;					
				}
			}else{
				if(DHCP_KERNEL_DEBUG)
					printk("\n\r option61 no-match RuleType error Rule[%s]", dhcpoptinfo->optionString);
				return  false;				
			}
		}else{
			//printk("\n\r option61 no-match Packet[NULL] != Rule[%s]", optionValue_p);
			return  false;
		}
	}
	else if (strcmp(optionNum, "53") == 0){
		
		strncpy(optionValue_82,optionValue_p,strstr(optionValue_p,"/")-optionValue_p);
	       strncpy(option82_circuit_id,(strstr(optionValue_p,"/")+1),strstr((strstr(optionValue_p,"/")+1),"/")-(strstr(optionValue_p,"/")+1));
	       strncpy(option82_remote_id,(strstr((strstr(optionValue_p,"/")+1),"/")+1),strlen((strstr((strstr(optionValue_p,"/")+1),"/")+1)));
		option53 = get_dhcp_option(bootp, DHCP_MESSAGE_TYPE);
		if (option53){
			if(DHCP_KERNEL_DEBUG > 1){
				printk("\n\r Rule String [%s]",dhcpoptinfo->optionString);
				printk("\n\r option Num [%s]",optionNum);
				printk("\n\r Type [%s]",optionType);
				printk("\n\r Value [%s]",optionValue_82);
				printk("\n\r option82_circuit_id [%s]",option82_circuit_id);
				printk("\n\r option82_remote_id [%s]",option82_remote_id);
				printk("\n\r dump ok \n");
			}			
		        if(strcmp(optionType,"hex") == 0){
				HexAsciiToU8(optionValue_p, atoistr);
				if(memcmp((u8 *)option53, atoistr, *(option53-1)) == 0){
                                    memset(AGinfo,0,142);
					//Add option 82 in packet.
					if (createAGoption(AGinfo, option82_circuit_id,option82_remote_id) != -1)
					{
						bootp->cookie = htonl(DHCP_MARK);	//mark match packet
					}
					if(DHCP_KERNEL_DEBUG){
						printk("\n\r option53 hex match ");
						for(i=0 ; i<*(option53-1); i++){
							printk(" %02x", (u8)*(option53+i));	
						}
					}
					return  true;					
				}else{
					if(DHCP_KERNEL_DEBUG){
						printk("\n\r option53 hex no-match Rule[%s]", optionValue_p);
						printk(" Packet:");
						for(i=0 ; i<*(option53-1); i++){
							printk(" %02x", (u8)*(option53+i));	
						}
					}					
					return  false;					
				}
			}else{
				if(DHCP_KERNEL_DEBUG)
					printk("\n\r option53 no-match RuleType error Rule[%s]", dhcpoptinfo->optionString);
				return  false;				
			}
		}else{
			//printk("\n\r option53 no-match Packet[NULL] != Rule[%s]", optionValue_p);
			return  false;
		}
	}
	else if (strcmp(optionNum, "125") == 0){
		option125 = get_dhcp_option(bootp, DHCP_VENDOR_IDENTIFYING);
		if (option125){	
			if(DHCP_KERNEL_DEBUG > 1){
				printk("\n\r Rule String [%s]",dhcpoptinfo->optionString);
				printk("\n\r option Num [%s]",optionNum);
				printk(" Type [%s]",optionType);
				printk(" Value [%s]",optionValue_p);
				printk("\n dump ok \n");
			}			
			if(strcmp(optionType, "str") == 0){
				if (cmp_option125(option125, optionValue_p) == 0){
					if(DHCP_KERNEL_DEBUG){
						printk("\n\r option125 str match Rule[%s]", optionValue_p);
						printk(" Packet:");
						for(i=0 ; i<*(option125-1); i++){
							printk(" %02x", (u8)*(option125+i));	
						}
					}
					return  true;					
				}else{
					//char option125_s[128];
					//memset(option125_s,0,sizeof(option125_s));
					//strncpy(option125_s,option125,(int)(*((unsigned char *)option125 - 1)));
					if(DHCP_KERNEL_DEBUG){
						printk("\n\r option125 str no-match Rule[%s]", optionValue_p);
						printk(" Packet:");
						for(i=0 ; i<*(option125-1); i++){
							printk(" %02x", (u8)*(option125+i));	
						}
					}					
					return  false;					
				}
			}
			else if(strcmp(optionType,"hex") == 0){
				HexAsciiToU8(optionValue_p, atoistr);
				if(memcmp((u8 *)option125, atoistr, *(option125-1)) == 0){
					if(DHCP_KERNEL_DEBUG){
						printk("\n\r option125 hex match ");
						for(i=0 ; i<*(option125-1); i++){
							printk(" %02x", (u8)*(option125+i));	
						}
					}
					return  true;					
				}else{
					if(DHCP_KERNEL_DEBUG){
						printk("\n\r option125 hex no-match Rule[%s]", optionValue_p);
						printk(" Packet:");
						for(i=0 ; i<*(option125-1); i++){
							printk(" %02x", (u8)*(option125+i));	
						}
					}					
					return  false;					
				}
			}else{
				if(DHCP_KERNEL_DEBUG)
					printk("\n\r option125 no-match RuleType error Rule[%s]", dhcpoptinfo->optionString);
				return  false;				
			}
		}else{
			printk("\n\r option125 no-match Packet[NULL] != Rule[%s]", optionValue_p);
			return  false;
		}
	}else if (strcmp(optionNum, "debug") == 0){
			DHCP_KERNEL_DEBUG = simple_strtoul(optionType, NULL, 10);
	}

	return false;
}

static bool ebt_dhcpopt_check(const struct xt_mtchk_param *par)
{

	//return 0;
	return true;
}



static struct xt_match filter_dhcpopt =
{
	.name		= EBT_DHCPOPT_MATCH,
	.revision	= 0,
	.family		= NFPROTO_BRIDGE,
	.match		= ebt_filter_dhcpopt,
	.checkentry	= ebt_dhcpopt_check,
	.matchsize	= XT_ALIGN(sizeof(struct ebt_dhcpopt_info)),
	.me		= THIS_MODULE,
};

static int __init ebt_dhcpopt_init(void)
{
	int ret;
	ret = xt_register_match(&filter_dhcpopt);

	if(ret == 0)
		printk(KERN_INFO "ebt_dhcpopt registered\n");

	glb_bootp = kmalloc(sizeof(struct bootp_pkt),GFP_KERNEL);
	glb_optionValuep = kmalloc(512,GFP_KERNEL);
	glb_atoistrp = kmalloc(128,GFP_KERNEL);	

	return ret;

}

static void __exit ebt_dhcpopt_fini(void)
{
	if(glb_bootp!= NULL){
		kfree(glb_bootp);
		glb_bootp = NULL;
	}
	if(glb_atoistrp!= NULL){
		kfree(glb_atoistrp);
		glb_atoistrp = NULL;
	}
	if(glb_optionValuep!= NULL){
		kfree(glb_optionValuep);
		glb_optionValuep = NULL;
	}

	xt_unregister_match(&filter_dhcpopt);
}

module_init(ebt_dhcpopt_init);
module_exit(ebt_dhcpopt_fini);
MODULE_DESCRIPTION("Ebtables: DHCP option match");
MODULE_LICENSE("GPL");

