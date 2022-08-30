#include<stdio.h>	
#include<string.h>	
#include<stdlib.h>	
#include<time.h>	
#include "languages.h"	



char* MLG_Menu_ARPTable[] = {
	"ARP table",
	"ARP tablosu"
	};

char* MLG_Menu_Broadband[] = {
	"Broadband",
	"Geni&#351;bant"
	};

char* MLG_Menu_Certificates[] = {
	"Certificates",
	"Sertifikalar"
	};

char* MLG_Menu_UsbService[] = {
	"USB Service",
	"USB Servisi"
	};

char* MLG_Menu_Configuration[] = {
	"Configuration",
	"Yap&#305;land&#305;rma"
	};

char* MLG_Menu_userAccount[] = {
	"User Account",
	"Kullan&#305;c&#305; Hesab&#305;"
	};

char* MLG_Menu_ConnectionSattus[] = {
	"Connection Status",
	"Ba&#287;lant&#305; Durumu"
	};

char* MLG_Menu_Diagnostic[] = {
	"Diagnostic",
	"Tan&#305;lama"
	};

char* MLG_Menu_PingTracerouteNslookup[] = {
	"Ping&Traceroute&Nslookup",
	"Ping, Traceroute ve Nslookup"
	};

char* MLG_Menu_DNSSetting[] = {
	"DNS",
	"DNS"
	};

char* MLG_Menu_Firewall[] = {
	"Firewall",
	"G&#252;venlik Duvar&#305;"
	};

char* MLG_Menu_FirmwareUpgrade[] = {
	"Firmware Upgrade",
	"Yaz&#305;l&#305;m G&#252;ncelleme"
	};

char* MLG_Menu_HomeNetworking[] = {
	"Home Networking",
	"Ev A&#287;&#305;"
	};

char* MLG_Menu_IGMPGroupStatus[] = {
	"IGMP/MLD Group Status",
	"IGMP Grup Durumu"
	};

char* MLG_Menu_IGMPSetting[] = {
	"IGMP Setting",
	"IGMP Ayar&#305;"
	};

char* MLG_Menu_InterfaceGroup[] = {
	"Interface Group",
	"Aray&#252;z Grubu"
	};

char* MLG_Menu_IPSecVPN[] = {
	"IPSec VPN",
	"IPSec VPN"
	};

char* MLG_Menu_Log[] = {
	"Log",
	"G&#252;nl&#252;k"
	};

char* MLG_Menu_LogSetting[] = {
	"Log Setting",
	"G&#252;nl&#252;k Ayar&#305;"
	};

char* MLG_Menu_MACFilter[] = {
	"MAC Filter",
	"MAC Filtresi"
	};

char* MLG_Menu_Maintenance[] = {
	"Maintenance",
	"Bak&#305;m"
	};

char* MLG_Menu_NAT[] = {
	"NAT",
	"NAT"
	};

char* MLG_Menu_NetworkMap[] = {
	"Home",
	"Ana Sayfa"
	};

char* MLG_Menu_NetworkSetting[] = {
	"Network Setting",
	"A&#287; Ayar&#305;"
	};

char* MLG_Menu_ParentalControl[] = {
	"Parental Control",
	"Ebeveyn Kontrol&#252;"
	};

char* MLG_Menu_QoS[] = {
	"QoS",
	"QoS"
	};

char* MLG_Menu_Reboot[] = {
	"Reboot",
	"Yeniden ba&#351;lat"
	};

char* MLG_Menu_RemoteMGMT[] = {
	"Remote MGMT",
	"Uzaktan MGMT"
	};

char* MLG_Menu_Routing[] = {
	"Routing",
	"Y&#246;nlendirme"
	};

char* MLG_Menu_SchedulerRules[] = {
	"Scheduler Rules",
	"Zamanlay&#305;c&#305; Kurallar&#305;"
	};

char* MLG_Menu_Security[] = {
	"Security",
	"G&#252;venlik"
	};

char* MLG_Menu_ServiceControl[] = {
	"Service Control",
	"Hizmet Denetimi"
	};

char* MLG_Menu_SystemMonitor[] = {
	"System Monitor",
	"Sistem Monit&#246;r&#252;"
	};

char* MLG_Menu_Tab_3GBackup[] = {
	"3G Backup",
	"3G Yedekleme"
	};

char* MLG_Menu_Tab_5thEthernetPort[] = {
	"5th Ethernet port",
	"5. Ethernet portu"
	};

