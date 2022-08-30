#include<stdio.h>	
#include<string.h>	
#include<stdlib.h>	
#include<time.h>	
#include "languages.h"	



char* MLG_WAN_Broadband_AlertMsg_Str1[] = {
	"Only support {{1}} WAN connections.",
	"Sadece {{1}} WAN Ba&#287;lant&#305;lar&#305;n&#305; desteklemektedir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str10[] = {
	"VPI {{1}} is out of range [0-255].",
	"VPI {{1}} , [0-255] aral&#305;&#287;&#305; d&#305;&#351;&#305;ndad&#305;r."
	};

char* MLG_WAN_Broadband_AlertMsg_Str11[] = {
	"VCI {{1}} is out of range [32-65535].",
	"VCI {{1}} , [32-65535] aral&#305;&#287;&#305; d&#305;&#351;&#305;ndad&#305;r ."
	};

char* MLG_WAN_Broadband_AlertMsg_Str12[] = {
	"Peak Cell Rate {{1}} is invalid.",
	"PCR {{1}} ge&#231;ersizdir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str13[] = {
	"Peak Cell Rate {{1}} is out of range [1-{{2}}].",
	"PCR {{1}} , [1-{{2}} aral&#305;&#287;&#305; d&#305;&#351;&#305;ndad&#305;r [1-{{2}}]."
	};

char* MLG_WAN_Broadband_AlertMsg_Str14[] = {
	"Sustainable Cell Rate {{1}} is invalid.",
	"S&#252;rd&#252;r&#252;lebilir H&#252;cre Oran&#305; {{1}} ge&#231;ersizdir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str15[] = {
	"Sustainable Cell Rate {{1}} is out of range [1-{{2}}].",
	"S&#252;rd&#252;r&#252;lebilir H&#252;cre Oran&#305; {{1}} aral&#305;&#287;&#305; d&#305;&#351;&#305;ndad&#305;r [1-{{2}}]."
	};

char* MLG_WAN_Broadband_AlertMsg_Str16[] = {
	"Sustainable Cell Rate {{1}} has to be smaller than Peak Cell Rate",
	"S&#252;rd&#252;r&#252;lebilir H&#252;cre Oran&#305; {{1}} Tepe H&#252;cre H&#305;z&#305;&#8217;ndan daha k&#252;&#231;&#252;k olmal&#305;d&#305;r."
	};

char* MLG_WAN_Broadband_AlertMsg_Str17[] = {
	"Maximum Burst Size {{1}} is invalid.",
	"ATM&#39;de PCR&#39;da g&#246;nderilebilecek maksimum h&#252;cre say&#305;s&#305; i&#231;in  {{1}} ge&#231;ersizdir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str18[] = {
	"Maximum Burst Size {{1}} is out of range [1-1000000].",
	"ATM&#39;de PCR&#39;da g&#246;nderilebilecek maksimum h&#252;cre say&#305;s&#305; {{1}}, [1-1000000] aral&#305;&#287;&#305; d&#305;&#351;&#305;ndad&#305;r."
	};

char* MLG_WAN_Broadband_AlertMsg_Str19[] = {
	"VLAN ID {{1}} is invalid.",
	"VLAN ID {{1}} ge&#231;ersizdir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str2[] = {
	"No value change.",
	"De&#287;er de&#287;i&#351;imi yoktur."
	};

char* MLG_WAN_Broadband_AlertMsg_Str20[] = {
	"Range of VLAN ID is 1~4094",
	"VLAN ID de&#287;er aral&#305;&#287;&#305; 1 ~4094 &#39;t&#252;r."
	};

char* MLG_WAN_Broadband_AlertMsg_Str21[] = {
	"VLAN 8021p Priority {{1}} is out of range [0-7].",
	"VLAN 8021p &#214;nceli&#287;i {{1}} , [0-7] aral&#305;&#287;&#305; d&#305;&#351;&#305;ndad&#305;r."
	};

char* MLG_WAN_Broadband_AlertMsg_Str22[] = {
	"VLAN ID {{1}} is out of range [0-4094].",
	"VLAN ID {{1}} ,  [0-4094] aral&#305;&#287;&#305;  d&#305;&#351;&#305;ndad&#305;r."
	};

char* MLG_WAN_Broadband_AlertMsg_Str23[] = {
	"VLAN ID {{1}} is already used.",
	"VLAN ID {{1}} kullan&#305;lmaktad&#305;r."
	};

char* MLG_WAN_Broadband_AlertMsg_Str24[] = {
	"The length of user name {{1}} is too long [0-256].",
	"Kullan&#305;c&#305; ad&#305; uzunlu&#287;u {{1}} &#231;ok uzundur [0-256]."
	};

char* MLG_WAN_Broadband_AlertMsg_Str25[] = {
	"Inactivity Timeout {{1}} is invalid.",
	"Etkisizlik Zaman A&#351;&#305;m&#305; {{1}} ge&#231;ersizdir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str26[] = {
	"Inactivity Timeout {{1}} is out of range [1-4320].",
	"Etkisizlik Zaman A&#351;&#305;m&#305; {{1}} , [1-4320] aral&#305;&#287;&#305; d&#305;&#351;&#305;ndad&#305;r."
	};

char* MLG_WAN_Broadband_AlertMsg_Str27[] = {
	"The length of PPP service {{1}} is too long [0-32].",
	"PPP hizmetinin uzunlu&#287;u  {{1}} &#231;ok uzundur [0-32]."
	};

char* MLG_WAN_Broadband_AlertMsg_Str28[] = {
	"The Gateway IP Address of Block of Static IP Addresses {{1}} is invalid.",
	"Statik IP Adreslerin Engellenmesi ile ilgili A&#287; Ge&#231;idi IP adresi {{1}} ge&#231;ersizdir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str29[] = {
	"The Subnet Mask of Block of Static IP Addresses {{1}} is invalid.",
	"Statik IP Adreslerin Engellenmesi ile ilgili Alt A&#287; Maskesi {{1}} ge&#231;ersizdir. "
	};

char* MLG_WAN_Broadband_AlertMsg_Str3[] = {
	"Wrong WAN interface to Bridge Mode.",
	"K&#246;pr&#252; Moduna yanl&#305;&#351; WAN arabirimi"
	};

char* MLG_WAN_Broadband_AlertMsg_Str30[] = {
	"MTU size {{1}} should be between 68 and 1492.",
	"MTU boyutu {{1}} 68 ve 1492 aras&#305;nda olmal&#305;d&#305;r."
	};

char* MLG_WAN_Broadband_AlertMsg_Str31[] = {
	"WAN IP address {{1}} is invalid IP address.",
	"WAN IP adresi {{1}} ge&#231;ersiz bir IP adresidir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str32[] = {
	"WAN subnet mask {{1}} is invalid IP address.",
	"WAN alt a&#287; maskesi {{1}} ge&#231;ersiz bir IP adresidir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str33[] = {
	"{{1}} is invalid gateway IP address.",
	"{{1}} Ge&#231;ersiz bir a&#287; ge&#231;idi IP adresidir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str34[] = {
	"MTU size {{1}} should be between 68 and 1500.",
	"MTU boyutu {{1}} 68 ve 1500 aras&#305;nda olmal&#305;d&#305;r."
	};

char* MLG_WAN_Broadband_AlertMsg_Str35[] = {
	"MTU size {{1}} should be between 68 and 1492.",
	"MTU boyutu {{1}} 68 ve 1492 aras&#305;nda olmal&#305;d&#305;r."
	};

char* MLG_WAN_Broadband_AlertMsg_Str35_2[] = {
	"MRU size {{1}} should be between 68 and 1492.",
	"MRU boyutu {{1}} 68 ve 1492 aras&#305;nda olmal&#305;d&#305;r."
	};

