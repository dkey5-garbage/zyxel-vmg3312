#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include "languages.h"



char* MLG_ConnStatus_ConnectionStatus_AlertMsg_Str1[] = {
	"You attempt to release IP address for {{1}}.",
	"{{1}}IP adresini b&#305;rakmaya &#231;al&#305;&#351;&#305;yorsunuz."
	};

char* MLG_ConnStatus_ConnectionStatus_AlertMsg_Str2[] = {
	"You attempt to renew IP address for {{1}}.",
	"{{1}} IP adresini yenilemeye &#231;al&#305;&#351;&#305;yorsunuz."
	};

char* MLG_ConnStatus_ConnectionStatus_AlertMsg_Str3[] = {
	"You attempt to set PPP {{1}} to link {{2}}",
	"{{2}} ba&#287;lant&#305;s&#305; i&#231;in PPP {{1}}&#39; i ayarlamaya &#231;al&#305;&#351;&#305;yorsunuz."
	};

char* MLG_ConnStatus_ConnectionStatus_AlertMsg_Str4[] = {
	"You attempt to set PPP {{1}} to link Down",
	"Mevcut olmayan ba&#287;lant&#305; i&#231;in PPP {{1}}&#39; i ayarlamaya &#231;al&#305;&#351;&#305;yorsunuz."
	};

char* MLG_ConnStatus_ConnectionStatus_AlertMsg_Str5[] = {
	"Set Refresh interval to regain WAN connection status.",
	"WAN ba&#287;lant&#305; durumunu yeniden kazanmak i&#231;in Yenileme Aral&#305;&#287;&#305;n&#305; ayarla"
	};

char* MLG_ConnStatus_NetworkMap_AlertMsg_Str1[] = {
	"A problem occurred:",
	"Bir sorun olu&#351;tu:"
	};

char* MLG_ConnStatus_NetworkMap_AlertMsg_Str2[] = {
	"The {{1}} cannot connect to Internet. Please check the connection between your modem and the {{2}} .",
	"{{1}} internete ba&#287;lanam&#305;yor. L&#252;tfen {{2}} ve modeminiz aras&#305;ndaki ba&#287;lant&#305;y&#305; kontrol ediniz."
	};

char* MLG_ConnStatus_NetworkMap_AlertMsg_Str3[] = {
	"A problem occurred:The {{1}} cannot connect to Internet. Please check WAN settings or contact your ISP.",
	"Bir sorun olu&#351;tu: {{1}} internete ba&#287;lanam&#305;yor. L&#252;tfen WAN ayarlar&#305;n&#305; kontrol edin veya ISS&#39; nize ba&#351;vurunuz."
	};

char* MLG_ConnStatus_NetworkMap_AlertMsg_Str4[] = {
	"Support share folder only when using Microsoft Internet Explorer.",
	"Payla&#351;&#305;m klas&#246;r&#252; yaln&#305;zca Microsoft Internet Explorer ile kullan&#305;labilir."
	};

char* MLG_ConnStatus_NetworkMap_AlertMsg_Str5[] = {
	"This IP address has been occupied by other device.",
	"(null)"
	};

char* MLG_ConnStatus_NetworkMap_Str1[] = {
	"Network Map",
	"A&#287; Haritas&#305;"
	};

char* MLG_ConnStatus_NetworkMap_Str10[] = {
	"Add device into Static DHCP",
	"Statik DHCP i&#231;in cihaz ekle"
	};

char* MLG_ConnStatus_NetworkMap_Str11[] = {
	"Refresh interval",
	"Yenileme S&#305;kl&#305;&#287;&#305;"
	};

char* MLG_ConnStatus_NetworkMap_Str12[] = {
	"None",
	"Hi&#231;biri"
	};

char* MLG_ConnStatus_NetworkMap_Str13[] = {
	"10 seconds",
	"10 saniye"
	};

char* MLG_ConnStatus_NetworkMap_Str14[] = {
	"20 seconds",
	"20 saniye"
	};

char* MLG_ConnStatus_NetworkMap_Str15[] = {
	"30 seconds",
	"30 saniye"
	};

char* MLG_ConnStatus_NetworkMap_Str16[] = {
	"60 seconds",
	"60 saniye"
	};

char* MLG_ConnStatus_NetworkMap_Str17[] = {
	"Viewing mode",
	"G&#246;r&#252;nt&#252;leme modu "
	};

char* MLG_ConnStatus_NetworkMap_Str18[] = {
	"Icon View",
	"Simge G&#246;r&#252;n&#252;m&#252;"
	};

char* MLG_ConnStatus_NetworkMap_Str19[] = {
	"List View",
	"Liste G&#246;r&#252;n&#252;m&#252;"
	};

char* MLG_ConnStatus_NetworkMap_Str2[] = {
	"Internet",
	"&#304;nternet"
	};

char* MLG_ConnStatus_NetworkMap_Str20[] = {
	"Device Name",
	"Cihaz Ad&#305;"
	};

char* MLG_ConnStatus_NetworkMap_Str21[] = {
	"Expires In",
	"... sona eriyor"
	};

char* MLG_ConnStatus_NetworkMap_Str22[] = {
	"Computer",
	"Bilgisayar"
	};

char* MLG_ConnStatus_NetworkMap_Str23[] = {
	"Game console",
	"Oyun konsolu"
	};

char* MLG_ConnStatus_NetworkMap_Str24[] = {
	"Printer",
	"Yaz&#305;c&#305;"
	};

char* MLG_ConnStatus_NetworkMap_Str25[] = {
	"Set-top box",
	"STB"
	};

char* MLG_ConnStatus_NetworkMap_Str26[] = {
	"Camera",
	"Kamera"
	};

char* MLG_ConnStatus_NetworkMap_Str27[] = {
	"Telephone",
	"Telefon"
	};

char* MLG_ConnStatus_NetworkMap_Str28[] = {
	"Router",
	"Y&#246;nlendirici"
	};

char* MLG_ConnStatus_NetworkMap_Str29[] = {
	"Device icon:",
	"Cihaz simgesi:"
	};

char* MLG_ConnStatus_NetworkMap_Str30[] = {
	"Device icon:",
	"Cihaz simgesi:"
	};

char* MLG_ConnStatus_NetworkMap_Str31[] = {
	"Host Name {{1}} is invalid.",
	"{{1}} Host Ad&#305; ge&#231;ersiz."
	};

char* MLG_ConnStatus_NetworkMap_Str32[] = {
	"Add device into",
	"... i&#231;in cihaz ekle"
	};

char* MLG_ConnStatus_NetworkMap_Str33[] = {
	"Parental Control",
	"Ebeveyn Kontrol&#252;"
	};

char* MLG_ConnStatus_NetworkMap_Str34[] = {
	"Disconnected",
	"Ba&#287;l&#305; de&#287;il"
	};

char* MLG_ConnStatus_NetworkMap_Str35[] = {
	"Your connection is not successful.",
	"Ba&#287;lant&#305;n&#305;z ba&#351;ar&#305;l&#305; de&#287;il."
	};

char* MLG_ConnStatus_NetworkMap_Str36[] = {
	"Connected",
	"Ba&#287;l&#305;"
	};

char* MLG_ConnStatus_NetworkMap_Str37[] = {
	"Your connection is successful.",
	"Ba&#287;lant&#305;n&#305;z ba&#351;ar&#305;l&#305;."
	};

char* MLG_ConnStatus_NetworkMap_Str38[] = {
	"PC",
	"PC"
	};

char* MLG_ConnStatus_NetworkMap_Str39[] = {
	"PVR",
	"PVR"
	};

char* MLG_ConnStatus_NetworkMap_Str40[] = {
	"Stereo",
	"Müzik seti"
	};

char* MLG_ConnStatus_NetworkMap_Str41[] = {
	"Streamer",
	"Flama"
	};

char* MLG_ConnStatus_NetworkMap_Str42[] = {
	"TV",
	"Televizyon"
	};

char* MLG_ConnStatus_NetworkMap_Str43[] = {
	"Mobile",
	"Hareketli"
	};

char* MLG_ConnStatus_NetworkMap_Str44[] = {
	"Others",
	"Di&#287;erleri"
	};

char* MLG_ConnStatus_NetworkMap_Str3[] = {
	"Info",
	"Bilgi"
	};