char* MLG_Menu_Tab_8021x[] = {
	"802.1x",
	"802.1x"
	};

char* MLG_Menu_Tab_Advanced[] = {
	"Advanced",
	"Geli&#351;mi&#351;"
	};

char* MLG_Menu_Tab_ALG[] = {
	"ALG",
	"ALG"
	};

char* MLG_Menu_Tab_NATLoopback[] = {
	"NATLoopback",
	"NATLoopback"
	};

char* MLG_Menu_Tab_Applications[] = {
	"Applications",
	"Uygulamalar"
	};

char* MLG_Menu_Tab_AutoWanDetect[] = {
	"Auto IPoE/PPPoE Detect",
	"Otomatik IPoE / PPPoE Alg&#305;lama"
	};

char* MLG_Menu_Tab_Broadband[] = {
	"Broadband",
	"Geni&#351;bant"
	};


char* MLG_Menu_Tab_UsbFileShare[] = {
	"File Sharing",
	"Dosya Payla&#351;&#305;m&#305;"
	};

char* MLG_Menu_Tab_UsbMediaServer[] = {
	"Media Server",
	"Medya Sunucusu"
	};

char* MLG_Menu_Tab_UsbPrintServer[] = {
	"Print Server",
	"Yazd&#305;rma Sunucusu"
	};


char* MLG_Menu_Tab_CFM[] = {
	"802.1ag",
	"802.1ag"
	};

char* MLG_Menu_Tab_Configuration[] = {
	"Configuration",
	"Yap&#305;land&#305;rma"
	};

char* MLG_Menu_Tab_ConnStatus[] = {
	"Connection Status",
	"Ba&#287;lant&#305; Durumu"
	};

char* MLG_Menu_Tab_ConnStatusStatus[] = {
	"Status",
	"Durum"
	};

char* MLG_Menu_Tab_ConnStatusVirtualDevice[] = {
	"Virtual Device",
	"Sanal Ayg&#305;t"
	};

char* MLG_Menu_Tab_DMZ[] = {
	"DMZ",
	"DMZ"
	};

char* MLG_Menu_Tab_DNSEntry[] = {
	"DNS Entry",
	"DNS Girdisi"
	};

char* MLG_Menu_Tab_DSL[] = {
	"DSL",
	"DSL"
	};

char* MLG_Menu_Tab_DynamicDns[] = {
	"Dynamic DNS",
	"Dinamik DNS"
	};

char* MLG_Menu_Tab_EmailNotification[] = {
	"Email Notification",
	"E-posta Bildirimi"
	};

char* MLG_Menu_Tab_FileSharing[] = {
	"File Sharing",
	"Dosya Payla&#351;&#305;m&#305;"
	};

char* MLG_Menu_Tab_FirewallACL[] = {
	"Access Control",
	"Eri&#351;im Kontrol&#252;"
	};

char* MLG_Menu_Tab_FirewallGeneral[] = {
	"General",
	"Genel"
	};

char* MLG_Menu_Tab_FirewallProtocol[] = {
	"Protocol",
	"Hizmet"
	};

char* MLG_Menu_Tab_Dos[] = {
	"DoS",
	"DoS"
	};

char* MLG_Menu_Tab_FirmwareUpgrade[] = {
	"Firmware Upgrade",
	"Yaz&#305;l&#305;m G&#252;ncelleme"
	};

char* MLG_Menu_Tab_General[] = {
	"General",
	"Genel"
	};

char* MLG_Menu_Tab_IGMPACL[] = {
	"IGMP ACL",
	"IGMP ACL"
	};

char* MLG_Menu_Tab_IGMPFilter[] = {
	"IGMP Filter",
	"IGMP Filtresi"
	};

char* MLG_Menu_Tab_IGMPGroup[] = {
	"IGMP Group",
	"IGMP Grubu"
	};

char* MLG_Menu_Tab_IGMPStatistics[] = {
	"IGMP Statistics",
	"IGMP &#304;statistikleri"
	};

char* MLG_Menu_Tab_InterfaceGrouping[] = {
	"Interface Grouping",
	"Grup aray&#252;zleri"
	};

char* MLG_Menu_Tab_IPSecVPNMonitor[] = {
	"Monitor",
	"&#304;zle "
	};

char* MLG_Menu_Tab_IPSecVPNSetting[] = {
	"Settings",
	"Ayarlar"
	};