char* MLG_WAN_Broadband_AlertMsg_Str36[] = {
	"WAN IP address {{1}} is invalid IP address.",
	"WAN IP adresi {{1}} ge&#231;ersiz bir IP adresidir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str37[] = {
	"WAN subnet mask {{1}} is invalid IP address.",
	"WAN alt a&#287; maskesi {{1}} ge&#231;ersiz bir IP adresidir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str38[] = {
	"The Gateway IP Address of Block of Static IP addresses {{1}} is invalid.",
	"Statik IP Adreslerin Engellenmesi ile ilgili A&#287; Ge&#231;idi IP adresi {{1}} ge&#231;ersizdir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str39[] = {
	"The Subnet Mask of Block of Static IP Addresses  {{1}} is invalid.",
	"Statik IP Adreslerin Engellenmesi ile ilgili Alt A&#287; Maskesi {{1}} ge&#231;ersizdir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str4[] = {
	"Entry name is necessary.",
	"Girdi ad&#305; gerekmektedir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str40[] = {
	"Please enter a valid DNS address when DNS Type is Static",
	"L&#252;tfen DNS Tipi Statik oldu&#287;u zaman ge&#231;erli bir DNS adresi giriniz."
	};

char* MLG_WAN_Broadband_AlertMsg_Str41[] = {
	"Please enter a valid DNS address when DNS Type is Static",
	"L&#252;tfen DNS Tipi Statik oldu&#287;u zaman ge&#231;erli bir DNS adresi giriniz."
	};

char* MLG_WAN_Broadband_AlertMsg_Str42[] = {
	"Entry name is necessary.",
	"Girdi ad&#305; gerekmektedir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str43[] = {
	"Please enter valid rule name without special characters.",
	"L&#252;tfen &#246;zel karakterler i&#231;ermeyen ge&#231;erli bir kural ad&#305; giriniz."
	};

char* MLG_WAN_Broadband_AlertMsg_Str43_1[] = {
	"When the state of DSL Bonding is changed, the CPE will require a reboot. If xDSL setting is changed, the CPE will require a retrain.",
	"DSL Ba&#287;lanman&#305;n durumu de&#287;i&#351;tirildi&#287;inde modeminiz yeniden ba&#351;lat&#305;lacakt&#305;r. xDSL ayar&#305; de&#287;i&#351;tirildi&#287;i zaman, modemin Internet ba&#287;lant&#305;s&#305; kopup, ard&#305;ndan tekrar ba&#287;lanacakt&#305;r."
	};

char* MLG_WAN_Broadband_AlertMsg_Str43_2[] = {
	"If xDSL setting is changed, the CPE will require a retrain.",
	"xDSL ayar&#305; de&#287;i&#351;tirildi&#287;i zaman, modemin Internet ba&#287;lant&#305;s&#305; kopup, ard&#305;ndan tekrar ba&#287;lanacakt&#305;r."
	};

char* MLG_WAN_Broadband_AlertMsg_Str44[] = {
	"Shaping rate {{1}} should be between 0 and 1024000.",
	"&#350;ekillendirme oran&#305; {{1}} 0 ve 1024000 aras&#305;nda olmal&#305;d&#305;r"
	};

char* MLG_WAN_Broadband_AlertMsg_Str45[] = {
	"All ATM WAN interfaces will be removed after user enables ADSL over PTM feature. Do you want to do this?",
	"B&#252;t&#252;n ATM WAN aray&#252;zleri, kullan&#305;c&#305; PTM &#246;zelli&#287;i &#252;zerinden ADSL&#8217;i etkinle&#351;tirdikten sonra kald&#305;r&#305;lacakt&#305;r. Bunu yapmak istiyor musunuz?"
	};

char* MLG_WAN_Broadband_AlertMsg_Str46[] = {
	"configure ADSL over PTM failed",
	"PTM &#252;zerinden ADSL konfig&#252;rasyonu ba&#351;ar&#305;s&#305;z olmu&#351;tur."
	};

char* MLG_WAN_Broadband_AlertMsg_Str47[] = {
	"{{%s}} is used for another WAN entry.",
	"{{%s}} ba&#351;ka bir WAN giri&#351;i i&#231;in kullan&#305;lmaktad&#305;r."
	};

char* MLG_WAN_Broadband_AlertMsg_Str48[] = {
	"VPI/VCI is already in use.",
	"VPI/VCI daha &#246;nceden kullan&#305;lmaktad&#305;r."
	};

char* MLG_WAN_Broadband_AlertMsg_Str49[] = {
	"failed to edit L2 interface.",
	"L2 aray&#252;z&#252;n&#252;  d&#252;zenlemek ba&#351;ar&#305;s&#305;zl&#305;kla sonu&#231;lanm&#305;&#351;t&#305;r."
	};

char* MLG_WAN_Broadband_AlertMsg_Str5[] = {
	"Please enter valid rule name without special characters.",
	"&#214;zel karakterler i&#231;ermeyen ge&#231;erli bir kural ad&#305; girin."
	};

char* MLG_WAN_Broadband_AlertMsg_Str50[] = {
	"failed to add L2 interface.",
	"L2 aray&#252;z&#252;n&#252;  eklemek ba&#351;ar&#305;s&#305;zl&#305;kla sonu&#231;lanm&#305;&#351;t&#305;r."
	};

char* MLG_WAN_Broadband_AlertMsg_Str51[] = {
	"Configure WAN Setting failed, please try again.",
	"WAN Ayarlar&#305; D&#252;zenlemesi ba&#351;ar&#305;s&#305;zl&#305;kla sonu&#231;lanm&#305;&#351;t&#305;r, l&#252;tfen tekrar deneyiniz."
	};

char* MLG_WAN_Broadband_AlertMsg_Str52[] = {
	"failed to active/in-active WAN connection {{%s}}",
	"WAN ba&#287;lant&#305;s&#305;n&#305; etkinle&#351;tirmek/etkisiz hale getirmek ba&#351;ar&#305;s&#305;zl&#305;kla sonu&#231;lanm&#305;&#351;t&#305;r {{%s}}"
	};

char* MLG_WAN_Broadband_AlertMsg_Str53[] = {
	"Failed to get WAN info for Edit.",
	"D&#252;zenleme i&#231;in WAN bilgileri edinmek ba&#351;ar&#305;s&#305;zl&#305;kla sonu&#231;lanm&#305;&#351;t&#305;r."
	};

char* MLG_WAN_Broadband_AlertMsg_Str54[] = {
	"The length of user name ( {{1]} ) is too long [0-32].",
	"Kullan&#305;c&#305; ad&#305; uzunlu&#287;u {{1}} &#231;ok uzundur, [0-32]."
	};

char* MLG_WAN_Broadband_AlertMsg_Str55[] = {
	"6RD tunnel address {{1}} is invalid IP address.",
	"6RD t&#252;nel adresi {{1}} ge&#231;ersiz bir IP adresidir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str56[] = {
	"6RD IPv6 Prefix {{1}} is invalid IPv6 address",
	"6RD IPv6 &#246;neki {{1}} ge&#231;ersiz bir IP adresidir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str57[] = {
	"Please enter the prefix length \'/\' to 6RD IPv6 Prefix field, e.g.: xxxx:xxxx::/xx",
	"L&#252;tfen 6RD &#214;neki alan&#305;na \'/\'  &#246;nek uzunlu&#287;unu giriniz, &#246;rn: xxxx:xxxx::/xx"
	};

char* MLG_WAN_Broadband_AlertMsg_Str58[] = {
	"PPPoE do not support DHCP 6RD option. Please use static setting.",
	"PPPOE, DHCP 6RD se&#231;ene&#287;ini desteklememektedir. L&#252;tfen statik ayarlar&#305; kullan&#305;n&#305;z."
	};

char* MLG_WAN_Broadband_AlertMsg_Str59[] = {
	"WAN IPv6 address {{1}} is invalid IPv6 address.",
	"WAN IPv6 adresi {{1}} ge&#231;ersiz bir IPv6 adresidir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str60[] = {
	"Please remove the \'/\', and key in WAN IPv6 prefix to Prefix Length field",
	"L&#252;tfen \'/\' &#39;i kald&#305;r&#305;n&#305;z ve WAN IPv6 &#246;nek &#351;ifrelemesini \'&#214;nek Uzunlu&#287;u\' alan&#305;na giriniz."
	};