char* MLG_ConnStatus_NetworkMap_Str4[] = {
	"Change name/icon",
	"Ad / simge de&#287;i&#351;tir"
	};

char* MLG_ConnStatus_NetworkMap_Str5[] = {
	"Address Source",
	"Adres Kayna&#287;&#305;"
	};

char* MLG_ConnStatus_NetworkMap_Str6[] = {
	"Static",
	"Statik"
	};

char* MLG_ConnStatus_NetworkMap_Str7[] = {
	"DHCP",
	"DHCP"
	};

char* MLG_ConnStatus_NetworkMap_Str8[] = {
	"Connection Type",
	"Ba&#287;lant&#305; T&#252;r&#252;"
	};

char* MLG_ConnStatus_NetworkMap_Str9[] = {
	"Ethernet",
	"Ethernet"
	};

char* MLG_ConnStatus_Status_Str1[] = {
	"Device Information",
	"Cihaz Bilgileri"
	};

char* MLG_ConnStatus_Status_Str10[] = {
	"WLAN Information:",
	"Kablosuz Yerel A&#287; Bilgisi:"
	};

char* MLG_ConnStatus_Status_Str10_1[] = {
	"WLAN Information",
	"Kablosuz Yerel A&#287; Bilgisi"
	};

char* MLG_ConnStatus_Status_Str10_24[] = {
	"2.4G WLAN Information",
	"2.4G WLAN Information"
	};

char* MLG_ConnStatus_Status_Str10_5[] = {
	"5G WLAN Information",
	"5G WLAN Information"
	};

char* MLG_ConnStatus_Status_Str11[] = {
	"Status:",
	"Durum:"
	};

char* MLG_ConnStatus_Status_Str12[] = {
	"Name(SSID):",
	"Ad&#305; (SSID):"
	};

char* MLG_ConnStatus_Status_Str13[] = {
	"Channel:",
	"Kanal"
	};

char* MLG_ConnStatus_Status_Str14[] = {
	"Auto (Current: {{1}})",
	" Otomatik (G&#252;ncel: {{1}}) "
	};

char* MLG_ConnStatus_Status_Str15[] = {
	"Security Mode:",
	"G&#252;venlik Modu:"
	};

char* MLG_ConnStatus_Status_Str16[] = {
	"WPS:",
	"WPS:"
	};

char* MLG_ConnStatus_Status_Str17[] = {
	"Firewall Information: ",
	"G&#252;venlik Duvar&#305; Bilgileri: "
	};

char* MLG_ConnStatus_Status_Str18[] = {
	"Security Level:",
	"G&#252;venlik Seviyesi:"
	};

char* MLG_ConnStatus_Status_Str19[] = {
	"Interface Status",
	"Aray&#252;z Durumu"
	};

char* MLG_ConnStatus_Status_Str2[] = {
	"Host Name:",
	"Host Ad&#305;:"
	};

char* MLG_ConnStatus_Status_Str20[] = {
	"Interface",
	"Aray&#252;z"
	};

char* MLG_ConnStatus_Status_Str21[] = {
	"Status",
	"Durum"
	};

char* MLG_ConnStatus_Status_Str22[] = {
	"Rate",
	"Oran"
	};

char* MLG_ConnStatus_Status_Str23[] = {
	"Kbps",
	"Kbps"
	};

char* MLG_ConnStatus_Status_Str24[] = {
	"Mbps",
	"Mbps"
	};

char* MLG_ConnStatus_Status_Str25[] = {
	"{{1}}M",
	"{{1}} M"
	};

char* MLG_ConnStatus_Status_Str26[] = {
	"LAN1",
	"Yerel A&#287; 1"
	};

char* MLG_ConnStatus_Status_Str27[] = {
	"LAN2",
	"Yerel A&#287; 2"
	};

char* MLG_ConnStatus_Status_Str28[] = {
	"LAN3",
	"Yerel A&#287; 3"
	};

char* MLG_ConnStatus_Status_Str29[] = {
	"LAN4",
	"Yerel A&#287; 4"
	};

char* MLG_ConnStatus_Status_Str3[] = {
	"Model Number:",
	"Model Numaras&#305;:"
	};

char* MLG_ConnStatus_Status_Str301[] = {
	"Serial Number:",
	"Seri Numaras&#305;:"
	};

char* MLG_ConnStatus_Status_Str302[] = {
	"Security Key:",
	"(null)"
	};

char* MLG_ConnStatus_Status_Str30[] = {
	"LAN5",
	"Yerel A&#287; 5"
	};

char* MLG_ConnStatus_Status_Str31[] = {
	"WAN",
	"WAN"
	};

char* MLG_ConnStatus_Status_Str32[] = {
	"HPNA",
	"HPNA"
	};

char* MLG_ConnStatus_Status_Str33[] = {
	"WLAN",
	"Kablosuz Yerel A&#287;"
	};

char* MLG_ConnStatus_Status_Str33_24[] = {
	"2.4G WLAN",
	"2.4G WLAN"
	};

char* MLG_ConnStatus_Status_Str33_5[] = {
	"5G WLAN",
	"5G WLAN"
	};

char* MLG_ConnStatus_Status_Str34[] = {
	"Wireless",
	"Kablosuz"
	};

char* MLG_ConnStatus_Status_Str35[] = {
	"MoCA",
	"MoCA"
	};

char* MLG_ConnStatus_Status_Str36[] = {
	"MoCA LAN",
	"MoCA Yerel A&#287;"
	};

char* MLG_ConnStatus_Status_Str37[] = {
	"MoCA WAN",
	"MoCA WAN"
	};

char* MLG_ConnStatus_Status_Str38[] = {
	"Ethernet WAN",
	"Ethernet WAN"
	};

char* MLG_ConnStatus_Status_Str39[] = {
	"DSL",
	"DSL"
	};

char* MLG_ConnStatus_Status_Str4[] = {
	"Firmware Version:",
	"Ayg&#305;t Yaz&#305;l&#305;m S&#252;r&#252;m&#252;:"
	};

char* MLG_ConnStatus_Status_Str40[] = {
	"RX: {{1}} / TX: {{1}} (Kbps)",
	"RX: {{1}} / TX: {{1}} (Kbps)"
	};

char* MLG_ConnStatus_Status_Str41[] = {
	"3G USB",
	"3G USB"
	};

char* MLG_ConnStatus_Status_Str42[] = {
	"System Status",
	"Sistem Durumu"
	};

char* MLG_ConnStatus_Status_Str43[] = {
	"System Up Time:",
	"Sistem &#199;al&#305;&#351;ma Zaman&#305;:"
	};

char* MLG_ConnStatus_Status_Str44[] = {
	"Current Date/Time:",
	"G&#252;ncel Tarih / Saat:"
	};

char* MLG_ConnStatus_Status_Str45[] = {
	"DSL Up Time: ",
	"DSL &#199;al&#305;&#351;ma Zaman&#305;: "
	};

char* MLG_ConnStatus_Status_Str46[] = {
	"DSL Retrain Count:",
	"DSL Deneme Say&#305;s&#305;"
	};

char* MLG_ConnStatus_Status_Str47[] = {
	"System Resource:",
	"Sistem Kayna&#287;&#305;:"
	};

char* MLG_ConnStatus_Status_Str48[] = {
	"CPU Usage:",
	"CPU Kullan&#305;m&#305;:"
	};

char* MLG_ConnStatus_Status_Str49[] = {
	"Memory Usage:",
	"Bellek Kullan&#305;m&#305;:"
	};

char* MLG_ConnStatus_Status_Str5[] = {
	"WAN Information:",
	"WAN Bilgisi:"
	};

char* MLG_ConnStatus_Status_Str5_1[] = {
	"WAN Information",
	"WAN Bilgisi:"
	};

char* MLG_ConnStatus_Status_Str50[] = {
	"Quick Link",
	"H&#305;zl&#305; Ba&#287;lant&#305;"
	};

char* MLG_ConnStatus_Status_Str51[] = {
	"Diagnostic tools",
	"Tan&#305;lama ara&#231;lar&#305;"
	};

char* MLG_ConnStatus_Status_Str52[] = {
	"Change password",
	"&#350;ifreyi de&#287;i&#351;tir "
	};

char* MLG_ConnStatus_Status_Str53[] = {
	"Reboot",
	"Yeniden ba&#351;lat"
	};

