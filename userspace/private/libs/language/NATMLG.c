#include<stdio.h>	
#include<string.h>	
#include<stdlib.h>	
#include<time.h>	
#include "languages.h"	



char* MLG_NAT_ALG_Explain[] = {
	"Application-Level Gateway (ALG) allows customized NAT traversal filters to support address and port translation for certain application such as FTP, SIP, or file transfer in IM.",
	"Uygulama-Seviyesi A&#287; Ge&#231;idi (ALG), &#246;zelle&#351;tirilmi&#351; NAT traversal filtrelerinin, FTP, SIP veya an&#305;nda mesajla&#351;ma uygulamalar&#305;ndaki dosya transferi gibi  uygulamalar&#305;, adres ve port transferinin desteklemesine olanak sa&#287;lar."
	};

char* MLG_NAT_ALG_Str1[] = {
	"Application-Level Gateway (ALG) allows customized NAT traversal filters to support address and port translation for certain application such as FTP, or file transfer in IM applications.",
	"Uygulama - A&#287; Ge&#231;idi Seviyesi  (ALG), &#246;zelle&#351;tirilmi&#351; NAT filtrelerinin FTP gibi belirli uygulamalar i&#231;in adres ve port &#231;evirisini veya IM i&#231;erisinde dosya transferini desteklemesine olanak sa&#287;lar.  "
	};

char* MLG_NAT_ALG_Str2[] = {
	"ALG State",
	"ALG Durumu"
	};

char* MLG_NAT_ALG_Str3[] = {
	"ALG",
	"ALG"
	};

char* MLG_NAT_ALG_Str4[] = {
	"Disable (The settings in this screen are invalid if you select this.)",
	"Devre D&#305;&#351;&#305; B&#305;rak (Bunu se&#231;meniz durumunda, bu ekrandaki ayarlar ge&#231;ersiz olacakt&#305;r.)"
	};

char* MLG_NAT_ALG_Str5[] = {
	"Enable",
	"Etkinle&#351;tir"
	};

char* MLG_NAT_ALG_Str6[] = {
	"Disable",
	"Devre D&#305;&#351;&#305; B&#305;rak"
	};

char* MLG_NAT_ALG_Str7[] = {
	"SIP ALG State",
	"SIP ALG Durumu"
	};

char* MLG_NAT_ALG_Str8[] = {
	"SIP ALG",
	"SIP ALG"
	};

char* MLG_NAT_ALG_RTSPALG[] = {
	"RTSP ALG",
	"RTSP ALG"
	};

char* MLG_NAT_ALG_Str9[] = {
	"NAT ALG",
	"NAT ALG"
	};

char* MLG_NAT_ALG_Str10[] = {
	"settings are invalid when disabled",
	"devre d&#305;&#351;&#305; b&#305;rak&#305;ld&#305;&#287;&#305;nda ayarlar ge&#231;ersizdir"
	};

char* MLG_NAT_Applications_AlertMsg_Str1[] = {
	"Internal server IP address {{1}} is invalid.",
	"Dahili sunucu IP adresi {{1}} ge&#231;ersiz."
	};

char* MLG_NAT_Applications_AlertMsg_Str2[] = {
	"The IP port range is invalid.",
	"Girilen IP port aral&#305;&#287;&#305; ge&#231;ersizdir."
	};

char* MLG_NAT_Applications_AlertMsg_Str3[] = {
	"The IP port range is invalid.",
	"Girilen IP port aral&#305;&#287;&#305; ge&#231;ersizdir."
	};

char* MLG_NAT_Applications_AlertMsg_Str4[] = {
	"The defined port or port range is in use by another port forwarding, applications or UPNP rule. You must remove the rule before the new rule can be applied.",
	"Tan&#305;ml&#305; port veya port aral&#305;&#287;&#305; ba&#351;ka bir port y&#246;nlendirme, uygulama veya UPNP kural&#305; taraf&#305;ndan kullan&#305;l&#305;yor. Yeni kural&#305;n uygulanmas&#305; i&#231;in &#246;nce kural&#305; kald&#305;rman&#305;z gerekir."
	};

char* MLG_NAT_Applications_AlertMsg_Str5[] = {
	"The defined port or port range is in use by another port forwarding, applications or UPNP rule. You must remove the rule before the new rule can be applied.",
	"Tan&#305;ml&#305; port veya port aral&#305;&#287;&#305; ba&#351;ka bir port y&#246;nlendirme, uygulama veya UPNP kural&#305; taraf&#305;ndan kullan&#305;l&#305;yor. Yeni kural&#305;n uygulanmas&#305; i&#231;in &#246;nce kural&#305; kald&#305;rman&#305;z gerekir."
	};

char* MLG_NAT_Applications_AlertMsg_Str6[] = {
	"The defined port or port range is in use by another port forwarding, applications or UPNP rule. You must remove the rule before the new rule can be applied.",
	"Tan&#305;ml&#305; port veya port aral&#305;&#287;&#305; ba&#351;ka bir port y&#246;nlendirme, uygulama veya UPNP kural&#305; taraf&#305;ndan kullan&#305;l&#305;yor. Yeni kural&#305;n uygulanmas&#305; i&#231;in &#246;nce kural&#305; kald&#305;rman&#305;z gerekir."
	};

char* MLG_NAT_Applications_AlertMsg_Str7[] = {
	"The defined rule is in use by another port forwarding, applications or UPNP rule. You must remove the rule before the new rule can be applied.",
	"Tan&#305;ml&#305; kural ba&#351;ka bir port y&#246;nlendirme, uygulama veya UPNP kural&#305; taraf&#305;ndan kullan&#305;l&#305;yor. Yeni kural&#305;n uygulanmas&#305; i&#231;in &#246;nce kural&#305; kald&#305;rman&#305;z gerekir."
	};

char* MLG_NAT_Applications_Explain[] = {
	"Each and every Internet activity, such as online gaming and online video streaming, requires at least a port to communicate. Applications provide commonly seen Internet activities by categories and make configuring port forwarding easier.",
	"&#199;evrimi&#231;i oyun ve &#231;evrimi&#231;i video yay&#305;n&#305; gibi  her internet aktivitesi, ileti&#351;im i&#231;in en az bir port gerektirir. Uygulamalar, kategorilere g&#246;re s&#305;k g&#246;zlenen &#304;nternet aktivitelerini sa&#287;lar ve port iletim yap&#305;land&#305;r&#305;lmas&#305;n&#305; kolayla&#351;t&#305;r&#305;r."
	};

char* MLG_NAT_Applications_Str1[] = {
	"Applications provide predefined common applications to let you set up the port forwarding easier.",
	"Uygulamalar, port iletim kurulumunu daha kolay yapman&#305;z i&#231;in &#246;n tan&#305;ml&#305; ortak uygulamalar sa&#287;lar."
	};

char* MLG_NAT_Applications_AlertMsg_Str8[] = {
	"WAN IP address {{1}} is invalid.",
	"WAN IP adresi {{1}} ge&#231;ersiz."
	};

char* MLG_NAT_Applications_AlertMsg_Str9[] = {
	"The IP port range is invalid.",
	"IP port aral&#305;&#287;&#305; ge&#231;ersiz."
	};

char* MLG_NAT_Applications_Str10[] = {
	"Games",
	"Oyunlar"
	};

char* MLG_NAT_Applications_Str100[] = {
	"Nintendo Wii",
	"Nintendo Wii"
	};

char* MLG_NAT_Applications_Str101[] = {
	"Xbox 360",
	"Xbox 360"
	};

char* MLG_NAT_Applications_Str102[] = {
	"DirecTV Receiver 1",
	"DirecTV Alıcı1"
	};

char* MLG_NAT_Applications_Str103[] = {
	"DirecTV Receiver 2",
	"DirecTV Alıcı2"
	};

char* MLG_NAT_Applications_Str104[] = {
	"DirecTV Receiver 3",
	"DirecTV Alıcı3"
	};

char* MLG_NAT_Applications_Str105[] = {
	"DirecTV Receiver 4",
	"DirecTV Alıcı4"
	};

char* MLG_NAT_Applications_Str106[] = {
	"ITunes Music Share",
	"iTunes Muzik Paylasımı"
	};

char* MLG_NAT_Applications_Str107[] = {
	"Net2Phone",
	"Net2Phone"
	};

char* MLG_NAT_Applications_Str108[] = {
	"NetFone",
	"NetFone"
	};

char* MLG_NAT_Applications_Str109[] = {
	"Netmeeting",
	"Netmeeting"
	};

char* MLG_NAT_Applications_Str11[] = {
	"Game Consoles",
	"Oyun Konsollar&#305;"
	};