char* MLG_WAN_Broadband_AlertMsg_Str61[] = {
	"Please remove the \'/\', and key in WAN IPv6 prefix to Prefix Length field",
	"L&#252;tfen \'/\' &#39;i kald&#305;r&#305;n&#305;z ve WAN IPv6 &#246;nek &#351;ifrelemesini \'&#214;nek Uzunlu&#287;u\' alan&#305;na giriniz."
	};

char* MLG_WAN_Broadband_AlertMsg_Str62[] = {
	"DS-Lite tunnel IPv6 address {{1}} is invalid IPv6 address.",
	"DS-Lite t&#252;nel IPv6 adresi {{1}} ge&#231;ersiz bir IPv6 adresidir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str63[] = {
	"Please enter a valid DNSv6 address when DNSv6 Type is Static",
	"DNSv6 Tipi statik oldu&#287;u zaman, l&#252;tfen ge&#231;erli bir DNSv6 adresi giriniz."
	};

char* MLG_WAN_Broadband_AlertMsg_Str6[] = {
	"Please enter valid rule name without special characters.",
	"&#214;zel karakterler i&#231;ermeyen ge&#231;erli bir kural ad&#305; giriniz."
	};

char* MLG_WAN_Broadband_AlertMsg_Str7[] = {
	"Shaping rate {{1}} should be between 0 and 1024000.",
	"&#350;ekillendirme oran&#305; {{1}} 0 ve 1024000 aras&#305;nda olmal&#305;d&#305;r."
	};

char* MLG_WAN_Broadband_AlertMsg_Str8[] = {
	"VPI {{1}} is invalid.",
	"VPI {{1}} ge&#231;ersizdir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str9[] = {
	"VCI {{1}} is invalid.",
	"VCI {{1}} ge&#231;ersizdir."
	};

char* MLG_WAN_Broadband_Str1[] = {
	"You can configure the Internet settings of this device. Correct configurations build successful Internet connection.",
	"Bu cihaz&#305;n Internet ayarlar&#305;n&#305;z&#305; d&#252;zenleyebilirsiniz. Do&#287;ru konfig&#252;rasyonlar ba&#351;ar&#305;l&#305; bir Internet ba&#287;lant&#305;s&#305;n&#305; kurmaktad&#305;r."
	};

char* MLG_WAN_Broadband_Str10[] = {
	"VLAN",
	"VLAN"
	};

char* MLG_WAN_Broadband_Str11[] = {
	"VPI/VCI",
	"VPI/VCI"
	};

char* MLG_WAN_Broadband_Str12[] = {
	"ATM QoS",
	"ATM QoS"
	};

char* MLG_WAN_Broadband_Str13[] = {
	"NAT",
	"NAT"
	};

char* MLG_WAN_Broadband_Str14[] = {
	"Default Gateway",
	"Varsay&#305;lan A&#287; Ge&#231;idi"
	};

char* MLG_WAN_Broadband_Str15[] = {
	"Modify",
	"D&#252;zeltme"
	};

char* MLG_WAN_Broadband_Str16[] = {
	"Change to Bridge Mode",
	"K&#246;pr&#252; Moduna De&#287;i&#351;tirin."
	};

char* MLG_WAN_Broadband_Str17[] = {
	"WAN Interface",
	"WAN Aray&#252;z&#252;"
	};

char* MLG_WAN_Broadband_Str18[] = {
	"Note",
	"Dikkat!"
	};

char* MLG_WAN_Broadband_Str19[] = {
	"If no default gateway is configured, system will select default gateway automatically.",
	"E&#287;er herhangi bir a&#287; ge&#231;idi konfig&#252;re edilmemi&#351;se, sistem otomatik olarak bir a&#287; ge&#231;idi se&#231;ecektir."
	};

char* MLG_WAN_Broadband_Str2[] = {
	"ADSL over PTM",
	"ADSL &#252;zerinden PTM"
	};

char* MLG_WAN_Broadband_Str20[] = {
	"General",
	"Genel"
	};

char* MLG_WAN_Broadband_Str21[] = {
	"Active",
	"Etkin"
	};

char* MLG_WAN_Broadband_Str23[] = {
	"Mode",
	"Mod"
	};

char* MLG_WAN_Broadband_Str24[] = {
	"ADSL/VDSL over PTM",
	"PTM &#252;zerinden ADSL/VDSL"
	};

char* MLG_WAN_Broadband_Str25[] = {
	"ADSL over ATM",
	"ATM &#252;zerinden ADSL"
	};

char* MLG_WAN_Broadband_Str26[] = {
	"Ethernet",
	"Ethernet"
	};

char* MLG_WAN_Broadband_Str27[] = {
	"Routing",
	"Y&#246;nlendirme"
	};

char* MLG_WAN_Broadband_Str28[] = {
	"Bridge",
	"K&#246;pr&#252;"
	};

char* MLG_WAN_Broadband_Str29[] = {
	"PPPoE",
	"PPPoE"
	};

char* MLG_WAN_Broadband_Str3[] = {
	"State",
	"Durum"
	};

char* MLG_WAN_Broadband_Str30[] = {
	"IPoE",
	"IPoE"
	};

char* MLG_WAN_Broadband_Str31[] = {
	"IPoA",
	"IPoA"
	};

char* MLG_WAN_Broadband_Str32[] = {
	"PPPoA",
	"PPPoA"
	};

char* MLG_WAN_Broadband_Str33[] = {
	"PPP Information",
	"PPP Bilgisi"
	};

char* MLG_WAN_Broadband_Str34[] = {
	"PPP User Name",
	"PPP Kullan&#305;c&#305; Ad&#305;"
	};

char* MLG_WAN_Broadband_Str35[] = {
	"PPP Password",
	"PPP &#350;ifre"
	};

char* MLG_WAN_Broadband_Str36[] = {
	"PPP Auto Connect",
	"PPP Otomatik Olarak Ba&#287;lanma"
	};

char* MLG_WAN_Broadband_AutoConnect[] = {
	"Auto Connect",
	"Otomatik Olarak Ba&#287;lanma"
	};

char* MLG_WAN_Broadband_PPPTriggerType[] = {
	"PPP Trigger Type",
	"PPP Tetik Tipi"
	};

char* MLG_WAN_Broadband_PPPConnectOnDemand[] = {
	"Connect on Demand",
	"Talep &#252;zerine ba&#287;lanma"
	};

char* MLG_WAN_Broadband_Str37[] = {
	"Idle Timeout [minutes]:",
	"Eylemsizlik Zaman A&#351;&#305;m&#305; [dakikalar]:"
	};

char* MLG_WAN_Broadband_Str38[] = {
	"PPPoE Service Name",
	"PPPoE Hizmet Ad&#305;"
	};

char* MLG_WAN_Broadband_Str39[] = {
	"PPPoE Passthrough",
	"PPPoE Do&#287;rudan ge&#231;i&#351;"
	};

char* MLG_WAN_Broadband_Str40[] = {
	"password unmask",
	"(null)"
	};

char* MLG_WAN_Broadband_IDLETimeout[] = {
	"IDLE Timeout [minutes]",
	"Eylemsizlik Zaman A&#351;&#305;m&#305; [dakikalar]:"
	};

char* MLG_WAN_Broadband_Str4[] = {
	"Enable",
	"Aktif"
	};

char* MLG_WAN_Broadband_Str41[] = {
	"Obtain an IP Address Automatically",
	"Otomatik olarak bir IP Adresi Al"
	};

char* MLG_WAN_Broadband_Str42[] = {
	"Static IP Address",
	"Statik IP Adresi"
	};

char* MLG_WAN_Broadband_Str43[] = {
	"IP Address",
	"IP Adresi"
	};

char* MLG_WAN_Broadband_Str44[] = {
	"Subnet Mask",
	"Alt A&#287; Maskesi"
	};

char* MLG_WAN_Broadband_Str45[] = {
	"Gateway IP Address",
	"A&#287; Ge&#231;idi IP Adresi"
	};

char* MLG_WAN_Broadband_Str46[] = {
	"Block of Static IP Addresses",
	"Statik IP Adreslerin blo&#287;u"
	};

char* MLG_WAN_Broadband_Str47[] = {
	"Use public IP Addresses",
	"Halka a&#231;&#305;k IP Adreslerini kullan&#305;n."
	};