char* MLG_ConnStatus_Status_Str54[] = {
	"Factory reset",
	"Fabrika ayarlar&#305;na d&#246;n"
	};

char* MLG_ConnStatus_Status_Str55[] = {
	"Registration Status",
	"Kay&#305;t Durumu"
	};

char* MLG_ConnStatus_Status_Str56[] = {
	"Account",
	"Hesap"
	};

char* MLG_ConnStatus_Status_Str57[] = {
	"Action",
	"Eylem"
	};

char* MLG_ConnStatus_Status_Str58[] = {
	"Account Status",
	"Hesap Durumu"
	};

char* MLG_ConnStatus_Status_Str59[] = {
	"Service Provider / SIP Account",
	"Servis Sa&#287;lay&#305;c&#305; / SIP Hesab&#305;"
	};

char* MLG_ConnStatus_Status_Str6[] = {
	"WAN Type:",
	"WAN T&#252;r&#252;:"
	};

char* MLG_ConnStatus_Status_EircomBoardband[] = {
	"Eircom Boardband:",
	"(null)"
	};

char* MLG_ConnStatus_Status_DSLMode[] = {
	"DSL Mode:",
	"(null)"
	};

char* MLG_ConnStatus_Status_LineAttenuation[] = {
	"Line Attenuation:",
	"(null)"
	};

char* MLG_ConnStatus_Status_ContentFilter[] = {
	"Content Filter",
	"(null)"
	};

char* MLG_ConnStatus_Status_WanName[] = {
	"WAN Name:",
	"WAN Ad&#305;:"
	};

char* MLG_ConnStatus_Status_Str60[] = {
	"URI",
	"URI"
	};

char* MLG_ConnStatus_Status_Str61[] = {
	"{{1}} days: {{2}} hours: {{3}} minutes",
	" {{1}} g&#252;n: {{2}} saat: {{3}} dakika "
	};

char* MLG_ConnStatus_Status_Str62[] = {
	"Jan",
	"Ocak"
	};

char* MLG_ConnStatus_Status_Str63[] = {
	"Feb",
	"&#350;ubat"
	};

char* MLG_ConnStatus_Status_Str64[] = {
	"Mar",
	"Mart"
	};

char* MLG_ConnStatus_Status_Str65[] = {
	"Apr",
	"Nisan"
	};

char* MLG_ConnStatus_Status_Str66[] = {
	"May",
	"May&#305;s"
	};

char* MLG_ConnStatus_Status_Str67[] = {
	"Jun",
	"Haziran"
	};

char* MLG_ConnStatus_Status_Str68[] = {
	"Jul",
	"Temmuz"
	};

char* MLG_ConnStatus_Status_Str69[] = {
	"Aug",
	"A&#287;ustos"
	};

char* MLG_ConnStatus_Status_Str7[] = {
	"Encapsulation",
	"Kaps&#252;lleme"
	};

char* MLG_ConnStatus_Status_Str70[] = {
	"Sep",
	"Eyl&#252;l"
	};

char* MLG_ConnStatus_Status_Str71[] = {
	"Oct",
	"Ekim"
	};

char* MLG_ConnStatus_Status_Str72[] = {
	"Nov",
	"Kas&#305;m"
	};

char* MLG_ConnStatus_Status_Str73[] = {
	"Dec",
	"Aral&#305;k"
	};

char* MLG_ConnStatus_Status_Str74[] = {
	"{{03}} {{Jan}} {{2011}} {{02}}:{{13}}:{{11}}",
	"{{03}} {{Oca}} {{2011}} {{02}}: {{13}}: {{11}}"
	};

char* MLG_ConnStatus_Status_Str75[] = {
	"{{1}}H:{{2}}M:{{3}}S",
	"{{1}}S: {{2}} D: {{3}} S"
	};

char* MLG_ConnStatus_Status_Str76[] = {
	"{{1}}Hours:{{2}}Minutes:{{3}}Seconds",
	"{{1}} Saat: {{2}} Dakika: {{3}} Saniye"
	};

char* MLG_ConnStatus_Status_Str77[] = {
	"WAN DNS servers",
	"WAN DNS sunucular&#305;"
	};

char* MLG_ConnStatus_Status_Str78[] = {
	"WAN Default Gateway",
	"WAN Varsay&#305;lan A&#287; Ge&#231;idi"
	};

char* MLG_ConnStatus_Status_Str79[] = {
	"Network Device List",
	"A&#287; Cihaz Listesi"
	};

char* MLG_ConnStatus_Status_Str8[] = {
	"LAN Information :",
	"Yerel A&#287; Bilgisi:"
	};

char* MLG_ConnStatus_Status_Str8_1[] = {
	"LAN Information",
	"Yerel A&#287; Bilgisi"
	};

char* MLG_ConnStatus_Status_Str80[] = {
	"wired/wireless/speed (connected)",
	"kablolu / kablosuz / h&#305;zl&#305; (ba&#287;l&#305;)"
	};

char* MLG_ConnStatus_Status_Str81[] = {
	"IPv6 Link Local Address",
	"IPv6 Ba&#287;lant&#305;s&#305; Yerel Adres"
	};

char* MLG_ConnStatus_Status_Str82[] = {
	"DS-Lite Relay Server",
	"DS-Lite Aktarma Sunucusu"
	};

char* MLG_ConnStatus_Status_Str83[] = {
	"UnRegister",
	"Kayd&#305; Sil"
	};

char* MLG_ConnStatus_Status_Str84[] = {
	"Register",
	"Kaydol"
	};

char* MLG_ConnStatus_Status_Str85[] = {
	"SIP",
	"SIP"
	};

char* MLG_ConnStatus_Status_Str86[] = {
	"Inactive",
	"Aktif De&#287;il"
	};

char* MLG_ConnStatus_Status_Str87[] = {
	"ChangeMe@ChangeMe",
	"De&#287;i&#351;tir@De&#287;i&#351;tir"
	};

char* MLG_ConnStatus_Status_Str88[] = {
	"SSID",
	"SSID"
	};

char* MLG_ConnStatus_Status_Str89[] = {
	"Security",
	"G&#252;venlik"
	};

char* MLG_ConnStatus_Status_Str9[] = {
	"DHCP:",
	"DHCP:"
	};

char* MLG_ConnStatus_Status_Str90[] = {
	"802.11 Mode",
	"802.11 Modu"
	};

char* MLG_ConnStatus_Status_Str91[] = {
	"Firewall",
	"G&#252;venlik Duvar&#305;"
	};

char* MLG_ConnStatus_Status_Str92[] = {
	"System Mode",
	"Sistem Modu"
	};

char* MLG_ConnStatus_Status_Str93[] = {
	"Power Supply",
	"G&#252;&#231; Kayna&#287;&#305;"
	};

char* MLG_ConnStatus_Status_Str94[] = {
	"AC Adaptor",
	"AC Adapt&#246;r&#252;"
	};

char* MLG_ConnStatus_Status_Str95[] = {
	"UPS battery",
	"UPS pili"
	};

char* MLG_ConnStatus_Status_Str96[] = {
	"(UPS battery is low)",
	"(UPS pili zay&#305;f)"
	};

char* MLG_ConnStatus_Status_Str97[] = {
	"(UPS battery is not found)",
	"(UPS pili bulunamad&#305;)"
	};

char* MLG_ConnStatus_Status_Str98[] = {
	"6RD Relay Server",
	"6RD Aktarma Sunucusu"
	};

char* MLG_ConnStatus_Status_Str99[] = {
	"Hybrid",
	"Hibrit"
	};

char* MLG_ConnStatus_Status_Str100[] = {
	"The UPS battery is low",
	"UPS pili zay&#305;f"
	};

char* MLG_ConnStatus_Status_Str101[] = {
	"The battery will run out later and the Internet will be disconnected.",
	"Daha sonra pil bitecek ve internet ba&#287;lant&#305;s&#305; kesilecektir."
	};

char* MLG_ConnStatus_Status_Str102[] = {
	"The device is blocked successfully",
	"Cihaz ba&#351;ar&#305;yla bloke edildi"
	};

char* MLG_ConnStatus_Status_Str103[] = {
	"To change settings, you can go to",
	"Ayarlar&#305; de&#287;i&#351;tirmek i&#231;in, cihazlar&#305;n internete ba&#287;lanmalar&#305;na izin verebilece&#287;iniz ya da reddedebilece&#287;iniz. ...&#39; e gidebilirsiniz."
	};