char* MLG_NAT_Applications_Str110[] = {
	"Slingbox",
	"Slingbox"
	};

char* MLG_NAT_Applications_Str111[] = {
	"Quick Time 4 Server",
	"Quick Time 4 Sunucusu"
	};

char* MLG_NAT_Applications_Str112[] = {
	"Webphone",
	"Web telefon"
	};

char* MLG_NAT_Applications_Str113[] = {
	"Gnutella",
	"Gnutella"
	};

char* MLG_NAT_Applications_Str114[] = {
	"Laplink",
	"Laplink"
	};

char* MLG_NAT_Applications_Str115[] = {
	"NetBIOS",
	"NetBIOS"
	};

char* MLG_NAT_Applications_Str116[] = {
	"PC Anywhere",
	"PC Anywhere"
	};

char* MLG_NAT_Applications_Str117[] = {
	"Remote Administrator",
	"Remote Administrator"
	};

char* MLG_NAT_Applications_Str118[] = {
	"Remote Anything",
	"Remote Anything"
	};

char* MLG_NAT_Applications_Str119[] = {
	"Remote AnyWhere",
	"Remote AnyWhere"
	};

char* MLG_NAT_Applications_Str12[] = {
	"Audio/Video",
	"Ses / Video"
	};

char* MLG_NAT_Applications_Str120[] = {
	"Remote Desktop Connection",
	"Uzak Masaustu Baglantısı"
	};

char* MLG_NAT_Applications_Str121[] = {
	"VNC",
	"VNC"
	};

char* MLG_NAT_Applications_Str122[] = {
	"Windows 2000 Terminal",
	"Windows 2000 Terminal"
	};

char* MLG_NAT_Applications_Str123[] = {
	"IPSec",
	"IPSec"
	};

char* MLG_NAT_Applications_Str124[] = {
	"L2TP",
	"L2TP"
	};

char* MLG_NAT_Applications_Str125[] = {
	"PPTP",
	"PPTP"
	};

char* MLG_NAT_Applications_Str126[] = {
	"Shiva VPN",
	"Shiva VPN"
	};

char* MLG_NAT_Applications_Str127[] = {
	"SSL VPN",
	"SSL VPN"
	};

char* MLG_NAT_Applications_Str128[] = {
	"DNS Server",
	"DNS Sunucusu"
	};

char* MLG_NAT_Applications_Str129[] = {
	"FTP Server",
	"FTP Sunucusu"
	};

char* MLG_NAT_Applications_Str13[] = {
	"Applications",
	"Uygulamalar"
	};

char* MLG_NAT_Applications_Str130[] = {
	"IMAP Server",
	"IMAP Sunucusu"
	};

char* MLG_NAT_Applications_Str131[] = {
	"IRC Server",
	"IRC Sunucusu"
	};

char* MLG_NAT_Applications_Str132[] = {
	"LDAP Server",
	"LDAP Sunucusu"
	};

char* MLG_NAT_Applications_Str133[] = {
	"Lotus",
	"Lotus"
	};

char* MLG_NAT_Applications_Str134[] = {
	"NNTP",
	"NNTP"
	};

char* MLG_NAT_Applications_Str135[] = {
	"POP2 Mail Server",
	"POP2 Posta Sunucusu"
	};

char* MLG_NAT_Applications_Str136[] = {
	"POP3 Mail Server",
	"POP3 Posta Sunucusu"
	};

char* MLG_NAT_Applications_Str137[] = {
	"Remotely Possible Server",
	"Uzak Muhtemel Sunucu"
	};

char* MLG_NAT_Applications_Str138[] = {
	"Quick Time 4 Server",
	"Quick Time 4 Sunucusu"
	};

char* MLG_NAT_Applications_Str139[] = {
	"SMTP Mail Server",
	"SMTP Posta Sunucusu"
	};

char* MLG_NAT_Applications_Str14[] = {
	"VPN",
	"VPN"
	};

char* MLG_NAT_Applications_Str140[] = {
	"Telnet Server",
	"Telnet Sunucusu"
	};

char* MLG_NAT_Applications_Str141[] = {
	"Web Server",
	"Web Sunucusu"
	};

char* MLG_NAT_Applications_Str142[] = {
	"Rule Name",
	"Kural Ad&#305;"
	};

char* MLG_NAT_Applications_Str143[] = {
	"Protocol",
	"Protokol"
	};

char* MLG_NAT_Applications_Str144[] = {
	"Start Port ",
	"Ba&#351;lang&#305;&#231; Portu "
	};

char* MLG_NAT_Applications_Str145[] = {
	"End Port",
	"Biti&#351; Portu"
	};

char* MLG_NAT_Applications_Str146[] = {
	"Map Port",
	"Harita Portu"
	};

char* MLG_NAT_Applications_Str147[] = {
	"View Rule Management",
	"Kural Y&#246;netimini G&#246;r&#252;nt&#252;le"
	};

char* MLG_NAT_Applications_Str148[] = {
	"Applications Configuration",
	"Uygulamalar&#305; Yap&#305;land&#305;rma"
	};

char* MLG_NAT_Applications_Str149[] = {
	"Applications Delete",
	"Uygulamalar&#305; Sil"
	};

char* MLG_NAT_Applications_Str15[] = {
	"Servers",
	"Sunucular"
	};

char* MLG_NAT_Applications_Str150[] = {
	"none",
	"hi&#231;biri"
	};

char* MLG_NAT_Applications_Str151[] = {
	"Add New Application",
	"Yeni Uygulama Ekle"
	};

char* MLG_NAT_Applications_Str152[] = {
	"Applications Edit",
	"Uygulamalar&#305; D&#252;zenleme"
	};

char* MLG_NAT_Applications_Str153[] = {
	"Back",
	"geri"
	};

char* MLG_NAT_Applications_Str16[] = {
	"Age of Empires",
	"Age of Empires"
	};

char* MLG_NAT_Applications_Str17[] = {
	"Age of Empires II",
	"Age of Empires II"
	};

char* MLG_NAT_Applications_Str18[] = {
	"Age of Empires III",
	"Age of Empires III"
	};

char* MLG_NAT_Applications_Str19[] = {
	"Age of Mythology",
	"Age of Mythology"
	};

char* MLG_NAT_Applications_Str2[] = {
	"Application Forwarded",
	"Y&#246;nlendirilen Uygulama "
	};

char* MLG_NAT_Applications_Str20[] = {
	"Alien vs. Predator 2",
	"Alien vs. Predator 2"
	};

char* MLG_NAT_Applications_Str21[] = {
	"Asherons Call",
	"Asherons Call"
	};

char* MLG_NAT_Applications_Str22[] = {
	"Asheron's Call",
	"Asheron's Call"
	};

char* MLG_NAT_Applications_Str23[] = {
	"Baldurs Gate",
	"Baldurs Gate"
	};

char* MLG_NAT_Applications_Str24[] = {
	"Baldur&#39;s Gate",
	"Baldur&#39;s Gate"
	};

char* MLG_NAT_Applications_Str25[] = {
	"Baldurs Gate II",
	"Baldurs Gate II"
	};

char* MLG_NAT_Applications_Str26[] = {
	"Baldur's Gate II",
	"Baldur's Gate II"
	};

char* MLG_NAT_Applications_Str27[] = {
	"Battlefield 1942",
	"Battlefield 1942"
	};

char* MLG_NAT_Applications_Str28[] = {
	"Battlefield 1942",
	"Battlefield 1942"
	};

char* MLG_NAT_Applications_Str29[] = {
	"Battlefield Vietnam",
	"Battlefield Vietnam"
	};

char* MLG_NAT_Applications_Str3[] = {
	"Server IP Address",
	"Sunucu IP Adresi"
	};

char* MLG_NAT_Applications_Str30[] = {
	"Battlestations Midway",
	"Battlestations Midway"
	};

char* MLG_NAT_Applications_Str31[] = {
	"Battlefield Communicator",
	"Battlefield Communicator"
	};

char* MLG_NAT_Applications_Str32[] = {
	"Black and White",
	"Black and White"
	};

char* MLG_NAT_Applications_Str33[] = {
	"Black and White 2",
	"Black and White 2"
	};

char* MLG_NAT_Applications_Str34[] = {
	"Call of Duty",
	"Call of Duty"
	};

char* MLG_NAT_Applications_Str35[] = {
	"Call of Duty - United Offensive",
	"Call of Duty - United Offensive"
	};

char* MLG_NAT_Applications_Str36[] = {
	"Call of Duty 2",
	"Call of Duty 2"
	};

char* MLG_NAT_Applications_Str37[] = {
	"Call of Duty 4",
	"Call of Duty 4"
	};