char* MLG_WAN_Broadband_Str48[] = {
	"Routing Feature",
	"Y&#246;nlendirme &#214;zelli&#287;i"
	};

char* MLG_WAN_Broadband_Str49[] = {
	"NAT Enable",
	"NAT Etkinle&#351;tir"
	};

char* MLG_WAN_Broadband_Fullcone_NATEnable[] = {
	"Fullcone NAT Enable",
	"Tam Koni NAT Etkinle&#351;tirme"
	};

char* MLG_WAN_Broadband_FullFeature_NATEnable[] = {
	"FullFeature NAT Enable",
	"Tam &#214;zellikli NAT Etkinle&#351;tirme"
	};

char* MLG_WAN_Broadband_Str5[] = {
	"Disable",
	"Devre d&#305;&#351;&#305;"
	};

char* MLG_WAN_Broadband_Str50[] = {
	"Apply as Default Gateway",
	"Varsay&#305;lan A&#287; Ge&#231;idi olarak uygula"
	};

char* MLG_WAN_Broadband_Str51[] = {
	"DNS Server",
	"DNS Sunucusu"
	};

char* MLG_WAN_Broadband_Str52[] = {
	"Dynamic",
	"Dinamik"
	};

char* MLG_WAN_Broadband_Str53[] = {
	"Static",
	"Statik"
	};

char* MLG_WAN_Broadband_Str54[] = {
	"DNS Server 1",
	"DNS Sunucusu 1"
	};

char* MLG_WAN_Broadband_Str55[] = {
	"DNS Server 2",
	"DNS Sunucusu 2"
	};

char* MLG_WAN_Broadband_Str56[] = {
	"VLAN",
	"VLAN"
	};

char* MLG_WAN_Broadband_Str57[] = {
	"802.1p / VPI",
	"802.1p / VPI"
	};

char* MLG_WAN_Broadband_Str58[] = {
	"802.1q / VCI",
	"802.1q / VCI"
	};

char* MLG_WAN_Broadband_8021x[] = {
	"802.1x",
	"802.1x"
	};

char* MLG_WAN_Broadband_8021_Authentication[] = {
	"802.1x Authentication List.",
	"802.1x Kimlik Do&#287;rulama Listesi."
	};

char* MLG_WAN_Broadband_8021_AuthenticationEdit[] = {
	"802.1x Authentication Edit.",
	"802.1x Kimlik Do&#287;rulama D&#252;zenlemesi."
	};

char* MLG_WAN_Broadband_Str59[] = {
	"QoS",
	"QoS"
	};


char* MLG_WAN_Broadband_Str6[] = {
	"Status",
	"Durum"
	};

char* MLG_WAN_Broadband_Str60[] = {
	"Rate Limit",
	"H&#305;z Limiti"
	};

char* MLG_WAN_Broadband_WANOutgoingDefTag[] = {
	"WAN Outgoing Default Tag",
	"WAN Giden Default Tag"
	};

char* MLG_WAN_Broadband_Str61[] = {
	"MTU",
	"MTU"
	};

char* MLG_WAN_Broadband_Str61_2[] = {
	"MRU",
	"MRU"
	};

char* MLG_WAN_Broadband_Str62[] = {
	"MTU Size",
	"MTU Boyutu"
	};

char* MLG_WAN_Broadband_Str62_2[] = {
	"MRU Size",
	"MRU Boyutu"
	};

char* MLG_WAN_Broadband_Str63[] = {
	"ATM PVC Configuration",
	"ATM PVC Konfig&#252;rasyonu"
	};

char* MLG_WAN_Broadband_Str64[] = {
	"VPI [0-255]",
	"VPI [0-255]"
	};

char* MLG_WAN_Broadband_Str65[] = {
	"VCI[32-65535]",
	"VCI[32-65535]"
	};

char* MLG_WAN_Broadband_Str66[] = {
	"DSL Link Type",
	"DSL Ba&#287;lant&#305; T&#252;r&#252;"
	};

char* MLG_WAN_Broadband_Str67[] = {
	"Encapsulation Mode",
	"Kaps&#252;lleme Durumu"
	};

char* MLG_WAN_Broadband_Str68[] = {
	"EoA",
	"EoA"
	};

char* MLG_WAN_Broadband_Str69[] = {
	"PPPoA",
	"PPPoA"
	};

char* MLG_WAN_Broadband_Str7[] = {
	"Name",
	"Ad"
	};

char* MLG_WAN_Broadband_Str70[] = {
	"IPoA",
	"IPoA"
	};

char* MLG_WAN_Broadband_Str71[] = {
	"VC/MUX",
	"VC/MUX"
	};

char* MLG_WAN_Broadband_Str72[] = {
	"LLC/ENCAPSULATION",
	"LLC/KAPS&#220;LLEME"
	};

char* MLG_WAN_Broadband_Str73[] = {
	"LLC/SNAP-BRIDGING",
	"LLC/SNAP-KÖPRÜ OLUŞTURMA"
	};

char* MLG_WAN_Broadband_Str74[] = {
	"LLC/SNAP-ROUTING",
	"LLC/SNAP-Y&#214;NLEND&#304;RME"
	};

char* MLG_WAN_Broadband_Str75[] = {
	"UBR Without PCR",
	"PCR olmaks&#305;z&#305;n UBR"
	};

char* MLG_WAN_Broadband_Str76[] = {
	"UBR With PCR",
	"PCR &#39;li UBR"
	};

char* MLG_WAN_Broadband_Str77[] = {
	"CBR",
	"CBR"
	};

char* MLG_WAN_Broadband_Str78[] = {
	"Non Realtime VBR",
	"Ger&#231;ek Zamanl&#305; Olmayan VBR"
	};

char* MLG_WAN_Broadband_Str79[] = {
	"Realtime VBR",
	"Ger&#231;ek Zamanl&#305; VBR"
	};

char* MLG_WAN_Broadband_Str8[] = {
	"Type",
	"Tipi"
	};

char* MLG_WAN_Broadband_Str80[] = {
	"Broadband",
	"Geni&#351;bant"
	};

char* MLG_WAN_Broadband_Str81[] = {
	"Add New WAN Interface",
	"Yeni bir WAN Aray&#252;z&#252;  Ekle"
	};

char* MLG_WAN_Broadband_Str82[] = {
	"ATM",
	"ATM"
	};

char* MLG_WAN_Broadband_Str83[] = {
	"Default",
	"Varsay&#305;lan"
	};

char* MLG_WAN_Broadband_Str84[] = {
	"Gateway",
	"A&#287; Ge&#231;idi"
	};

char* MLG_WAN_Broadband_Str85[] = {
	"If DSL capabilities is changed, the CPE will require a retrain.",
	"DSL olanaklar&#305; de&#287;i&#351;tirildi&#287;inde, modeminizin Internet ba&#287;lant&#305;s&#305; kopup, yeniden ba&#351;layacakt&#305;r."
	};

char* MLG_WAN_Broadband_Str86[] = {
	"DSL Capabilities",
	"DSL Olanaklar&#305; "
	};

char* MLG_WAN_Broadband_Str87[] = {
	"PhyR US",
	"PhyR US"
	};

char* MLG_WAN_Broadband_Str88[] = {
	"PhyR DS",
	"PhyR DS"
	};

char* MLG_WAN_Broadband_SRA[] = {
	"SRA",
	"SRA"
	};

char* MLG_WAN_Broadband_Str89[] = {
	"DSL Bonding",
	"DSL Birle&#351;tirme"
	};

char* MLG_WAN_Broadband_Str9[] = {
	"Encapsulation",
	"Kaps&#252;lleme"
	};

char* MLG_WAN_Broadband_Str90[] = {
	"WAN Configuration Edit",
	"WAN Konfig&#252;rasyonu D&#252;zenle"
	};

char* MLG_WAN_Broadband_Str91[] = {
	"Service Category",
	"Hizmet Kategorisi"
	};

char* MLG_WAN_Broadband_Str92[] = {
	"WAN Configuration",
	"WAN Konfig&#252;rasyonu"
	};

char* MLG_WAN_Broadband_Str93[] = {
	"Remove WAN Entry",
	"WAN Girdisini Kald&#305;r"
	};