char* MLG_Menu_Tab_LANSetup[] = {
	"LAN Setup",
	"Yerel A&#287; Kurulumu"
	};

char* MLG_Menu_Tab_LANVLAN[] = {
	"LAN VLAN",
	"LAN VLAN"
	};

char* MLG_Menu_Tab_LocalCertificates[] = {
	"Local Certificates",
	"Yerel Sertifikalar"
	};

char* MLG_Menu_Tab_MediaServer[] = {
	"Media Server",
	"Medya Sunucusu"
	};

char* MLG_Menu_Tab_NatAddressMapping[] = {
	"Address Mapping",
	"Adres E&#351;le&#351;tirme"
	};

char* MLG_Menu_Tab_OAMPing[] = {
	"OAM Ping",
	"OAM Ping"
	};

char* MLG_Menu_Tab_PingTraceRouteNsLookup[] = {
	"Ping & Trace Route & NsLookup",
	"Ping & Trace Route ve Nslookup"
	};

char* MLG_Menu_Tab_PolicyForwarding[] = {
	"PolicyForwarding",
	"Kurall&#305; Y&#246;nlendirme"
	};

char* MLG_Menu_Tab_PortForwarding[] = {
	"Port Forwarding",
	"Port Y&#246;nlendirme"
	};

char* MLG_Menu_Tab_PortTriggering[] = {
	"Port Triggering",
	"Port Tetikleme"
	};

char* MLG_Menu_Tab_PrintServer[] = {
	"Print Server",
	"Yazd&#305;rma Sunucusu"
	};

char* MLG_Menu_Tab_QoSClassSetup[] = {
	"Class Setup",
	"S&#305;n&#305;f Kurulumu"
	};

char* MLG_Menu_Tab_QoSGeneral[] = {
	"General",
	"Genel"
	};

char* MLG_Menu_Tab_QoSMonitor[] = {
	"Monitor",
	"&#304;zle "
	};

char* MLG_Menu_Tab_QoSPolicerSetup[] = {
	"Policer Setup",
	"Kural Kurulumu"
	};

char* MLG_Menu_Tab_QoSQueueSetup[] = {
	"Queue Setup",
	"Kuyruk Kurulumu"
	};

char* MLG_Menu_Tab_Reboot[] = {
	"Reboot",
	"Yeniden ba&#351;lat"
	};

char* MLG_Menu_Tab_SecurityLog[] = {
	"Security Log",
	"G&#252;venlik G&#252;nl&#252;&#287;&#252;"
	};

char* MLG_Menu_Tab_Sessions[] = {
	"Sessions",
	"Oturumlar"
	};

char* MLG_Menu_Tab_SNMP[] = {
	"SNMP Agent",
	"SNMP Agent&#39;&#305;"
	};

char* MLG_Menu_Tab_StaticDHCP[] = {
	"Static DHCP",
	"Statik DHCP"
	};

char* MLG_Menu_Tab_additionalSubnet[] = {
	"Additional Subnet",
	"Ek Alt a&#287;"
	};


char* MLG_Menu_Tab_DynamicRoute[] = {
	"Dynamic Route",
	"Dinamik Rota"
	};

char* MLG_Menu_Tab_StaticRoute[] = {
	"Static Route",
	"Statik Y&#246;nlendirme"
	};

char* MLG_Menu_Tab_STBVendorID[] = {
	"STB Vendor ID",
	"STB Sa&#287;lay&#305;c&#305;s&#305; ID"
	};

char* MLG_Menu_Tab_SystemLog[] = {
	"System Log",
	"Sistem G&#252;nl&#252;&#287;&#252;"
	};

char* MLG_Menu_Tab_TR064[] = {
	"TR-064",
	"TR-064"
	};

char* MLG_Menu_Tab_TR069[] = {
	"TR-069 Client",
	"TR-069 &#304;stemci"
	};

char* MLG_Menu_Tab_TrafficStatusHPNA[] = {
	"HPNA",
	"HPNA"
	};

char* MLG_Menu_Tab_TrafficStatusLAN[] = {
	"LAN",
	"Yerel A&#287;"
	};

char* MLG_Menu_Tab_RemoteMGMT[] = {
	"Remote MGMT",
	"Uzaktan MGMT"
	};

char* MLG_Menu_Tab_TrustDomain[] = {
	"Trust Domain",
	"Güvenilir Alan"
	};