char* MLG_ConnStatus_Status_Str104[] = {
	"where you can allow or deny devices to access the internet.",
	"where you can allow or deny devices to access the internet."
	};

char* MLG_ConnStatus_Status_Str105[] = {
	"The UPS battery is not found",
	"UPS pili bulunamad&#305;"
	};

char* MLG_ConnStatus_Status_Str106[] = {
	"Please confirm that the battery is properly connected in UPS system.",
	"Pilin d&#252;zg&#252;n bir &#351;ekilde UPS sistemine ba&#287;l&#305; oldu&#287;undan emin olunuz."
	};

char* MLG_ConnStatus_Status_LastLoginTime[] = {
	"Last Login Time:",
	"Son Giri&#351; Saati:"
	};

char* MLG_ConnStatus_NetworkMap_NotAvaliable[] = {
	"Not Avaliable",
	"Kullan&#305;lam&#305;yor"
	};

char* MLG_ConnStatus_Test_Str1[] = {
	"navigate to first",
	"&#214;nce gez"
	};

char* MLG_ConnStatus_Test_Str2[] = {
	"refresh",
	"yenile "
	};

char* MLG_ConnStatus_Test_Str3[] = {
	"prev page",
	"&#246;nceki sayfa"
	};

char* MLG_ConnStatus_Test_Str4[] = {
	"next page",
	"sonraki sayfa"
	};

char* MLG_ConnStatus_VD_Str1[] = {
	"LAN{{1}} on",
	"Yerel A&#287; {{1}} a&#231;&#305;k"
	};

char* MLG_ConnStatus_VD_Str2[] = {
	"wifi Signal on",
	"wifi Sinyal a&#231;&#305;k"
	};

char* MLG_ConnStatus_VD_Str3[] = {
	"dsl line on",
	"dsl hatt&#305; a&#231;&#305;k"
	};

char* MLG_ConnStatus_VD_Str4[] = {
	"wan on",
	"wan a&#231;&#305;k"
	};

char* MLG_ConnStatus_VD_Str5[] = {
	"Virtual Device",
	"Sanal Cihaz"
	};

char* MLG_ConnStatus_VD_Str6[] = {
	"VOIP{{1}} on",
	"(null)"
	};

char* MLG_ConnStatus_VD_Str7[] = {
	"USB {{1}} on",
	"(null)"
	};

char* MLG_ConnStatus_Navi_Str1[] = {
	"Connection Error",
	"Ba&#287;lant&#305; Hatas&#305;"
	};

char* MLG_ConnStatus_Navi_Str2[] = {
	"This device is disconnected from the Internet. Click Diagnose to check the problem.",
	"Cihaz internet ba&#287;lant&#305;s&#305; kesildi. Sorunu kontrol etmek Tan&#305;la&#39; ya t&#305;klay&#305;n&#305;z."
	};

char* MLG_ConnStatus_Navi_Str3[] = {
	"Check the problems",
	"Sorunlar&#305; kontrol et"
	};


char* MLG_ConnStatus_QuickStart_Str1[] = {
	"Default Gateway:",
	"Varsay&#305;lan A&#287; Ge&#231;idi:"
	};

char* MLG_ConnStatus_QuickStart_Str3[] = {
	"Is there specific IP address information from your Internet Service Provider (ISP)?",
	"Internet Servis Sa&#287;lay&#305;c&#305;n&#305;z (ISS) taraf&#305;ndan verilmi&#351; &#246;zel bir IP adresi bilgisi var m&#305;?"
	};

char* MLG_ConnStatus_QuickStart_Str4[] = {
	"Password:",
	"&#350;ifre:"
	};


char* MLG_ConnStatus_QuickStart_Str5[] = {
	"Please close this Quick Start window.",
	"L&#252;tfen bu H&#305;zl&#305; Ba&#351;lang&#305;&#231; &#8203;&#8203;penceresini kapat&#305;n&#305;z."
	};

char* MLG_ConnStatus_QuickStart_Str6[] = {
	"Primary DNS Server:",
	"Birincil DNS Sunucusu:"
	};

char* MLG_ConnStatus_QuickStart_Str7[] = {
	"Result Summary",
	"Sonu&#231; &#214;zeti"
	};

char* MLG_ConnStatus_QuickStart_Str8[] = {
	"Saving and applying configurations, please wait.",
	"Yap&#305;land&#305;rmalar kaydediliyor ve uygulan&#305;yor, l&#252;tfen bekleyiniz."
	};

char* MLG_ConnStatus_QuickStart_Str9[] = {
	"Secondary DNS Server:",
	"&#304;kincil DNS Sunucusu:"
	};

char* MLG_ConnStatus_QuickStart_Str10[] = {
	"Security:",
	"G&#252;venlik:"
	};

char* MLG_ConnStatus_QuickStart_Str14[] = {
	"The following settings are the current wireless settings which your wireless client devices need in order to get connected to this device.",
	"A&#351;a&#287;&#305;daki ayarlar, bu cihaza ba&#287;lanmak i&#231;in kablosuz istemci cihazlar&#305;n&#305;z&#305;n gereksinim duydu&#287;u ge&#231;erli kablosuz ba&#287;lant&#305; ayarlar&#305;d&#305;r."
	};

char* MLG_ConnStatus_QuickStart_Str15[] = {
	"Then the IP Address information will be dynamically assigned to you from your ISP.",
	"Daha sonra IP Adresi bilgileri, dinamik olarak ISS&#39; nizden size tahsis edilecektir."
	};

char* MLG_ConnStatus_QuickStart_Str16[] = {
	"The wizard will guide you through the basic settings of this device. This will take about few minutes to complete. Click Next te begin.",
	"Sihirbaz, bu cihaz&#305;n temel ayarlar&#305; boyunca size rehberlik edecektir. Bu i&#351;lemin tamamlanmas&#305; birka&#231; dakika s&#252;recektir. Ba&#351;lamak i&#231;in &#304;leri&#39; yi t&#305;klay&#305;n&#305;z."
	};

char* MLG_ConnStatus_QuickStart_Str17[] = {
	"Time Zone:",
	"Zaman Dilimi:"
	};

char* MLG_ConnStatus_QuickStart_Str18[] = {
	"User Name:",
	"Kullan&#305;c&#305; Ad&#305;:"
	};

char* MLG_ConnStatus_QuickStart_Str20[] = {
	"Wireless Network Name (SSID):",
	"Kablosuz A&#287; Ad&#305; (SSID):"
	};

char* MLG_ConnStatus_QuickStart_Str21[] = {
	"Wireless Service:",
	"Kablosuz Hizmeti:"
	};

char* MLG_ConnStatus_QuickStart_Str23[] = {
	"You have successfully walked through the Quick Start.",
	"H&#305;zl&#305; Ba&#351;lang&#305;&#231; ad&#305;m&#305;n&#305; ba&#351;ar&#305;yla g&#246;zden ge&#231;irdiniz."
	};

char* MLG_ConnStatus_QuickStart_Str24[] = {
	"Internet Connection",
	"&#304;nternet Ba&#287;lant&#305;s&#305;"
	};

char* MLG_ConnStatus_QuickStart_Str25[] = {
	"The current connection type is set to ",
	"Ge&#231;erli ba&#287;lant&#305; t&#252;r&#252; .... i&#231;in ayarlanm&#305;&#351; "
	};

char* MLG_ConnStatus_QuickStart_Str26[] = {
	"Welcome to Quick Start wizard",
	"H&#305;zl&#305; Ba&#351;lang&#305;&#231; &#8203;&#8203;sihirbaz&#305;na ho&#351; geldiniz"
	};

char* MLG_ConnStatus_QuickStart_Str27[] = {
	"Wireless Setting",
	"Kablosuz Ayar&#305;"
	};

char* MLG_ConnStatus_QuickStart_Str28[] = {
	" and needs a user name and password to get online.",
	" ve &#231;evrimi&#231;i olmak i&#231;in bir kullan&#305;c&#305; ad&#305; ve &#351;ifre gerekmektedir."
	};

char* MLG_ConnStatus_QuickStart_Str31[] = {
	"Step 2 of 3",
	"Ad&#305;m 2"
	};


char* MLG_ConnStatus_QuickStart_Str36[] = {
	"Step 3 of 3",
	"Ad&#305;m 3"
	};


