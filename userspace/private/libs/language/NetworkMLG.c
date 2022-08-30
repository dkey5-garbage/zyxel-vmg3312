#include<stdio.h>	
#include<string.h>	
#include<stdlib.h>	
#include<time.h>	
#include "languages.h"	


char* MLG_Network_General_Str1[] = {
	"A wireless network name (also known as SSID) and a security level are basic elements to start a wireless service. It is recommended to set a security level other than No Security to protect your data from unauthorized access or damage via wireless network.",
	"Bir kablosuz a&#287; ad&#305; (SSID) ve g&#252;venlik d&#252;zeyi, bir kablosuz hizmeti ba&#351;latman&#305;n temel &#246;&#287;eleridir. Verilerinizi yetkisiz eri&#351;im ya da kablosuz a&#287; &#252;zerinden hasara kar&#351;&#305; korumak i&#231;in G&#252;venlik Yok d&#305;&#351;&#305;nda bir g&#252;venlik d&#252;zeyi belirlemeniz tavsiye edilir."
	};

char* MLG_Network_General_Str2[] = {
	"Wireless Network Setup",
	"Kablosuz A&#287; Kurulumu"
	};

char* MLG_Network_5thEthernetPort_Str1[] = {
	"You can convert your Ethernet WAN port to LAN port, or restore the LAN port to WAN port.",
	"WAN portunuzu Yerel A&#287; portuna  veya Yerel A&#287; portunu WAN portuna &#231;evirebilirsiniz. "
	};

char* MLG_Network_5thEthernetPort_Str2[] = {
	"LAN Port",
	"Yerel A&#287; Portu"
	};

char* MLG_Network_5thEthernetPort_Str3[] = {
	"WAN Port",
	"WAN Portu"
	};

char* MLG_Network_5thEthernetPort_Str4[] = {
	"Auto-Detect",
	"Otomatik Alg&#305;lama"
	};

char* MLG_Network_DNSEntry_Str1[] = {
	"DNS Entry",
	"DNS Kayd&#305;"
	};

char* MLG_Network_DNSEntry_Str2[] = {
	"Domain Name System (DNS) translates hostnames into IP addresses for the purpose of locating and addressing these devices worldwide. You can start by adding a new DNS entry.",
	"Alan Ad&#305; Sistemi (DNS), d&#252;nya genelindeki adres ,host isimlerini IP adreslerine &#231;evirir. Yeni bir DNS kayd&#305; ekleyerek ba&#351;layabilirsiniz."
	};

char* MLG_Network_DNSEntry_Note[] = {
	" The hostnames needs combination of the host's local name with its domain's name. For example, Mycomputer.home consists of a local hostname (Mycomputer) and the domain name (home).",
	"(null)"
	};

char* MLG_Network_Domain_Name[] = {
	"Domain Name",
	"Alan Ad&#305;"
	};


char* MLG_Network_Dynamic_RoutingType[] = {
	"Dynamic Routing Type",
	"Dinamik Y&#246;nlendirme Tipi"
	};

char* MLG_Network_Dynamic_Str1[] = {
	"Version 1",
	"S&#252;r&#252;m 1"
	};

char* MLG_Network_Dynamic_Str2[] = {
	"Version 2",
	"S&#252;r&#252;m 2"
	};

char* MLG_Network_Dynamic_Str3[] = {
	"off",
	"kapal&#305;"
	};

char* MLG_Network_DNSEntry_Str3[] = {
	"Add new DNS entry",
	"Yeni DNS kayd&#305; ekle"
	};

char* MLG_Network_DNSEntry_Str4[] = {
	"Hostname",
	"Host Ad&#305;"
	};

char* MLG_Network_DNSEntry_Str5[] = {
	"Source",
	"Kaynak"
	};

char* MLG_Network_DNSEntry_Str6[] = {
	"DNS Entry Edit",
	"DNS Kayd&#305; D&#252;zenle"
	};

char* MLG_Network_DNSEntry_Str7[] = {
	"DNS Entry Delete",
	"DNS Kayd&#305; Sil"
	};

char* MLG_Network_DNSEntry_Str8[] = {
	"Host Name",
	"Host Ad&#305;:"
	};

char* MLG_Network_DNSEntry_AlertMsg_Str1[] = {
	"Host Name {{1}} is invalid.",
	"{{1}} Host Ad&#305; ge&#231;ersiz."
	};

char* MLG_Network_DNSEntry_AlertMsg_Str2[] = {
	"Address {{1}} is invalid IP address.",
	"{{1}} adresi ge&#231;ersiz bir IP adresidir."
	};

char* MLG_Network_DNSEntry_AlertMsg_Str3[] = {
	"Duplicate static lease information! Please check the host name or IP address.",
	"Tekrarlanm&#305;&#351; statik kira bilgilsi! L&#252;tfen Host ad&#305;n&#305; veya IP adresini kontrol ediniz."
	};

char* MLG_Network_DNSEntry_AlertMsg_Str4[] = {
	"This will delete the item. Please confirm this step.",
	"Bu, &#246;&#287;eyi silecektir. L&#252;tfen bu ad&#305;m&#305; onaylay&#305;n&#305;z."
	};

char* MLG_Network_DynamicDNS_Str1[] = {
	"Dynamic DNS",
	"Dinamik DNS"
	};

char* MLG_Network_DynamicDNS_Str2[] = {
	"Dynamic DNS can update your current dynamic IP into a hostname. Use the settings to set up dynamic DNS information.",
	"Dinamik DNS, mevcut dinamik IP&#39; nizi bir host ad&#305; olarak g&#252;ncelleyebilir. Dinamik DNS bilgilerini d&#252;zenlemek i&#231;in ayarlar&#305; kullan&#305;n&#305;z."
	};

char* MLG_Network_DynamicDNS_Str3[] = {
	"DynamicDNS Configuration",
	"Dinamik DNS Yap&#305;land&#305;rmas&#305;"
	};

char* MLG_Network_DynamicDNS_Str4[] = {
	"Dynamic DNS",
	"Dinamik DNS"
	};

char* MLG_Network_DynamicDNS_Setup[] = {
	"Dynamic DNS Setup",
	"Dinamik DNS Kurulumu"
	};

char* MLG_Network_DynamicDNS_Str5[] = {
	"Service Provider",
	"Servis Sa&#287;lay&#305;c&#305;"
	};

char* MLG_Network_DynamicDNS_Str6[] = {
	"Key",
	"Anahtar"
	};

char* MLG_Network_DynamicDNS_Str7[] = {
	"(The settings in this screen are invalid if you select this.)",
	"(Bunu se&#231;meniz durumunda, bu ekrandaki ayarlar ge&#231;ersiz olacakt&#305;r.)"
	};


char* MLG_Network_DynamicDNS_Str8[] = {
	"Hostname",
	"Host Ad&#305;"
	};

char* MLG_Network_DynamicDNS_Str9[] = {
	"Email",
	"E-posta"
	};

char* MLG_Network_DynamicDNS_Str10[] = {
	"www.DynDNS.com",
	"www.DynDNS.com"
	};

char* MLG_Network_DynamicDNS_Str11[] = {
	"TZO",
	"TZO"
	};

char* MLG_Network_DynamicDNS_Str12[] = {
	"Add new DNS route",
	"Yeni DNS yolu ekle"
	};

char* MLG_Network_DynamicDNS_Str13[] = {
	"A DNS route entry defines a policy for the device to forward particular DNS query to a specific WAN interface.",
	"DNS y&#246;nlendirme, k&#305;smi DNS sorgular&#305;n&#305; WAN aray&#252;z&#252;ne iletmek i&#231;in policy olu&#351;turma i&#351;lemidir."
	};

char* MLG_Network_DynamicDNS_Str14[] = {
	"freedns.afraid.org",
	"freedns.afraid.org"
	};

char* MLG_Network_DynamicDNS_Str15[] = {
	"www.zoneedit.com",
	"www.zoneedit.com"
	};

char* MLG_Network_DynamicDNS_Str16[] = {
	"www.no-ip.com",
	"www.no-ip.com"
	};

char* MLG_Network_DynamicDNS_Str17[] = {
	"GnuDIP",
	"GnuDIP"
	};

char* MLG_Network_DynamicDNS_AlertMsg_Str1[] = {
	"Empty Username.",
	"Bo&#351; Kullan&#305;c&#305; Ad&#305;."
	};

char* MLG_Network_DynamicDNS_AlertMsg_Str2[] = {
	"Invalid Email.",
	"Ge&#231;ersiz E-posta."
	};

char* MLG_Network_DynamicDNS_AlertMsg_Str3[] = {
	"Empty Password.",
	"Bo&#351; &#350;ifre."
	};

char* MLG_Network_DynamicDNS_AlertMsg_Str4[] = {
	"Invalid Key.",
	"Ge&#231;ersiz Anahtar."
	};


char* MLG_Network_DynamicDNS_AlertMsg_Str5[] = {
	"Empty Hostname.",
	"Bo&#351; Host Ad&#305;."
	};

char* MLG_Network_DynamicDNS_AlertMsg_Str6[] = {
	"settings are invalid when disabled",
	"devre d&#305;&#351;&#305; b&#305;rak&#305;ld&#305;&#287;&#305;nda ayarlar ge&#231;ersizdir"
	};

char* MLG_Network_DynamicDNS_AlertMsg_Str7[] = {
	"Please specify service provider and account info.",
	"(null)"
	};

char* MLG_Network_DynamicDNS_AlertMsg_Str8[] = {
	"Empty Server name.",
	"(null)"
	};

char* MLG_Network_DynamicDNS_AlertMsg_Str9[] = {
	"Not allow spaces in Hostname, Username and Password !!",
	"Host Ad&#305;, Kullan&#305;c&#305; Ad&#305; ve &#350;ifre bo&#351;luk izin vermez !!"
	};

char* MLG_Network_IGMPACL_Str1[] = {
	"IGMP ACL is used to control the access of channels on your multimedia devices. You can allow or block specific channel.",
	"IGMP ACL, multimedya cihazlar&#305;n&#305;zdaki kanallar&#305;n eri&#351;im kontrol&#252; i&#231;in kullan&#305;l&#305;r. Belirli bir kanala izin verebilir ya da engelleyebilirsiniz."
	};

char* MLG_Network_IGMPACL_Str10[] = {
	"Multicast IP Mask",
	"Multicast IP Maskesi"
	};

char* MLG_Network_IGMPACL_Str2[] = {
	"IGMP Multicast ACL",
	"IGMP Multicast ACL"
	};

char* MLG_Network_IGMPACL_Str3[] = {
	"IGMP ACL List",
	"IGMP ACL Listesi"
	};

char* MLG_Network_IGMPACL_Str4[] = {
	"Black List",
	"Kara Liste"
	};

char* MLG_Network_IGMPACL_Str5[] = {
	"White List",
	"Beyaz Liste"
	};

char* MLG_Network_IGMPACL_Str6[] = {
	"Add a new rule",
	"Yeni bir policy ekle"
	};

char* MLG_Network_IGMPACL_Str7[] = {
	"IGMP ACL Configuration",
	"IGMP ACL Yap&#305;land&#305;rmas&#305;"
	};

char* MLG_Network_IGMPACL_Str8[] = {
	"Please insert a new entry for IGMP ACL.",
	"L&#252;tfen IGMP ACL i&#231;in yeni bir kay&#305;t giriniz."
	};

char* MLG_Network_IGMPACL_Str9[] = {
	"Multicast IP Address",
	"Multicast IP Adresi"
	};

char* MLG_Network_IGMPFilter_AlertMsg_Str1[] = {
	"Please enter a valid group",
	"L&#252;tfen ge&#231;erli bir grup giriniz."
	};

char* MLG_Network_IGMPFilter_Str1[] = {
	"IGMP Filter is used to control the access of your multimedia devices. Max channels 0 means no limitation.",
	"IGMP Filtresi, multimedya cihazlar&#305;n&#305;z&#305;n eri&#351;im kontrol&#252; i&#231;in kullan&#305;l&#305;r. Maksimum kanal 0, herhangi bir s&#305;n&#305;rlama yok anlam&#305;na gelir."
	};

char* MLG_Network_IGMPFilter_Str10[] = {
	"LAN Host",
	"Yerel A&#287; Host Ad&#305;"
	};

char* MLG_Network_IGMPFilter_Str11[] = {
	"LAN Host IP",
	"Yerel A&#287; host IP"
	};

char* MLG_Network_IGMPFilter_Str12[] = {
	"Type",
	"T&#252;r"
	};

char* MLG_Network_IGMPFilter_Str13[] = {
	"IGMP Enabled",
	"IGMP Etkin"
	};

char* MLG_Network_IGMPFilter_Str14[] = {
	"Max Allowed Channel",
	"Maksimum &#304;zin Verilen Kanal "
	};

char* MLG_Network_IGMPFilter_Str15[] = {
	"Multicast service",
	"Multicast hizmeti"
	};

char* MLG_Network_IGMPFilter_Str16[] = {
	"add a new service",
	"yeni bir hizmet ekle "
	};

char* MLG_Network_IGMPFilter_Str17[] = {
	"Service Name",
	"Hizmet Ad&#305;"
	};

char* MLG_Network_IGMPFilter_Str18[] = {
	"Multicast Group",
	"Multicast Grubu"
	};

char* MLG_Network_IGMPFilter_Str19[] = {
	"STB Max Channels",
	"STB Maksimum Kanal "
	};

char* MLG_Network_IGMPFilter_Str2[] = {
	"LAN Interface",
	"Yerel A&#287; Aray&#252;z&#252;"
	};

char* MLG_Network_IGMPFilter_Str20[] = {
	"Non-STB max Channels",
	"STB&#39; siz Maksimum Kanal "
	};

char* MLG_Network_IGMPFilter_Str21[] = {
	"Add a new host limitation",
	"Yeni bir host s&#305;n&#305;rlamas&#305; ekle"
	};

char* MLG_Network_IGMPFilter_Str22[] = {
	"LAN IP",
	"Yerel A&#287; IP"
	};

char* MLG_Network_IGMPFilter_Str23[] = {
	"IGMP Service Domain Configuration",
	"IGMP Hizmet Alan&#305; Yap&#305;land&#305;rmas&#305;"
	};

char* MLG_Network_IGMPFilter_Str24[] = {
	"Please enter the setting for a new IGMP service domain.",
	"Yeni bir IGMP hizmet alan&#305; i&#231;in ayar&#305; giriniz."
	};

char* MLG_Network_IGMPFilter_Str25[] = {
	"Maximum active channels for STB",
	"STB i&#231;in maksimum aktif kanal"
	};

char* MLG_Network_IGMPFilter_Str26[] = {
	"Maximum active channels for non-STB",
	"STB&#39; siz i&#231;in maksimum aktif kanal"
	};

char* MLG_Network_IGMPFilter_Str27[] = {
	"Group List",
	"Grup Listesi"
	};

char* MLG_Network_IGMPFilter_Str28[] = {
	"Add a group",
	"Grup ekle "
	};

char* MLG_Network_IGMPFilter_Str29[] = {
	"Group",
	"Grupla"
	};