char* MLG_NAT_Applications_Str38[] = {
	"Civilization III",
	"Civilization III"
	};

char* MLG_NAT_Applications_Str39[] = {
	"Civilization IV",
	"Civilization IV"
	};

char* MLG_NAT_Applications_Str4[] = {
	"Modify",
	"De&#287;i&#351;tir "
	};

char* MLG_NAT_Applications_Str40[] = {
	"Close Combat",
	"Close Combat"
	};

char* MLG_NAT_Applications_Str41[] = {
	"Close Combat III: The Russian Front",
	"Close Combat III: The Russian Front"
	};

char* MLG_NAT_Applications_Str42[] = {
	"Close Combat IV",
	"Close Combat IV"
	};

char* MLG_NAT_Applications_Str43[] = {
	"Close Combat V",
	"Close Combat V"
	};

char* MLG_NAT_Applications_Str44[] = {
	"Combat Flight Sim 2: WWII Pacific Theatre",
	"Combat Flight Sim 2: WWII Pacific Theatre"
	};

char* MLG_NAT_Applications_Str45[] = {
	"Combat Flight Sim 2: WWII Europe Series",
	"Combat Flight Sim 2: WWII Europe Series"
	};

char* MLG_NAT_Applications_Str46[] = {
	"Command and Conquer 3 TW",
	"Command and Conquer 3 TW"
	};

char* MLG_NAT_Applications_Str47[] = {
	"Command and Conquer Generals",
	"Command and Conquer Generals"
	};

char* MLG_NAT_Applications_Str48[] = {
	"Dark Reign",
	"Dark Reign"
	};

char* MLG_NAT_Applications_Str49[] = {
	"Dark Reign 2",
	"Dark Reign 2"
	};

char* MLG_NAT_Applications_Str5[] = {
	"Server IP Address",
	"Sunucu IP Adresi"
	};

char* MLG_NAT_Applications_Str50[] = {
	"Delta Force",
	"Delta Force"
	};

char* MLG_NAT_Applications_Str51[] = {
	"Delta Force II",
	"Delta Force II"
	};

char* MLG_NAT_Applications_Str52[] = {
	"Diablo",
	"Diablo"
	};

char* MLG_NAT_Applications_Str53[] = {
	"Diablo II",
	"Diablo II"
	};

char* MLG_NAT_Applications_Str54[] = {
	"DirectX 7-8 Games",
	"DirectX 7-8 Games"
	};

char* MLG_NAT_Applications_Str55[] = {
	"Doom I-II-III",
	"Doom I-II-III"
	};

char* MLG_NAT_Applications_Str56[] = {
	"Dune 2000",
	"Dune 2000"
	};

char* MLG_NAT_Applications_Str57[] = {
	"Dragon Age: Origins",
	"Dragon Age: Origins"
	};

char* MLG_NAT_Applications_Str58[] = {
	"Dungeons and Dragons Online",
	"Dungeons and Dragons Online"
	};

char* MLG_NAT_Applications_Str59[] = {
	"F-16 Mig. 29",
	"F-16 Mig. 29"
	};

char* MLG_NAT_Applications_Str6[] = {
	"Application Category",
	"Uygulama Kategorisi"
	};

char* MLG_NAT_Applications_Str60[] = {
	"F-22 Lightning 3",
	"F-22 Lightning 3"
	};

char* MLG_NAT_Applications_Str61[] = {
	"F-22 Raptor",
	"F-22 Raptor"
	};

char* MLG_NAT_Applications_Str62[] = {
	"Fighter Ace II",
	"Fighter Ace II"
	};

char* MLG_NAT_Applications_Str63[] = {
	"Flight Simulator 2000 - 2002",
	"Flight Simulator 2000 - 2002"
	};

char* MLG_NAT_Applications_Str64[] = {
	"Flight Simulator 2004",
	"Flight Simulator 2004"
	};

char* MLG_NAT_Applications_Str65[] = {
	"GameSpy",
	"GameSpy"
	};

char* MLG_NAT_Applications_Str66[] = {
	"Ghost Recon: Advanced Warfighter 2",
	"Ghost Recon: Advanced Warfighter 2"
	};

char* MLG_NAT_Applications_Str67[] = {
	"GNUtella",
	"GNUtella"
	};

char* MLG_NAT_Applications_Str68[] = {
	"Guild Wars",
	"Guild Wars"
	};

char* MLG_NAT_Applications_Str69[] = {
	"Half Life",
	"Half Life"
	};

char* MLG_NAT_Applications_Str7[] = {
	"Application Forwarded",
	"Y&#246;nlendirilen Uygulama "
	};

char* MLG_NAT_Applications_Str70[] = {
	"Half Life II",
	"Half Life II"
	};

char* MLG_NAT_Applications_Str71[] = {
	"Halo - Combat Evolved",
	"Halo - Combat Evolved"
	};

char* MLG_NAT_Applications_Str72[] = {
	"Heretic II",
	"Heretic II"
	};

char* MLG_NAT_Applications_Str73[] = {
	"Hexen II",
	"Hexen II"
	};

char* MLG_NAT_Applications_Str74[] = {
	"Kali",
	"Kali"
	};

char* MLG_NAT_Applications_Str75[] = {
	"KaZaA",
	"KaZaA"
	};

char* MLG_NAT_Applications_Str76[] = {
	"Lord of the Rings Online",
	"Lord of the Rings Online"
	};

char* MLG_NAT_Applications_Str77[] = {
	"Lord of the Rings: Battle for Middle Earth",
	"Lord of the Rings: Battle for Middle Earth"
	};

char* MLG_NAT_Applications_Str78[] = {
	"Lord of the Rings: Battle for Middle Earth 2",
	"Lord of the Rings: Battle for Middle Earth 2"
	};

char* MLG_NAT_Applications_Str79[] = {
	"Lord of the Rings: War of the Rings",
	"Lord of the Rings: War of the Rings"
	};

char* MLG_NAT_Applications_Str8[] = {
	"View Rule",
	"Kural G&#246;r&#252;nt&#252;le"
	};

char* MLG_NAT_Applications_Str80[] = {
	"Madden 06",
	"Madden 06"
	};

char* MLG_NAT_Applications_Str81[] = {
	"Madden 07",
	"Madden 07"
	};

char* MLG_NAT_Applications_Str82[] = {
	"MechWarrior 3",
	"MechWarrior 3"
	};

char* MLG_NAT_Applications_Str83[] = {
	"MechWarrior 4",
	"MechWarrior 4"
	};

char* MLG_NAT_Applications_Str84[] = {
	"MSN Gaming Zone",
	"MSN Gaming Zone"
	};

char* MLG_NAT_Applications_Str85[] = {
	"Need For Speed 3",
	"Need For Speed 3"
	};

char* MLG_NAT_Applications_Str86[] = {
	"Need for Speed Porsche",
	"Need for Speed Porsche"
	};

char* MLG_NAT_Applications_Str87[] = {
	"Outlaws",
	"Outlaws"
	};

char* MLG_NAT_Applications_Str88[] = {
	"Rainbow 6",
	"Rainbow 6"
	};

char* MLG_NAT_Applications_Str89[] = {
	"Rouge Spear",
	"Rouge Spear"
	};

char* MLG_NAT_Applications_Str9[] = {
	"All",
	"T&#252;m&#252;"
	};

char* MLG_NAT_Applications_Str90[] = {
	"Starcraft",
	"Starcraft"
	};

char* MLG_NAT_Applications_Str91[] = {
	"Star Wars",
	"Star Wars"
	};

char* MLG_NAT_Applications_Str92[] = {
	"Supreme Commander",
	"Supreme Commander"
	};

char* MLG_NAT_Applications_Str93[] = {
	"Tabula Rasa",
	"Tabula Rasa"
	};

char* MLG_NAT_Applications_Str94[] = {
	"Tiberian Sun",
	"Tiberian Sun"
	};

char* MLG_NAT_Applications_Str95[] = {
	"Ultima",
	"Ultima"
	};

char* MLG_NAT_Applications_Str96[] = {
	"Quake 3 Server",
	"Quake 3 Sunucusu"
	};

char* MLG_NAT_Applications_Str97[] = {
	"Quake 2 Server",
	"Quake 2 Sunucusu"
	};

char* MLG_NAT_Applications_Str98[] = {
	"World of Warcraft",
	"World of Warcraft"
	};

char* MLG_NAT_Applications_Str99[] = {
	"Sony PS-2 - PS-3",
	"Sony PS-2 - PS-3"
	};