char* MLG_ConnStatus_QuickStart_Str37[] = {
	"No",
	"Hayır"
	};

char* MLG_ConnStatus_QuickStart_Str38[] = {
	"Step 1 of 3",
	"Ad&#305;m 1"
	};

char* MLG_ConnStatus_QuickStart_Str39[] = {
	"Ensure that the ethernet cable is securely connected among the router, splitter, and wall jack. To test physical connection again, click Retry.",
	" Ethernet kablosunun y&#246;nlendirici, splitter ve priz aras&#305;na ba&#287;land&#305;&#287;&#305;ndan emin olunuz. Fiziki ba&#287;lant&#305;y&#305; s&#305;namak i&#231;in, Yeniden Dene se&#231;ene&#287;ine t&#305;klay&#305;n&#305;z."
	};

char* MLG_ConnStatus_QuickStart_Str40[] = {
	"Internet connection",
	"&#304;nternet Ba&#287;lant&#305;s&#305;"
	};

char* MLG_ConnStatus_QuickStart_Str41[] = {
	"Physical connection",
	"Fiziksel ba&#287;lant&#305;"
	};

char* MLG_ConnStatus_QuickStart_Str42[] = {
	"Uable to verify Internet connection. Ensure that your Internet service is valid and available. To Test Internet connection again, click Retry.",
	"&#304;nternet ba&#287;lant&#305;s&#305; do&#287;rulanam&#305;yor. &#304;nternet servisinizin ge&#231;erli ve kullan&#305;labilir oldu&#287;undan emin olunuz. &#304;nternet ba&#287;lant&#305;s&#305;n&#305; s&#305;namak i&#231;in, Yeniden Dene se&#231;ene&#287;ine t&#305;klay&#305;n&#305;z."
	};

char* MLG_ConnStatus_QuickStart_Str43[] = {
	"mark",
	"i&#351;aretle "
	};

char* MLG_ConnStatus_QuickStart_Str44[] = {
	"next (for demo)",
	"ileri (demo i&#231;in)"
	};

char* MLG_ConnStatus_QuickStart_Str45[] = {
	"Default Gateway:",
	"Varsay&#305;lan A&#287; Ge&#231;idi:"
	};

char* MLG_ConnStatus_QuickStart_Str46[] = {
	"Is there specific IP address information from your Internet Service Provider (ISP)?",
	"Internet Servis Sa&#287;lay&#305;c&#305;n&#305;z (ISS) taraf&#305;ndan verilmi&#351; &#246;zel bir IP adresi bilgisi var m&#305;?"
	};

char* MLG_ConnStatus_QuickStart_Str47[] = {
	"Password:",
	"&#350;ifre:"
	};

char* MLG_ConnStatus_QuickStart_Str48[] = {
	"Primary DNS Server:",
	"Birincil DNS Sunucusu:"
	};

char* MLG_ConnStatus_QuickStart_Str49[] = {
	"Secondary DNS Server:",
	"&#304;kincil DNS Sunucusu:"
	};

char* MLG_ConnStatus_QuickStart_Str50[] = {
	"The current connection type is set to Ethernrt. Is there specific IP address information from your Internet Service Provider (ISP)?",
	"Ge&#231;erli ba&#287;lant&#305; t&#252;r&#252; Ethernet i&#231;in ayarlanm&#305;&#351;. Internet Servis Sa&#287;lay&#305;c&#305;n&#305;z (ISS) taraf&#305;ndan verilmi&#351; &#246;zel bir IP adresi bilgisi var m&#305;?"
	};

char* MLG_ConnStatus_QuickStart_Str52[] = {
	"Then the IP Address information will be dynamically assigned to you from your ISP.",
	"Daha sonra IP Adresi bilgileri, dinamik olarak ISS&#39; nizden size tahsis edilecektir."
	};

char* MLG_ConnStatus_QuickStart_Str53[] = {
	"User Name:",
	"Kullan&#305;c&#305; Ad&#305;:"
	};

char* MLG_ConnStatus_QuickStart_Str54[] = {
	"Verify Password:",
	"&#350;ifreyi Do&#287;rula:"
	};

char* MLG_ConnStatus_QuickStart_Str55[] = {
	" and needs a user name and password to get online.",
	" ve &#231;evrimi&#231;i olmak i&#231;in bir kullan&#305;c&#305; ad&#305; ve &#351;ifre gerekmektedir."
	};

char* MLG_ConnStatus_QuickStart_Str56[] = {
	"PPPoE",
	"PPPoE"
	};

char* MLG_ConnStatus_QuickStart_Str57[] = {
	"The current connection type is set to ",
	"Ge&#231;erli ba&#287;lant&#305; t&#252;r&#252; .... i&#231;in ayarlanm&#305;&#351; "
	};

char* MLG_ConnStatus_QuickStart_Str61[] = {
	"The following list describes the errors occurred when saving and applying configurations. You can retry the saving and applying step, restart the Quick Start, or close the window.",
	"A&#351;a&#287;&#305;daki liste, yap&#305;land&#305;rmalar&#305; kaydederken ve uygularken olu&#351;an hatalar&#305; tan&#305;mlar. Ad&#305;m&#305; kaydetmeyi ve uygulamay&#305; yeniden deneyebilir, H&#305;zl&#305; Ba&#351;lang&#305;c&#305; &#8203;&#8203;yeniden ba&#351;latabilir veya pencereyi kapatabilirsiniz."
	};

char* MLG_ConnStatus_QuickStart_Str58[] = {
	"Unable to connect to the Internet",
	"&#304;nternete ba&#287;lanam&#305;yor."
	};

char* MLG_ConnStatus_QuickStart_Str59[] = {
	"Unable to register &lt;SIP#&gt;",
	"H&#305;zl&#305; Ba&#351;lang&#305;&#231; ad&#305;m&#305;n&#305; Ba&#351;ar&#305;yla g&#246;zden ge&#231;irdiniz. lt;SIP# H&#305;zl&#305; Ba&#351;lang&#305;&#231;.gt ad&#305;m&#305;n&#305; Ba&#351;ar&#305;yla g&#246;zden ge&#231;irdiniz kayd&#305; yap&#305;lam&#305;yor;"
	};

char* MLG_ConnStatus_QuickStart_Str60[] = {
	"You have successfully walked through the Quick Start.",
	"H&#305;zl&#305; Ba&#351;lang&#305;&#231; ad&#305;m&#305;n&#305; ba&#351;ar&#305;yla g&#246;zden ge&#231;irdiniz."
	};

char* MLG_ConnStatus_QuickStart_Str62[] = {
	"In order to make Internet calls, the following SIP and account information is essential. Consult your VoIP Service Provider if you need any help.",
	"&#304;nternet aramalar&#305; yapmak i&#231;in, a&#351;a&#287;&#305;daki SIP ve hesap bilgileri gereklidir. Yard&#305;ma ihtiyac&#305;n&#305;z varsa, VoIP Servis Sa&#287;lay&#305;c&#305;n&#305;za dan&#305;&#351;&#305;n&#305;z."
	};

char* MLG_ConnStatus_QuickStart_Str63[] = {
	"Password:",
	"&#350;ifre:"
	};

char* MLG_ConnStatus_QuickStart_Str64[] = {
	"SIP1 Settings",
	"SIP1 Ayarlar"
	};

char* MLG_ConnStatus_QuickStart_Str65[] = {
	"SIP Number:",
	"SIP Numaras&#305;:"
	};

char* MLG_ConnStatus_QuickStart_Str66[] = {
	"SIP Server Address:",
	"SIP Sunucu Adresi:"
	};

char* MLG_ConnStatus_QuickStart_Str67[] = {
	"SIP Service Domain:",
	"SIP Hizmet Alan&#305;:"
	};

char* MLG_ConnStatus_QuickStart_Str68[] = {
	"User Name:",
	"Kullan&#305;c&#305; Ad&#305;:"
	};

char* MLG_ConnStatus_QuickStart_Str69[] = {
	"I want to configure SIP2 settings",
	"SIP2 ayarlar&#305;n&#305; yap&#305;land&#305;rmak istiyorum"
	};


char* MLG_ConnStatus_QuickStart_Str70[] = {
	"Saving and applying configurations, please wait.",
	"Yap&#305;land&#305;rmalar kaydediliyor ve uygulan&#305;yor, l&#252;tfen bekleyin."
	};