char* MLG_Menu_Tab_TrafficStatusWAN[] = {
	"WAN",
	"WAN"
	};

char* MLG_Menu_Tab_TrustedCA[] = {
	"Trusted CA",
	"G&#252;venilir CA"
	};

char* MLG_Menu_Tab_Upnp[] = {
	"UPnP",
	"UPnP"
	};

char* MLG_Menu_Tab_UserConfiguration[] = {
	"Users Configuration",
	"Kullan&#305;c&#305; Yap&#305;land&#305;rmas&#305;"
	};

char* MLG_Menu_Tab_MoreAp[] = {
	"More AP",
	"Daha fazla AP"
	};

char* MLG_Menu_Tab_WlanAdvanced[] = {
	"Others",
	"Di&#287;er"
	};

char* MLG_Menu_Tab_ChannelStatus[] = {
	"Channel Status",
	"Kanal Durumu"
	};


char* MLG_Menu_Tab_WlanGeneralSetup[] = {
	"General",
	"Genel"
	};

char* MLG_Menu_Tab_WlanMACAuthentication[] = {
	"MAC Authentication",
	"MAC Kimlik Do&#287;rulama"
	};

char* MLG_Menu_Tab_WlanWDS[] = {
	"WDS",
	"WDS"
	};

char* MLG_Menu_Tab_WlanWMM[] = {
	"WMM",
	"WMM"
	};

char* MLG_Menu_Tab_WlanWPS[] = {
	"WPS",
	"WPS"
	};

char* MLG_Menu_TimeSetting[] = {
	"Time",
	"S&#252;re "
	};

char* MLG_Menu_TR069Client[] = {
	"tr069Client",
	"tr069&#304;stemci"
	};

char* MLG_Menu_PacketCapture[] = {
	"Packet Capture",
	"Packet Capture"
	};

char* MLG_Menu_TraficStatus[] = {
	"Traffic Status",
	"Trafik Durumu"
	};

char* MLG_Menu_RouteTable[] = {
	"Routing Table",
	"Y&#246;nlendirme Tablosu"
	};

char* MLG_Menu_Wireless[] = {
	"Wireless",
	"Kablosuz"
	};

char* MLG_Menu_xDSLStatistics[] = {
	"xDSL Statistics",
	"xDSL &#304;statistikleri"
	};

char* MLG_Menu_Tab_IPSecVPNSetup[] = {
	"Setup",
	"Kurulum"
	};

char* MLG_Menu_Tab_EthernetWAN[] = {
	"Ethernet WAN",
	"Ethernet WAN"
	};

char* MLG_Menu_voip[] = {
	"VoIP",
	"VoIP"
	};

char* MLG_Menu_voipStatus[] = {
	"VoIP Status",
	"VoIP Status"
	};

char* MLG_Menu_3gStatistics[] = {
	"3G Statistics",
	"3G Statistics"
	};

char* MLG_Menu_voipSIP[] = {
	"SIP",
	"SIP"
	};

char* MLG_Menu_voipPhone[] = {
	"Phone",
	"Telefon"
	};

char* MLG_Menu_voipCallRule[] = {
	"Call Rule",
	"Call Rule"
	};

char* MLG_Menu_voipCallHistory[] = {
	"Call History",
	"Call History"
	};

char* MLG_Menu_voipLineTest[] = {
	"Line Test",
	"Line Test"
	};

char* MLG_Menu_voipSIPAccount[] = {
	"SIP Account",
	"SIP Account"
	};

char* MLG_Menu_voipSIPProvider[] = {
	"SIP Service Provider",
	"SIP Service Provider"
	};

char* MLG_Menu_voipRegion[] = {
	"region",
	"region"
	};

char* MLG_Menu_voipSpeedDial[] = {
	"speedDial",
	"speedDial"
	};

char* MLG_Menu_voipCHSummary[] = {
	"Call History Summary",
	"Call History Summary"
	};

char* MLG_Menu_voipCHOutgoing[] = {
	"Call History Outgoing",
	"Call History Outgoing"
	};

char* MLG_Menu_voipCHIncoming[] = {
	"Call History Incoming",
	"Call History Incoming"
	};

char* MLG_Menu_voipLTGR909[] = {
	"GR909",
	"GR909"
	};

char* MLG_Menu_EthStatistics[] = {
	"EtherWAN Statistics",
	"EtherWAN &#304;statistikleri"
	};

MAPPING_ITEM MenuMappingItem[139];