char* MLG_NAT_DMZ_AlertMsg_Str1[] = {
	"DMZ host address {{1}} is invalid IP address.",
	"DMZ ana bilgisayar adresi {{1}} ge&#231;ersiz bir IP adresi."
	};

char* MLG_NAT_DMZ_Explain[] = {
	"The LAN client in the Demilitarized Zone (DMZ) is no longer behind this device and therefore can run any Internet applications, such as video conferencing and Internet gaming without restrictions. But with the same reason, it also uncover itself to Internet security threats.",
	"DMZ i&#231;indeki Yerel A&#287; &#304;stemcisi, cihaz&#305;n arkas&#305;nda olmad&#305;&#287;&#305; i&#231;in, video konferans ve internet oyunu gibi, s&#305;n&#305;rs&#305;z bir &#351;ekilde her t&#252;rl&#252; internet uygulamas&#305; taraf&#305;ndan &#231;al&#305;&#351;t&#305;rabilir. Ancak ayn&#305; sebepten &#246;t&#252;r&#252; g&#252;venlik tehditlerine kar&#351;&#305; da gizlili&#287;i yoktur."
	};

char* MLG_NAT_DMZ_Str1[] = {
	"The Demilitarized Zone (DMZ) allows the configured computer to be exposed to the Internet.",
	"Askersiz B&#246;lge (DMZ), yap&#305;land&#305;r&#305;lm&#305;&#351; bilgisayar&#305;n Internet&#39; e maruz kalmas&#305;na izin verir."
	};

char* MLG_NAT_DMZ_Str2[] = {
	"Default Server Address",
	"Varsay&#305;lan Sunucu Adresi"
	};

char* MLG_NAT_DMZ_Str3[] = {
	"Enter IP address and click \'Apply\' to activate the DMZ host.",
	"DMZ hostunu aktifle&#351;tirmek i&#231;in IP adresini giriniz ve \'Uygula\' butonuna bas&#305;n&#305;z."
	};

char* MLG_NAT_Note[] = {
	"Note",
	"Not"
	};

char* MLG_NAT_DMZ_Str4[] = {
	"Enter IP address and click \'Apply\' to activate the DMZ host.",
	"DMZ &#246;zelli&#287;ini etkinle&#351;tirmek i&#231;in y&#246;nlendirece&#287;iniz IP adresini giriniz ve  \'Uygula\' d&#252;&#287;mesine t&#305;klay&#305;n&#305;z."
	};