char* MLG_ConnStatus_QuickStart_Str71[] = {
	"Deutsch",
	"Almanca"
	};

char* MLG_ConnStatus_QuickStart_Str72[] = {
	"English",
	"&#304;ngilizce "
	};

char* MLG_ConnStatus_QuickStart_Str73[] = {
	"EspaFranItalianoccedil;aisntilde;ol",
	"EspaFranItalianoccedil; aisntilde; ol"
	};

char* MLG_ConnStatus_QuickStart_Str74[] = {
	"FranItalianoccedil;ais",
	"FranItalianoccedil; ais"
	};

char* MLG_ConnStatus_QuickStart_Str75[] = {
	"Italiano",
	"&#304;talyanca"
	};

char* MLG_ConnStatus_QuickStart_Str76[] = {
	"Language:",
	"Dil:"
	};

char* MLG_ConnStatus_QuickStart_Str77[] = {
	"The wizard will guide you through the basic settings of this device. This will take about few minutes to complete. Click Next te begin.",
	"Sihirbaz, bu cihaz&#305;n temel ayarlar&#305; boyunca size rehberlik edecektir. Bu i&#351;lemin tamamlanmas&#305; birka&#231; dakika s&#252;recektir. Ba&#351;lamak i&#231;in &#304;leri&#39; yi t&#305;klay&#305;n&#305;z."
	};

char* MLG_ConnStatus_QuickStart_Str78[] = {
	"Password:",
	"&#350;ifre:"
	};

char* MLG_ConnStatus_QuickStart_Str79[] = {
	"Security:",
	"G&#252;venlik:"
	};

char* MLG_ConnStatus_QuickStart_Str80[] = {
	"The following settings are the current wireless settings which your wireless client devices need in order to get connected to this device.",
	"A&#351;a&#287;&#305;daki ayarlar, bu cihaza ba&#287;lanmak i&#231;in kablosuz istemci cihazlar&#305;n&#305;z&#305;n gereksinim duydu&#287;u ge&#231;erli kablosuz ba&#287;lant&#305; ayarlar&#305;d&#305;r."
	};

char* MLG_ConnStatus_QuickStart_Str81[] = {
	"Wireless Network Name (SSID):",
	"Kablosuz A&#287; Ad&#305; (SSID):"
	};

char* MLG_ConnStatus_QuickStart_Str82[] = {
	"Wireless Service:",
	"Kablosuz Hizmeti:"
	};

char* MLG_ConnStatus_QuickStart_Str83[] = {
	"WPA2",
	"WPA2"
	};

char* MLG_ConnStatus_QuickStart_Str84[] = {
	"1234567",
	"1234567"
	};

char* MLG_ConnStatus_QuickStart_Str85[] = {
	"ZyXEL",
	"ZyXEL"
	};

char* MLG_ConnStatus_QuickStart_Str86[] = {
	"Please choose the correct type of connection for the Internet connection",
	"(null)"
	};

char* MLG_ConnStatus_QuickStart_Str87_1[] = {
	"When you’re finished and are ready to go to the next step, press",
	"(null)"
	};

char* MLG_ConnStatus_QuickStart_Str87_2[] = {
	".",
	"(null)"
	};

char* MLG_ConnStatus_QuickStart_Str88[] = {
	"The wizard will guide you through the basic settings of this device. This will take about few minutes to complete.",
	"Sihirbaz, bu cihaz&#305;n temel ayarlar&#305; boyunca size rehberlik edecektir. Bu i&#351;lemin tamamlanmas&#305; birka&#231; dakika s&#252;recektir."
	};

char* MLG_ConnStatus_QuickStart_Str89[] = {
	"Please close this Easy setup window.",
	"Bu Kolay kurulum penceresini kapat&#305;n."
	};

char* MLG_ConnStatus_QuickStart_Str90[] = {
	"You have successfully walked through the Easy Setup.",
	"Ba&#351;ar&#305;yla Kolay Kurulum ile y&#252;r&#252;d&#252;."
	};

char* MLG_ConnStatus_AlertMsg_Str1[] = {
	"Duplicate static lease information! Please check the host name.",
	"Tekrar eden statik kiralama bilgisi! L&#252;tfen host ad&#305;n&#305; kontrol edniz."
	};

char* MLG_ConnStatus_AlertMsg_Str11[] = {
	"IP Address \'{{1}}\' is invalid IP format.",
	"\'{{1}}\' IP Adresi, ge&#231;ersiz IP format&#305;ndad&#305;r."
	};

char* MLG_ConnStatus_AlertMsg_Str12[] = {
	"Subnet Mask \'{{1}}\' is invalid subnet mask format.",
	"\'{{1}}\' Alt a&#287; maskesi, ge&#231;ersiz alt a&#287; maskesi format&#305;ndad&#305;r."
	};

char* MLG_ConnStatus_AlertMsg_Str13[] = {
	"Default Gateway \'{{1}}\' is invalid IP format.",
	"\'{{1}}\' Varsay&#305;lan A&#287; Ge&#231;idi, ge&#231;ersiz IP format&#305;ndad&#305;r."
	};

char* MLG_ConnStatus_AlertMsg_Str14[] = {
	"Primary DNS \'{{1}}\' is invalid IP format.",
	"Birincil DNS \'{{1}}\', ge&#231;ersiz IP format&#305;ndad&#305;r."
	};

char* MLG_ConnStatus_AlertMsg_Str15[] = {
	"Secondary DNS \'{{1}}\' is invalid IP format.",
	"&#304;kincil DNS \'{{1}}\', ge&#231;ersiz IP format&#305;ndad&#305;r."
	};

char* MLG_ConnStatus_NetworkMap_Str8_1[] = {
	"Connection Rate",
	"Ba&#287;lant&#305; H&#305;z&#305;"
	};

char* MLG_ConnStatus_Status_Str107[] = {
	"days",
	"g&#252;n"
	};

char* MLG_ConnStatus_Status_Str108[] = {
	"hours",
	"saat"
	};

char* MLG_ConnStatus_Status_Str109[] = {
	"minutes",
	"dakika"
	};

char* MLG_ConnStatus_Status_Str110[] = {
	"seconds",
	"saniye"
	};

char* MLG_ConnStatus_Status_VOIP_Registration[] = {
	"Registration",
	"(null)"
	};


char* MLG_ConnStatus_Status_VOIP_Registration_Time[] = {
	"Registration Time",
	"(null)"
	};


char* MLG_ConnStatus_Status_InterfaceStatus_title[] = {
	"Interface Status",
	"Aray&#252;z Durumu"
	};

char* MLG_ConnStatus_Status_InterfaceStatus_Interface[] = {
	"Interface",
	"Aray&#252;z"
	};

char* MLG_ConnStatus_Status_InterfaceStatus_Status[] = {
	"Status",
	"Durum"
	};

char* MLG_ConnStatus_Status_InterfaceStatus_Rate[] = {
	"Rate",
	"Oran"
	};

char* MLG_ConnStatus_Status_InterfaceStatus_Need_PIN[] = {
	"Need PIN",
	"(null)"
	};

char* MLG_ConnStatus_Status_InterfaceStatus_No_Response[] = {
	"No Response",
	"(null)"
	};

char* MLG_ConnStatus_Status_InterfaceStatus_Damaged_SIM[] = {
	"Damaged SIM",
	"(null)"
	};

char* MLG_ConnStatus_Status_InterfaceStatus_Need_PUK[] = {
	"Need PUK",
	"(null)"
	};

char* MLG_ConnStatus_Status_IS_PIN_str1[] = {
	"3G Warning Status",
	"(null)"
	};

char* MLG_ConnStatus_Status_IS_PIN_str2[] = {
	"Incorrect PIN code",
	"(null)"
	};

char* MLG_ConnStatus_Status_IS_PIN_str3[] = {
	"Enter PIN code again",
	"(null)"
	};

char* MLG_ConnStatus_Status_IS_PIN_str4[] = {
	"Pin Left Error Times",
	"(null)"
	};

char* MLG_ConnStatus_Status_IS_PIN_str5[] = {
	"Entering the wrong PIN code 3 times will lock SIM card.",
	"(null)"
	};

char* MLG_ConnStatus_Status_IS_PUK_str1[] = {
	"SIM card is locked",
	"(null)"
	};

char* MLG_ConnStatus_Status_IS_PUK_str2[] = {
	"Enter PUK code and new PIN code to unlock.",
	"(null)"
	};