char* MLG_WAN_Broadband_Str94[] = {
	"IGMP Proxy",
	"IGMP Proxy"
	};

char* MLG_WAN_Broadband_Str95_1[] = {
	"Please click ",
	"TTNET d&#305;&#351;&#305;nda bir &#304;nternet Servis Sa&#287;lay&#305;c&#305; ile kullanmak i&#231;in"
	};

char* MLG_WAN_Broadband_Str95_2[] = {
	"here",
	" t&#305;klay&#305;n&#305;z"
	};

char* MLG_WAN_Broadband_Str95_3[] = {
	" to use other ISPs.",
	" Diğer Servis Sağlayıcılarını (ISP) kullanmak için."
	};

char* MLG_WAN_Broadband_Str96_1[] = {
	"You need to write your username as stated in your contract ",
	"S&#246;zle&#351;menizde yer alan &#351;ekliyle kullan&#305;c&#305; ad&#305;n&#305;z&#305; girmeniz gerekmektedir."
	};

char* MLG_WAN_Broadband_Str96_2[] = {
	"e.g.",
	"&#246;rn:"
	};

char* MLG_WAN_Broadband_Str96_3[] = {
	"ahmetdemir123",
	"ahmetdemir123"
	};

char* MLG_WAN_Broadband_Str96_4[] = {
	"ISP_name",
	"ISS_ad&#305;"
	};

char* MLG_WAN_Broadband_Str96_5[] = {
	"If you do not know your username, you can learn it by calling your ISP&#39; customer support.",
	"Kullan&#305;c&#305; ad&#305;n&#305;z&#305; bilmiyorsan&#305;z, ISS&#39;nizin m&#252;&#351;teri hizmetlerini arayarak &#246;&#287;renebilirsiniz."
	};

char* MLG_WAN_Broadband_Str97[] = {
	"Enable DS-Lite",
	" DS-Lite&#39;&#305; Etkinle&#351;tir"
	};

char* MLG_WAN_Broadband_Str98[] = {
	"Get IPv6 Address From DHCPv6 Server",
	"DHCPv6 Sunucusundan IPv6 adresi al&#305;n"
	};

char* MLG_WAN_Broadband_Str99[] = {
	"WAN IPv6 Address",
	"WAN IPv6 Adresi"
	};

char* MLG_WAN_Broadband_Str100[] = {
	"Prefix Length",
	"&#214;nek Uzunlu&#287;u"
	};

char* MLG_WAN_Broadband_Str101[] = {
	"MLD Proxy Enable",
	"MLD Proxy Etkinle&#351;tir"
	};

char* MLG_WAN_Broadband_Str102[] = {
	"IPv6 DNS Server",
	"IPv6 DNS Sunucu"
	};

char* MLG_WAN_Broadband_Str103[] = {
	"IPv6 DNS Server",
	"IPv6 DNS Sunucu"
	};

char* MLG_WAN_Broadband_Str104[] = {
	"PPP",
	"PPP"
	};

char* MLG_WAN_Broadband_Str105_1[] = {
	"You should write your username ",
	"Kullan&#305;c&#305; ad&#305;n&#305;z&#305; s&#246;zle&#351;menizde verildi&#287;i &#351;ekilde"
	};

char* MLG_WAN_Broadband_Str105_2[] = {
	"e.g.",
	"&#246;rnek"
	};

char* MLG_WAN_Broadband_Str105_3[] = {
	" mehmetplatin",
	" mehmetplatin"
	};

char* MLG_WAN_Broadband_Str105_4[] = {
	"ISP name \(Internet Service Provider\)",
	"ISP ad&#305; \(internet sa&#287;lay&#305;c&#305; ad&#305;\)"
	};

char* MLG_WAN_Broadband_Str105_5[] = {
	" as it is stated in your contract. If you do not know your username, you can learn it  by calling the customer support of your Internet Service Provider.",
	" yazman&#305;z gerekmektedir. Kullan&#305;c&#305; ad&#305;n&#305;z&#305; bilmiyorsan&#305;z, internet hizmetini ald&#305;&#287;&#305;n&#305;z servis sa&#287;lay&#305;c&#305;n&#305;n m&#252;&#351;teri hizmetlerini arayarak &#246;&#287;renmeniz gerekmektedir."
	};

char* MLG_WAN_Tunnel[] = {
	"Tunnel",
	"T&#252;nel"
	};

char* MLG_WAN_IPv6_IPv4Mode[] = {
	"IPv6/IPv4 Mode",
	"IPv6/IPv4 Durumu"
	};

char* MLG_WAN_Enable6RD[] = {
	"Enable 6RD",
	"6RD Etkinle&#351;tir"
	};

char* MLG_WAN_6RDType[] = {
	"6RD Type",
	"6RD Tipi"
	};

char* MLG_WAN_6RD_IPv6Prefix[] = {
	"6RD IPv6 Prefix",
	"6RD IPv6 &#214;n eki"
	};

char* MLG_WAN_6RD_Border_Relay_ServerIP[] = {
	"6RD Border Relay Server IP",
	"6RD S&#305;n&#305;r Aktarma Sunucusu IP"
	};

char* MLG_WAN_xDSL_setup[] = {
	"xDSL setup",
	"xDSL kurulumu"
	};

char* MLG_WAN_AnnexM[] = {
	"Annex M ",
	"Annex M "
	};

char* MLG_WAN_AnnexJ[] = {
	"Annex J ",
	"Annex J "
	};

char* MLG_WAN_3Gbackup_explain_text[] = {
	"Whenever the WAN connection is down, 3G Backup takes over the job and keeps you online. It is valid when a 3G USB dongle is attached to the device and proper settings are configured. You may consult your 3G service provider for the following settings.",
	"WAN ba&#287;lant&#305;s&#305; kesildi&#287;i zaman, 3G yedekleme &#246;zelli&#287;i devreye girip, &#231;evrimi&#231;i kalman&#305;z&#305; sa&#287;lamaktad&#305;r. Bunun i&#231;in 3G USB adapt&#246;r&#252;n cihaza eklenmesi ve uygun ayarlar&#305;n yap&#305;lmas&#305; gerekmektedir. A&#351;a&#287;&#305;da belirtilmi&#351; olan ayarlar hakk&#305;nda 3G hizmet sa&#287;lay&#305;c&#305;n&#305;za dan&#305;&#351;abilirsiniz."
	};

char* MLG_WAN_3Gbackup_Telenor_explain_text1[] = {
	"Aktivering og bruk av 3G backup vil medf&#248;re datakostnader p&#229; ditt SIM kort.",
	"WAN ba&#287;lant&#305;s&#305; kesildi&#287;i zaman, 3G yedekleme &#246;zelli&#287;i devreye girip, &#231;evrimi&#231;i kalman&#305;z&#305; sa&#287;lamaktad&#305;r. Bunun i&#231;in 3G USB adapt&#246;r&#252;n cihaza eklenmesi ve uygun ayarlar&#305;n yap&#305;lmas&#305; gerekmektedir. A&#351;a&#287;&#305;da belirtilmi&#351; olan ayarlar hakk&#305;nda 3G hizmet sa&#287;lay&#305;c&#305;n&#305;za dan&#305;&#351;abilirsiniz."
	};

char* MLG_WAN_3Gbackup_Telenor_explain_text2[] = {
	"&#216;nsker du varsling om dataforbruk til din mobiltelefon, kan dette settes opp p&#229; &#171;Mine Sider&#187; under SMS-varslinger.",
	"WAN ba&#287;lant&#305;s&#305; kesildi&#287;i zaman, 3G yedekleme &#246;zelli&#287;i devreye girip, &#231;evrimi&#231;i kalman&#305;z&#305; sa&#287;lamaktad&#305;r. Bunun i&#231;in 3G USB adapt&#246;r&#252;n cihaza eklenmesi ve uygun ayarlar&#305;n yap&#305;lmas&#305; gerekmektedir. A&#351;a&#287;&#305;da belirtilmi&#351; olan ayarlar hakk&#305;nda 3G hizmet sa&#287;lay&#305;c&#305;n&#305;za dan&#305;&#351;abilirsiniz."
	};