char* MLG_Network_IGMPFilter_Str3[] = {
	"Allow IGMP packets from Ethernet interface",
	"Ethernet ara y&#252;z&#252;nden IGMP paketlerine izin ver"
	};

char* MLG_Network_IGMPFilter_Str30[] = {
	"IGMP Service Domain Group Add",
	"IGMP Hizmet Alan&#305; Grubu Ekle"
	};

char* MLG_Network_IGMPFilter_Str31[] = {
	"Please enter the multicast group and the mask. Mask is in CIDR format(e.g. 224.10.10.0/24).",
	"Multicast ve maskesini girin. Maske, CIDR format&#305;ndad&#305;r (&#246;rn. 224.10.10.0/24)."
	};

char* MLG_Network_IGMPFilter_Str32[] = {
	"Multicast Group",
	"Multicast Grubu"
	};

char* MLG_Network_IGMPFilter_Str33[] = {
	"IGMP Service Domain Host Configuration",
	"IGMP Hizmet Alan&#305; Yap&#305;land&#305;rmas&#305;"
	};

char* MLG_Network_IGMPFilter_Str34[] = {
	"Please insert a new entry for host limitation in a service domain.",
	"L&#252;tfen hizmet alan&#305;na host s&#305;n&#305;rlamas&#305; i&#231;in yeni bir kay&#305;t giriniz."
	};

char* MLG_Network_IGMPFilter_Str4[] = {
	"Allow IGMP packets from WiFi interface",
	"WiFi aray&#252;z&#252;nden IGMP paketlerine izin ver"
	};

char* MLG_Network_IGMPFilter_Str5[] = {
	"LAN Ethernet Port",
	"Yerel A&#287; Ethernet Portu"
	};

char* MLG_Network_IGMPFilter_Str6[] = {
	"Allow IGMP packets from Ethernet LAN port1",
	"Ethernet Yerel A&#287; port1&#39; den IGMP paketlerine izin ver"
	};

char* MLG_Network_IGMPFilter_Str7[] = {
	"Allow IGMP packets from Ethernet LAN port2",
	"Ethernet Yerel A&#287; port2&#39; den IGMP paketlerine izin ver"
	};

char* MLG_Network_IGMPFilter_Str8[] = {
	"Allow IGMP packets from Ethernet LAN port3",
	"Ethernet Yerel A&#287; port3&#39; den IGMP paketlerine izin ver"
	};

char* MLG_Network_IGMPFilter_Str9[] = {
	"Allow IGMP packets from Ethernet LAN port4",
	"Ethernet Yerel A&#287; port4&#39; den IGMP paketlerine izin ver"
	};

char* MLG_Network_IGMPGeneral_Str1[] = {
	"The Internet Group Management Protocol (IGMP) is a communication protocol which can be used for more efficient use of online streaming video.",
	"Internet Grup Y&#246;netimi Protokol&#252; (IGMP), &#231;evrimi&#231;i video ak&#305;&#351;&#305;n&#305;n daha etkin kullan&#305;m&#305; i&#231;in kullan&#305;labilecek bir ileti&#351;im protokol&#252;d&#252;r."
	};

char* MLG_Network_IGMPGeneral_Str10[] = {
	"Ignore IGMP leave without router alert option",
	"Y&#246;nlendirici uyar&#305; se&#231;ene&#287;i olmayan IGMP iznini yoksay"
	};

char* MLG_Network_IGMPGeneral_Str11[] = {
	"Ignore IGMP query without router alert option",
	"Y&#246;nlendirici uyar&#305; se&#231;ene&#287;i olmayan IGMP sorgusunu yoksay"
	};

char* MLG_Network_IGMPGeneral_Str12[] = {
	"Ignore IGMP query which destination IP is not 224.0.0.1",
	"Hedef IP&#39; si 224.0.0.1 olmayan IGMP sorgusunu yoksay"
	};

char* MLG_Network_MLDProxy[] = {
	"MLD Proxy",
	"MLD Proxy"
	};

char* MLG_Network_IGMPGeneral_Str2[] = {
	"IGMP Proxy State",
	"IGMP Proxy Durumu"
	};

char* MLG_Network_IGMPGeneral_Str3[] = {
	"IGMP Proxy State",
	"IGMP Proxy Durumu"
	};

char* MLG_Network_IGMPGeneral_Str4[] = {
	"Query Interval",
	"Sorgu Aral&#305;&#287;&#305;"
	};

char* MLG_Network_IGMPGeneral_Str5[] = {
	"Query Response Interval",
	"Sorgu Yan&#305;t Aral&#305;&#287;&#305;"
	};

char* MLG_Network_IGMPGeneral_Str6[] = {
	"Robustness Value",
	"Sa&#287;laml&#305;k De&#287;eri"
	};

char* MLG_Network_IGMPGeneral_Str7[] = {
	"IGMP Packet Process",
	"IGMP Paket S&#252;reci"
	};

char* MLG_Network_IGMPGeneral_Str8[] = {
	"Ignore IGMP packets not from LAN subnet",
	"Yerel A&#287; alt a&#287;&#305;ndan olmayan IGMP paketlerini yoksay"
	};

char* MLG_Network_IGMPGeneral_Str9[] = {
	"Ignore IGMP report without router alert option",
	"Y&#246;nlendirici uyar&#305; se&#231;ene&#287;i olmayan IGMP raporunu yoksay"
	};

char* MLG_Network_InterfaceGrouping_AlertMsg_Str1[] = {
	"Max rule entry is 32.",
	"Maksimum kural giri&#351;i 32."
	};

char* MLG_Network_InterfaceGrouping_AlertMsg_Str10[] = {
	"Hardware type interval {{1}}  should be between 0 and 65535",
	"Donan&#305;m tipi aral&#305;&#287;&#305; {{1}} 0 ile 65535 aras&#305;nda olmal&#305;d&#305;r"
	};

char* MLG_Network_InterfaceGrouping_AlertMsg_Str11[] = {
	"Invalid Client-Identifier",
	"Ge&#231;ersiz &#304;stemci-Kimlik"
	};

char* MLG_Network_InterfaceGrouping_AlertMsg_Str12[] = {
	"Enterprise number interval {{1}}  should be between 0 and 65535",
	"Kurumsal say&#305; aral&#305;&#287;&#305; {{1}} 0 ile 65535 aras&#305;nda olmal&#305;d&#305;r"
	};

char* MLG_Network_InterfaceGrouping_AlertMsg_Str13[] = {
	"Invalid Client-Identifier",
	"Ge&#231;ersiz &#304;stemci-Kimlikleyici"
	};

char* MLG_Network_InterfaceGrouping_AlertMsg_Str14[] = {
	"Source MAC address {{1}} is invalid.",
	"Kaynak MAC adresi {{1}} ge&#231;ersiz."
	};

char* MLG_Network_InterfaceGrouping_AlertMsg_Str15[] = {
	"Hardware type interval {{1}}  should be between 0 and 65535",
	"Donan&#305;m tipi aral&#305;&#287;&#305; {{1}} 0 ile 65535 aras&#305;nda olmal&#305;d&#305;r"
	};

char* MLG_Network_InterfaceGrouping_AlertMsg_Str16[] = {
	"Invalid DUID value",
	"Ge&#231;ersiz DUID de&#287;eri"
	};

char* MLG_Network_InterfaceGrouping_AlertMsg_Str17[] = {
	"The DHCP option 125 is selected, but one or more than one value is invalid.",
	"DHCP se&#231;ene&#287;i 125 se&#231;ili, ancak bir veya birden fazla de&#287;er ge&#231;ersiz."
	};

char* MLG_Network_InterfaceGrouping_AlertMsg_Str18[] = {
	"Enterprise number interval {{1}}  should be between 0 and 65535",
	"Kurumsal say&#305; aral&#305;&#287;&#305; {{1}} 0 ile 65535 aras&#305;nda olmal&#305;d&#305;r"
	};

char* MLG_Network_InterfaceGrouping_AlertMsg_Str19[] = {
	"At least one criterion must be specified.",
	"En az bir kriter belirtilmelidir."
	};

char* MLG_Network_InterfaceGrouping_AlertMsg_Str2[] = {
	"The source MAC address is selected, but the input value is invalid.",
	"Kaynak MAC adresi se&#231;ili, ancak giri&#351; de&#287;eri ge&#231;ersiz."
	};

char* MLG_Network_InterfaceGrouping_AlertMsg_Str20[] = {
	"Need to provide a valid Group Name &#39;A non empty string of characters.&#39;",
	"&#39;Karakterler aras&#305;nda bo&#351;luk olmayan&#39; Ge&#231;erli bir Grup Ad&#305; sa&#287;laman&#305;z gerekir."
	};

char* MLG_Network_InterfaceGrouping_AlertMsg_Str21[] = {
	"Please enter the group name without special characters.",
	"L&#252;tfen &#246;zel karakter i&#231;ermeyen grup ad&#305;n&#305; girin."
	};

char* MLG_Network_InterfaceGrouping_AlertMsg_Str22[] = {
	"Configure interface grouping failed. Group name {{1}} cannot set the object",
	"Aray&#252;z&#252; gruplama yap&#305;land&#305;rmas&#305;  ba&#351;ar&#305;s&#305;z. Grup ad&#305; {{% s}} nesneyi ayarlayam&#305;yor "
	};

char* MLG_Network_InterfaceGrouping_AlertMsg_Str3[] = {
	"Source MAC address {{1}} is invalid.",
	"Kaynak MAC adresi {{1}} ge&#231;ersiz."
	};

char* MLG_Network_InterfaceGrouping_AlertMsg_Str4[] = {
	"The DHCP option 60 is selected, but the input value is invalid.",
	"DHCP se&#231;ene&#287;i 60 se&#231;ili, ancak giri&#351; de&#287;eri ge&#231;ersiz."
	};

char* MLG_Network_InterfaceGrouping_AlertMsg_Str5[] = {
	"The DHCP option 61 is selected, but one or more than one value is invalid.",
	"DHCP se&#231;ene&#287;i 125 se&#231;ili, ancak bir veya birden fazla de&#287;er ge&#231;ersiz."
	};

char* MLG_Network_InterfaceGrouping_AlertMsg_Str6[] = {
	"Hardware type interval {{1}}  should be between 0 and 2147483647",
	"Donan&#305;m tipi aral&#305;&#287;&#305; {{1}} 0 ve 2147483647 aras&#305;nda olmal&#305;d&#305;r"
	};

char* MLG_Network_InterfaceGrouping_AlertMsg_Str7[] = {
	"Invalid Client-Identifier",
	"Ge&#231;ersiz &#304;stemci-Kimlikleyici"
	};

char* MLG_Network_InterfaceGrouping_AlertMsg_Str8[] = {
	"Link-layer address {{1}} is invalid.",
	"Ba&#287;lant&#305; katman&#305; adresi {{1}} ge&#231;ersiz."
	};

char* MLG_Network_InterfaceGrouping_AlertMsg_Str9[] = {
	"Hardware type interval {{1}}  should be between 0 and 4294967295",
	"Donan&#305;m tipi aral&#305;&#287;&#305; {{1}} 0 ve 4294967295 aras&#305;nda olmal&#305;d&#305;r"
	};

char* MLG_Network_InterfaceGrouping_Str1[] = {
	"Interface Grouping supports multiple ports to PVC and bridging groups. Each group will perform as an independent network. <br> To support this feature, you must create mapping groups with appropriate LAN and WAN interfaces using the Add button. The Remove button will remove the grouping and add the ungrouped interfaces to the Default group. Only the default group has IP interface.",
	"Aray&#252;z Gruplamas&#305;, PVC ve k&#246;pr&#252;leme gruplar&#305; i&#231;in &#231;oklu portlar&#305; destekler. Her grup ba&#287;&#305;ms&#305;z bir a&#287; olarak ger&#231;ekle&#351;tirilecektir. <br> Bu &#246;zelli&#287;i desteklemek i&#231;in, Ekle d&#252;&#287;mesini kullanarak uygun Yerel A&#287; ve WAN aray&#252;zleri ile haritalama gruplar&#305; olu&#351;turman&#305;z gerekir. Kald&#305;r d&#252;&#287;mesi, gruplamay&#305; kald&#305;r&#305;r ve Varsay&#305;lan gruba gruplanmam&#305;&#351; aray&#252;z&#252; ekler. Sadece varsay&#305;lan grubun IP aray&#252;z&#252; vard&#305;r."
	};

char* MLG_Network_InterfaceGrouping_Str10[] = {
	"WAN Interfaces used in the grouping",
	"Gruplamada kullan&#305;lan WAN Aray&#252;z&#252;"
	};

char* MLG_Network_InterfaceGrouping_Str11[] = {
	"PTM type",
	"PTM tipi"
	};

char* MLG_Network_InterfaceGrouping_Str12[] = {
	"ATM type",
	"ATM tipi"
	};

char* MLG_Network_InterfaceGrouping_Str13[] = {
	"ETH type",
	"ETH tipi"
	};

char* MLG_Network_InterfaceGrouping_Str14[] = {
	"Grouped LAN Interfaces",
	"Grupland&#305;r&#305;lm&#305;&#351; Yerel A&#287; Aray&#252;zleri"
	};

char* MLG_Network_InterfaceGrouping_Str15[] = {
	"Available LAN Interfaces",
	"Kullan&#305;labilir Yerel A&#287; Aray&#252;zleri"
	};

char* MLG_Network_InterfaceGrouping_Str16[] = {
	"Automatically Add Clients With the following DHCP Vendor IDs",
	"A&#351;a&#287;&#305;daki DHCP Vendor ile M&#252;&#351;terileri otomatik olarak ekle "
	};

char* MLG_Network_InterfaceGrouping_Str17[] = {
	"Filter Criteria",
	"Filtre Kriterleri"
	};

char* MLG_Network_InterfaceGrouping_Str18[] = {
	"WildCard Support",
	"Genel Arama Deste&#287;i"
	};

char* MLG_Network_InterfaceGrouping_Str19[] = {
	"Remove",
	"Kald&#305;r"
	};

char* MLG_Network_InterfaceGrouping_Str2[] = {
	"Add New Interface Group",
	"Yeni Aray&#252;z Grubu Ekle"
	};

char* MLG_Network_Note[] = {
	"Note",
	"Not"
	};

char* MLG_Network_InterfaceGrouping_Str21[] = {
	"If a vendor ID is configured for a specific client device, please REBOOT the client device attached to the modem to allow it to obtain an appropriate IP address.",
	"Belirli bir vendor i&#231;in ID yap&#305;land&#305;r&#305;lm&#305;&#351;sa, uygun bir IP adresi almas&#305;na izin vermek i&#231;in modeme ba&#287;l&#305; istemci ayg&#305;t&#305;n&#305; YEN&#304;DEN BA&#350;LATINIZ."
	};

char* MLG_Network_InterfaceGrouping_Str22[] = {
	"Add",
	"Ekle "
	};

char* MLG_Network_InterfaceGrouping_Str23[] = {
	"Add new criteria",
	"Yeni kriterler ekle"
	};

char* MLG_Network_InterfaceGrouping_Str24[] = {
	"Source MAC address",
	"Kaynak MAC adresi"
	};