char* MLG_ConnStatus_Status_IS_PUK_str3[] = {
	"PUK code",
	"(null)"
	};

char* MLG_ConnStatus_Status_IS_PUK_str4[] = {
	"New PIN code",
	"(null)"
	};

char* MLG_ConnStatus_Status_IS_PUK_str5[] = {
	"PUK Left Error Times",
	"(null)"
	};

char* MLG_ConnStatus_Status_IS_PUK_str6[] = {
	"(1) Please contact your service provider for PUK code.",
	"(null)"
	};

char* MLG_ConnStatus_Status_IS_PUK_str7[] = {
	"(2) If Unlock Retry Counter reaches 0, your SIM card will be permanently damaged.",
	"(null)"
	};

char* MLG_ConnStatus_Status_IS_str1[] = {
	"SIM card is not inserted or damaged.",
	"(null)"
	};

char* MLG_ConnStatus_Status_IS_str2[] = {
	"Please check SIM card again.",
	"(null)"
	};

char* MLG_ConnStatus_Status_IS_str3[] = {
	"3G Card is not responding.",
	"(null)"
	};

char* MLG_ConnStatus_Status_IS_str4[] = {
	"Please check if the 3G card is well plug-in the device.",
	"(null)"
	};

/*-----no_dsl_connection-----(troubleshooting1.html or troubleshooting6.html)*/
char* MLG_ConnStatus_TroubleShoot_NoDSL_Str1[] = {
	"Physical line in not properly connected",
	"Fiziksel ba&#287;lant&#305; uygun &#351;ekilde kurulamad&#305;."
	};

char* MLG_ConnStatus_TroubleShoot_NoDSL_Str2[] = {
	"No DSL connection",
	"DSL ba&#287;lant&#305;s&#305; yok."
	};

char* MLG_ConnStatus_TroubleShoot_NoDSL_Str3[] = {
	"DSL connection error occurred. The following information might help you resolve the error.",
	"DSL ba&#287;lant&#305; hatas&#305; olu&#351;tu.A&#351;a&#287;&#305;daki bilgi hatay&#305; &#231;&#246;zmenize yard&#305;mc&#305; olabilir."
	};

char* MLG_ConnStatus_TroubleShoot_NoDSL_Str4[] = {
	"Your router has not established a DSL connection to your local exchange. The DSL light on the router will blink while it is trying to connect, and stay on if it connects successfully.",
	"Y&#246;nlendiriciniz yerel santralinize DSL ba&#287;lant&#305;s&#305; kuramad&#305;. Y&#246;nlendiriciniz ba&#287;lant&#305;y&#305; sa&#287;lamaya &#231;al&#305;&#351;&#305;yorsa  DSL &#305;&#351;&#305;&#287;&#305; yan&#305;p s&#246;necek,e&#287;er DSL &#305;&#351;&#305;&#287;&#305; sabitleniyorsa ba&#287;lant&#305; ba&#351;ar&#305;yla sa&#287;lan&#305;r."
	};

char* MLG_ConnStatus_TroubleShoot_NoDSL_Str5[] = {
	"Your VoIP calls can not be made at this situation.",
	"Bu durumda VoIP aramalar&#305; yap&#305;lamaz."
	};

char* MLG_ConnStatus_TroubleShoot_NoDSL_Str6[] = {
	"After checking for",
	" "
	};

char* MLG_ConnStatus_TroubleShoot_NoDSL_Str7[] = {
	"common connection problems",
	"yayg&#305;n ba&#287;lant&#305; problemlerini"
	};

char* MLG_ConnStatus_TroubleShoot_NoDSL_Str8[] = {
	"please recheck the connection status. If the router still cannot connect, contact your ISP for technical assistance.",
	"kontrol ettikten sonra l&#252;tfen ba&#287;lant&#305; durumunu tekrar kontrol ediniz. e&#287;er y&#246;nlendiriciniz hala ba&#287;lanam&#305;yorsa l&#252;tfen teknik destek i&#231;in ISP'niz ile ileti&#351;ime ge&#231;iniz."
	};

char* MLG_ConnStatus_TroubleShoot_NoDSL_Str9[] = {
	"Common Connection Problems",
	"Yayg&#305;n ba&#287;lant&#305; problemlerini"
	};

char* MLG_ConnStatus_TroubleShoot_NoDSL_Str10[] = {
	"The router might simply not have had enough time to connect yet. This process can take a few minutes to complete after you turn on the router. Try waiting a while to see if the DSL light blinks and then stays on.",
	"Y&#246;nlendiriciniz ba&#287;lanmak i&#231;in yeterli zamana sahip olmam&#305;&#351; olabilir. Bu i&#351;lem i&#231;in y&#246;nlendiriniz a&#231;&#305;ld&#305;ktan sonra birka&#231; dakika zaman alabilir. E&#287;er DSL &#305;&#351;&#305;&#287;&#305;n&#305;z yan&#305;p s&#246;n&#252;yorsa birka&#231; dakika sabitlenmesi i&#231;in l&#252;tfen bekleyiniz."
	};

char* MLG_ConnStatus_TroubleShoot_NoDSL_Str11[] = {
	"Maybe you have not connected the router to your phone line yet or have connected the phone cable (or microfilters if you are using them) incorrectly. Ensure you have followed the cabling instructions provided by your internet service provider.",
	"Y&#246;nlendiricinizi telefon hatt&#305;na ba&#287;lamam&#305;&#351; veya telefon kablonuzu(veya e&#287;er kullan&#305;yorsan&#305;z splitter'&#305;n&#305;z&#305;) d&#252;zg&#252;n bir &#351;ekilde ba&#287;lamam&#305;&#351; olabilirsiniz. L&#252;tfen internet sa&#287;lay&#305;c&#305;n&#305;z taraf&#305;ndan size verilen kablolama y&#246;nergesini do&#287;ru &#351;ekilde uygulad&#305;&#287;&#305;n&#305;zdan emin olunuz."
	};

char* MLG_ConnStatus_TroubleShoot_NoDSL_Str12[] = {
	"Poor quality internal telephone cabling, or too many devices connected to the line, can affect the DSL signal. Try connecting your router to your main phone socket or unplugging all other telephones etc. from the line.",
	"Zay&#305;f kalitedeki dahili kablolama veya hatta ba&#287;l&#305; &#231;ok say&#305;da cihaz DSL sinyalini d&#252;&#351;&#252;r&#252;yor olabilir. Y&#246;nlendiricinizi l&#252;tfen direkt ana telefon soketine ba&#287;lamay&#305; ve di&#287;er b&#252;t&#252;n telefonlar&#305; hattan &#231;&#305;karmay&#305; deneyiniz."
	};

char* MLG_ConnStatus_TroubleShoot_NoDSL_Str13[] = {
	"If you have multiple phone lines, ensure you are using the one that is DSL activated.",
	"E&#287;er birden fazla telefon hatt&#305; kullan&#305;yorsan&#305;z, DSL'i aktive edilmi&#351; hatt&#305; kulland&#305;&#287;&#305;n&#305;zdan emin olunuz."
	};

char* MLG_ConnStatus_TroubleShoot_NoDSL_Str14[] = {
	"There are other possible reasons for your router not connecting, including the possibility that DSL service has not been activated for your phone line yet.",
	"Y&#246;nlendiricinizin ba&#287;lanamamas&#305;n&#305;n, DSL sevisinizin telefon hatt&#305;n&#305;zda hen&#252;z aktive edilmemi&#351; olmas&#305; gibi di&#287;er nedenleri olabilir."
	};

char* MLG_ConnStatus_TroubleShoot_NoDSL_Str15[] = {
	"No connection",
	"ba&#287;lant&#305;s&#305; yok."
	};

/*-----no_fiber_connection-----(troubleshooting1.html or troubleshooting6.html)*/
char* MLG_ConnStatus_TroubleShoot_NoFiber_Str1[] = {
	"No Fiber connection",
	"Fiber ba&#287;lant&#305;s&#305; yok."
	};

char* MLG_ConnStatus_TroubleShoot_NoFiber_Str2[] = {
	"Fiber connection error occurred. The following information might help you resolve the error.",
	"Fiber ba&#287;lant&#305; hatas&#305; olu&#351;tu.A&#351;a&#287;&#305;daki bilgi hatay&#305; &#231;&#246;zmenize yard&#305;mc&#305; olabilir."
	};