char* MLG_WAN_ATM_Interface[] = {
	"Please add ATM interface.",
	"L&#252;tfen ATM ara birimini ekleyiniz."
	};

char* MLG_WAN_PTM_Interface[] = {
	"Please add PTM interface.",
	"L&#252;tfen PTM ara birimini ekleyiniz."
	};

char* MLG_WAN_ETH_Interface[] = {
	"Please add Ether interface.",
	"L&#252;tfen Ether ara birimini ekleyiniz."
	};

char* MLG_WAN_ADD_WanIntf[] = {
	"You need to add WAN interface first, and you can modify authentication rules.",
	"&#304;lk &#246;nce WAN ara birimini eklemeniz gerekmektedir, ard&#305;ndan kimlik do&#287;rulama kurallar&#305;n&#305; d&#252;zenleyebilirsiniz."
	};

char* MLG_WAN_ADD_EAP_Identity[] = {
	"EAP Identity must have a value.",
	"EAP Kimli&#287;i mutlaka bir de&#287;ere sahip olmal&#305;d&#305;r."
	};

char* MLG_WAN_Bidirectional_Authentication[] = {
	"Enable Bidirectional Authentication",
	"&#199;ift Y&#246;nl&#252; Kimlik Do&#287;rulamay&#305; Etkinle&#351;tir"
	};

char* MLG_WAN_ATM0[] = {
	"atm0",
	"atm0"
	};

char* MLG_WAN_Peak_CellRate[] = {
	"Peak Cell Rate [cells/s]",
	"Peak Cell Rate [cells/s]"
	};

char* MLG_WAN_Sustainable_CellRate[] = {
	"Sustainable Cell Rate [cells/s]",
	"Sustainable Cell Rate [cells/s]"
	};

char* MLG_WAN_NextHop[] = {
	"Next Hop",
	"Bir sonraki A&#287; Ge&#231;idi"
	};

char* MLG_WAN_DSLite[] = {
	"DS-Lite",
	"DS-Lite"
	};

char* MLG_WAN_DSLite_serverIP[] = {
	"DS-Lite Relay Server IP",
	"DS-Lite Aktarma Sunucusu IP&#39;si"
	};

char* MLG_WAN_NatSet[] = {
	"NatSet",
	"NATKurulumu"
	};

char* MLG_WAN_MaxBurst_Size[] = {
	"Maximum Burst Size [cells]",
	"Maximum Burst Size [cells]"
	};

char* MLG_WAN_WWAN[] = {
	"WWAN",
	"WWAN"
	};

char* MLG_WAN_Broadband_AlertMsg_Str71[] = {
	"Interface must have value.",
	"Arabirimin bir de&#287;eri olmal&#305;d&#305;r."
	};

char* MLG_WAN_Broadband_AlertMsg_Str72[] = {
	"Certificate should not be empty.",
	"Sertifika bo&#351; olamaz."
	};

char* MLG_WAN_Broadband_AlertMsg_Str73[] = {
	"Trusted CA should not be empty.",
	"G&#252;venilir CA bo&#351; olamaz."
	};

char* MLG_WAN_Broadband_AlertMsg_Str74[] = {
	"6RD tunnel address \'{{1}}\' is invalid IP address.",
	"6RD t&#252;nel addresi \'{{1}}\' ge&#231;ersiz bir IP adresidir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str75[] = {
	"6RD IPv6 Prefix \'{{1}}\' is invalid IPv6 address.",
	"6RD IPv6 &#214;neki \'{{1}}\' ge&#231;eriz bir IPv6 adresidir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str76[] = {
	"Please enter the prefix length \'/\' to 6RD IPv6 Prefix field, e.g.: xxxx:xxxx::/xx",
	"L&#252;tfen 6RD IPv6 &#214;nek alan&#305; i&#231;in &#246;nek uzunlu&#287;unu  \'/\'  giriniz,  &#246;rn: xxxx:xxxx::/xx"
	};

char* MLG_WAN_Broadband_AlertMsg_Str77[] = {
	"PPPoE do not support DHCP 6RD option. Please use static setting.",
	"PPPoE DHCP 6RD se&#231;ene&#287;ini desteklememektedir. L&#252;tfen statik ayarlar&#305; kullan&#305;n&#305;z."
	};

char* MLG_WAN_Broadband_AlertMsg_Str78[] = {
	"WAN IPv6 address \'{{1}}\' is invalid IPv6 address.",
	"WAN IPv6 address \'{{1}}\' ge&#231;ersiz bir IPv6 adresidir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str79[] = {
	"Please remove the \'/\', and key in WAN IPv6 prefix to Prefix Length field",
	"L&#252;tfen \\\'/\\\' yi kald&#305;r&#305;n&#305;z  ve \\\'&#214;nek Uzunlu&#287;u\\\' alan&#305; i&#231;in anahtar WAN IPv6 &#246;nekini giriniz."
	};

char* MLG_WAN_Broadband_AlertMsg_Str80[] = {
	"WAN IPv6 address \'{{1}}\' is invalid IPv6 address.",
	"WAN IPv6 address \'{{1}}\' , ge&#231;ersiz bir IPv6 adresidir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str81[] = {
	"Please enter a PPP User Name.",
	"Lütfen bir PPP Kullanıcı Adı Giriniz."
	};

char* MLG_WAN_Broadband_AlertMsg_Str82[] = {
	"Please enter a PPP Password.",
	"Lütfen bir PPP Şifresi giriniz."
	};

char* MLG_WAN_Broadband_AlertMsg_Str64[] = {
	"DS-Lite tunnel IPv6 address \'{{1}}\' is invalid IPv6 address.",
	"DS-Lite tunnel IPv6 addresi\'{{1}}\' , ge&#231;ersiz bir IP adresidir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str65[] = {
	"WAN IPv6 Prefix \'{{1}}\' is invalid IPv6 Prefix.",
	"WAN IPv6 &#214;neki \'{{1}}\', ge&#231;ersiz bir IPv6 &#246;nekidir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str66[] = {
	"WAN IPv6 Next Hop address \'{{1}}\' is invalid IPv6 address.",
	"WAN IPv6 Gelecek IPv6 adresi \'{{1}}\', ge&#231;ersiz bir IPv6 adresidir."
	};

char* MLG_WAN_Broadband_AlertMsg_Str67[] = {
	"Please remove the \'/\' on Next Hop field.",
	"L&#252;tfen bir sonraki a&#287; ge&#231;idi alan&#305;ndaki \'/\' yi kald&#305;r&#305;n&#305;z."
	};

char* MLG_WAN_Broadband_AlertMsg_Str68[] = {
	"Please enter a valid DNSv6 address when DNSv6 Type is Static",
	"L&#252;tfen DNSv6 Tipi Statik oldu&#287;u zaman, ge&#231;erli bir DNSv6 adresi giriniz."
	};

char* MLG_WAN_Broadband_AlertMsg_Str69[] = {
	"The length of user name {{1}} is too long [0-50].",
	"Kullan&#305;c&#305; ad&#305; uzunlu&#287;u {{1}} &#231;ok uzundur [0-50]."
	};

char* MLG_WAN_Broadband_AlertMsg_Str70[] = {
	"The length of password {{1}} is too long [0-25].",
	"&#351;ifre uzunlu&#287;u {{1}} &#231;ok uzundur [0-25]."
	};

char* MLG_WAN_Broadband_Sample_Str1[] = {
	"SAMPLE",
	"&#214;RNEK"
	};

char* MLG_WAN_Broadband_Str106[] = {
	"You should write your Username and Password as it exits on your agreement made with your internet service provider(look at sample).If you dont know your username and passworf, you should contact your internet service provider's call center.",
	"Kullanıcı adınızı ve &#350;ifrenizi internet servis sa&#287;layıcınız ile yapti&#287;ınız s&#246zle&#351;menizde verildi&#287;i &#351;ekilds (l&#252;tfen bakınız &#246rnek) yazmanız gerekmektedir. Kullanıcı adınızı bilmiyorsanız, internet hizmetini aldı&#287;ınız servis sa&#287;layıcının m&#252;&#351;teri hizmetlerini arayarak &#246&#287;renmeniz gerekmektedir."
	};