char* MLG_Network_InterfaceGrouping_Str25[] = {
	"DHCP option 60",
	"DHCP se&#231;ene&#287;i 60"
	};

char* MLG_Network_InterfaceGrouping_Str26[] = {
	"Enable wildcard on dhcp option 60",
	"DHCP se&#231;ene&#287;i 60 da genel aramay&#305; etkinle&#351;tiriniz."
	};

char* MLG_Network_InterfaceGrouping_Str27[] = {
	"DHCP option 61",
	"DHCP se&#231;ene&#287;i 61"
	};

char* MLG_Network_InterfaceGrouping_Str28[] = {
	"IAID",
	"IAID"
	};

char* MLG_Network_InterfaceGrouping_Str29[] = {
	"DUID type",
	"DUID tipi"
	};

char* MLG_Network_InterfaceGrouping_Str3[] = {
	"Interface Group",
	"Aray&#252;z Grubu"
	};

char* MLG_Network_InterfaceGrouping_Str30[] = {
	"DUID-LLT",
	"DUID-LLT"
	};

char* MLG_Network_InterfaceGrouping_Str31[] = {
	"DUID-EN",
	"DUID-EN"
	};

char* MLG_Network_InterfaceGrouping_Str32[] = {
	"DUID-LL",
	"DUID-LL"
	};

char* MLG_Network_InterfaceGrouping_Str33[] = {
	"Other",
	"Di&#287;er"
	};

char* MLG_Network_InterfaceGrouping_Str34[] = {
	"Hardware Type",
	"Donan&#305;m T&#252;r&#252;"
	};

char* MLG_Network_InterfaceGrouping_Str35[] = {
	"Time",
	"S&#252;re "
	};

char* MLG_Network_InterfaceGrouping_Str36[] = {
	"Link-layer address",
	"Ba&#287;lant&#305; katman&#305; adresi"
	};

char* MLG_Network_InterfaceGrouping_Str37[] = {
	"Enterprise Number",
	"Kurum Numaras&#305;"
	};

char* MLG_Network_InterfaceGrouping_Str38[] = {
	"Identifier",
	"Kimlikleyici"
	};

char* MLG_Network_InterfaceGrouping_Str39[] = {
	"Manufacturer OUI",
	"&#220;retici OUI"
	};

char* MLG_Network_InterfaceGrouping_Str4[] = {
	"Group Name",
	"Grup Ad&#305;"
	};

char* MLG_Network_InterfaceGrouping_Str40[] = {
	"Product Class",
	"&#220;r&#252;n S&#305;n&#305;f&#305;"
	};

char* MLG_Network_InterfaceGrouping_Str41[] = {
	"DUID",
	"DUID"
	};

char* MLG_Network_InterfaceGrouping_Str42[] = {
	"Model Name",
	"Model Ad&#305;"
	};

char* MLG_Network_InterfaceGrouping_Str43[] = {
	"Serial Number",
	"Seri Numaras&#305;"
	};

char* MLG_Network_InterfaceGrouping_Str44[] = {
	"Interface Group Configuration",
	"Aray&#252;z Grup Yap&#305;land&#305;rmas&#305;"
	};

char* MLG_Network_InterfaceGrouping_Str45[] = {
	"Remove Interface Group",
	"Aray&#252;z Grubunu Kald&#305;r"
	};

char* MLG_Network_InterfaceGrouping_Str46[] = {
	"DHCP option 125",
	"DHCP se&#231;ene&#287;i 125"
	};

char* MLG_Network_InterfaceGrouping_Str5[] = {
	"WAN Interface",
	"WAN Aray&#252;z&#252;"
	};

char* MLG_Network_InterfaceGrouping_Str6[] = {
	"LAN Interfaces",
	"Yerel A&#287; Aray&#252;zleri"
	};

char* MLG_Network_InterfaceGrouping_Str7[] = {
	"Criteria",
	"Kriterler"
	};

char* MLG_Network_InterfaceGrouping_Str9[] = {
	"1.Enter the Group name and the group name must be unique and select either 2. (dynamic) or 3. (static) below <br> 2.If you like to automatically add LAN clients to a WAN Interface in the new group <br> add the DHCP vendor ID string. By configuring a DHCP vendor ID string <br> any DHCP client request with the specified vendor ID (DHCP option 60) <br> will be denied an IP address from the local DHCP server. <br> 3.Select interfaces from the available interface list and add it to the grouped <br> interface list using the arrow buttons to create the required mapping of the ports. <br> Note that these clients may obtain public IP addresses",
	" 1. Grup ad&#305;n&#305; giriniz (grup ad&#305; benzersiz olmal&#305;d&#305;r) ve a&#351;a&#287;&#305;daki <br> ya 2 (Dinamik) ya da 3&#39; &#252; (Statik) se&#231;iniz, 2. Yerel A&#287; istemcilerini yeni gruptaki WAN Aray&#252;z&#252;ne otomatik olarak eklemek istiyorsan&#305;z, <br> DHCP vendor dizesini ekleyin. DHCP vendor dizesini yap&#305;land&#305;rarak, <br> belirtilen vendor (DHCP se&#231;ene&#287;i 60) ile yap&#305;lan herhangi bir DHCP istemci iste&#287;i <br> yerel DHCP sunucusundan bir IP adresi ile reddedilecektir. <br> 3. Kullan&#305;labilir aray&#252;z listesinden aray&#252;zleri se&#231;in ve gerekli port haritalamas&#305;n&#305; olu&#351;turmak i&#231;in oklar&#305; kullanarak bunu grupland&#305;r&#305;lm&#305;&#351; aray&#252;z listesine ekleyiniz <br>. <br> Bu m&#252;&#351;terilerin ortak IP adresleri alabilece&#287;ini unutmay&#305;n&#305;z. "
	};

char* MLG_Network_InterfaceGrouping_Str9_1[] = {
	"Enter the Group name and the group name must be unique and select either 2. (dynamic) or 3. (static) below <br>",
	"Grup ad&#305;n&#305; girin (grup ad&#305; benzersiz olmal&#305;d&#305;r) ve a&#351;a&#287;&#305;daki <br> ya 2 (Dinamik) ya da 3&#39; &#252; (Statik) se&#231;iniz."
	};

char* MLG_Network_InterfaceGrouping_Str9_2[] = {
	"If you like to automatically add LAN clients to a WAN Interface in the new group <br> add the DHCP vendor ID string. By configuring a DHCP vendor ID string <br> any DHCP client request with the specified vendor ID (DHCP option 60) <br> will be denied an IP address from the local DHCP server. <br>",
	"Yerel A&#287; istemcilerini yeni gruptaki WAN Aray&#252;z&#252;ne otomatik olarak eklemek istiyorsan&#305;z, <br> DHCP vendor dizesini ekleyiniz. DHCP vendor dizesini yap&#305;land&#305;rarak, <br> belirtilen vendor (DHCP se&#231;ene&#287;i 60) ile yap&#305;lan herhangi bir DHCP istemci iste&#287;i <br> yerel DHCP sunucusundan bir IP adresi ile reddedilecektir. <br>"
	};

char* MLG_Network_InterfaceGrouping_Str9_3[] = {
	"Select interfaces from the available interface list and add it to the grouped <br> interface list using the arrow buttons to create the required mapping of the ports. <br> Note that these clients may obtain public IP addresses",
	"Kullan&#305;labilir aray&#252;z listesinden aray&#252;zleri se&#231;in ve gerekli port haritalamas&#305;n&#305; olu&#351;turmak i&#231;in oklar&#305; kullanarak bunu grupland&#305;r&#305;lm&#305;&#351; aray&#252;z listesine ekleyiniz <br>. <br> Bu m&#252;&#351;terilerin ortak IP adresleri alabilece&#287;ini unutmay&#305;n&#305;z. "
	};


char* MLG_Network_LANSetup_AlertMsg_Str1[] = {
	"Address \'{{1}}\' is invalid IP address.",
	"\'{{1}}\' adresi ge&#231;ersiz IP adresi."
	};

char* MLG_Network_LANSetup_AlertMsg_Str2[] = {
	"Address \'{{1}}\' is invalid Subnet Mask.",
	"\'{{1}}\' adresi ge&#231;ersiz bir alt a&#287; maskesi."
	};

char* MLG_Network_LANSetup_AlertMsg_Str3[] = {
	"DNS server IP address 1 and/or 2 is invalid. Please enter a valid DNS Server IP Address.",
	" DNS sunucusu IP adresini 1 ve / veya 2 ge&#231;ersiz. L&#252;tfen ge&#231;erli bir DNS Sunucusu IP Adresi giriniz."
	};

char* MLG_Network_LANSetup_AlertMsg_Str4[] = {
	"Address \'{{1}}\' is invalid MAC address.",
	"\'{{1}}\' adresi ge&#231;ersiz bir MAC adresi."
	};

char* MLG_Network_LANSetup_Explain[] = {
	"The LAN IP address here is the IP address for you to login to the configuration interface. The DHCP Server settings decides the rules how it assigns IP addresses to the LAN clients on your network.",
	"Buradaki Yerel A&#287; IP adresi, yap&#305;land&#305;rma aray&#252;z&#252;ne giri&#351; i&#231;in kullanaca&#287;&#305;n&#305;z IP adresidir. DHCP Sunucusu ayarlar&#305;, IP adreslerini a&#287;&#305;n&#305;zdaki Yerel A&#287; istemcilerine nas&#305;l tahsis edilece&#287;ine ili&#351;kin kurallar&#305; belirler."
	};

char* MLG_Network_LANSetup_Str1[] = {
	"This page lets you configure the LAN TCP/IP settings and have the VSG1432 as a DHCP server or DHCP relay agent.",
	"Bu sayfa, Yerel A&#287; TCP / IP ayarlar&#305;n&#305; yap&#305;land&#305;rman&#305;za ve bir DHCP sunucusu veya DHCP ge&#231;i&#351; arac&#305; olarak VSG1432&#39; e sahip olman&#305;za izin verir."
	};

char* MLG_Network_LANSetup_Str10[] = {
	"DNS Values",
	"DNS De&#287;erleri"
	};

char* MLG_Network_LANSetup_Str11[] = {
	"DNS ",
	"DNS "
	};

char* MLG_Network_IPv6DNS[] = {
	"IPv6 DNS",
	"IPv6 DNS"
	};

char* MLG_Network_DNS_Server[] = {
	"DNS server",
	"DNS sunucusu"
	};

char* MLG_Network_LANSetup_Str12[] = {
	"DNS Server 1",
	"DNS Sunucusu 1"
	};

char* MLG_Network_LANSetup_Str13[] = {
	"DNS Server 2",
	"DNS Sunucusu 2"
	};

char* MLG_Network_LANSetup_Str14[] = {
	"Dynamic",
	"Dinamik"
	};

char* MLG_Network_LANSetup_Str15[] = {
	"Static",
	"Statik"
	};

char* MLG_Network_LANSetup_Str16[] = {
	"IP Alias",
	"IP Alias"
	};

char* MLG_Network_LANSetup_Str17[] = {
	"Enable IP Alias",
	"IP Alias &#8203;&#8203;etkinle&#351;tir "
	};

char* MLG_Network_LANSetup_Str18[] = {
	"IP Subnet Mask",
	"IP Alt A&#287; Maskesi"
	};

char* MLG_Network_LANSetup_Str19[] = {
	"Beginning IP Address",
	"Ba&#351;lang&#305;&#231; &#8203;&#8203;IP Adresi"
	};

char* MLG_Network_LANSetup_Str2[] = {
	"Group Name",
	"Grup Ad&#305;"
	};

char* MLG_Network_LANSetup_Str20[] = {
	"Ending IP Address",
	"Biti&#351; IP Adresi  "
	};

char* MLG_Network_LANSetup_Str25[] = {
	"DNS Entry Configuration",
	"DNS Giri&#351;i Yap&#305;land&#305;rmas&#305;"
	};

char* MLG_Network_LANSetup_Str57[] = {
	"From ISP",
	"ISS' den"
	};

char* MLG_Network_LANSetup_Str58[] = {
	"None",
	"hi&#231;biri"
	};

char* MLG_Network_LANSetup_Str3[] = {
	"LAN IP Setup",
	"Yerel A&#287; IP Kurulumu"
	};

char* MLG_Network_LANSetup_Str4[] = {
	"DHCP Server State",
	"DHCP Sunucu Durumu"
	};

char* MLG_Network_LANSetup_AutoReserveLANDHCPLease[] = {
	"Auto reserve IP for the same host",
	"Ayn&#305; sunucu i&#231;in otomatik IP reservi"
	};

char* MLG_Network_LANSetup_Str5[] = {
	"IP Addressing Values",
	"IP Adresleme De&#287;erleri"
	};

char* MLG_Network_LANSetup_Str6[] = {
	"DHCP Server Lease Time",
	"DHCP Sunucu Kiralama S&#252;resi"
	};

char* MLG_Network_LANSetup_Str7[] = {
	"Days",
	"G&#252;n"
	};

char* MLG_Network_LANSetup_Str8[] = {
	"Hours",
	"Saat"
	};

char* MLG_Network_LANSetup_Str9[] = {
	"Minutes",
	"Dakika"
	};

char* MLG_Network_LANVLAN_Str1[] = {
	"A LAN VLAN operation can add, remove, remark or unchange on packet transmit to LAN.",
	"Yerel A&#287; VLAN i&#351;lemi ile, LAN paketlerinin iletimi i&#231;in paket iletimini ekleyebilir, kald&#305;rabilir, i&#351;aretleyebilir veya hi&#231;bir de&#287;i&#351;iklik yapmayabilirsiniz."
	};

char* MLG_Network_LANVLAN_Str10[] = {
	"VLAN ID",
	"VLAN ID"
	};

char* MLG_Network_LANVLAN_Str11[] = {
	"Unchange",
	"De&#287;i&#351;tirme"
	};

char* MLG_Network_LANVLAN_Str12[] = {
	"Add",
	"Ekle "
	};

char* MLG_Network_LANVLAN_Str13[] = {
	"Remove",
	"Kald&#305;r"
	};

char* MLG_Network_LANVLAN_Str14[] = {
	"Remark",
	"&#304;&#351;aretle"
	};

char* MLG_Network_LANVLAN_Str2[] = {
	"LAN VLAN Setup",
	"Yerel A&#287; VLAN Kurulumu"
	};

char* MLG_Network_LANVLAN_Str3[] = {
	"LAN port",
	"Yerel A&#287; portu"
	};

char* MLG_Network_LANVLAN_Str4[] = {
	"LAN1",
	"Yerel A&#287; 1"
	};

char* MLG_Network_LANVLAN_Str5[] = {
	"LAN2",
	"Yerel A&#287; 2"
	};

char* MLG_Network_LANVLAN_Str6[] = {
	"LAN3",
	"Yerel A&#287; 3"
	};

char* MLG_Network_LANVLAN_Str7[] = {
	"LAN4",
	"Yerel A&#287; 4"
	};

char* MLG_Network_LANVLAN_Str8[] = {
	"TAG Operation",
	"TAG &#304;&#351;lemi"
	};