char* MLG_ConnStatus_TroubleShoot_NoFiber_Str3[] = {
	"Your gateway(modem) has not established a connection to your local exchange.",
	"A&#x011F; geçidiniz (modem) yerel santralinize Fiber Hat ba&#x011F;lant&#x0131;s&#x0131; kuramad&#x0131;."
	};

char* MLG_ConnStatus_TroubleShoot_NoFiber_Str4[] = {
	"After checking for common connection problems please re-check the connection status.If the gateway(modem) still cannot connect to Internet, please contact your ISP for technical support.",
	"Yayg&#x0131;n ba&#x011F;lant&#x0131; problem ve çözümlerini kontrol ettikten sonra lütfen tekrar deneyiniz.E&#x011F;er A&#x011F; geçidiniz (modem) hala internete ba&#x011F;lanam&#x0131;yorsa lütfen teknik destek için internet servis sa&#x011F;lay&#x0131;c&#x0131;n&#x0131;z ile ileti&#x015F;ime geçiniz."
	};

char* MLG_ConnStatus_TroubleShoot_NoFiber_Str5[] = {
	"Firstly please check the points listed below:",
	"Lütfen öncelikle yayg&#x0131;n ba&#x011F;lant&#x0131; problemlerine neden olan a&#x015F;a&#x011F;&#x0131;daki noktalar&#x0131; kontrol ediniz."
	};

char* MLG_ConnStatus_TroubleShoot_NoFiber_Str6[] = {
	"Make sure that the fiber line is connected to WAN port coloured blue.",
	"Fiber ba&#x011F;lant&#x0131; kablonuzun modemin arkas&#x0131;ndaki mavi renkli WAN portuna tak&#x0131;l&#x0131;l&#x0131; oldugundan emin olunuz."
	};

char* MLG_ConnStatus_TroubleShoot_NoFiber_Str7[] = {
	"If fiber line is connected, please make sure Internet LED is flashing green. Internet LED is the 3rd one from the left on front of the gateway(modem).",
	"WAN portuna kablo tak&#x0131;l&#x0131; ise modemin ön taraf&#x0131;nda soldan 3. konumdaki Internet LED'inin ye&#x015F;il renkte yand&#x0131;&#x011F;&#x0131;ndan emin olunuz."
	};

char* MLG_ConnStatus_TroubleShoot_NoFiber_Str8[] = {
	"Please make sure the cable that you have connected to WAN port is not damaged.",
	"WAN portuna ba&#x011F;lad&#x0131;&#x011F;&#x0131;n&#x0131;z kablonun sa&#x011F;lam oldugundan emin olunuz."
	};

char* MLG_ConnStatus_TroubleShoot_NoFiber_Str9[] = {
	"Please make sure Light ON/OFF switch is ON behind the gateway(modem).",
	"A&#x011F; geçidinizin (modem) arkas&#x0131;ndaki Light ON/OFF anahtar&#x0131;n&#x0131;n ON konumunda oldu&#x011F;undan emin olunuz."
	};

/*-----no_wlan_security----*/
char* MLG_ConnStatus_TroubleShoot_NoWlanSecurity_Str1[] = {
	"Wireless security is currently disabled ",
	"Kablosuz g&#252;venli&#287;i &#351;u an i&#231;in aktif de&#287;ildir"
	};

char* MLG_ConnStatus_TroubleShoot_NoWlanSecurity_Str2[] = {
	"Wireless security error occurred. ",
	"Kablosuz g&#252;venlik hatas&#305; ortaya &#231;&#305;kt&#305;"
	};

char* MLG_ConnStatus_TroubleShoot_NoWlanSecurity_Str3[] = {
	"The following information can help you resolve the error. ",
	"A&#351;a&#287;&#305;daki bilgi hatay&#305; &#231;&#246;zmenize yard&#305;mc&#305; olabilir."
	};

char* MLG_ConnStatus_TroubleShoot_NoWlanSecurity_Str4[] = {
	"Unsecured Connection ",
	"G&#252;venliksiz Ba&#287;lant&#305; "
	};

char* MLG_ConnStatus_TroubleShoot_NoWlanSecurity_Str5[] = {
	"Your wireless security is currently disabled. ",
	"Kablosuz g&#252;venli&#287;iniz &#351;u an i&#231;in aktif de&#287;ildir."
	};

char* MLG_ConnStatus_TroubleShoot_NoWlanSecurity_Str6[] = {
	"Please enable your wireless security to avoid connection of unauthorized people. ",
	"Yetkisiz ki&#351;ilerin modeminize ve a&#287;&#305;n&#305;za eri&#351;memesi i&#231;in kablosuz g&#252;venli&#287;inizi aktif hale getiriniz."
	};

char* MLG_ConnStatus_TroubleShoot_NoWlanSecurity_Str7[] = {
	"Wireless Setting",
	"Kablosuz Ayar&#305;"
	};

/*-----Remote Access Precautions----*/
char* MLG_ConnStatus_TroubleShoot_Password_Changed_Str1[] = {
	"Dear User",
	"Değerli Kullanıcımız"
	};

char* MLG_ConnStatus_TroubleShoot_Password_Changed_Str2[] = {
	"In order to use safe internet session, we recommend you to update GUI password. Please contact the modem administrator.",
	"Güvenli İnternet kullanımına devam edebilmeniz için 'Modem Arayüz Şifresi'ni güncellemenizi tavsiye ediyoruz. Lütfen modem yöneticinize bilgi veriniz."
	};

char* MLG_ConnStatus_TroubleShoot_Password_Changed_Str3[] = {
	"For further information and support:",
	"Ayrıntılı bilgi ve destek için"
	};

char* MLG_ConnStatus_TroubleShoot_Password_Changed_Str4[] = {
	"http://www.zyxel.com/tr/tr/",
	"http://www.zyxel.com/tr/tr/"
	};

char* MLG_ConnStatus_TroubleShoot_Password_Changed_Str5[] = {
	"444 11 50",
	"444 11 50"
	};

/*-----gateway is empty-----*/
char* MLG_ConnStatus_TroubleShoot_GatewayError_Str1[] = {
	"Gateway Error",
	"A&#287; Ge&#231;idi Hatas&#305;"
	};

char* MLG_ConnStatus_TroubleShoot_GatewayError_Str2[] = {
	"Your Wireless Router has encountered an Internet Connection error. Please click on the Restart Connection button to restart the WAN interface.",
	"Kablosuz Router bir Internet Ba&#287;lant&#305;s&#305; hatayla kar&#351;&#305;la&#351;t&#305;.WAN aray&#252;z&#252; yeniden ba&#351;latmak i&#231;in Restart Ba&#287;lant&#305; d&#252;&#287;mesine t&#305;klay&#305;n."
	};

char* MLG_ConnStatus_TroubleShoot_GatewayError_Str3[] = {
	"If the error code does not go away after restarting the WAN connection, please contact with your ISP to report the Error Code to resolve the issue.",
	"Hata kodu WAN ba&#287;lant&#305;s&#305; yeniden ba&#351;latt&#305;ktan sonra gitmez ise, sorunu &#231;&#246;zmek i&#231;in Hata Kodu bildirmek i&#231;in ISS ile irtibata ge&#231;iniz."
	};

char* MLG_ConnStatus_TroubleShoot_GatewayError_Str4[] = {
	"Gateway IP Address",
	"A&#287; Ge&#231;idi IP Adresi"
	};

char* MLG_ConnStatus_TroubleShoot_GatewayError_Str5[] = {
	"Down",
	"a&#351;a&#287;&#305;"
	};

char* MLG_ConnStatus_TroubleShoot_GatewayError_Str6[] = {
	"Restart Connection",
	"Ba&#287;lant&#305; yeniden ba&#351;lat&#305;n"
	};

char* MLG_ConnStatus_Internet_str1[] = {
	"Internet Test",
	"&#304;nternet Testi"
	};

char* MLG_ConnStatus_Internet_str2[] = {
	"Internet is Connected",
	"&#304;nternet ba&#287;l&#305; olan"
	};

char* MLG_ConnStatus_Status_nat_usage[] = {
	"NAT Session Usage",
	"NAT Oturum Kullan&#305;m&#305;"
	};


MAPPING_ITEM ConnStatusMappingItem[350];