char* MLG_WAN_Ethlanwan_AlertMsg_Str1[] = {
	"Please remove all Ethernet WAN interface first.",
	"Lütfen önce bütün Ethernet WAN arayü."
	};

char* MLG_WAN_Ethlanwan_Str1[] = {
	"You can convert your Ethernet LAN 4 port as WAN port, or restore the WAN port to LAN port.",
	"Ethernet LAN 4 portunuzu WAN portuna veya tekrar WAN portunu LAN portuna dönüştü."
	};

char* MLG_WAN_Ethlanwan_Note_Str1[] = {
	"State Enable, the Ethernet Port is WAN Ethernet.",
	"Durum Aktif Et ise, Ethernet Portu WAN Ethernetidir."
	};

char* MLG_WAN_Ethlanwan_Note_Str2[] = {
	"State Disable, the Ethernet Port is LAN Ethernet.",
	"Durum Devre Dışı ise, Ethernet Portu LAN Ethernetidir."
	};

char* MLG_WAN_Ethlanwan_Note_Str3[] = {
	"Please do not connect Ethernet WAN cable and xDSL line at the same time.",
	"Lütfen Ethernet WAN kablosunu ve XDSL hattı aynı anda bağlamayınız."
	};

char* MLG_WAN_3gbackup_AlertMsg_Str1[] = {
	"Max Idle Timeout should be [1-4320].",
	"Maksimum Boşta Kalma Zamanı [1-4320] olmalıdır."
	};

char* MLG_WAN_3gbackup_AlertMsg_Str2[] = {
	"Static IP \'{{1}}\' has invalid IP address.",
	"Statik IP \'{{1}}\' geçersiz bir IP adresidir."
	};

char* MLG_WAN_3gbackup_AlertMsg_Str3[] = {
	"Primary DNS \'{{1}}\' has invalid IP address.",
	"Birincil DNS \'{{1}}\' geçersiz bir IP adresidir."
	};

char* MLG_WAN_3gbackup_AlertMsg_Str4[] = {
	"Secondary DNS \'{{1}}\' has invalid IP address.",
	"İkincil DNS \'{{1}}\' geçersiz bir IP adresidir."
	};

char* MLG_WAN_3gbackup_AlertMsg_Str5[] = {
	"Check Cycle \'{{1}}\'  is incorrect.",
	"Döngü Kontrolü \'{{1}}\' doğru değildir."
	};

char* MLG_WAN_3gbackup_AlertMsg_Str6[] = {
	"Consecutive PING Fail \'{{1}}\'  is incorrect.",
	"Sıralı PİNG Hatası \'{{1}}\' doğru değildir."
	};

char* MLG_WAN_3gbackup_AlertMsg_Str7[] = {
	"Ping Host \'{{1}}\' has invalid IP address.",
	"Ping Host \'{{1}}\' geçersiz bir IP adresidir."
	};

char* MLG_WAN_3gbackup_AlertMsg_Str8[] = {
	"Time and Data Budget will Reset",
	"Zaman ve Veri Bütçesi resetlenecektir."
	};

char* MLG_WAN_3gbackup_AlertMsg_Str9[] = {
	"Time Budget \'{{1}}\' hours is incorrect.",
	"Zaman Bütçesi \'{{1}}\' saati doğru değildir."
	};

char* MLG_WAN_3gbackup_AlertMsg_Str10[] = {
	"Data Budget \'{{1}}\' Mbytes is incorrect.",
	"Veri Bütçesi \'{{1}}\' Mbytes doğru değildir."
	};

char* MLG_WAN_3gbackup_AlertMsg_Str11[] = {
	"Data Budget \'{{1}}\' Packets is incorrect.",
	"Veri Bütçesi \'{{1}}\' Packets doğru değildir."
	};

char* MLG_WAN_3gbackup_AlertMsg_Str12[] = {
	"\'{{1}}\' percent of time budget is incorrect.",
	"Zaman bütçesi yüzdesi \'{{1}}\' doğru değildir."
	};

char* MLG_WAN_3gbackup_AlertMsg_Str13[] = {
	"\'{{1}}\' of log interval is incorrect.",
	"Log aralığı \'{{1}}\' doğru değildir."
	};

char* MLG_WAN_3gbackup_AlertMsg_Str14[] = {
	"\'{{1}}\' reset date is incorrect.",
	"Reset zamanı \'{{1}}\' doğru değildir."
	};

char* MLG_WAN_3gbackup_AlertMsg_Str15[] = {
	"Send Notification to Email \'{{1}}\' is invalid, please set in maintenance->email notification.",
	"Email'e Hatırlatma Gönderme \'{{1}}\' geçersizdir, lütfen bakım > email hatırlatma menüsü."
	};

char* MLG_WAN_3gbackup_AlertMsg_Str16[] = {
	"Must Enter Over Budget Email Title",
	"Bütçe Email Başlığı Üzerinden Girilmeli"
	};

char* MLG_WAN_3gbackup_AlertMsg_Str17[] = {
	"\'{{1}}\' of email interval is incorrect.",
	"Email aralığı \'{{1}}\' doğru değildir."
	};

char* MLG_WAN_3gbackup_AlertMsg_Str18[] = {
	"Reset time and data budget counters",
	"Reset zamanı ve veri bütçesi sayacı"
	};

char* MLG_WAN_3gbackup_Str2[] = {
	"settings are invalid when disabled",
	"Devre dışı kaldığı zaman ayarlar geçersizdir"
	};

char* MLG_WAN_3gbackup_Str3[] = {
	"Trigger by ETHER WAN Down (trigger 3G backup when physical link of primary WAN is down)",
	"ETHER WAN bağlı değilse tetikle (Birincil WAN fiziksel olarak bağlı değilse 3G yedeklemeyi tetikle"
	};

char* MLG_WAN_3gbackup_Str4[] = {
	"Ping Check",
	"Ping Kontrolü"
	};

char* MLG_WAN_3gbackup_Str5[] = {
	"Check Cycle",
	"Kontrol Döngüsü"
	};

char* MLG_WAN_3gbackup_Str6[] = {
	"Every",
	"Her"
	};

char* MLG_WAN_3gbackup_Str7[] = {
	"Second",
	"İkinci"
	};

char* MLG_WAN_3gbackup_Str8[] = {
	"Consecutive PING Fail",
	"Sıralı PİNG Hatası"
	};

char* MLG_WAN_3gbackup_Str9[] = {
	"times",
	"defa"
	};

char* MLG_WAN_3gbackup_Str10[] = {
	"Ping Default Gateway",
	"Ping Varsayılan Ağ Geçidi"
	};

char* MLG_WAN_3gbackup_Str11[] = {
	"Ping the Host",
	"Ping Host"
	};

char* MLG_WAN_3gbackup_Str12[] = {
	"Host Name or IP address",
	"Host Adı veya IP Adresi"
	};

char* MLG_WAN_3gbackup_Str13[] = {
	"Primary WAN is not in service when ping failed after consecutive times.",
	"Ping sıralı bir şekilde başarısız olduğu zaman Birincil WAN servis dışıdır."
	};

char* MLG_WAN_3gbackup_Str14[] = {
	"3G Connection Settings",
	"3G Bağlantı Ayarları"
	};

char* MLG_WAN_3gbackup_Str15[] = {
	"Card description",
	"Kart Tanımlama"
	};

char* MLG_WAN_3gbackup_Str16[] = {
	"Optional",
	"İsteğe Bağlı"
	};

char* MLG_WAN_3gbackup_Str17[] = {
	"Only for unlock PIN next time",
	"Sadece bir sonraki kilitli olmayan PIN"
	};

char* MLG_WAN_3gbackup_Str18[] = {
	"PIN remaining authentication times",
	"Kalan PING kimlik doğrulama sayısı"
	};

char* MLG_WAN_3gbackup_Str19[] = {
	"Dial string",
	"Dial string"
	};

char* MLG_WAN_3gbackup_Str20[] = {
	"Connection",
	"Bağlantı"
	};

char* MLG_WAN_3gbackup_Str21[] = {
	"Nailed UP",
	"Canlı-tut"
	};