char* MLG_Network_LANVLAN_Str9[] = {
	"802.1P Mark",
	"802.1P &#304;&#351;areti"
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str1[] = {
	"Please enter a policy name",
	"L&#252;tfen bir kural ad&#305; giriniz."
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str10[] = {
	"You need to add a WAN Interface first.",
	"&#214;nce bir WAN Aray&#252;z&#252; eklemelisiniz."
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str11[] = {
	"Please enter a policy name",
	"L&#252;tfen bir kural ad&#305; giriniz."
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str12[] = {
	"Please enter valid rule name: No special characters.",
	"L&#252;tfen ge&#231;erli bir kural ad&#305; girin: &#214;zel karakter yok."
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str13[] = {
	"Maximum policy name cannot exceed 8 characters.",
	"Maksimum kural ad&#305; 8 karakterden uzun olamaz."
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str14[] = {
	"Please at least enter a policy",
	"L&#252;tfen en az bir kural giriniz."
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str15[] = {
	"Source IP {{1}} is invalid IP address.",
	"{{1}} Kaynak IP ge&#231;ersiz bir IP adresi."
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str16[] = {
	"Source Subnet Mask {{1}} is invalid subnet mask.",
	"{{1}} Kaynak Alt A&#287; Maskesi ge&#231;ersiz bir alt a&#287; maskesi."
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str17[] = {
	"Source Port {{1}} is invalid Port.",
	"{{1}} Kaynak Port ge&#231;ersiz bir Port."
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str18[] = {
	"You should select the protocol.",
	"Protokol&#252; se&#231;melisiniz."
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str19[] = {
	"Source Mac {{1}} is invalid Mac address.",
	"{{1}} Kaynak Mac ge&#231;ersiz bir Mac adresi."
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str2[] = {
	"Please enter valid rule name: No special characters.",
	"L&#252;tfen ge&#231;erli bir policy ad&#305; giriniz: &#214;zel karakter yok."
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str20[] = {
	"Configure route for rule source ip = {{1}}, protocol = {{2}}, source port = {{3}}, source MAC = {{4}} failed",
	"policy kaynak IP i&#231;in yolu yap&#305;land&#305;r = {{1}}, protokol = {{2}}, kaynak port = {{3}}, kaynak MAC = {{4}} ba&#351;ar&#305;s&#305;z"
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str20_1[] = {
	"Configure route for rule source ip =",
	"policy kaynak IP i&#231;in yolu yap&#305;land&#305;r ="
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str20_2[] = {
	", protocol =",
	", protokol ="
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str20_3[] = {
	", source port =",
	", kaynak port ="
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str20_4[] = {
	", source MAC =",
	", kaynak MAC ="
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str20_5[] = {
	"failed",
	"ba&#351;ar&#305;s&#305;z "
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str21[] = {
	"The rule source ip = {{1}}, protocol = {{1}}, source port = {{1}}, source MAC = {{1}} is already in use!",
	"Geni&#351;bantpolicy kaynak IP = {{1}}, protokol = {{1}}, kaynak port = {{1}}, kaynak MAC = {{1}} zaten kullan&#305;l&#305;yor!"
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str21_1[] = {
	"The rule source ip =",
	"Geni&#351;bantpolicy kaynak IP ="
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str21_2[] = {
	", protocol =",
	", protokol ="
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str21_3[] = {
	", source port =",
	", kaynak port ="
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str21_4[] = {
	", source MAC =",
	", kaynak MAC ="
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str21_5[] = {
	"is already in use!",
	"zaten kullan&#305;l&#305;yor! "
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str3[] = {
	"Maximum policy name cannot exceed 8 characters.",
	"Maksimum kural ad&#305; 8 karakterden uzun olamaz."
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str4[] = {
	"Please at least enter a policy",
	"L&#252;tfen en az bir kural giriniz."
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str5[] = {
	"Source Ip {{1}} is invalid IP address.",
	"{{1}} Kaynak IP ge&#231;ersiz bir IP adresi."
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str6[] = {
	"Source Subnet Mask {{1}} is invalid subnet mask.",
	"{{1}} Kaynak Alt A&#287; Maskesi ge&#231;ersiz bir alt a&#287; maskesi."
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str7[] = {
	"Source Port {{1}} is invalid Port.",
	"{{1}} Kaynak Port ge&#231;ersiz bir Port."
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str8[] = {
	"You should select the protocol.",
	"Protokol&#252; se&#231;melisiniz."
	};

char* MLG_Network_PolicyForwarding_AlertMsg_Str9[] = {
	"Source Mac {{1}} is invalid Mac address.",
	"{{1}} Kaynak Mac ge&#231;ersiz bir Mac adresi."
	};

char* MLG_Network_PolicyForwarding_Str1[] = {
	"This page allows the {{1}} to override the default routing behavior and alter the packet forwarding based on the policy defined by the network administrator.",
	"Bu sayfa, {{1}} se&#231;ene&#287;inin varsay&#305;lan y&#246;nlendirme davran&#305;&#351;&#305;n&#305;n ge&#231;ersiz k&#305;l&#305;nmas&#305;n&#305; ve a&#287; y&#246;neticisi taraf&#305;ndan belirlenen kurala dayal&#305; paket iletiminin de&#287;i&#351;tirmesini sa&#287;lar."
	};

char* MLG_Network_PolicyForwarding_Str1_1[] = {
	"This page allows the PolicyForward to override the default routing behavior and alter the packet forwarding based on the policy defined by the network administrator.",
	"Bu sayfa, kural ilet se&#231;ene&#287;inin varsay&#305;lan y&#246;nlendirme davran&#305;&#351;&#305;n&#305; ge&#231;ersiz k&#305;lmas&#305;n&#305; ve a&#287; y&#246;neticisi taraf&#305;ndan belirlenen kurala dayal&#305; paket iletimini de&#287;i&#351;tirmesini sa&#287;lar."
	};

char* MLG_Network_PolicyForwarding_Str11[] = {
	"You need to add {{1}}WAN Interface{{2}} first.",
	"&#214;nce bir {{1}} WAN Aray&#252;z&#252; {{2}} eklemelisiniz."
	};

char* MLG_Network_PolicyForwarding_Str11_1[] = {
	"You need to add",
	"Öncelikle"
	};

char* MLG_Network_PolicyForwarding_Str11_2[] = {
	"WAN Interface",
	"WAN Aray&#252;z&#252;"
	};

char* MLG_Network_PolicyForwarding_Str11_3[] = {
	"first.",
	"’ne eklemelisiniz."
	};

char* MLG_Network_PolicyForwarding_Str12[] = {
	"Add WAN Interface",
	"WAN Aray&#252;z&#252; ekle"
	};

char* MLG_Network_PolicyForwarding_Str13[] = {
	"Add a New Policy Forward Entry",
	"Yeni Bir kural &#304;let Girdisi ekle"
	};

char* MLG_Network_PolicyForwarding_Str13_1[] = {
	"Add new Policy Forward Rule",
	"Yeni kurall&#305; y&#246;nlendirme ekle"
	};

char* MLG_Network_PolicyForwarding_Str14[] = {
	"Edit Policy Forward Entry",
	"kural &#304;let Girdisi d&#252;zenle"
	};

char* MLG_Network_PolicyForwarding_Str15[] = {
	"This will delete the item. Please confirm this step.",
	"Bu, &#246;&#287;eyi silecektir. L&#252;tfen bu ad&#305;m&#305; onaylay&#305;n&#305;z."
	};

char* MLG_Network_PolicyForwarding_Str16[] = {
	"Remove Policy Forward Entry",
	"Kural &#304;let Girdisi sil"
	};

char* MLG_Network_PolicyForwarding_Str2[] = {
	"Policy Name",
	"Kural Ad&#305;"
	};

char* MLG_Network_PolicyForwarding_Str3[] = {
	"Source IP",
	"Kaynak IP"
	};

char* MLG_Network_PolicyForwarding_Str4[] = {
	"Source Subnet Mask",
	"Kaynak Alt A&#287; Maskesi"
	};

char* MLG_Network_PolicyForwarding_Str5[] = {
	"Protocol",
	"Protokol"
	};

char* MLG_Network_PolicyForwarding_Str6[] = {
	"Source Port",
	"Kaynak Port"
	};

char* MLG_Network_PolicyForwarding_Str7[] = {
	"Source MAC",
	"Kaynak MAC"
	};

char* MLG_Network_PolicyForwarding_Str8[] = {
	"WAN",
	"WAN"
	};

char* MLG_Network_PolicyForwarding_Str9[] = {
	"Modify",
	"De&#287;i&#351;tir"
	};


char* MLG_Network_StaticDHCP_AlertMsg_Str1[] = {
	"Address \'00:00:g4:55:58:56\' is invalid MAC address.",
	"\'00:00:g4:55:58:56\' adresi ge&#231;ersiz bir MAC adresi."
	};


char* MLG_Network_StaticDHCP_Explain[] = {
	"When any of the LAN clients on your network want to be always assigned fixed IP addresses, add a static lease for each such LAN client. You may need to know the MAC addresses of the clients in advance in order to process the set-up quickly.",
	"A&#287;&#305;n&#305;zdaki Yerel A&#287; istemcilerinden herhangi biri s&#252;rekli olarak kendisine sabit IP adresi atanmas&#305;n&#305; istedi&#287;inde, her Yerel A&#287; istemcisi i&#231;in statik kira ekleyiniz. Kurulum h&#305;zl&#305; bir &#351;ekilde yapmak i&#231;in istemcilerin MAC adreslerini &#246;nceden bilmeniz gerekebilir."
	};

char* MLG_Network_StaticDHCP_Str1[] = {
	"This page lets you assign a static IP address for a MAC address.",
	"Bu sayfa, bir MAC adresi i&#231;in statik bir IP adresi ataman&#305;z&#305; sa&#287;lar."
	};

char* MLG_Network_StaticDHCP_Str2[] = {
	"Add new static lease",
	"Yeni statik kira ekle"
	};

char* MLG_Network_StaticDHCP_Str3[] = {
	"Group Name",
	"Grup Ad&#305;"
	};

char* MLG_Network_StaticDHCP_Str4[] = {
	"Select Device Info",
	"Ayg&#305;t Bilgisi se&#231;iniz."
	};

char* MLG_Network_StaticDHCP_Str5[] = {
	"MAC Address",
	"MAC Adresi"
	};

char* MLG_Network_StaticDHCP_Str6[] = {
	"IP Address",
	"IP Adresi"
	};

char* MLG_Network_StaticDHCP_Str7[] = {
	"Static DHCP Configuration",
	"Statik DHCP Yap&#305;land&#305;rmas&#305;"
	};

char* MLG_Network_StaticRoute_AlertMsg_Str1[] = {
	"Entry name is necessary.",
	"Giri&#351; ad&#305; gerekli."
	};

char* MLG_Network_StaticRoute_AlertMsg_Str10[] = {
	"Subnet Mask {{1}} is invalid subnet mask.",
	"{{1}} Alt A&#287; Maskesi ge&#231;ersiz bir alt a&#287; maskesi."
	};

char* MLG_Network_StaticRoute_AlertMsg_Str11[] = {
	"Default gateway {{1}} is invalid IPv4 address.",
	"{{1}} varsay&#305;lan a&#287; ge&#231;idi ge&#231;ersiz IPv4 adresi."
	};

char* MLG_Network_StaticRoute_AlertMsg_Str12[] = {
	"IP address cannot be the same with LAN subnet.",
	"IP adresi, Yerel A&#287; alt a&#287; maskesi ile ayn&#305; olamaz."
	};

char* MLG_Network_StaticRoute_AlertMsg_Str13[] = {
	"Enable route entry for address = {{1}} and subnet mask = {{2}} failed",
	"Adres = {{1}} ve alt a&#287; maskesi = {{2}} i&#231;in yol girdisi etkinle&#351;tirme ba&#351;ar&#305;s&#305;z"
	};

char* MLG_Network_StaticRoute_AlertMsg_Str13_1[] = {
	"Enable route entry for address =",
	"Adresi = i&#231;in yol girdisi etkinle&#351;tir"
	};

char* MLG_Network_StaticRoute_AlertMsg_Str13_2[] = {
	"and subnet mask =",
	"alt a&#287; maskesi = "
	};

char* MLG_Network_StaticRoute_AlertMsg_Str13_3[] = {
	"failed",
	"ba&#351;ar&#305;s&#305;z "
	};

char* MLG_Network_StaticRoute_AlertMsg_Str14[] = {
	"The rule is already in use!",
	"kural zaten kullan&#305;l&#305;yor!"
	};

char* MLG_Network_StaticRoute_AlertMsg_Str15[] = {
	"Configure route for address = {{1}} failed",
	"Adres = {{1}} i&#231;in yol yap&#305;land&#305;rmas&#305; ba&#351;ar&#305;s&#305;z "
	};

char* MLG_Network_StaticRoute_AlertMsg_Str15_1[] = {
	"Configure route for address =",
	"Adres = i&#231;in yol yap&#305;land&#305;rmas&#305;"
	};

char* MLG_Network_StaticRoute_AlertMsg_Str15_2[] = {
	"failed",
	"ba&#351;ar&#305;s&#305;z "
	};

char* MLG_Network_StaticRoute_AlertMsg_Str16[] = {
	"Configure route for subnet mask = {{1}} failed",
	"Alt a&#287; maskesi = {{1}} i&#231;in yol yap&#305;land&#305;rmas&#305; ba&#351;ar&#305;s&#305;z"
	};

char* MLG_Network_StaticRoute_AlertMsg_Str16_1[] = {
	"Configure route for subnet mask =",
	"Alt a&#287; maskesi = i&#231;in yol yap&#305;land&#305;rmas&#305; "
	};

char* MLG_Network_StaticRoute_AlertMsg_Str16_2[] = {
	"failed",
	"ba&#351;ar&#305;s&#305;z "
	};

char* MLG_Network_StaticRoute_AlertMsg_Str17[] = {
	"Delete route entry for address = {{1}} and subnet mask = {{2}} failed",
	"Adres = {{1}} ve alt a&#287; maskesi = {{2}} i&#231;in yol girdisini sil"
	};

char* MLG_Network_StaticRoute_AlertMsg_Str17_1[] = {
	"Delete route entry for address =",
	"Adres = i&#231;in yol girdisini sil"
	};

char* MLG_Network_StaticRoute_AlertMsg_Str17_2[] = {
	"and subnet mask =",
	"ve alt a&#287; maskesi = "
	};

char* MLG_Network_StaticRoute_AlertMsg_Str17_3[] = {
	"failed",
	"ba&#351;ar&#305;s&#305;z "
	};

char* MLG_Network_StaticRoute_AlertMsg_Str18[] = {
	"Configure route for address = {{1}} and subnet mask = {{2}} failed: Please check the gateway address.",
	"Adres = {{1}} ve alt a&#287; maskesi = {{2}} i&#231;in yolu yap&#305;land&#305;rma ba&#351;ar&#305;s&#305;z: L&#252;tfen a&#287; ge&#231;idi adresini kontrol ediniz."
	};

char* MLG_Network_StaticRoute_AlertMsg_Str18_1[] = {
	"Configure route for address =",
	"Adres = i&#231;in yol yap&#305;land&#305;rmas&#305; "
	};

char* MLG_Network_StaticRoute_AlertMsg_Str18_2[] = {
	"and subnet mask =",
	"ve alt a&#287; maskesi = "
	};

char* MLG_Network_StaticRoute_AlertMsg_Str18_3[] = {
	"failed: Please check the gateway address.",
	"ba&#351;ar&#305;s&#305;z: L&#252;tfen a&#287; ge&#231;idi adresini kontrol ediniz."
	};

char* MLG_Network_StaticRoute_AlertMsg_Str19[] = {
	"Rule name is duplicated!",
	"Kural ad&#305; mevcut!"
	};

char* MLG_Network_StaticRoute_AlertMsg_Str2[] = {
	"Need to specify destination IP Address.",
	"Hedef IP adresi belirtmeniz gerekir."
	};

char* MLG_Network_StaticRoute_AlertMsg_Str20[] = {
	"The rule is already in use!",
	"policy zaten kullan&#305;l&#305;yor!"
	};

char* MLG_Network_StaticRoute_AlertMsg_Str21[] = {
	"This will delete the item. Please confirm this step.",
	"Bu, &#246;&#287;eyi silecektir. L&#252;tfen bu ad&#305;m&#305; onaylay&#305;n&#305;z."
	};

char* MLG_Network_StaticRoute_AlertMsg_Str22[] = {
	"Destination address {{1}} is invalid IPv6 address.",
	"{{1}} hedef adresi ge&#231;ersiz bir IPv6 adresi."
	};

char* MLG_Network_StaticRoute_AlertMsg_Str23[] = {
	"Default gateway {{1}} is invalid IPv6 address.",
	"{{1}} varsay&#305;lan a&#287; ge&#231;idi ge&#231;ersiz IPv6 adresi."
	};

char* MLG_Network_StaticRoute_AlertMsg_Str24[] = {
	"Need to specify IPv6 prefix length.",
	"(null)"
	};

char* MLG_Network_StaticRoute_AlertMsg_Str3[] = {
	"Destination address {{1}} is invalid IPv4 address.",
	"{{1}} hedef adresi ge&#231;ersiz bir IPv4 adresi."
	};

char* MLG_Network_StaticRoute_AlertMsg_Str4[] = {
	"Subnet Mask {{1}} is invalid subnet mask.",
	"{{1}} Alt A&#287; Maskesi ge&#231;ersiz bir alt a&#287; maskesi."
	};

char* MLG_Network_StaticRoute_AlertMsg_Str5[] = {
	"Default gateway {{1}} is invalid IPv4 address.",
	"{{1}} varsay&#305;lan a&#287; ge&#231;idi ge&#231;ersiz IPv4 adresi."
	};

char* MLG_Network_StaticRoute_AlertMsg_Str6[] = {
	"IP address can not be the same with LAN subnet.",
	"IP adresi, Yerel A&#287; alt a&#287; maskesi ile ayn&#305; olamaz."
	};

char* MLG_Network_StaticRoute_AlertMsg_Str7[] = {
	"Entry name is necessary.",
	"Giri&#351; ad&#305; gerekli."
	};

char* MLG_Network_StaticRoute_AlertMsg_Str8[] = {
	"Need to specify destination IP Address.",
	"Hedef IP adresi belirtmeniz gerekir."
	};

char* MLG_Network_StaticRoute_AlertMsg_Str9[] = {
	"Destination address {{1}} is invalid IPv4 address.",
	"{{1}} hedef adresi ge&#231;ersiz bir IPv4 adresi."
	};

char* MLG_Network_StaticRoute_Str1[] = {
	"Routing",
	"Y&#246;nlendirme"
	};

char* MLG_Network_StaticRoute_Str10[] = {
	"Add new Static Route",
	"Yeni Statik Yol Kayd&#305; Ekle"
	};

char* MLG_Network_StaticRoute_Str11[] = {
	"General",
	"Genel"
	};

char* MLG_Network_StaticRoute_Str12[] = {
	"Active ",
	"Aktif "
	};

char* MLG_Network_StaticRoute_Str13[] = {
	"Route Name",
	"Yol Ad&#305;"
	};

char* MLG_Network_StaticRoute_Str14[] = {
	"Destination IP Address",
	"Hedef IP Adresi"
	};

char* MLG_Network_StaticRoute_Str15[] = {
	"IP Subnet Mask",
	"IP Alt A&#287; Maskesi"
	};

char* MLG_Network_StaticRoute_Str16[] = {
	"Use Gateway IP Address",
	"A&#287; Ge&#231;idi IP Adresini kullan"
	};

char* MLG_Network_StaticRoute_Str17[] = {
	"Gateway IP Address",
	"A&#287; Ge&#231;idi IP Adresi "
	};

char* MLG_Network_StaticRoute_Str18[] = {
	"Use Interface",
	"Aray&#252;z kullan"
	};

char* MLG_Network_StaticRoute_Str19[] = {
	"This will delete the item. Please confirm this step.",
	"Bu, &#246;&#287;eyi silecektir. L&#252;tfen bu ad&#305;m&#305; onaylay&#305;n&#305;z."
	};

char* MLG_Network_StaticRoute_Str2[] = {
	"Routing can select paths in a network along which to send network traffic. In this page you can view and set up static routes on the device.",
	"Y&#246;nlendirme i&#351;lemi ile, a&#287; trafi&#287;ine g&#246;nderilecek yolu se&#231;ebilirsiniz. Bu sayfada cihazdaki statik yollar&#305;n&#305; g&#246;r&#252;nt&#252;leyebilir ve ayarlayabilirsiniz."
	};

char* MLG_Network_StaticRoute_Str20[] = {
	"Remove Static Route Entry",
	"Statik Rotay&#305; Kald&#305;r"
	};

char* MLG_Network_StaticRoute_Str21[] = {
	"Edit Static Route Entry",
	"Statik Rotay&#305; D&#252;zenle"
	};

char* MLG_Network_StaticRoute_Str22[] = {
	"Remove Static Route Entry",
	"Statik Rotay&#305; Kald&#305;r"
	};

char* MLG_Network_StaticRoute_Str23[] = {
	"The purpose of Static Route is to save time and bandwidth usage when LAN devices within an Intranet are transferring files or packets, especially when there are more than two Internet connections available in your home or office.",
	"Statik Rotan&#305;n amac&#305;, &#246;zellikle evinizde ya da ofisinizde ikiden fazla internet ba&#287;lant&#305;s&#305; oldu&#287;unda bir &#304;ntranet i&#231;erisindeki LAN ayg&#305;tlar&#305;n&#305;n dosya veya paketleri aktar&#305;rken zamandan ve bant geni&#351;li&#287;i kullan&#305;m&#305;ndan tasarruf sa&#287;lamakt&#305;r."
	};

char* MLG_Network_StaticRoute_Str24[] = {
	"IP Type:",
	"IP T&#252;r&#252;:"
	};

char* MLG_Network_StaticRoute_Str25[] = {
	"IPv4",
	"IPv4"
	};

char* MLG_Network_StaticRoute_Str26[] = {
	"IPv6",
	"IPv6"
	};

char* MLG_Network_StaticRoute_Str27[] = {
	"Static Route Edit",
	"Statik Rota D&#252;zenle"
	};

char* MLG_Network_StaticRoute_Str28[] = {
	"Add new Static Route",
	"Yeni Statik Rota Ekle"
	};

char* MLG_Network_StaticRoute_Str30[] = {
	"Prefix Length",
	"(null)"
	};

char* MLG_Network_StaticRoute_Str3[] = {
	"Status",
	"Durum"
	};

char* MLG_Network_StaticRoute_Str4[] = {
	"Name",
	"Ad"
	};

char* MLG_Network_Printer_Name[] = {
	"Printer Name",
	"Yaz&#305;c&#305; Ad&#305;"
	};

char* MLG_Network_StaticRoute_Str5[] = {
	"Destination IP",
	"Hedef IP"
	};

char* MLG_Network_StaticRoute_Str6[] = {
	"Subnet Mask/Prefix Length",
	"Alt A&#287; Maskesi"
	};

char* MLG_Network_StaticRoute_Str7[] = {
	"Gateway",
	"A&#287; Ge&#231;idi"
	};

char* MLG_Network_StaticRoute_Str8[] = {
	"Interface",
	"Aray&#252;z"
	};

char* MLG_Network_StaticRoute_Str9[] = {
	"Modify",
	"De&#287;i&#351;tir "
	};

char* MLG_Network_DnsRoute_Intro[] = {
	"The purpose of DNS Route is to forward DNS query and the traffic to the ip address obtained in the DNS query via the specific WAN interface. ",
	"(null)"
	};

char* MLG_Network_DnsRoute_Note[] = {
	"Maximum of 20 entries could be added.",
	"(null)"
	};

char* MLG_Network_DnsRoute_Edit[] = {
	"DNS Route Edit",
	"(null)"
	};

char* MLG_Network_DnsRoute_Add[] = {
	"Add new DNS Route",
	"(null)"
	};

char* MLG_Network_DnsRoute_Remove[] = {
	"Remove DNS Route Entry",
	"(null)"
	};

char* MLG_Network_DnsRoute_EditEntry[] = {
	"Edit DNS Route Entry",
	"(null)"
	};

char* MLG_Network_DnsRoute_DomainName[] = {
	"Domain Name",
	"(null)"
	};

char* MLG_Network_DnsRoute_Interface[] = {
	"Interface",
	"(null)"
	};

char* MLG_Network_DnsRoute_Subnetmask[] = {
	"Subnet Mask",
	"(null)"
	};

char* MLG_Network_DnsRoute_Modify[] = {
	"Modify",
	"De&#287;i&#351;tir "
	};

char* MLG_Network_DnsRoute_AlertMsg_DomainName[] = {
	"Domain name is necessary.",
	"(null)"
	};

char* MLG_Network_DnsRoute_AlertMsg_DomainNameExist[] = {
	"Domain name {{1}} already exists.",
	"(null)"
	};

char* MLG_Network_DnsRoute_AlertMsg_DomainNameInvalid[] = {
	"Domain name {{1}} is invalid, . should follow by *",
	"(null)"
	};

char* MLG_Network_DnsRoute_AlertMsg_Subnetmask[] = {
	"Subnet Mask {{1}} is invalid subnet mask.",
	"{{1}} Alt A&#287; Maskesi ge&#231;ersiz bir alt a&#287; maskesi."
	};

char* MLG_Network_EAP_Identity[] = {
	"EAP Identity",
	"EAP Kimli&#287;i"
	};

char* MLG_Network_EAP_method[] = {
	"EAP method",
	"EAP y&#246;ntemi"
	};

char* MLG_Network_EAP_TLS[] = {
	"EAP-TLS",
	"EAP-TLS"
	};

char* MLG_Network_Bidirectional_Authentication[] = {
	"Bidirectional Authentication",
	"&#304;ki Y&#246;nl&#252; Kimlik Do&#287;rulama"
	};

char* MLG_Network_Certificate[] = {
	"Certificate",
	"Sertifika"
	};

char* MLG_Network_STBVendorID_Str1[] = {
	"Device can identify the STB base on configured Vendor ID.",
	"Ayg&#305;t, yap&#305;land&#305;r&#305;lm&#305;&#351; Vendor ID ile STB&#39; yi tan&#305;mlayabilir."
	};

char* MLG_Network_STBVendorID_Str2[] = {
	"Please enter Vendor ID for STB:",
	"STB i&#231;in vendor girin:"
	};

char* MLG_Network_STBVendorID_Str3[] = {
	"DHCP option 60:",
	"DHCP se&#231;ene&#287;i 60:"
	};

char* MLG_Network_STBVendorID_Str4[] = {
	"DHCP option 67:",
	"DHCP se&#231;ene&#287;i 67:"
	};

char* MLG_Network_STBVendorID_Str5[] = {
	"The value of DHCP option 60 is comma separated (e.g. MSFT_IPTV,SAIP*,CIS*), and * can be used for rule partial match.",
	"DHCP se&#231;ene&#287;i 60 de&#287;eri virg&#252;l ile ayr&#305;lm&#305;&#351;t&#305;r (&#246;rne&#287;in; MSFT_IPTV, SA&#304;P *, CIS *) ve *, kural k&#305;smi e&#351;le&#351;me i&#231;in kullan&#305;labilir."
	};

char* MLG_Network_STBVendorID_Str6[] = {
	"Vendor ID",
	"vendor ID"
	};

char* MLG_Network_UPnP_Explain[] = {
	"Universal Plug and Play (UPnP) is a networking standard for easy network connectivity among networking devices and software that also have and enable UPnP.",
	"Evrensel Tak ve &#199;al&#305;&#351;t&#305;r (UPnP), UPnP &#246;zelli&#287;ine sahip ve bu &#246;zellikleri etkinle&#351;tirilmi&#351; ayg&#305;tlar aras&#305;nda kolay a&#287; kurulumu i&#231;in geli&#351;tirilmi&#351; bir a&#287; standard&#305;d&#305;r"
	};

char* MLG_Network_UPnP_Explain_Str2[] = {
	"When UPnP function of this device is enabled, UPnP-enabled devices and/or software on your network will be found and listed below.",
	"(null)"
	};

char* MLG_Network_UPnP_Str1[] = {
	"Universal Plug and Play (UPnP) is a networking standard for easy network connectivity among devices.",
	"Evrensel Tak ve &#199;al&#305;&#351;t&#305;r (UPnP), ayg&#305;tlar aras&#305;nda kolay a&#287; ba&#287;lant&#305;s&#305; sa&#287;layan bir a&#287; standard&#305;d&#305;r."
	};

char* MLG_Network_UPnP_Str2[] = {
	"UPnP NAT-T only work when NAT is enabled",
	"UPnP NAT-T, sadece NAT etkin oldu&#287;unda &#231;al&#305;&#351;&#305;r"
	};

char* MLG_Network_UPnP_Str3[] = {
	"UPnP NAT-T State",
	"UPnP NAT-T Durumu"
	};

char* MLG_Network_UPnP_Str4[] = {
	"UPnP NAT-T",
	"UPnP NAT-T"
	};

char* MLG_Network_UPnP_Str5[] = {
	"UPnP State",
	"UPnP Durumu"
	};

char* MLG_Network_UPnP_Str6[] = {
	"UPnP",
	"UPnP"
	};

char* MLG_Network_IGMPGeneral_AlertMsg_Str1[] = {
	"IGMP Query Interval {{1}} is invalid.",
	"IGMP Sorgu Aral&#305;&#287;&#305; {{1}} ge&#231;ersiz."
	};

char* MLG_Network_IGMPGeneral_AlertMsg_Str2[] = {
	"IGMP Query Interval {{1}} is out of range.",
	"IGMP Sorgu Aral&#305;&#287;&#305; {{1}} aral&#305;k d&#305;&#351;&#305;nda."
	};

char* MLG_Network_IGMPGeneral_AlertMsg_Str3[] = {
	"IGMP Query Response Interval {{1}} is invalid.",
	"IGMP Sorgu Yan&#305;t Aral&#305;&#287;&#305; {{1}} ge&#231;ersiz."
	};

char* MLG_Network_IGMPGeneral_AlertMsg_Str4[] = {
	"IGMP Query Response Interval must be less than Query Interval.",
	"IGMP Sorgu Yan&#305;t Aral&#305;&#287;&#305;, Sorgu Aral&#305;&#287;&#305;ndan az olmal&#305;d&#305;r."
	};

char* MLG_Network_IGMPGeneral_AlertMsg_Str5[] = {
	"IGMP Query Response Interval {{1}} is out of range.",
	"IGMP Sorgu Yan&#305;t Aral&#305;&#287;&#305; {{1}} aral&#305;k d&#305;&#351;&#305;nda."
	};

char* MLG_Network_IGMPGeneral_AlertMsg_Str6[] = {
	"IGMP Robustness Value {{1}} is invalid.",
	"IGMP Sa&#287;laml&#305;k De&#287;eri {{1}} ge&#231;ersiz."
	};

char* MLG_Network_IGMPGeneral_AlertMsg_Str7[] = {
	"IGMP Robustness Value {{1}} is out of range [1-7].",
	"IGMP Sa&#287;laml&#305;k De&#287;eri {{1}} aral&#305;k [1-7] d&#305;&#351;&#305;nda."
	};

char* MLG_Network_IGMPFilter_Str35[] = {
	"IGMP Host Configuration",
	"IGMP host Yap&#305;land&#305;rmas&#305;"
	};

char* MLG_Network_IGMPFilter_Str36[] = {
	"IGMP Service Domain Delete",
	"IGMP Hizmet Alan&#305; Sil"
	};

char* MLG_Network_IGMPFilter_Str37[] = {
	"IGMP Host Limitation Delete",
	"IGMP host S&#305;n&#305;rland&#305;rmas&#305; Sil"
	};

char* MLG_Network_IGMPFilter_Str38[] = {
	"The page is used to modify IGMP service domain.",
	"Bu sayfa, IGMP hizmet alan&#305;n&#305; de&#287;i&#351;tirmek i&#231;in kullan&#305;l&#305;r."
	};

char* MLG_Network_IGMPFilter_Str39[] = {
	"Service",
	"Hizmet"
	};

char* MLG_Network_IGMPFilter_Str40[] = {
	"Modify the entry for host limitation.",
	"hostU s&#305;n&#305;rlamak i&#231;in girdiyi de&#287;i&#351;tiriniz."
	};

char* MLG_Network_IGMPFilter_Str41[] = {
	"Modify the entry for host limitation in a service domain.",
	"Bir hizmet alan&#305;ndaki host&#305; s&#305;n&#305;rlamak i&#231;in girdiyi de&#287;i&#351;tiriniz."
	};

char* MLG_Network_IGMPFilter_AlertMsg_Str2[] = {
	"Please enter a valid max STB allowed channels.",
	"L&#252;tfen ge&#231;erli bir maksimum STB izinli kanal giriniz."
	};

char* MLG_Network_IGMPFilter_AlertMsg_Str3[] = {
	"Please enter a valid max non-STB allowed channels.",
	"L&#252;tfen ge&#231;erli bir maksimum STB izinsiz kanal giriniz."
	};


char* MLG_Network_IGMPFilter_AlertMsg_Str4[] = {
	"Please enter the service name.",
	"L&#252;tfen hizmet ad&#305;n&#305; giriniz."
	};


char* MLG_Network_IGMPFilter_AlertMsg_Str5[] = {
	"Please enter the service name without special characters.",
	"L&#252;tfen &#246;zel karakter i&#231;ermeyen hizmet ad&#305;n&#305; giriniz."
	};


char* MLG_Network_IGMPFilter_AlertMsg_Str6[] = {
	"The service name {{1}} is repeated.",
	"Hizmet ad&#305; {{1}} tekrar edilir."
	};


char* MLG_Network_IGMPFilter_AlertMsg_Str7[] = {
	"Please add the group.",
	"L&#252;tfen grubu ekleyiniz."
	};


char* MLG_Network_IGMPFilter_AlertMsg_Str8[] = {
	"Please enter a valid mask",
	"L&#252;tfen ge&#231;erli bir maske giriniz."
	};

char* MLG_Network_IGMPFilter_AlertMsg_Str9[] = {
	"Please enter a valid max allowed channels.",
	"L&#252;tfen ge&#231;erli bir maksimum izinli kanal giriniz."
	};

char* MLG_Network_IGMPFilter_AlertMsg_Str10[] = {
	"Please select the service.",
	"L&#252;tfen hizmeti se&#231;iniz."
	};

char* MLG_Network_IGMPFilter_AlertMsg_Str11[] = {
	"Please select the host.",
	"L&#252;tfen host&#305; se&#231;iniz."
	};

char* MLG_Network_IGMPFilter_AlertMsg_Str12[] = {
	"The IP address {{1}} is selected.",
	"IP adresi {{1}} se&#231;ilir."
	};

char* MLG_Network_IGMPACL_Str11[] = {
	"IGMP ACL Delete",
	"IGMP ACL Sil"
	};

char* MLG_Network_IGMPACL_Str12[] = {
	"Multicast Address",
	"Multicast Yay&#305;n Adresi"
	};

char* MLG_Network_IGMPACL_Str13[] = {
	"Multicast Address Mask",
	"Multicast Yay&#305;n Adres Maskesi"
	};


char* MLG_Network_IGMPACL_AlertMsg_Str1[] = {
	"Address {{1}} is an invalid IP address.",
	"Adres {{1}} ge&#231;ersiz bir IP adresi."
	};

char* MLG_Network_IGMPACL_AlertMsg_Str2[] = {
	"Address {{1}} is an invalid mask.",
	"Adres {{1}} ge&#231;ersiz bir maske."
	};

char* MLG_Network_IGMPACL_AlertMsg_Str3[] = {
	"Please select the ACL type",
	"L&#252;tfen ACL t&#252;r&#252;n&#252; se&#231;iniz."
	};

char* MLG_Network_IGMPACL_AlertMsg_Str4[] = {
	"Address {{1}} is a repeat IP address.",
	"Adres {{1}} tekrar edilen bir IP adresi."
	};

char* MLG_Network_IGMPACL_AlertMsg_Str5[] = {
	"Address {{1}} / {{2}} is a repeat IP address.",
	"Adres {{1}} / {{2}} tekrar edilen bir IP adresi."
	};

char* MLG_Network_LANSetup_Str21[] = {
	"DHCP Relay",
	"DHCP Aktarma"
	};

char* MLG_Network_LANSetup_Str22[] = {
	"DHCP Relay Server Addresss",
	"DHCP Aktarma Sunucusu Adresi "
	};

char* MLG_Network_LANSetup_Str23[] = {
	"Blocking Mode",
	"Engelleme Modu "
	};

char* MLG_Network_LANSetup_Str24[] = {
	"Delegate prefix from WAN",
	"WAN&#39; dan gelen &#246;neki devret"
	};

char* MLG_Network_LANSetup_Str26[] = {
	"Standard Mode",
	"Standart Mod"
	};

char* MLG_Network_LANSetup_Str27[] = {
	"LAN IPv6 Address Assign Setup",
	"Yerel A&#287; IPv6 Adresi Atama Kurulumu"
	};

char* MLG_Network_LANSetup_Str28[] = {
	"Enable MLD Snooping",
	"MLD Trafik G&#246;zetlemeyi etkinle&#351;tir "
	};

char* MLG_Network_LANSetup_Str29[] = {
	"DHCPv6 Configuration",
	"DHCPv6 Yap&#305;land&#305;rmas&#305;"
	};

char* MLG_Network_LANSetup_Str30[] = {
	"DHCPv6 State",
	"DHCPv6 Durumu"
	};

char* MLG_Network_LANSetup_Str31[] = {
	"DHCPv6 Disable",
	"DHCPv6 Devre D&#305;&#351;&#305; B&#305;rak"
	};

char* MLG_Network_LANSetup_Str32[] = {
	"DHCPv6 Server",
	"DHCPv6 Sunucusu"
	};

char* MLG_Network_LANSetup_Str33[] = {
	"DHCPv6 Relay",
	"DHCP Aktarma"
	};

char* MLG_Network_LANSetup_Str34[] = {
	"IPv6 DNS Values",
	"IPv6 DNS De&#287;erleri"
	};

char* MLG_Network_LANSetup_Str35[] = {
	"IPv6 DNS Server",
	"IPv6 DNS Sunucusu"
	};

char* MLG_Network_LANSetup_Str36[] = {
	"IPv6 Address Values",
	"IPv6 Adres De&#287;erleri"
	};

char* MLG_Network_LANSetup_Str37[] = {
	"IPv6 Start Address",
	"IPv6 Ba&#351;lang&#305;&#231; &#8203;&#8203;Adresi"
	};

char* MLG_Network_LANSetup_Str38[] = {
	"IPv6 End Address",
	"IPv6 Biti&#351; Adresi"
	};

char* MLG_Network_LANSetup_Str39[] = {
	"IPv6 Domain Name",
	"IPv6 Alan Ad&#305;"
	};

char* MLG_Network_LANSetup_Str40[] = {
	"IPv6 Router Advertisement State",
	"IPv6 Y&#246;nlendirici Bildiri Durumu"
	};

char* MLG_Network_LANSetup_Str41[] = {
	"RADVD State",
	"RADVD Durumu"
	};

char* MLG_Network_LANSetup_Str42[] = {
	"From ISP",
	"ISS&#39; den"
	};

char* MLG_Network_LANSetup_Str43[] = {
	"ULA IPv6 Address Setup",
	"ULA IPv6 Adres Kurulumu"
	};

char* MLG_Network_LANSetup_Str44[] = {
	"IPv6 Address",
	"IPv6 Adresi"
	};

char* MLG_Network_LANSetup_Str45[] = {
	"Prefix Length",
	"&#214;nek Uzunlu&#287;u"
	};

char* MLG_Network_LANSetup_Str46[] = {
	"MLD Snooping",
	"MLD Trafik G&#246;zetleme"
	};

char* MLG_Network_LANSetup_Str47[] = {
	"IPv6 State",
	"IPv6 Durumu"
	};

char* MLG_Network_LANSetup_Str48[] = {
	"LAN IPv6 Mode Setup",
	"Yerel A&#287; Pv6 Modu Kurulumu"
	};

char* MLG_Network_LANSetup_Str49[] = {
	"IGMP Snooping",
	"IGMP Trafik G&#246;zetleme"
	};

char* MLG_Network_LANSetup_Str50[] = {
	"LAN IPv6 Address Setup",
	"Yerel A&#287; IPv6 Adres Kurulumu"
	};

char* MLG_Network_LANSetup_Str51[] = {
	"Enable IGMP Snooping",
	"IGMP Trafik G&#246;zetlemeyi etkinle&#351;tir "
	};

char* MLG_Network_LANSetup_Str52[] = {
	"ULA Pseudo-Random Global ID",
	"ULA S&#246;zde Rastgele K&#252;resel ID"
	};

char* MLG_Network_LANSetup_Str53[] = {
	"stateless + DNS send by RADVD (DHCPv6 server disable)",
	"(null)"
	};

char* MLG_Network_LANSetup_Str54[] = {
	"stateless + DNS send by DHCPv6 (DHCPv6 server enable)",
	"(null)"
	};

char* MLG_Network_LANSetup_Str55[] = {
	"stateful + DHCPv6 server (DHCPv6 server enable)",
	"(null)"
	};

char* MLG_Network_LANSetup_Str56[] = {
	"stateful + DHCPv6 relay (DHCPv6 relay enable)",
	"(null)"
	};

char* MLG_Network_HPNACfg_Str1[] = {
	"HPNA port can be enabled/disabled here.",
	"HPNA portu buradan etkinle&#351;tirilebilir / devre d&#305;&#351;&#305; b&#305;rak&#305;labilir."
	};

char* MLG_Network_LANVLAN_Str15[] = {
	"The Lan VLAN operation only works in downstream traffic.",
	"Yerel A&#287; VLAN i&#351;lemi, yaln&#305;zca indirilen trafikte &#231;al&#305;&#351;&#305;r."
	};


char* MLG_Network_LANVLAN_Str16[] = {
	"If TAG Operation is Add,the VLAN tag only add when downstream packet is Untag.",
	"ET&#304;KETLEME &#304;&#351;lemi Ekli oldu&#287;unda, indirme paketi Etiketi Kald&#305;r&#305;lm&#305;&#351; olarak se&#231;ili ise VLAN etiketi devreye girer."
	};

char* MLG_Network_LANVLAN_Str17[] = {
	"Priority of HPNA must be set between 0 to 7",
	"HPNA &#214;nceli&#287;i 0 ile 7 aras&#305;nda olmal&#305;d&#305;r"
	};

char* MLG_Network_LANVLAN_Str18[] = {
	"Priority of LAN{{1}} must be set between 0 to 7",
	"{{1}} Yerel A&#287; &#214;nceli&#287;i 0 ile 7 aras&#305;nda olmal&#305;d&#305;r"
	};

char* MLG_Network_LANVLAN_Str19[] = {
	"VLAN ID of HPNA must be set between 0 and 4094.",
	"HPNA VLAN ID 0 ile 4094 aras&#305;nda olmal&#305;d&#305;r."
	};

char* MLG_Network_LANVLAN_Str20[] = {
	"VLAN ID of LAN{{1}} must be set between 0 and 4094.",
	"Yerel A&#287; VLAN ID 0 ile 4094 aras&#305;nda olmal&#305;d&#305;r."
	};

char* MLG_Network_StaticDHCP_Str8[] = {
	"Static DHCP Edit",
	"Statik DHCP D&#252;zenle"
	};

char* MLG_Network_StaticDHCP_Str9[] = {
	"Static DHCP Delete",
	"Statik DHCP Sil"
	};

char* MLG_Network_StaticDHCP_AlertMsg_Str2[] = {
	"The number of static lease records is limited to 64.",
	"Statik kira kay&#305;t say&#305;s&#305; 64 ile s&#305;n&#305;rl&#305;d&#305;r."
	};

char* MLG_Network_StaticDHCP_AlertMsg_Str3[] = {
	"Duplicate static lease information! Please check the MAC address or IP address.",
	"Statik kira bilgileri kullan&#305;mda! L&#252;tfen MAC adresini veya IP adresini kontrol ediniz."
	};

char* MLG_Network_StaticDHCP_AlertMsg_Str4[] = {
	"IP address is not in LAN subnet! Please input a IP address in",
	"IP adresi Yerel A&#287; alt a&#287; maskesinde mevcut de&#287;il! L&#252;tfen bir IP adresi giriniz."
	};

char* MLG_Network_StaticDHCP_AlertMsg_Str5[] = {
	"IP address is not in LAN subnet! Please input a IP address in",
	"IP adresi Yerel A&#287; alt a&#287; maskesinde mevcut de&#287;il! L&#252;tfen bir IP adresi giriniz."
	};

char* MLG_Network_StaticDHCP_AlertMsg_Str6[] = {
	"Invalid ip/subnetMask",
	"Ge&#231;ersiz IP / Alt A&#287; Maskesi"
	};

char* MLG_Network_StaticDHCP_AlertMsg_Str7[] = {
	"Only support subnet mask: Class A: 255.0.0.0; Class B: 255.255.0.0 and Class C: 255.255.255.0/255.255.255.128/255.255.255.192/255.255.255.224/255.255.255.240/255.255.255.248/255.255.255.252.",
	"Sadece alt a&#287; maskesini destekle: S&#305;n&#305;f A: 255.0.0.0 S&#305;n&#305;f B: 255.255.0.0 ve S&#305;n&#305;f C: 255.255.255.0/255.255.255.128/255.255.255.192/255.255.255.224/255.255.255.240/255.255.255.248/255.255.255.252."
	};

char* MLG_Network_StaticDHCP_AlertMsg_Str8[] = {
	"IP address cannot be same as the broadcast ip address.",
	"IP adresi, yay&#305;n IP adresi ile ayn&#305; olamaz."
	};

char* MLG_Network_StaticDHCP_AlertMsg_Str9[] = {
	"IP Address {{1}} is invalid IP address.",
	"IP Adresi {{1}} ge&#231;ersiz bir IP adresi."
	};

char* MLG_Network_StaticDHCP_AlertMsg_Str10[] = {
	"Subnet mask {{1}} is invalid IP address.",
	"Alt a&#287; maskesi {{1}} ge&#231;ersiz bir IP adresi."
	};

char* MLG_Network_StaticDHCP_AlertMsg_Str11[] = {
	"The IP address cannot be the network address.",
	"IP adresi, a&#287; adresi olamaz."
	};

char* MLG_Network_StaticDHCP_AlertMsg_Str12[] = {
	"The IP address cannot be the broadcast address.",
	"IP adresi, yay&#305;n adresi olamaz."
	};

char* MLG_Network_StaticDHCP_AlertMsg_Str13[] = {
	"The IP Address of Public LAN {{1}} is invalid.",
	"Ortak Yerel A&#287; IP adresi {{1}} ge&#231;ersiz."
	};

char* MLG_Network_StaticDHCP_AlertMsg_Str14[] = {
	"The Subnet Mask of Public LAN {{1}} is invalid.",
	"Ortak Yerel A&#287; {{1}} Alt A&#287; Maskesi ge&#231;ersiz."
	};

char* MLG_Network_StaticDHCP_Str10[] = {
	"Public LAN",
	"Ortak Yerel A&#287;"
	};

char* MLG_Network_StaticDHCP_Str11[] = {
	"Offer Public IP by DHCP",
	"DHCP&#39; den Ortak IP Sunumu"
	};

char* MLG_Network_StaticDHCP_Str12[] = {
	"Enable ARP Proxy",
	"ARP Proxy etkinle&#351;tir"
	};

char* MLG_Network_StaticDHCP_Str14[] = {
	"IP Alias Setup",
	"IP Alias &#8203;&#8203;Kurulumu"
	};

char* MLG_Network_VendorID_Explain[] = {
	"Device can idenitify the STB base on configured Vendor ID.",
	"Ayg&#305;t, yap&#305;land&#305;r&#305;lm&#305;&#351; Bayi ID temelinde STB&#39; yi tan&#305;mlayabilir."
	};

char* MLG_Network_Ethwanlan_Explain[] = {
	"You can convert your Ethernet WAN port as LAN port, or restore the LAN port to WAN port.",
	"Ethernet WAN portunuzu Yerel A&#287; portuna d&#246;n&#252;&#351;t&#252;rebilir veya Yerel A&#287; portunu WAN portu olarak geri y&#252;kleyebilirsiniz."
	};

char* MLG_Network_Ethwanlan_Str1[] = {
	"State Enable, the Ethernet Port is LAN ethernet.",
	"Durum Etkinle&#351;tirme, Ethernet Portu Yerel A&#287; Ethernet&#8217; idir."
	};

char* MLG_Network_Ethwanlan_Str2[] = {
	"State Disable, the Ethernet Port is WAN ethernet.",
	"Durum Devre D&#305;&#351;&#305; B&#305;rakma, Ethernet Portu WAN Ethernet&#8217; idir."
	};

char* MLG_Network_USBService_Str1[] = {
	"The device can share files from your USB flash drive or disk when you attach it to the USB port. You may start from deciding which folders in the USB disks to share and which users can access the shared folders.",
	"USB fla&#351; s&#252;r&#252;c&#252;s&#252;nden veya USB portuna takt&#305;&#287;&#305;n&#305;zda diskten dosyalar&#305; payla&#351;abilirsiniz USB disklerdeki hangi klas&#246;rleri payla&#351;aca&#287;&#305;n&#305;za ve payla&#351;&#305;lan klas&#246;rlere hangi kullan&#305;c&#305;lar&#305;n eri&#351;ebilece&#287;ine karar vermekle ba&#351;layabilirsiniz."
	};

char* MLG_Network_USBService_Str2[] = {
	" File Sharing Services:",
	" Dosya Payla&#351;&#305;m Hizmetleri:"
	};

char* MLG_Network_USBService_Str3[] = {
	"If you would like to play any media contents stored in a USB flash drive or disk through a media client, like PS3, attach the USB flash drive or disk onto this device and enable the Media Server function.",
	"PS3 gibi bir medya istemci &#252;zerinden bir USB fla&#351; s&#252;r&#252;c&#252; veya disk i&#231;erisindeki herhangi bir medya i&#231;eri&#287;ini oynatmak isterseniz, USB fla&#351; s&#252;r&#252;c&#252;s&#252;n&#252; veya diski bu cihaza tak&#305;n ve Ortam Sunucusu i&#351;levini etkinle&#351;tirin."
	};

char* MLG_Network_USBService_Str4[] = {
	"Media Server:",
	"Medya Sunucusu:"
	};

char* MLG_Network_USBService_Str5[] = {
	"Media Library Path:",
	"Ortam Kitapl&#305;&#287;&#305; Yolu:"
	};

char* MLG_Network_USBService_Str6[] = {
	"When a supported printer is attached to this device, it can act as a server to accept print jobs from LAN clients on your network. In other words, you can use any of your computers to print something you want.",
	"Bu cihaza desteklenen bir yaz&#305;c&#305; tak&#305;ld&#305;&#287;&#305;nda, modem a&#287;&#305;n&#305;zdaki Yerel A&#287; istemcilerinden gelen yazd&#305;rma g&#246;revlerini kabul etmede bir sunucu olarak i&#351;lev g&#246;rebilir. Di&#287;er bir deyi&#351;le, istedi&#287;iniz herhangi bir &#351;eyi yazd&#305;rmak i&#231;in bilgisayarlar&#305;n&#305;zdan herhangi birini kullanabilirsiniz."
	};

char* MLG_Network_USBService_Str7[] = {
	"Print Server:",
	"Yazd&#305;rma Sunucusu "
	};

char* MLG_Network_USBService_Str8[] = {
	"Maker and model:",
	"Marka ve model:"
	};

char* MLG_Network_USBService_Str9[] = {
	"To use the print server, define a network printer with URL http:// {{1}} :631/printers/ {{2}} .",
	"Yazd&#305;rma sunucusunu kullanmak i&#231;in, URL http:// {{1}} :631/printers/ {{2}} ile bir a&#287; yaz&#305;c&#305;s&#305; tan&#305;mlay&#305;n&#305;z."
	};

char* MLG_Network_USBService_Str10[] = {
	"To use the print server, define a network printer with URL ",
	"Bask&#305; sunucusunu kullanmak i&#231;in, URL ile bir a&#287; yaz&#305;c&#305;s&#305; tan&#305;mlamak"
	};

char* MLG_Network_USBService_Str11[] = {
	"Add New User",
	"Yeni Kullan&#305;c&#305; Ekle"
	};

char* MLG_Network_USBService_Str12[] = {
	"Add Share Directory",
	"Hisse Dizin Ekle"
	};

char* MLG_Network_USBService_Str13[] = {
	"Volume",
	"Birim"
	};

char* MLG_Network_USBService_Str14[] = {
	"Share Path",
	"Hisse Yol"
	};

char* MLG_Network_USBService_Str15[] = {
	"Access Level",
	"Seviye eri&#351;im"
	};

char* MLG_Network_USBService_Str16[] = {
	"Public",
	"kamu"
	};

char* MLG_Network_USBService_Str17[] = {
	"Browse",
	"G&#246;zat"
	};

char* MLG_Network_USBService_Str18[] = {
	"Share Directory List",
	"Hisse Dizin Listesi"
	};

char* MLG_Network_USBService_Str19[] = {
	"Account Management",
	"Hesap Y&#246;netimi"
	};

char* MLG_Network_USBService_Str20[] = {
	"Add New Share",
	"Yeni Payla&#351;&#305;m Ekle"
	};

char* MLG_Network_USBService_Str21[] = {
	"Information",
	"Bilgi"
	};

char* MLG_Network_USBService_Str22[] = {
	"Server Configuration",
	"Sunucu Yap&#305;land&#305;rmas&#305;"
	};

char* MLG_Network_USBService_Str23[] = {
	"Capacity",
	"Kapasite"
	};

char* MLG_Network_USBService_Str24[] = {
	"Used Space",
	"Kullan&#305;lan Alan"
	};

char* MLG_Network_USBService_Str25[] = {
	"Allow Users",
	"Kullan&#305;c&#305;lar izin ver"
	};

char* MLG_Network_USBService_Str26[] = {
	"Available Users",
	"Mevcut Kullan&#305;c&#305;lar"
	};

char* MLG_Network_USBService_Str27[] = {
	"To access the USB drive: <br> Windows: Run > \\\\",
	"USB s&#252;r&#252;c&#252;s&#252;ne eri&#351;mek i&#231;in: <br> Windows: &#199;al&#305;&#351;t&#305;r (Windows + R) > \\\\"
	};

char* MLG_Network_USBService_Str28[] = {
	"MacOS: Finder > Connect to Server (Command + K) > ",
	"MacOS: Finder > Sunucuya Ba&#287;lan (Command + K) > "
	};

char* MLG_Network_USBService_AlertMsg_Str1[] = {
	"Maker and model length is invalid [1-80]",
	"Marka ve model uzunlu&#287;u ge&#231;ersiz [1-80] "
	};

char* MLG_Network_halfBridge_Str1[] = {
	"IP Passthrough",
	"IP Do&#287;rudan Ge&#231;i&#351;"
	};

char* MLG_Network_halfBridge_Str2[] = {
	"Dynamic DNS Setup",
	"Dinamik DNS Kurulumu"
	};

char* MLG_Network_halfBridge_Str3[] = {
	"Active WAN IP Passthrough",
	"Aktif WAN IP Do&#287;rudan Ge&#231;i&#351;i"
	};

char* MLG_Network_halfBridge_Str4[] = {
	"You may select which computer should use the WAN IP address of the DSL Router in one of three ways :",
	"DSL Y&#246;nlendiricisi WAN IP adresini kullanmas&#305; gereken bilgisayar&#305; a&#351;a&#287;&#305;daki &#252;&#231; y&#246;ntemden biriyle se&#231;ebilirsiniz:"
	};

char* MLG_Network_halfBridge_Str5[] = {
	"Manually enter the WAN IP address of the DSL Router in the computer.",
	"DSL Y&#246;nlendiricisi WAN IP adresini bilgisayara manuel olarak giriniz."
	};

char* MLG_Network_halfBridge_Str6[] = {
	"Enter the MAC Address of the computer :",
	"Bilgisayar&#305;n MAC adresini giriniz:"
	};

char* MLG_Network_halfBridge_Str7[] = {
	"Select the computer from a list of connected computers:",
	"Ba&#287;l&#305; bilgisayarlar listesinden bilgisayar se&#231;iniz:"
	};

char* MLG_Network_halfBridge_Str8[] = {
	"IP Address Update Policy",
	"IP Adresi G&#252;ncelleme kural&#305;"
	};

char* MLG_Network_halfBridge_Str9[] = {
	"Host Name",
	"Host Ad&#305;"
	};

char* MLG_Network_halfBridge_Str10[] = {
	"1:After you change your WAN IP passthrough settings please either reboot this device or release and renew your DHCP lease.</br> &nbsp;&nbsp;2:To use WAN IP Passthrough you will need to set the firewall to either Off, Low or Custom (with the correct WAN/Router rule).</br>&nbsp;&nbsp;3: If you are enabling or disabling WAN IP Passthrough from the PC that will also be the IP Passthrough PC please Logout after clicking Apply.",
	"1: WAN IP D&#252;z Ge&#231;i&#351;i ayarlar&#305;n&#305;z&#305; de&#287;i&#351;tirdikten sonra ya bu cihaz&#305; yeniden ba&#351;lat&#305;n&#305;z ya da DHCP kiran&#305;z&#305; serbest b&#305;rak&#305;n&#305;z ve yenileyiniz. </br> &nbsp;&nbsp; 2: WAN IP D&#252;z Ge&#231;i&#351;ini kullanmak i&#231;in g&#252;venlik duvar&#305;n&#305;z&#305;n durumunu ya Kapal&#305;, D&#252;&#351;&#252;k ya da &#214;zel olarak ayarlaman&#305;z gerekir (do&#287;ru WAN / Y&#246;nlendirici policy ile).</br>&nbsp;&nbsp;3: PC&#39; den WAN IP D&#252;z Ge&#231;i&#351;ini etkinle&#351;tiriyor veya devre d&#305;&#351;&#305; b&#305;rak&#305;yorsan&#305;z, bu, ayn&#305; zamanda PC&#39; den IP Do&#287;rudan Ge&#231;i&#351; olacakt&#305;r, l&#252;tfen Uygula se&#231;ene&#287;ine t&#305;klad&#305;ktan sonra Oturumu Kapat&#305;n&#305;z."
	};

char* MLG_Network_LANVLAN_Str21[] = {
	"LAN Port",
	"LAN portu"
	};

char* MLG_Network_LANSetup_AlertMsg_Str11[] = {
	"The Ending IP Address is invalid. Please enter a valid IP address.",
	"Biti&#351; IP adresi ge&#231;ersizdir. L&#252;tfen ge&#231;erli bir IP adresi giriniz."
	};

char* MLG_Network_LANSetup_AlertMsg_Str12[] = {
	"The Ending IP Address cannot be the same as the LAN IP address of the modem. Please enter a valid IP address.",
	"Biti&#351; IP adresi modemin LAN IP adresi ile ayn&#305; olmaz. L&#252;tfen ge&#231;erli bir IP adresi giriniz."
	};

char* MLG_Network_LANSetup_AlertMsg_Str13[] = {
	"Last portion of IP Address has to be less than 254 for Enabled DHCP Server",
	"Etkin DHCP Sunucusunun IP adresinin son k&#305;sm&#305; 254&#39;ten daha azd&#305;r."
	};

char* MLG_Network_LANSetup_AlertMsg_Str14[] = {
	"LAN IP Address cannot be between Beginning IP Address and Ending IP Address.",
	"LAN IP Adresi Ba&#351;lang&#305;&#231; IP adresi ve Biti&#351; IP adresi aras&#305;nda olamaz."
	};

char* MLG_Network_LANSetup_AlertMsg_Str15[] = {
	"There is only a bridged interface. Do not enable DHCP server.",
	"Sadece bir k&#246;pr&#252; arabirimi vard&#305;r. DHCP sunucusunu etkile&#351;tirmeyiniz."
	};

char* MLG_Network_LANSetup_AlertMsg_Str16[] = {
	"The LAN IP Address is invalid. Please enter a valid LAN IP address.",
	"LAN IP Adresi ge&#231;ersizdir. L&#252;tfen ge&#231;erli bir LAN IP adresi giriniz."
	};

char* MLG_Network_LANSetup_AlertMsg_Str17[] = {
	"The Subnet Mask is invalid. Please enter a valid Subnet Mask.",
	"Alt a&#287; maskesi ge&#231;ersizdir. L&#252;tfen ge&#231;erli bir alt a&#287; maskesi giriniz."
	};

char* MLG_Network_LANSetup_AlertMsg_Str18[] = {
	"The Beginning IP Address is invalid. Please enter a valid IP address.",
	"Ba&#351;lang&#305;&#231; IP adresi ge&#231;ersizdir. L&#252;tfen ge&#231;erli bir IP adresi giriniz."
	};

char* MLG_Network_LANSetup_AlertMsg_Str19[] = {
	"The Beginning IP Address cannot be the same as the LAN IP address of the modem. Please enter a valid IP address.",
	"Ba&#351;lang&#305;&#231; IP adresi modemin LAN IP adresi ile ayn&#305; olmaz. L&#252;tfen ge&#231;erli bir IP adresi giriniz."
	};

char* MLG_Network_LANSetup_AlertMsg_Str20[] = {
	"This IP address is used by other Group.",
	"(null)"
	};

char* MLG_Network_LANSetup_AlertMsg_Str21[] = {
	"The day is invalid. Please enter a valid day which is located from 0 to 365.",
	"G&#252;nler ge&#231;ersizdir.  L&#252;tfen 0&#39;dan 365&#39;e kadar ge&#231;erli bir G&#252;n  giriniz."
	};

char* MLG_Network_LANSetup_AlertMsg_Str22[] = {
	"The hour is invalid. Please enter a valid hour which is located from 0 to 23.",
	"Saatler ge&#231;ersizdir.  L&#252;tfen 0&#39;dan 23&#39;e kadar ge&#231;erli bir Saat giriniz."
	};

char* MLG_Network_LANSetup_AlertMsg_Str23[] = {
	"The minute is invalid. Please enter a valid minute which is located from 0 to 59.",
	"Dakikalar ge&#231;ersizdir.  L&#252;tfen 0&#39;dan 59&#39;a kadar ge&#231;erli bir Dakika giriniz."
	};

char* MLG_Network_LANSetup_AlertMsg_Str24[] = {
	"The Lease Time is zero. Please enter a valid Lease Time.",
	"DHCP Kiralama S&#252;resi s&#305;f&#305;rd&#305;r. L&#252;tfen ge&#231;erli bir DHCP kiralama s&#252;resi giriniz."
	};

char* MLG_Network_LANSetup_AlertMsg_Str25[] = {
	"The Lease Time is more than 365 days. Please enter a valid Lease Time.",
	"DHCP Kiralama S&#252;resi 365 g&#252;nden fazlad&#305;r. L&#252;tfen ge&#231;erli bir DHCP Kiralama S&#252;resi giriniz."
	};

char* MLG_Network_LANSetup_AlertMsg_Str26[] = {
	"Address \' {{1}} \' is used for LAN IP address.",
	"(null)"
	};

char* MLG_Network_LANSetup_AlertMsg_Str31[] = {
	"DNS server IP address 1 is the same as DNS server IP address 2. Please enter a valid DNS Server 2.",
	"DNS sunucusunun 1. IP adresi, DNS sunucusunun 2. IP adresi ile ayn&#305;d&#305;r. L&#252;tfen DNS  sunucusunun 2. IP adresi i&#231;in ge&#231;erli bir IP giriniz."
	};

char* MLG_Network_LANSetup_AlertMsg_Str32[] = {
	"The LAN IP address or subnet mask is changed. You need refresh your IP address to access correct LAN IP address of the device.",
	"LAN IP adresi veya alt a&#287; maskesi de&#287;i&#351;tirilmi&#351;tir. Do&#287;ru LAN IP adresi  ile cihaz&#305;n&#305;za eri&#351;mek i&#231;in  IP adresinizi yenileyiniz."
	};

char* MLG_Network_LANSetup_AlertMsg_Str33[] = {
	"IPv6 Prefix \'{{1}}\' is invalid IPv6 address.",
	"IPv6 \'{{1}}\' &#214;neki ge&#231;ersiz bir IPv6 adresidir."
	};

char* MLG_Network_LANSetup_AlertMsg_Str34[] = {
	"Please enter the prefix length \'/\' to IPv6 Prefix field, e.g.: xxxx:xxxx::/xx",
	"L&#252;tfen IPv6 &#214;nek alan&#305; i&#231;in ge&#231;erli bir &#246;nek uzunlu&#287;u \'/\' giriniz, &#246;rn: xxxx:xxxx::/xx"
	};

char* MLG_Network_LANSetup_AlertMsg_Str35[] = {
	"Please remove the \'/\' on Beginning IPv6 Address field",
	"L&#252;tfen Ba&#351;lang&#305;&#231; IP Adresi alan&#305;ndaki \'/\'  kald&#305;r&#305;n&#305;z."
	};

char* MLG_Network_LANSetup_AlertMsg_Str36[] = {
	"The Beginning IPv6 Address is invalid. Please enter a valid IPv6 address.",
	"Ba&#351;lang&#305;&#231; IPv6 Adresi ge&#231;ersizdir. L&#252;tfen ge&#231;erli bir IPv6 adresi giriniz."
	};

char* MLG_Network_LANSetup_AlertMsg_Str37[] = {
	"The Beginning IPv6 Address does not support ZERO COMPRESSION \'::\'.",
	"Ba&#351;lang&#305;&#231; IPv6 Adresi ZERO COMPESSION \'::\' u desteklemez."
	};

char* MLG_Network_LANSetup_AlertMsg_Str38[] = {
	"The Beginning IPv6 Address length is too little.",
	"Ba&#351;lang&#305;&#231; IPv6 Adresi uzunlu&#287;u &#231;ok k&#252;&#231;&#252;kt&#252;r."
	};

char* MLG_Network_LANSetup_AlertMsg_Str39[] = {
	"The Beginning IPv6 Address length is too big.",
	"Ba&#351;lang&#305;&#231; IPv6 Adresi uzunlu&#287;u &#231;ok b&#252;y&#252;kt&#252;r."
	};

char* MLG_Network_LANSetup_AlertMsg_Str41[] = {
	"The Beginning IPv6 Address is not more than the Ending IPv6 Address.",
	"Ba&#351;lang&#305;&#231; IPv6 Adresi , Biti&#351; IPv6 Adresi&#39;nden b&#252;y&#252;k olamaz."
	};

char* MLG_Network_LANSetup_AlertMsg_Str42[] = {
	"The Ending IPv6 Address is invalid. Please enter a valid IPv6 address.",
	"Biti&#351; IPv6 Adresi ge&#231;ersizdir. L&#252;tfen ge&#231;erli bir IPv6 adresi giriniz."
	};

char* MLG_Network_LANSetup_AlertMsg_Str43[] = {
	"The Ending IPv6 Address does not support ZERO COMPRESSION \'::\'.",
	"Biti&#351; IPv6 Adresi ZERO COMPESSION \'::\' &#39;u desteklemez."
	};

char* MLG_Network_LANSetup_AlertMsg_Str44[] = {
	"The Ending IPv6 Address length is too little.",
	"Biti&#351; IPv6 Adresinin uzunlu&#287;u &#231;ok k&#252;&#231;&#252;kt&#252;r."
	};

char* MLG_Network_LANSetup_AlertMsg_Str45[] = {
	"The Ending IPv6 Address length is too big.",
	"Biti&#351; IPv6 Adresinin uzunlu&#287;u &#231;ok b&#252;y&#252;kt&#252;r."
	};

char* MLG_Network_LANSetup_AlertMsg_Str46[] = {
	"Invalid LAN IPv6 prefix address.",
	"Ge&#231;ersiz LAN IPv6 &#246;nek adresidir."
	};

char* MLG_Network_LANSetup_AlertMsg_Str47[] = {
	"Invalid LAN IPv6 address.",
	"Ge&#231;ersiz LAN IPv6 adresidir."
	};

char* MLG_Network_LANSetup_AlertMsg_Str48[] = {
	"LAN IPv6 Prefix \'{{1}}\' is invalid IPv6 Prefix.",
	"LAN IPv6 \'{{1}}\' &#214;neki ge&#231;ersiz bir IPv6 &#246;nekidir. "
	};

char* MLG_Network_LANSetup_AlertMsg_Str49[] = {
	"The Relay Server Address is invalid. Please enter a valid IP address.",
	"Relay Sunucu adresi ge&#231;ersizidir. L&#252;tfen ge&#231;erli bir IP giriniz."
	};

char* MLG_Network_LANSetup_AlertMsg_Str50[] = {
	"Please disable NAT if you want to enable DHCP relay.",
	"DHCP Relay&#39;i etkinle&#351;tirmek isterseniz, NAT&#39;&#305; kapat&#305;n&#305;z."
	};

char* MLG_Network_LANSetup_AlertMsg_Str51[] = {
	"Please remove the \'/\', and keyin LAN IPv6 prefix to Prefix Length field.",
	"(null)"
	};

char* MLG_Network_LANSetup_AlertMsg_Str52[] = {
	"WAN side IA_PD is disabled, please enable IA_PD on WAN side or select static/ULA pseudo-random global ID prefix on LAN side",
	"(null)"
	};

char* MLG_Network_LANSetup_AlertMsg_Str53[] = {
	"This IP Address is used by other Group.",
	"(null)"
	};

char* MLG_Network_LANVLAN_Str17_1[] = {
	"Priority of LAN5 must be set between 0 to 7",
	"LAN5 &#246;nceli&#287;i 0 ile 7 aras&#305;nda olmal&#305;d&#305;r."
	};

char* MLG_Network_LANVLAN_Str19_1[] = {
	"VLAN ID of LAN5 must be set between 0 and 4094",
	"LAN5&#39;in vlan ID&#39;si 0 ile 4094 aras&#305;nda olmal&#305;d&#305;r."
	};

char* MLG_Network_USBService_AlertMsg_Str11[] = {
	"Media path length is invalid [1-80].",
	"Medya yolu uzunlu&#287;u ge&#231;ersizdir, [1-80]."
	};

char* MLG_Network_STBVendorID_AlertMsg_Str1[] = {
	"Vendor ID \'{{1}}\' is already used.",
	"Vendor ID \'{{1}}\', zaten kullan&#305;lmaktad&#305;r."
	};

char* MLG_Network_STBVendorID_AlertMsg_Str2[] = {
	"Vendor ID \'{{1}}\' should not contain strange characters.",
	"Relay Sunucu adresi ge&#231;ersizidir. L&#252;tfen ge&#231;erli bir IP giriniz."
	};

char* MLG_Network_Routing_rip_Str1[] = {
	"To activate RIP for the WAN Interface, select the desired RIP version and operation and place a check in the Enable checkbox.",
	"WAN aray&#252;z&#252;nde RIP etkinle&#351;tirmek i&#231;in, istenen RIP s&#252;r&#252;m&#252;n&#252; se&#231;in ve 'Etkin' ba&#351;l&#305;kl&#305; s&#252;tunundaki onay kutusunu i&#351;aretleyin."
	};

char* MLG_Network_Routing_rip_Str2[] = {
	"To stop RIP on the WAN Interface, uncheck the Enable checkbox.",
	"WAN aray&#252;z&#252;nde RIP durdurmak i&#231;in, &#8216;Etkin&#8217; onay kutusundaki i&#351;aretini kald&#305;r&#305;n."
	};

char* MLG_Network_Routing_rip_Str3[] = {
	"Click the Apply button to star/stop RIP and save the configuration.",
	"RIP ba&#351;latmak ve yap&#305;land&#305;rmay&#305; kaydetmek i&#231;in 'Uygula' d&#252;&#287;mesine t&#305;klay&#305;n."
	};

char* MLG_Network_Routing_rip_Str4[] = {
	"Operation",
	"Operasyon"
	};

char* MLG_Network_Routing_rip_Str5[] = {
	"RIP CANNOT BE CONFIGURED on the WAN interface which has NAT enabled (such as PPPoE).",
	"RIP CANNOT BE CONFIGURED on the WAN interface which has NAT enabled (such as PPPoE)"
	};

char* MLG_Network_Wake_on_Lan_err1[] = {
	"IP Address \'{{1}}\' is invalid IP address",
	"IP Adresi \'{{1}}\' geçersiz bir IP adresidir"
	};

char* MLG_Network_Wake_on_Lan_err2[] = {
	"MAC Address \'{{1}}\' is invalid MAC address",
	"MAC Adresi \'{{1}}\' geçersiz bir MAC adresidir"
	};

char* MLG_Network_Wake_on_Lan_str1[] = {
	"Wake on Lan",
	"Wake on Lan"
	};

char* MLG_Network_Wake_on_Lan_str2[] = {
	"Wake up",
	"Uyandır"
	};

char* MLG_Network_Wake_on_Lan_str3[] = {
	"Wake up your PC in LAN if your PC supports 'Wake on LAN' feature",
	"Eğer bilgisayarınız ''Wake on Lan'' destekliyorsa, LAN'daki bilgisayarı uyandırınız."
	};

char* MLG_Network_Wake_on_Lan_str4[] = {
	"Wake by Address",
	"Adres ile Uyandır"
	};

char* MLG_Network_Wake_on_Lan_str5[] = {
	"Manual",
	"Manual"
	};

char* MLG_Network_ethenet_err1[] = {
	"Can not set when there is a wan interface for ethernet wan in \'{{1}}\' page.",
	"\'{{1}}\' sayfasında bir wan arayüzü yoksa ayarlanamaz."
	};

char* MLG_Network_ethenet_err2[] = {
	"The device will reboot after changing wan to lan.",
	"wan'ı lan olarak değiştirdiğinizde cihaz yeniden başlatılacaktır."
	};

char* MLG_Network_ethenet_err3[] = {
	"The browser no support XMLHttp Object",
	"Tarayıcı XMLHttp Objesini desteklemiyor"
	};

char* MLG_Network_LANVLAN_Str22[] = {
	"A LAN VLAN operation can add or unchange on packet transmit to LAN.",
	"Yerel A&#287; VLAN i&#351;lemi ile, LAN paketlerinin iletimi i&#231;in paket iletimini ekleyebilir veya hi&#231;bir de&#287;i&#351;iklik yapmayabilirsiniz."
	};

MAPPING_ITEM NetworkMappingItem[581];