char* MLG_NAT_DMZ_Str5[] = {
	"Clear the IP address field and click \'Apply\' to deactivate the DMZ host.",
	"DMZ &#246;zelli&#287;ini devre d&#305;&#351;&#305; b&#305;rakmak i&#231;in y&#246;nlendirdi&#287;iniz IP adresini siliniz ve  \'Uygula\' d&#252;&#287;mesine t&#305;klay&#305;n&#305;z."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str1[] = {
	"Invaid Service Name!!",
	"Ge&#231;ersiz Hizmet Ad&#305;!"
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str10[] = {
	"The defined port or port range is in use by another port forwarding, applications or UPNP rule. You must remove the rule before the new rule can be applied.",
	"Tan&#305;ml&#305; port veya port aral&#305;&#287;&#305; ba&#351;ka bir port y&#246;nlendirme, uygulama veya UPNP kural&#305; taraf&#305;ndan kullan&#305;l&#305;yor. Yeni kural&#305;n uygulanmas&#305; i&#231;in &#246;nce kural&#305; kald&#305;rman&#305;z gerekir."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str11[] = {
	"The defined rule is in use by another port forwarding, applications or UPNP rule. You must remove the rule before the new rule can be applied.",
	"Tan&#305;ml&#305; kural ba&#351;ka bir port y&#246;nlendirme, uygulama veya UPNP kural&#305; taraf&#305;ndan kullan&#305;l&#305;yor. Yeni kural&#305;n uygulanmas&#305; i&#231;in &#246;nce kural&#305; kald&#305;rman&#305;z gerekir."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str12[] = {
	"Since TCP port 50805 is reserved for TR-069 Client.<br>Please change the port or port range.",
	"TCP portu 50805, TR-069 &#304;stemcisi i&#231;in ayr&#305;lm&#305;&#351; oldu&#287;undan, <br>L&#252;tfen port veya port aral&#305;&#287;&#305;n&#305; de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str13[] = {
	"Since TCP port 21  are used. The router FTP server port will be moved to 2121.",
	"TCP portu 21 kullan&#305;ld&#305;&#287;&#305;ndan. Y&#246;nlendirici FTP sunucu portu 2121&#39; e ta&#351;&#305;nacakt&#305;r."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str14[] = {
	"Since TCP port 23  are used. The router TELNET server port will be moved to 2323.",
	"TCP portu 23 kullan&#305;ld&#305;&#287;&#305;ndan. Y&#246;nlendirici TELNET sunucu portu 2323&#39; e ta&#351;&#305;nacakt&#305;r."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str15[] = {
	"Since TCP port 69  are used. The router TFTP server port will be moved to 6969.",
	"TCP portu 69 kullan&#305;ld&#305;&#287;&#305;ndan. Y&#246;nlendirici TFTP sunucu portu 6969&#39; a ta&#351;&#305;nacakt&#305;r."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str16[] = {
	"Since TCP port 80  are used. The router WEB server port will be moved to 8080",
	"TCP portu 80 kullan&#305;ld&#305;&#287;&#305;ndan. Y&#246;nlendirici WEB sunucu portu 8080&#39; e ta&#351;&#305;nacakt&#305;r."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str17[] = {
	"Since TCP port 443  are used. The router HTTPS server port will be moved to 4433.",
	"TCP portu 443 kullan&#305;ld&#305;&#287;&#305;ndan. Y&#246;nlendirici HTTPS sunucu portu 4433&#39; e ta&#351;&#305;nacakt&#305;r."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str18[] = {
	"Since TCP port 22  are used. The router SSH server port will be moved to 2222.",
	"TCP portu 22 kullan&#305;ld&#305;&#287;&#305;ndan. Y&#246;nlendirici SSH sunucu portu 2222&#39; e ta&#351;&#305;nacakt&#305;r."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str19[] = {
	"Since TCP port 21  is used. The router FTP server port will be moved to 2121.",
	"TCP portu 21 kullan&#305;ld&#305;&#287;&#305;ndan. Y&#246;nlendirici FTP sunucu portu 2121&#39; e ta&#351;&#305;nacakt&#305;r."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str2[] = {
	"Internal server IP address {{1}} is invalid.",
	"Dahili sunucu IP adresi {{1}} ge&#231;ersizdir."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str20[] = {
	"Since TCP port 23  is used. The router TELNET server port will be moved to 2323.",
	"TCP portu 23 kullan&#305;ld&#305;&#287;&#305;ndan. Y&#246;nlendirici TELNET sunucu portu 2323&#39; e ta&#351;&#305;nacakt&#305;r."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str21[] = {
	"Since TCP port 69  is used. The router TFTP server port will be moved to 6969.",
	"TCP portu 69 kullan&#305;ld&#305;&#287;&#305;ndan. Y&#246;nlendirici TFTP sunucu portu 6969&#39; a ta&#351;&#305;nacakt&#305;r."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str22[] = {
	"Since TCP port 80  is used. The router WEB server port will be moved to 8080",
	"TCP portu 80 kullan&#305;ld&#305;&#287;&#305;ndan. Y&#246;nlendirici WEB sunucu portu 8080&#39; e ta&#351;&#305;nacakt&#305;r."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str23[] = {
	"Since TCP port 443  is used. The router HTTPS server port will be moved to 4433.",
	"TCP portu 443 kullan&#305;ld&#305;&#287;&#305;ndan. Y&#246;nlendirici HTTPS sunucu portu 4433&#39; e ta&#351;&#305;nacakt&#305;r."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str24[] = {
	"Since TCP port 22  is used. The router SSH server port will be moved to 2222.",
	"TCP portu 22 kullan&#305;ld&#305;&#287;&#305;ndan. Y&#246;nlendirici SSH sunucu portu 2222&#39; e ta&#351;&#305;nacakt&#305;r."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str25[] = {
	"Internal server IP address {{1}} is invalid.",
	"Dahili sunucu IP adresi {{1}} ge&#231;ersiz."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str26[] = {
	"External port start {{1}} is invalid.",
	"Harici port ba&#351;lang&#305;c&#305; &#8203;&#8203;{{1}} ge&#231;ersiz."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str27[] = {
	"External port end {{1}} is invalid.",
	"Harici port sonu {{1}} ge&#231;ersiz."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str28[] = {
	"Internal port start {{1}} is invalid.",
	"Dahili port ba&#351;lang&#305;c&#305; &#8203;&#8203;{{1}} ge&#231;ersiz."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str29[] = {
	"Internal port end {{1}} is invalid.",
	"Dahili port sonu {{1}} ge&#231;ersiz."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str3[] = {
	"External port start {{1}} is invalid.",
	"Harici port ba&#351;lang&#305;c&#305; {{1}} ge&#231;ersiz."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str30[] = {
	"External port range [{{1}}-{{2}}] is invalid.",
	"Harici port aral&#305;&#287;&#305; {{1}} ge&#231;ersiz."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str31[] = {
	"Internal port range [{{1}}-{{2}}] is invalid.",
	"Dahili port aral&#305;&#287;&#305; {{1}} ge&#231;ersiz."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str32[] = {
	"The defined port or port range is in use by another port forwarding, applications or UPNP rule. You must remove the rule before the new rule can be applied.",
	"Tan&#305;ml&#305; port veya port aral&#305;&#287;&#305; ba&#351;ka bir port y&#246;nlendirme, uygulama veya UPNP kural&#305; taraf&#305;ndan kullan&#305;l&#305;yor. Yeni kural&#305;n uygulanmas&#305; i&#231;in &#246;nce kural&#305; kald&#305;rman&#305;z gerekir."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str33[] = {
	"The defined rule is in use by another port forwarding, applications or UPNP rule. You must remove the rule before the new rule can be applied.",
	"Tan&#305;ml&#305; kural ba&#351;ka bir port y&#246;nlendirme, uygulama veya UPNP kural&#305; taraf&#305;ndan kullan&#305;l&#305;yor. Yeni kural&#305;n uygulanmas&#305; i&#231;in &#246;nce kural&#305; kald&#305;rman&#305;z gerekir."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str34[] = {
	"Since TCP port 50805 is reserved for TR-069 Client.<br>Please change the port or port range.",
	"TCP portu 50805, TR-069 &#304;stemcisi i&#231;in ayr&#305;lm&#305;&#351; oldu&#287;undan, <br>L&#252;tfen port veya port aral&#305;&#287;&#305;n&#305; de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str35[] = {
	"Since TCP port 21  are used. The router FTP server port will be moved to 2121.",
	"TCP portu 21 kullan&#305;ld&#305;&#287;&#305;ndan. Y&#246;nlendirici FTP sunucu portu 2121&#39; e ta&#351;&#305;nacakt&#305;r."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str36[] = {
	"Since TCP port 23  are used. The router TELNET server port will be moved to 2323.",
	"TCP portu 23 kullan&#305;ld&#305;&#287;&#305;ndan. Y&#246;nlendirici TELNET sunucu portu 2323&#39; e ta&#351;&#305;nacakt&#305;r."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str37[] = {
	"Since TCP port 69  are used. The router TFTP server port will be moved to 6969.",
	"TCP portu 69 kullan&#305;ld&#305;&#287;&#305;ndan. Y&#246;nlendirici TFTP sunucu portu 6969&#39; a ta&#351;&#305;nacakt&#305;r."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str38[] = {
	"Since TCP port 80  are used. The router WEB server port will be moved to 8080",
	"TCP portu 80 kullan&#305;ld&#305;&#287;&#305;ndan. Y&#246;nlendirici WEB sunucu portu 8080&#39; e ta&#351;&#305;nacakt&#305;r."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str39[] = {
	"Since TCP port 443  are used. The router HTTPS server port will be moved to 4433.",
	"TCP portu 443 kullan&#305;ld&#305;&#287;&#305;ndan. Y&#246;nlendirici HTTPS sunucu portu 4433&#39; e ta&#351;&#305;nacakt&#305;r."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str4[] = {
	"External port end {{1}} is invalid.",
	"Harici port biti&#351;i {{1}} ge&#231;ersiz."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str40[] = {
	"Since TCP port 22  are used. The router SSH server port will be moved to 2222.",
	"TCP portu 22 kullan&#305;ld&#305;&#287;&#305;ndan. Y&#246;nlendirici SSH sunucu portu 2222&#39; e ta&#351;&#305;nacakt&#305;r."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str41[] = {
	"Since TCP port 21  is used. The router FTP server port will be moved to 2121.",
	"TCP portu 21 kullan&#305;ld&#305;&#287;&#305;ndan. Y&#246;nlendirici FTP sunucu portu 2121&#39; e ta&#351;&#305;nacakt&#305;r."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str42[] = {
	"Since TCP port 23  is used. The router TELNET server port will be moved to 2323.",
	"TCP portu 23 kullan&#305;ld&#305;&#287;&#305;ndan. Y&#246;nlendirici TELNET sunucu portu 2323&#39; e ta&#351;&#305;nacakt&#305;r."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str43[] = {
	"Since TCP port 69  is used. The router TFTP server port will be moved to 6969.",
	"TCP portu 69 kullan&#305;ld&#305;&#287;&#305;ndan. Y&#246;nlendirici TFTP sunucu portu 6969&#39; a ta&#351;&#305;nacakt&#305;r."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str44[] = {
	"Since TCP port 80  is used. The router WEB server port will be moved to 8080",
	"TCP portu 80 kullan&#305;ld&#305;&#287;&#305;ndan. Y&#246;nlendirici WEB sunucu portu 8080&#39; e ta&#351;&#305;nacakt&#305;r."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str45[] = {
	"Since TCP port 443  is used. The router HTTPS server port will be moved to 4433.",
	"TCP portu 443 kullan&#305;ld&#305;&#287;&#305;ndan. Y&#246;nlendirici HTTPS sunucu portu 4433&#39; e ta&#351;&#305;nacakt&#305;r."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str46[] = {
	"Since TCP port 22  is used. The router SSH server port will be moved to 2222.",
	"TCP portu 22 kullan&#305;ld&#305;&#287;&#305;ndan. Y&#246;nlendirici SSH sunucu portu 2222&#39; e ta&#351;&#305;nacakt&#305;r."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str47[] = {
	"The defined rule is in use by another port forwarding, applications or UPNP rule. You must remove the rule before the new rule can be applied.",
	"Tan&#305;ml&#305; kural ba&#351;ka bir port y&#246;nlendirme, uygulama veya UPNP kural&#305; taraf&#305;ndan kullan&#305;l&#305;yor. Yeni kural&#305;n uygulanmas&#305; i&#231;in &#246;nce kural&#305; kald&#305;rman&#305;z gerekir."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str48[] = {
	"Since TCP port 7547 is reserved for TR-069 Client.<br>Please change the port or port range.",
	"TCP portu 7547, TR-069 &#304;stemcisi i&#231;in ayr&#305;lm&#305;&#351; oldu&#287;undan, <br>L&#252;tfen port veya port aral&#305;&#287;&#305;n&#305; de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str49[] = {
	"Since TCP port ",
	"TCP portu .... kullan&#305;ld&#305;&#287;&#305;ndan "
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str50[] = {
	"The router FTP server port will be moved to 2121.<br>",
	"Y&#246;nlendirici FTP sunucu portu 2121&#39; e ta&#351;&#305;nacakt&#305;r.<br>"
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str51[] = {
	"The router TELNET server port will be moved to 2323.<br>",
	"Y&#246;nlendirici TELNET sunucu portu 2323&#39; e ta&#351;&#305;nacakt&#305;r.<br>"
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str52[] = {
	"The router SSH server port will be moved to 2222.<br>",
	"Y&#246;nlendirici SSH sunucu portu 2222&#39; e ta&#351;&#305;nacakt&#305;r.<br>"
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str53[] = {
	"The router TFTP server port will be moved to 6969.<br>",
	"Y&#246;nlendirici TFTP sunucu portu 6969&#39; a ta&#351;&#305;nacakt&#305;r.<br>"
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str54[] = {
	"The router WEB server port will be moved to 8080.<br>",
	"Y&#246;nlendirici WEB sunucu portu 8080&#39; e ta&#351;&#305;nacakt&#305;r.<br>"
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str55[] = {
	"The router HTTPS server port will be moved to 4433.",
	"Y&#246;nlendirici HTTPS sunucu portu 4433&#39; e ta&#351;&#305;nacakt&#305;r."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str56[] = {
	" are used.<br>",
	" kullan&#305;ld&#305;klar&#305;ndan. <br>"
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str57[] = {
	" is used.<br>",
	" kullan&#305;ld&#305;&#287;&#305;ndan. <br>"
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str5[] = {
	"Internal port start {{1}} is invalid.",
	"Dahili port ba&#351;lang&#305;c&#305; {{1}} ge&#231;ersiz."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str6[] = {
	"Internal port end {{1}} is invalid.",
	"Dahili port sonu {{1}} ge&#231;ersiz."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str7[] = {
	"External port range [{{1}}-{{2}}] is invalid.",
	"Harici port aral&#305;&#287;&#305; {{1}} ge&#231;ersiz."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str8[] = {
	"Internal port range [{{1}}-{{2}}] is invalid.",
	"Dahili port aral&#305;&#287;&#305; {{1}} ge&#231;ersiz."
	};

char* MLG_NAT_PortForwarding_AlertMsg_Str9[] = {
	"The defined port or port range is in use by another port forwarding or applications rule. You must remove the rule before the new rule can be applied.",
	"Tan&#305;ml&#305; port veya port aral&#305;&#287;&#305;, ba&#351;ka bir port y&#246;nlendirme veya uygulama kural&#305; taraf&#305;ndan kullan&#305;l&#305;yor. Yeni kural&#305;n uygulanmas&#305; i&#231;in &#246;nce kural&#305; kald&#305;rman&#305;z gerekir."
	};

char* MLG_NAT_PortForwarding_Str1[] = {
	"Port Forwarding is commonly used when you want to do some Internet activities, such as online gaming, P2P file sharing, or even hosting servers on your network. It creates a bridge in order to let a party from the Internet contact a specific LAN client on your network correctly.",
	"Port Y&#246;nlendirme, &#231;evrimi&#231;i oyun, P2P dosya payla&#351;&#305;m&#305; gibi baz&#305; internet aktivitelerini yapmak veya hatta a&#287;&#305;n&#305;zda sunucu bar&#305;nd&#305;rmak istedi&#287;inizde yayg&#305;n olarak kullan&#305;l&#305;r. Bu, internetten bir taraf&#305;n a&#287;&#305;n&#305;zdaki belirli bir Yerel A&#287; istemcisi ile do&#287;ru bir &#351;ekilde ileti&#351;im kurmas&#305;na izin vermek i&#231;in bir k&#246;pr&#252; olu&#351;turur."
	};

char* MLG_NAT_PortForwarding_Str10[] = {
	"Note",
	"Not"
	};

char* MLG_NAT_PortForwarding_Str11[] = {
	"The TCP port 7547 is reserved for TR-069 connection request port .",
	"TCP portu 7547, TR-069 ba&#287;lant&#305; istek portu i&#231;in ayr&#305;lm&#305;&#351;t&#305;r."
	};

char* MLG_NAT_PortForwarding_Str12[] = {
	"Add new rule",
	"Yeni kural ekle"
	};

char* MLG_NAT_PortForwarding_Str13[] = {
	"Port Forwarding Configuration",
	"Port Y&#246;nlendirme Yap&#305;land&#305;rmas&#305;"
	};

char* MLG_NAT_PortForwarding_Str14[] = {
	"Port Forwarding Edit",
	"Port Y&#246;nlendirme D&#252;zenlemesi"
	};

char* MLG_NAT_PortForwarding_Str15[] = {
	"Active",
	"Aktif"
	};

char* MLG_NAT_PortForwarding_Str16[] = {
	"Protocol",
	"Protokol  "
	};

char* MLG_NAT_PortForwarding_Str17[] = {
	"This will delete the item. Please confirm this step.",
	"Bu, &#246;&#287;eyi silecektir. L&#252;tfen bu ad&#305;m&#305; onaylay&#305;n&#305;z."
	};

char* MLG_NAT_PortForwarding_Str18[] = {
	"Port Forwarding Delete",
	"Port Y&#246;nlendirme Silme"
	};

char* MLG_NAT_PortForwarding_Str19[] = {
	"The TCP port 50805 is reserved for TR-069 connection request port",
	"TCP portu 50805, TR-069 ba&#287;lant&#305; istek portu i&#231;in ayr&#305;lm&#305;&#351;"
	};

char* MLG_NAT_PortForwarding_Str20[] = {
	"remove",
	"kald&#305;r"
	};

char* MLG_NAT_PortForwarding_Str21[] = {
	"WAN IP",
	"WAN IP"
	};

char* MLG_NAT_PortForwarding_Str22[] = {
	"TCP/UDP",
	"TCP/UDP"
	};

char* MLG_NAT_PortForwarding_Str23[] = {
	"Translation Start Port",
	"&#199;eviri Ba&#351;lang&#305;&#231; Portu"
	};

char* MLG_NAT_PortForwarding_Str24[] = {
	"Translation End Port",
	"&#199;eviri Biti&#351; Portu"
	};

char* MLG_NAT_PortForwarding_Str25[] = {
	"If Start Port and End Port configured to the same port, the input text of Translation Start Port can be configurable, and when user configure this value to different port number, its means cofigure for Port Translation.(one to one mapping)",
	"Ba&#351;lang&#305;&#231; Portu ve Biti&#351; Portu ayn&#305; port i&#231;in yap&#305;land&#305;r&#305;lm&#305;&#351;sa, &#199;eviri Ba&#351;lang&#305;&#231; &#8203;&#8203;Portu giri&#351; metni yap&#305;land&#305;r&#305;labilir olabilir ve kullan&#305;c&#305; bu de&#287;eri farkl&#305; bir port numaras&#305; i&#231;in yap&#305;land&#305;rd&#305;&#287;&#305;nda, bu, Port &#199;evirisi i&#231;in yap&#305;land&#305;rma anlam&#305;na gelir (bire bir e&#351;leme)."
	};

char* MLG_NAT_PortForwarding_Str26[] = {
	"WAN IP is optional. If user wants to present Multi-to-Multi NAT, user can assign the desired device WAN IP.",
	" WAN IP iste&#287;e ba&#287;l&#305;d&#305;r. Kullan&#305;c&#305; &#199;ok Noktadan &#199;ok Noktaya NAT sunmak isterse, kullan&#305;c&#305; istenen cihaz WAN IP adresini atayabilir."
	};

char* MLG_NAT_PortForwarding_Str27[] = {
	"Since TCP port ",
	"TCP portu .... kullan&#305;ld&#305;&#287;&#305;ndan "
	};

char* MLG_NAT_PortForwarding_Str28[] = {
	"Wake up this target by Wake On Lan(WOL)",
	"Wake on Lan(WOL) taraf&#305;ndan bu hedef uyand&#305;r&#305;lsm"
	};

char* MLG_NAT_PortForwarding_Str29[] = {
	"MAC address of WOL device",
	"WOL cihaz&#305;n MAC adresi"
	};

char* MLG_NAT_PortForwarding_Str2[] = {
	"Status",
	"Durum"
	};

char* MLG_NAT_PortForwarding_Str3[] = {
	"Service Name",
	"Hizmet Ad&#305;"
	};

char* MLG_NAT_PortForwarding_Str4[] = {
	"External Start Port",
	"Harici Ba&#351;lang&#305;&#231; Portu"
	};

char* MLG_NAT_PortForwarding_Str5[] = {
	"External End Port",
	"Harici Biti&#351; Portu"
	};

char* MLG_NAT_PortForwarding_Str6[] = {
	"Internal Start Port",
	"Dahili Ba&#351;lang&#305;&#231; Portu"
	};

char* MLG_NAT_PortForwarding_Str7[] = {
	"Internal End Port",
	"Dahili Biti&#351; Portu"
	};

char* MLG_NAT_PortForwarding_Str8[] = {
	"Server IP Address",
	"Sunucu IP Adresi"
	};

char* MLG_NAT_PortForwarding_Str9[] = {
	"Modify",
	"De&#287;i&#351;tir "
	};

char* MLG_NAT_PortTriggering_Explain[] = {
	"Port Triggering is a way to automate port forwarding with a little better security. It dynamically forwards connection or data to whatever LAN client made a certain outgoing connection. Example: You define port 25 as Trigger Port and port 113 as Open Port. If any of the LAN devices on your network creates an outgoing connection via port 25, all incoming connections via port 113 will temporarily go to that client.",
	"Port Tetikleme, daha iyi g&#252;venlik d&#252;zeyi ile, port y&#246;nlendirmeyi otomatik olarak tetiklemek i&#231;in kullan&#305;lan yoldur. Ba&#287;lant&#305; veya veriyi, d&#305;&#351;ar&#305; y&#246;nl&#252; ba&#287;lant&#305; yapan her Yerel A&#287; istemcisine dinamik olarak iletir. <br> &#214;rnek: Port 25'i Tetikleme Portu olarak ve port 113'&#252; A&#231;&#305;k Port olarak tan&#305;mlad&#305;n&#305;z. A&#287;&#305;n&#305;zdaki Yerel A&#287; cihazlar&#305;ndan herhangi biri, port 25 &#252;zerinden d&#305;&#351;ar&#305; y&#246;nl&#252; bir ba&#287;lant&#305; olu&#351;turursa, port 113 &#252;zerinden t&#252;m gelen ba&#287;lant&#305;lar ge&#231;ici olarak bu istemciye gider."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str1[] = {
	"Triggering port start {{1}} is invalid.",
	"Tetikleme portu ba&#351;lang&#305;c&#305; &#8203;&#8203;{{1}} ge&#231;ersiz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str10[] = {
	"TCP port 1720 is used. Please change to another one.",
	"TCP portu 1720 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str11[] = {
	"TCP port 1723 is used. Please change to another one.",
	"TCP portu 1723 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str12[] = {
	"TCP port 6667 is used. Please change to another one.",
	"TCP portu 6667 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str13[] = {
	"UDP port 69 is used. Please change to another one.",
	"UDP portu 69 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str14[] = {
	"UDP port 161 is used. Please change to another one.",
	"UDP portu 161 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str15[] = {
	"UDP port 162 is used. Please change to another one.",
	"UDP portu 162 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str16[] = {
	"UDP port 517 is used. Please change to another one.",
	"UDP portu 517 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str17[] = {
	"UDP port 518 is used. Please change to another one.",
	"UDP portu 518 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str18[] = {
	"UDP port 5060 is used. Please change to another one.",
	"UDP portu 5060 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str19[] = {
	"Invaid Service Name!!",
	"Ge&#231;ersiz Hizmet Ad&#305;!"
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str2[] = {
	"Triggering port end {{1}} is invalid.",
	"Tetikleme portu sonu &#8203;&#8203;{{1}} ge&#231;ersiz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str20[] = {
	"Service name has been used!.",
	"Hizmet ad&#305; kullan&#305;mda!."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str21[] = {
	"Triggering port start {{1}} is invalid.",
	"Tetikleme portu ba&#351;lang&#305;c&#305; &#8203;&#8203;{{1}} ge&#231;ersiz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str22[] = {
	"Triggering port end {{1}} is invalid.",
	"Tetikleme portu sonu &#8203;&#8203;{{1}} ge&#231;ersiz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str23[] = {
	"Triggering port range [{{1}}-{{2}}] is invalid.",
	"Tetikleme portu aral&#305;&#287;&#305; &#8203;&#8203;[{{1}}-{{2}}] ge&#231;ersiz. "
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str24[] = {
	"Open port start {{1}} is invalid.",
	"A&#231;&#305;k port ba&#351;lang&#305;c&#305; {{1}} ge&#231;ersiz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str25[] = {
	"Open port end {{1}} is invalid.",
	"A&#231;&#305;k port sonu {{1}} ge&#231;ersiz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str26[] = {
	"Open port range [{{1}}-{{2}}] is invalid.",
	"A&#231;&#305;k port aral&#305;&#287;&#305; {{1}} ge&#231;ersiz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str27[] = {
	"TCP port 50805 is used. Please change to another one.",
	"TCP portu 50805 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str28[] = {
	"TCP port 21 is used. Please change to another one.",
	"TCP portu 21 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str29[] = {
	"TCP port 80 is used. Please change to another one.",
	"TCP portu 80 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str3[] = {
	"Triggering port range [{{1}}-{{2}}] is invalid.",
	"Tetikleme portu aral&#305;&#287;&#305; &#8203;&#8203;[{{1}}-{{2}}] ge&#231;ersiz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str30[] = {
	"TCP port 1720 is used. Please change to another one.",
	"TCP portu 1720 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str31[] = {
	"TCP port 1723 is used. Please change to another one.",
	"TCP portu 1723 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str32[] = {
	"TCP port 6667 is used. Please change to another one.",
	"TCP portu 6667 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str33[] = {
	"UDP port 69 is used. Please change to another one.",
	"TCP portu 69 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str34[] = {
	"UDP port 161 is used. Please change to another one.",
	"UDP portu 161 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str35[] = {
	"UDP port 162 is used. Please change to another one.",
	"UDP portu 162 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str36[] = {
	"UDP port 517 is used. Please change to another one.",
	"UDP portu 517 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str37[] = {
	"UDP port 518 is used. Please change to another one.",
	"UDP portu 518 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str38[] = {
	"UDP port 5060 is used. Please change to another one.",
	"UDP portu 5060 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str39[] = {
	"Invaid Service Name!!",
	"Ge&#231;ersiz Hizmet Ad&#305;!"
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str4[] = {
	"Open port start {{1}} is invalid.",
	"A&#231;&#305;k port ba&#351;lang&#305;c&#305; {{1}} ge&#231;ersiz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str40[] = {
	"Error! The sum of trigger ports in all rules is greater than 1000 or open port range is greater than 1000.",
	"Hata! T&#252;m kurallardaki tetikleyici portlar&#305;n toplam&#305; 1000&#39; den veya a&#231;&#305;k port aral&#305;&#287;&#305; 1000&#39;den daha b&#252;y&#252;k."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str40_1[] = {
	"Error! The sum of trigger ports in all rules is greater than",
	"Hata! T&#252;m kurallardaki tetikleyici portlar&#305;n toplam&#305; ....&#39; den daha b&#252;y&#252;k"
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str40_2[] = {
	"or open port range is greater than ",
	"veya a&#231;&#305;k port aral&#305;&#287;&#305; ....&#39; den daha b&#252;y&#252;k "
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str41[] = {
	"Error!",
	"Hata!"
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str43[] = {
	"TCP port 22 is used. Please change to another one.",
	"TCP portu 22 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str44[] = {
	"TCP port 23 is used. Please change to another one.",
	"TCP portu 23 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str45[] = {
	"TCP port 443 is used. Please change to another one.",
	"TCP portu 443 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str42[] = {
	"TCP port 7547 is used. Please change to another one.",
	"TCP portu 7547 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str5[] = {
	"Open port end {{1}} is invalid.",
	"A&#231;&#305;k port sonu {{1}} ge&#231;ersiz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str6[] = {
	"Open port range [{{1}}-{{2}}] is invalid.",
	"A&#231;&#305;k port aral&#305;&#287;&#305; {{1}} ge&#231;ersiz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str7[] = {
	"TCP port 50805 is used. Please change to another one.",
	"TCP portu 50805 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str8[] = {
	"TCP port 21 is used. Please change to another one.",
	"TCP portu 21 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_AlertMsg_Str9[] = {
	"TCP port 80 is used. Please change to another one.",
	"TCP portu 80 kullan&#305;l&#305;yor. L&#252;tfen bir di&#287;eri ile de&#287;i&#351;tiriniz."
	};

char* MLG_NAT_PortTriggering_Str1[] = {
	"Port Triggering is a way to automate port forwarding, and can allow computers on local network to provide services that would normally require a fixed address on the local network.",
	"Port Tetikleme, port y&#246;nlendirmeyi otomatikle&#351;tirmek i&#231;in kullan&#305;lan bir yoldur ve yerel a&#287; &#252;zerindeki bilgisayarlar&#305;n normalde yerel a&#287; &#252;zerinde sabit bir adres gerektirecek hizmeti vermesine olanak sa&#287;layabilir."
	};

char* MLG_NAT_PortTriggering_Str10[] = {
	"Open Proto.",
	"A&#231;&#305;k Protokol"
	};

char* MLG_NAT_PortTriggering_Str11[] = {
	"Modify",
	"De&#287;i&#351;tir "
	};

char* MLG_NAT_PortTriggering_Str12[] = {
	"Notes",
	"Notlar"
	};

char* MLG_NAT_PortTriggering_Str13[] = {
	"1. When the protocol is TCP/UDP, the ports are counted twice.",
	"1. Protokol TCP / UDP oldu&#287;unda, portlar iki kez say&#305;l&#305;r."
	};

char* MLG_NAT_PortTriggering_Str14[] = {
	"2. TCP port 7547 is reserved for TR-069 connection request port.",
	"2. TCP portu 7547, TR-069 ba&#287;lant&#305; istek portu i&#231;in ayr&#305;lm&#305;&#351;."
	};

char* MLG_NAT_PortTriggering_Str15[] = {
	"3. TCP ports 21, 80, 1720, 1723, 6667 and UDP ports 69, 161, 162, 517, 518, 5060 are registered for special services. Triggering these ports will not open the opening ports.",
	"3. TCP portlar&#305; 21, 80, 1720, 1723, 6667 ve UDP portlar&#305; 69, 161, 162, 517, 518, 5060 &#246;zel hizmetler i&#231;in kay&#305;tl&#305;d&#305;r. Bu portlar&#305; tetiklemek a&#231;&#305;l&#305;&#351; portlar&#305;n&#305; a&#231;maz."
	};

char* MLG_NAT_PortTriggering_Str16[] = {
	"Add new rule",
	"Yeni kural ekle"
	};

char* MLG_NAT_PortTriggering_Str17[] = {
	"Active",
	"Aktif"
	};

char* MLG_NAT_PortTriggering_Str18[] = {
	"Port Triggering Configuration",
	"Port Tetikleme Yap&#305;land&#305;rmas&#305;"
	};

char* MLG_NAT_PortTriggering_Str19[] = {
	"Edit",
	"D&#252;zenle"
	};

char* MLG_NAT_PortTriggering_Str2[] = {
	"Status",
	"Durum"
	};

char* MLG_NAT_PortTriggering_Str20[] = {
	"Delete",
	"Sil "
	};

char* MLG_NAT_PortTriggering_Str21[] = {
	"Port Triggering Edit",
	"Port Tetikleme D&#252;zenleme"
	};

char* MLG_NAT_PortTriggering_Str22[] = {
	"Port Triggering Delete",
	"Port Tetikleme Silme"
	};

char* MLG_NAT_PortTriggering_Str23[] = {
	"Open Protocol",
	"A&#231;&#305;k Protokol"
	};

char* MLG_NAT_PortTriggering_Str24[] = {
	"Trigger Protocol",
	"Tetikleyici Protokol"
	};

char* MLG_NAT_PortTriggering_Str25[] = {
	"The sum of trigger ports in all rules must be less than 1000 and every open port range must be  less than 1000.When the protocol is TCP/UDP, the ports are counted twice.",
	"T&#252;m kurallardaki tetikleyici portlar&#305;n&#305;n toplam&#305; 1000&#39; den ve her a&#231;&#305;k port aral&#305;&#287;&#305; 1000&#39;den daha az olmal&#305;d&#305;r. Protokol TCP / UDP oldu&#287;unda, portlar iki kez say&#305;l&#305;r."
	};

char* MLG_NAT_PortTriggering_Str3[] = {
	"Service Name",
	"Hizmet Ad&#305;"
	};

char* MLG_NAT_PortTriggering_Str4[] = {
	"WAN Interface",
	"WAN Aray&#252;z&#252;"
	};

char* MLG_NAT_PortTriggering_Str5[] = {
	"Trigger Start Port",
	"Ba&#351;lang&#305;&#231; Portunu Tetikleme"
	};

char* MLG_NAT_PortTriggering_Str6[] = {
	"Trigger End Port",
	"Biti&#351; Portunu Tetikleme"
	};

char* MLG_NAT_PortTriggering_Str7[] = {
	"Trigger Proto.",
	"Tetikleyici Protokol"
	};

char* MLG_NAT_PortTriggering_Str8[] = {
	"Open Start Port",
	"Ba&#351;lang&#305;&#231; Portunu A&#231;ma"
	};

char* MLG_NAT_PortTriggering_Str9[] = {
	"Open End Port",
	"Biti&#351; Portunu A&#231;ma"
	};

char* MLG_NAT_Sessions_AlertMsg_Str1[] = {
	"Max session number should be between 128 and 15000.",
	"Maksimum oturum say&#305;s&#305; 128 ve 15000 aras&#305;nda olmal&#305;d&#305;r."
	};

char* MLG_NAT_Sessions_AlertMsg_Str2[] = {
	"Max session number should be between 128 and 15000.",
	"Maksimum oturum say&#305;s&#305; 128 ve 15000 aras&#305;nda olmal&#305;d&#305;r."
	};

char* MLG_NAT_Sessions_Str1[] = {
	"You can choose to limit the number of NAT sessions per host to control the bandwidth on your network.",
	"A&#287;&#305;n&#305;zdaki bant geni&#351;li&#287;ini kontrol etmek i&#231;in ana bilgisayar ba&#351;&#305;na d&#252;&#351;en NAT oturum say&#305;s&#305;n&#305; s&#305;n&#305;rlamay&#305; se&#231;ebilirsiniz."
	};

char* MLG_NAT_Sessions_Str2[] = {
	"Maximum NAT session per Host :",
	"Ana bilgisayar ba&#351;&#305;na d&#252;&#351;en maksimum NAT oturum say&#305;s&#305;:"
	};

char* MLG_NAT_Sessions_Str3[] = {
	"Note",
	"Not"
	};

char* MLG_NAT_Sessions_Str4[] = {
	"Enter session number and click \'Apply\' to activate this feature.",
	"Oturum say&#305;s&#305;n&#305; girin ve bu &#246;zelli&#287;i etkinle&#351;tirmek i&#231;in \'Uygula\' d&#252;&#287;mesine t&#305;klay&#305;n&#305;z."
	};

char* MLG_NAT_Sessions_Str5[] = {
	"Clear the session number field and click \'Apply\' to deactivate this feature.",
	"Bu &#246;zelli&#287;i devre d&#305;&#351;&#305; b&#305;rakmak i&#231;in oturum say&#305;s&#305; alan&#305;n&#305; temizleyin  ve \'Uygula\' d&#252;&#287;mesine t&#305;klay&#305;n&#305;z."
	};

char* MLG_NAT_Sessions_Str6[] = {
	"NAT Session",
	"NAT Oturumu"
	};

char* MLG_NAT_Address_Mapping_Explain[] = {
	"Address Mapping can map local address to global address.",
	"(null)"
	};

char* MLG_NAT_Address_Mapping_Str1[] = {
	"Address Mapping",
	"Adres E&#351;le&#351;tirme"
	};

char* MLG_NAT_Address_Mapping_Str2[] = {
	"Local Start IP",
	"Yerel Ba&#351;lang&#305;&#231; &#8203;&#8203;IP Adresi"
	};

char* MLG_NAT_Address_Mapping_Str3[] = {
	"Local End IP",
	"Yerel Biti&#351; IP Adresi"
	};

char* MLG_NAT_Address_Mapping_Str4[] = {
	"Global Start IP",
	"Global Ba&#351;lang&#305;&#231; &#8203;&#8203;IP Adresi"
	};

char* MLG_NAT_Address_Mapping_Str5[] = {
	"Global End IP",
	"Global Biti&#351; IP Adresi"
	};

char* MLG_NAT_Address_Mapping_Str6[] = {
	"One-to-One",
	"Bire Bir"
	};

char* MLG_NAT_Address_Mapping_Str7[] = {
	"Many-to-One",
	"&#199;oktan Bire"
	};

char* MLG_NAT_Address_Mapping_Str8[] = {
	"Many-to-Many",
	"&#199;oktan &#199;o&#287;a"
	};


char* MLG_NAT_Address_Mapping_AlertMsg_Str1[] = {
	"Please enter valid Local Start IP.",
	"L&#252;tfen ge&#231;erli Yerel Ba&#351;lang&#305;&#231; &#8203;&#8203;IP adresi girin."
	};

char* MLG_NAT_Address_Mapping_AlertMsg_Str2[] = {
	"Please enter valid Global End IP.",
	"L&#252;tfen ge&#231;erli Global Biti&#351; IP adresi girin."
	};

char* MLG_NAT_Address_Mapping_AlertMsg_Str3[] = {
	"Local Start IP and Local End IP must be in the same subnet.",
	"Yerel Ba&#351;lang&#305;&#231; &#8203;&#8203;IP ve Yerel Biti&#351; IP adresinin alt a&#287; maskesi ayn&#305; olmal&#305;d&#305;r."
	};

char* MLG_NAT_Address_Mapping_AlertMsg_Str4[] = {
	"Global Start IP and Global End IP must be in the same subnet.",
	"Yerel Ba&#351;lang&#305;&#231; &#8203;&#8203;IP ve Yerel Biti&#351; IP adresinin alt a&#287; maskesi ayn&#305; olmal&#305;d&#305;r."
	};

char* MLG_NAT_Address_Mapping_AlertMsg_Str5[] = {
	"Please enter valid Local End IP.",
	"L&#252;tfen ge&#231;erli Yerel Biti&#351; IP adresi girin."
	};

char* MLG_NAT_Applications_Str83_2[] = {
	"MechWarrior 4 - Black Knight / Mercenaries / Vengeance",
	"MechWarrior 4 - Black Knight / Mercenaries / Vengeance"
	};

char* MLG_NAT_Common_Set[] = {
	"Set",
	"Kur"
	};

char* MLG_NAT_Address_Mapping_Str11[] = {
	"Address Mapping Configuration",
	"Adres E&#351;le&#351;tirme Konfig&#252;rasyonu"
	};

MAPPING_ITEM NATMappingItem[367];