char* MLG_WAN_3gbackup_Str22[] = {
	"on Demand",
	"İsteğe göre"
	};

char* MLG_WAN_3gbackup_Str23[] = {
	"Max Idle Timeout",
	"Maksimum Boşta Kalma Zamanı"
	};

char* MLG_WAN_3gbackup_Str24[] = {
	"Use the following static IP address",
	"Statik IP adresi kullan"
	};

char* MLG_WAN_3gbackup_Str25[] = {
	"Obtain DNS info dynamically",
	"DNS bilgisini otomatik olarak al"
	};

char* MLG_WAN_3gbackup_Str26[] = {
	"Use the following static DNS IP address",
	"Statik DNS IP adresi kullan"
	};

char* MLG_WAN_3gbackup_Str27[] = {
	"Entering the wrong PIN code 3 times will lock SIM card.",
	"3 defa üstüste yanlış PIN girerseniz SIM kartınız kilitlenecektir."
	};

char* MLG_WAN_3gbackup_Str28[] = {
	"Budget Setup",
	"Bütçe Kurulumu"
	};

char* MLG_WAN_3gbackup_Str29[] = {
	"Budget Control",
	"Bütçe Kontrolü"
	};

char* MLG_WAN_3gbackup_Str30[] = {
	"Time Budget",
	"Zaman Bütçesi"
	};

char* MLG_WAN_3gbackup_Str31[] = {
	"per month",
	"her ay"
	};

char* MLG_WAN_3gbackup_Str32[] = {
	"Data Budget",
	"Veri Bütçesi"
	};

char* MLG_WAN_3gbackup_Str33[] = {
	"Download",
	"İndirme"
	};

char* MLG_WAN_3gbackup_Str34[] = {
	"Actions before over budget",
	"Bütçe aşımından önceki hareketler"
	};

char* MLG_WAN_3gbackup_Str35[] = {
	"of time budget",
	"zaman bütçesi"
	};

char* MLG_WAN_3gbackup_Str36[] = {
	"of data budget (Mbytes)",
	"veri bütçesi (Mbytes)"
	};

char* MLG_WAN_3gbackup_Str37[] = {
	"of data budget (Packets)",
	"veri bütçesi (Packets)"
	};

char* MLG_WAN_3gbackup_Str38[] = {
	"Actions when over budget",
	"Bütçe aşımı olduktan sonraki hareketler"
	};

char* MLG_WAN_3gbackup_Str39[] = {
	"Current 3G connection",
	"Mevcut 3G bağlantısı"
	};

char* MLG_WAN_3gbackup_Str40[] = {
	"Keep",
	"Bağlı tut"
	};

char* MLG_WAN_3gbackup_Str42[] = {
	"Over Budget Email Title",
	"Email Başlığı Bütçesi Üzerinden"
	};

char* MLG_WAN_3gbackup_Str43[] = {
	"Send Notification to Email",
	"Email'e Hatırlatma Gönder"
	};

char* MLG_WAN_3gbackup_Str44[] = {
	"Interval",
	"Aralık"
	};

char* MLG_WAN_3gbackup_Str45[] = {
	"Budget Control is an approximate value.",
	"Bütçe Kontrolü yaklaşık bir değerdir."
	};

char* MLG_WAN_3gbackup_Str46[] = {
	"Reset all budget counters on",
	"Bütün bütçe sayıcılarını sıfırla"
	};

char* MLG_WAN_3gbackup_Str47[] = {
	"last",
	"en son"
	};

char* MLG_WAN_3gbackup_Str48[] = {
	"specific",
	"özel"
	};

char* MLG_WAN_3gbackup_Str49[] = {
	"day of month",
	"ayın günü"
	};

char* MLG_WAN_3gbackup_Str50[] = {
	"Actions",
	"Hareketler"
	};

char* MLG_WAN_3gStatus_Str1[] = {
	"SIM card is not inserted or damaged.",
	"SIM kart takılı değil veya zarar görmüş."
	};

char* MLG_WAN_3gStatus_Str2[] = {
	"Please check SIM card again.",
	"Lütfen SIM kartı tekrardan kontrol ediniz."
	};

char* MLG_WAN_3gStatus_Str3[] = {
	"Incorrect PIN code",
	"Doğru olmayan PIN kodu"
	};

char* MLG_WAN_3gStatus_Str4[] = {
	"Enter PIN code again",
	"PIN kodunu tekrar giriniz"
	};

char* MLG_WAN_3gStatus_Str5[] = {
	"PIN remaining authentication times",
	"Kalan PIN Kimlik Doğrulama Sayısı"
	};

char* MLG_WAN_troubleshoot_Str1[] = {
	"Physical line in not properly connected",
	"Fiziksel hat doğru bir şekilde bağlanmamıştır."
	};

char* MLG_WAN_troubleshoot_Str2[] = {
	"Checking Connection",
	"Bağlantı kontrol ediliyor"
	};

char* MLG_WAN_troubleshoot_Str3[] = {
	"Ensure that the fiber is securely connected to this device. To test physical connection again, click",
	"Fiberin cihaza emniyetli ve doğru bir şekilde bağlandığından emin olunuz. Fiziksel bağlantıyı test etmek için tıklayınız"
	};

char* MLG_WAN_troubleshoot_Str4[] = {
	"Domain Name Server",
	"Alan Adı Sunucusu"
	};

char* MLG_WAN_troubleshoot_Str5[] = {
	"Successful PPP connection requires the correct user name and password. Fill in the following blanks, and click",
	"Başarılı PPP bağlantısı doğru kullanıcı adı ve şifre gerektiriyor. Boşlukları doldurunuz ve tıklayınız"
	};

char* MLG_WAN_troubleshoot_Str6[] = {
	"to test Internet connection again.",
	"internet bağlantısını tekrar kontrol etmek için."
	};

char* MLG_WAN_troubleshoot_Str7[] = {
	"Unable to obtain a WAN IP address",
	"Bir WAN IP adresi alınamıyor"
	};

char* MLG_WAN_troubleshoot_Str8[] = {
	"Connection error occurred. The following information might help you resolve the error.",
	"Bağlantı hatası oluştu. Bu bilgiler hatayı gidermek için size yardımcı olabilir."
	};

char* MLG_WAN_troubleshoot_Str9[] = {
	"Click",
	"Tıklayınız"
	};

char* MLG_WAN_troubleshoot_Str10[] = {
	"to obtain a WAN IP address again.",
	"Tekrar bir WAN IP adresi almak için"
	};

char* MLG_WAN_troubleshoot_Str11[] = {
	"Please wait while the router is recovering the connection.",
	"Lütfen router bağlantıyı tekrardan başlatana kadar bekleyiniz."
	};

char* MLG_WAN_Broadband_AlertMsg_6rd_plen_error[] = {
	"The maximum of prefix length is 32.",
	"Maksimum ön ek uzunluğu 32\\' dir."
	};

char* MLG_WAN_Broadband_AlertMsg_6rd_ipv4MaskLengthError[] = {
	"Please enter correct IPv4 Mask length, ex: 0~32",
	"Lütfen doğru IPv4 Maske uzunluğu giriniz, ör: 0~32"
	};

char* MLG_WAN_Broadband_AlertMsg_6rd_v6LengthError[] = {
	"The maximum of prefix length is ",
	"Maksimum ön ek uzunluğu"
	};

char* MLG_WAN_6RD_v4MaskLength[] = {
	"IPv4 Mask Length : ",
	"IPv4 Maske Uzunluğu:"
	};

char* MLG_WAN_Broadband_AlertMsg_Str83[] = {
	"Please enter valid rule without (space).",
	"olmadan ge&#231;erli kural (bo&#351;luk) girin."
	};

char* MLG_WAN_Broadband_AlertMsg_Str84[] = {
	"You can easily assign LAN ports for this bridged PVC service under Network Setting > Interface Group > Add New Interface Group",
	"Köprülenmiş PVC den geçecek trafiği Ağ Ayarı > Arayüz Grubu > Yeni Arayüz Grubu Ekle yaparak kolaylıkla istenilen LAN portlarına atayabilirsiniz."
	};

MAPPING_ITEM WANMappingItem[334];
