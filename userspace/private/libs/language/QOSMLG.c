#include<stdio.h>	
#include<string.h>	
#include<stdlib.h>	
#include<time.h>	
#include "languages.h"	



char* MLG_QOS_QOSClassSetup_AlertMsg_Str1[] = {
	"The maximum entries of classifier is 32.",
	"S&#305;n&#305;fland&#305;r&#305;c&#305;n&#305;n maksimum girdi say&#305;s&#305; 32&#39; dir."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str10[] = {
	"invalid destination mac.",
	"hedef MAC ge&#231;ersiz."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str11[] = {
	"invalid destination ip.",
	"hedef IP ge&#231;ersiz."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str12[] = {
	"invalid destination port range.",
	"ge&#231;ersiz hedef ba&#287;lant&#305; noktas&#305; aral&#305;&#287;&#305;."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str13[] = {
	"invalid destination port range with wrong order.",
	"yanl&#305;&#351; s&#305;ral&#305;, ge&#231;ersiz hedef ba&#287;lant&#305; noktas&#305; aral&#305;&#287;&#305;."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str14[] = {
	"unconfigured VLAN ID in criteria configuration.",
	"Kriter yap&#305;land&#305;rmada Yap&#305;land&#305;r&#305;lamam&#305;&#351; VLAN ID."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str15[] = {
	"VLAN ID {{1}} is out of range [0-4094].",
	"VLAN ID {{1}} aral&#305;k d&#305;&#351;&#305;nda [0-4094]."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str16[] = {
	"Protocol number {{1}} is out of range [1-252].",
	"Protokol numaras&#305; {{1}} aral&#305;k d&#305;&#351;&#305;nda [1-252]."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str17[] = {
	"unconfigured IP Packet Length in criteria configuration.",
	"Kriter yap&#305;land&#305;rma Yap&#305;land&#305;r&#305;lmam&#305;&#351; IP paket uzunlu&#287;u."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str18[] = {
	"The start length of range of packet length {{1}} is out of range [46-1500].",
	"Paket uzunluk aral&#305;&#287;&#305; ba&#351;lang&#305;&#231; uzunlu&#287;u {{1}} aral&#305;k d&#305;&#351;&#305;nda [46-1500]."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str19[] = {
	"The end length of range of packet length {{1}} is out of range [46-1500].",
	"Paket uzunluk aral&#305;&#287;&#305; biti&#351; uzunlu&#287;u {{1}} aral&#305;k d&#305;&#351;&#305;nda [46-1500]."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str2[] = {
	"Please enter QoS class name.",
	"L&#252;tfen QoS s&#305;n&#305;f&#305; ad&#305;n&#305; girin."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str20[] = {
	"The start length of range of packet length is greater than the end length of range of packet length",
	"Paket ba&#351;lang&#305;&#231; &#8203;&#8203;uzunlu&#287;u aral&#305;&#287;&#305;, paket biti&#351; uzunlu&#287;unu aral&#305;&#287;&#305;ndan daha b&#252;y&#252;k "
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str21[] = {
	"unconfigured DSCP in criteria configuration.",
	"Kriter yap&#305;land&#305;rmada Yap&#305;land&#305;r&#305;lmam&#305;&#351; DSCP."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str22[] = {
	"DSCP {{1}} is out of range [0-63].",
	"DSCP {{1}} aral&#305;k d&#305;&#351;&#305;nda [0-63]."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str23[] = {
	"unconfigured DHCP Option Value in criteria configuration.",
	"Kriter yap&#305;land&#305;rmada Yap&#305;land&#305;r&#305;lmam&#305;&#351; DHCP Se&#231;enek De&#287;eri."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str24[] = {
	"Source subnet mask {{1}} is invalid subnet mask.",
	"Kaynak Alt A&#287; Maskesi {{1}} ge&#231;ersiz bir alt a&#287; maskesi."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str25[] = {
	"Destination subnet mask {{1}} is invalid subnet mask.",
	"Alt A&#287; Maskesi {{1}} ge&#231;ersiz bir alt a&#287; maskesi."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str26[] = {
	"Source MAC address mask {{1}} is invalid.",
	"Kaynak MAC adresi {{1}} ge&#231;ersiz."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str27[] = {
	"Destination MAC address mask {{1}} is invalid.",
	"Hedef MAC adresi maskesi {{1}} ge&#231;ersiz."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str28[] = {
	"Unconfig DSCP mark value",
	"Yap&#305;land&#305;r&#305;lmam&#305;&#351; DSCP i&#351;areti de&#287;eri"
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str29[] = {
	"VLAN ID Tag cannot be removed when 802.1p is marked",
	"802.1p i&#351;aretlenmi&#351; oldu&#287;unda VLAN ID Etiketi Kald&#305;r&#305;lamaz"
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str3[] = {
	"Please enter valid QoS class name: No special characters.",
	"L&#252;tfen ge&#231;erli bir QoS s&#305;n&#305;f&#305; ad&#305; girin. &#214;zel karakter girilmemelidir."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str30[] = {
	"Unconfig VLAN ID",
	"Yap&#305;land&#305;r&#305;lmam&#305;&#351; VLAN ID"
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str31[] = {
	"Please assigned queue index on Step5. If none option on it, please add new queue.",
	"L&#252;tfen 5. Ad&#305;mda kuyruk endeksi atay&#305;n."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str32[] = {
	"You can not select Q_DROP only with criteria \'From interface\', \'To interface\' and \'Ether Type\'",
	"Q_DROP&#39; u  \'Ara y&#252;zden\' \'Ara y&#252;ze\' ve \'Ether T&#252;r&#252;ne\' kriterleri ile se&#231;emezsiniz"
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str33[] = {
	"You must configure some criteria in step 2.",
	"2. Ad&#305;mda baz&#305; kriterleri yap&#305;land&#305;rman&#305;z gerekir."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str34[] = {
	"Cannot set Destination MAC Address in routing mode.",
	"Y&#246;nlendirme modunda Hedef MAC Adresi ayarlanam&#305;yor."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str35[] = {
	"Cannot add class rule with the same criteria.",
	"Ayn&#305; kriterler ile s&#305;n&#305;f kural&#305; eklenemiyor."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str36[] = {
	"invalid packet length range.",
	"ge&#231;ersiz paket uzunlu&#287;u aral&#305;&#287;&#305;."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str4[] = {
	"Maximum QoS class name cannot exceed 15 characters.",
	"Maksimum QoS s&#305;n&#305;f ad&#305; 15 karakterden uzun olamaz."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str5[] = {
	"QoS queue name existed, please enter another queue name.",
	"QoS kuyruk ad&#305; var, l&#252;tfen ba&#351;ka bir kuyruk ad&#305; giriniz."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str6[] = {
	"invalid source MAC.",
	"kaynak mac ge&#231;ersiz."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str7[] = {
	"invalid source IP.",
	"kaynak IP ge&#231;ersiz."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str8[] = {
	"invalid source port range.",
	"kaynak port aral&#305;&#287;&#305; ge&#231;ersiz."
	};

char* MLG_QOS_QOSClassSetup_AlertMsg_Str9[] = {
	"invalid source port range with wrong order.",
	"yanl&#305;&#351; s&#305;ral&#305; ge&#231;ersiz kaynak port aral&#305;&#287;&#305;."
	};

char* MLG_QOS_QOSClassSetup_Str1[] = {
	"A classifier groups traffic into data flows according to specific criteria. Class Setup can add, edit, or delete QoS classifiers.",
	"S&#305;n&#305;fland&#305;r&#305;c&#305;, trafi&#287;i belirli kriterlere g&#246;re veri ak&#305;&#351;lar&#305;na gruplar. S&#305;n&#305;f Kurulumu, QoS s&#305;n&#305;fland&#305;r&#305;c&#305;lar&#305;n&#305; ekleyebilir, d&#252;zenleyebilir veya silebilir."
	};

char* MLG_QOS_QOSClassSetup_Str10[] = {
	"VLAN ID Tag",
	"VLAN ID Etiketi"
	};

char* MLG_QOS_QOSClassSetup_Str11[] = {
	"To Queue",
	"Kuyruk i&#231;in"
	};

char* MLG_QOS_QOSClassSetup_Str12[] = {
	"Unchange",
	"De&#287;i&#351;tirme"
	};

char* MLG_QOS_QOSClassSetup_Str13[] = {
	"QoS Classifier Configuration",
	"QoS S&#305;n&#305;fland&#305;r&#305;c&#305; Yap&#305;land&#305;rma"
	};

char* MLG_QOS_QOSClassSetup_Str14[] = {
	"QoS Classifier Edit",
	"QoS S&#305;n&#305;fland&#305;r&#305;c&#305; D&#252;zenleme"
	};

char* MLG_QOS_QOSClassSetup_Str15[] = {
	"Please fill up steps 1 through 4 to configure a QoS rule. ",
	"L&#252;tfen bir QoS kural&#305; yap&#305;land&#305;rmak i&#231;in 4. Ad&#305;m &#252;zerinden 1. Ad&#305;m&#305; doldurunuz."
	};

char* MLG_QOS_QOSClassSetup_Str16[] = {
	"Step1: Class configuration",
	"Ad&#305;m 1: S&#305;n&#305;f yap&#305;land&#305;rma "
	};

char* MLG_QOS_QOSClassSetup_Str17[] = {
	"Active",
	"Aktif"
	};

char* MLG_QOS_QOSClassSetup_Str19[] = {
	"Classification Order :",
	"S&#305;n&#305;fland&#305;rma S&#305;ras&#305;:"
	};

char* MLG_QOS_QOSClassSetup_Str2[] = {
	"Class Setup",
	"S&#305;n&#305;f Kurulumu"
	};

char* MLG_QOS_QOSClassSetup_Str20[] = {
	"Last",
	"Son"
	};

char* MLG_QOS_QOSClassSetup_Str21[] = {
	"Step2: Criteria configuration",
	"Ad&#305;m 2: Kriterleri yap&#305;land&#305;rma "
	};

char* MLG_QOS_QOSClassSetup_Str22[] = {
	"Use the fields below to specify the characteristics of a data flow that needs to be managed by this QoS rule",
	"Bu QoS kural&#305; taraf&#305;ndan y&#246;netilmesi gereken bir veri ak&#305;&#351;&#305;n&#305;n karakteristiklerini belirtmek i&#231;in a&#351;a&#287;&#305;daki alanlar&#305; kullan&#305;n&#305;z."
	};

char* MLG_QOS_QOSClassSetup_Str23[] = {
	"Basic",
	"Basit"
	};

char* MLG_QOS_QOSClassSetup_Str24[] = {
	"From Interface :",
	"Ara y&#252;zden:"
	};

char* MLG_QOS_QOSClassSetup_Str25[] = {
	"Local",
	"Yerel"
	};

char* MLG_QOS_QOSClassSetup_Str26[] = {
	"Ether Type :",
	"Eter T&#252;r&#252;:"
	};

char* MLG_QOS_QOSClassSetup_Str27[] = {
	"PPPoE_DISC",
	"PPPoE_DISC"
	};

char* MLG_QOS_QOSClassSetup_Str28[] = {
	"PPPoE_SEC",
	"PPPoE_SEC"
	};

char* MLG_QOS_QOSClassSetup_Str29[] = {
	"Source",
	"Kaynak"
	};

char* MLG_QOS_QOSClassSetup_Str3[] = {
	"Add new Classifier",
	"Yeni S&#305;n&#305;fland&#305;r&#305;c&#305; ekle"
	};

char* MLG_QOS_QOSClassSetup_Str30[] = {
	"Address",
	"Adres"
	};

char* MLG_QOS_QOSClassSetup_Str31[] = {
	"Subnet Netmask",
	"Alt a&#287; Net maskesi "
	};

char* MLG_QOS_QOSClassSetup_Str32[] = {
	"Exclude",
	"D&#305;&#351;la"
	};

char* MLG_QOS_QOSClassSetup_Str33[] = {
	"Port Range",
	"Port Aral&#305;&#287;&#305;"
	};

char* MLG_QOS_QOSClassSetup_Str34[] = {
	"MAC",
	"MAC"
	};

char* MLG_QOS_QOSClassSetup_Str35[] = {
	"MAC Mask",
	"MAC Maskesi"
	};

char* MLG_QOS_QOSClassSetup_Str36[] = {
	"Destination",
	"Hedef"
	};

char* MLG_QOS_QOSClassSetup_Str37[] = {
	"Others",
	"Di&#287;er"
	};

char* MLG_QOS_QOSClassSetup_Str38[] = {
	"Service ",
	"Hizmet "
	};

char* MLG_QOS_QOSClassSetup_Str39[] = {
	"IP Protocol",
	"IP Protokol&#252;"
	};

char* MLG_QOS_QOSClassSetup_Str4[] = {
	"Current Settings :",
	"Ge&#231;erli Ayarlar:"
	};

char* MLG_QOS_QOSClassSetup_Str40[] = {
	"User Defined",
	"Kullan&#305;c&#305; Tan&#305;ml&#305;"
	};

char* MLG_QOS_QOSClassSetup_Str41[] = {
	"Vendor Class ID (DHCP Option 60)",
	"vendor S&#305;n&#305;f ID (DHCP Se&#231;ene&#287;i 60)"
	};

char* MLG_QOS_QOSClassSetup_Str411[] = {
	"Client ID (DHCP Option 61)",
	"(null)"
	};

char* MLG_QOS_QOSClassSetup_Str42[] = {
	"User Class ID (DHCP Option 77)",
	"Kullan&#305;c&#305; S&#305;n&#305;f ID (DHCP Se&#231;ene&#287;i 77)"
	};

char* MLG_QOS_QOSClassSetup_Str421[] = {
	"VendorSpecificInfo (DHCP Option 125)",
	"(null)"
	};

char* MLG_QOS_QOSClassSetup_Str43[] = {
	"Packet Length",
	"Paket Uzunlu&#287;u"
	};

char* MLG_QOS_QOSClassSetup_Str44[] = {
	"TCP ACK",
	"TCP ACK"
	};

char* MLG_QOS_QOSClassSetup_Str45[] = {
	"Step3: Packet modification",
	"Ad&#305;m 3: Paket de&#287;i&#351;ikli&#287;i "
	};

char* MLG_QOS_QOSClassSetup_Str46[] = {
	"The content of the packet can be modified by applying the following settings:",
	"Paketin i&#231;eri&#287;i a&#351;a&#287;&#305;daki ayarlar&#305;n uygulanmas&#305;yla de&#287;i&#351;tirilebilir:"
	};

char* MLG_QOS_QOSClassSetup_Str47[] = {
	"Mark",
	"&#304;&#351;aretle "
	};

char* MLG_QOS_QOSClassSetup_Str48[] = {
	"Remark",
	"&#304;&#351;aretle"
	};

char* MLG_QOS_QOSClassSetup_Str49[] = {
	"Add",
	"Ekle "
	};

char* MLG_QOS_QOSClassSetup_Str5[] = {
	"Class",
	"S&#305;n&#305;f"
	};

char* MLG_QOS_QOSClassSetup_Str50[] = {
	"Remove",
	"Kald&#305;r"
	};

char* MLG_QOS_QOSClassSetup_Str51[] = {
	"Step4: Outgoing queue selection",
	"Ad&#305;m 4: Giden kuyruk se&#231;imi "
	};

char* MLG_QOS_QOSClassSetup_Str52[] = {
	"Outgoing queue decides the priority of the traffic and how traffic should be shaped in the WAN inteface. Choose \'None\' if you do not want to apply outgoing queue",
	"Giden kuyruk, trafik &#246;nceli&#287;ine ve trafi&#287;in WAN aray&#252;z&#252;nde nas&#305;l &#351;ekillenmesi gerekti&#287;i karar&#305;n&#305; verir. Giden kuyru&#287;u uygulamak istemiyorsan&#305;z \'Hi&#231;biri\' se&#231;ene&#287;ini se&#231;iniz."
	};

char* MLG_QOS_QOSClassSetup_Str53[] = {
	"To Queue Index :",
	"Kuyruk Endeksi i&#231;in:"
	};

char* MLG_QOS_QOSClassSetup_Str54[] = {
	"Q_DROP",
	"Q_DROP"
	};

char* MLG_QOS_QOSClassSetup_Str55[] = {
	"QoS Classifier Delete",
	"QoS S&#305;n&#305;fland&#305;r&#305;c&#305; Silme"
	};

char* MLG_QOS_QOSClassSetup_Str56[] = {
	"MASK",
	"MASKE"
	};

char* MLG_QOS_QOSClassSetup_Str57[] = {
	"802.1P",
	"802.1P"
	};

char* MLG_QOS_QOSClassSetup_Str58[] = {
	"Age of Empires",
	"Age of Empires"
	};

char* MLG_QOS_QOSClassSetup_Str59[] = {
	"Age of Empires II",
	"Age of Empires II"
	};

char* MLG_QOS_QOSClassSetup_Str60[] = {
	"Age of Empires III",
	"Age of Empires III"
	};

char* MLG_QOS_QOSClassSetup_Str61[] = {
	"Age of Mythology",
	"Age of Mythology"
	};

char* MLG_QOS_QOSClassSetup_Str62[] = {
	"Alien vs. Predator 2",
	"Alien vs. Predator 2"
	};

char* MLG_QOS_QOSClassSetup_Str63[] = {
	"Asheron&#39;s Call",
	"Asheron&#39;s Call"
	};

char* MLG_QOS_QOSClassSetup_Str64[] = {
	"Baldur&#39;s Gate",
	"Baldur&#39;s Gate"
	};

char* MLG_QOS_QOSClassSetup_Str65[] = {
	"Baldur&#39;s Gate II",
	"Baldur&#39;s Gate II"
	};

char* MLG_QOS_QOSClassSetup_Str66[] = {
	"Battlefield 1942",
	"Battlefield 1942"
	};

char* MLG_QOS_QOSClassSetup_Str67[] = {
	"Battlefield Vietnam",
	"Battlefield Vietnam"
	};

char* MLG_QOS_QOSClassSetup_Str68[] = {
	"Battlestations Midway",
	"Battlestations Midway"
	};

char* MLG_QOS_QOSClassSetup_Str69[] = {
	"Black and White",
	"Black and White"
	};

char* MLG_QOS_QOSClassSetup_Str70[] = {
	"Call of Duty",
	"Call of Duty"
	};

char* MLG_QOS_QOSClassSetup_Str71[] = {
	"Call of Duty - United Offensive",
	"Call of Duty - United Offensive"
	};

char* MLG_QOS_QOSClassSetup_Str72[] = {
	"Call of Duty 2",
	"Call of Duty 2"
	};

char* MLG_QOS_QOSClassSetup_Str73[] = {
	"Call of Duty 4",
	"Call of Duty 4"
	};

char* MLG_QOS_QOSClassSetup_Str74[] = {
	"Civilization III",
	"Civilization III"
	};

char* MLG_QOS_QOSClassSetup_Str75[] = {
	"Civilization IV",
	"Civilization IV"
	};

char* MLG_QOS_QOSClassSetup_Str76[] = {
	"Close Combat",
	"Close Combat"
	};

char* MLG_QOS_QOSClassSetup_Str77[] = {
	"Close Combat III: The Russian Front",
	"Close Combat III: The Russian Front"
	};

char* MLG_QOS_QOSClassSetup_Str78[] = {
	"Close Combat IV",
	"Close Combat IV"
	};

char* MLG_QOS_QOSClassSetup_Str79[] = {
	"Close Combat V",
	"Close Combat V"
	};

char* MLG_QOS_QOSClassSetup_Str80[] = {
	"Command and Conquer 3 TW",
	"Command and Conquer 3 TW"
	};

char* MLG_QOS_QOSClassSetup_Str81[] = {
	"Command and Conquer Generals",
	"Command and Conquer Generals"
	};

char* MLG_QOS_QOSClassSetup_Str82[] = {
	"Dark Reign 2",
	"Dark Reign 2"
	};

char* MLG_QOS_QOSClassSetup_Str83[] = {
	"Delta Force",
	"Delta Force"
	};

char* MLG_QOS_QOSClassSetup_Str84[] = {
	"Diablo",
	"Diablo"
	};

char* MLG_QOS_QOSClassSetup_Str85[] = {
	"Diablo II",
	"Diablo II"
	};

char* MLG_QOS_QOSClassSetup_Str86[] = {
	"DirectX 7-8 Games",
	"DirectX 7-8 Games"
	};

char* MLG_QOS_QOSClassSetup_Str87[] = {
	"Doom I-II-III",
	"Doom I-II-III"
	};

char* MLG_QOS_QOSClassSetup_Str88[] = {
	"Dune 2000",
	"Dune 2000"
	};

char* MLG_QOS_QOSClassSetup_Str89[] = {
	"Dungeons & Dragons Online",
	"Dungeons & Dragons Online"
	};

char* MLG_QOS_QOSClassSetup_Str90[] = {
	"F-16 Mig. 29",
	"F-16 Mig. 29"
	};

char* MLG_QOS_QOSClassSetup_Str91[] = {
	"F-22 Lightning 3",
	"F-22 Lightning 3"
	};

char* MLG_QOS_QOSClassSetup_Str92[] = {
	"F-22 Raptor",
	"F-22 Raptor"
	};

char* MLG_QOS_QOSClassSetup_Str93[] = {
	"Fighter Ace II",
	"Fighter Ace II"
	};

char* MLG_QOS_QOSClassSetup_Str94[] = {
	"Flight Simulator 2000 - 2002",
	"Flight Simulator 2000 - 2002"
	};

char* MLG_QOS_QOSClassSetup_Str95[] = {
	"Flight Simulator 2004",
	"Flight Simulator 2004"
	};

char* MLG_QOS_QOSClassSetup_Str96[] = {
	"GameSpy",
	"GameSpy"
	};

char* MLG_QOS_QOSClassSetup_Str97[] = {
	"Ghost Recon: Advanced Warfighter 2",
	"Ghost Recon: Advanced Warfighter 2"
	};

char* MLG_QOS_QOSClassSetup_Str98[] = {
	"GNUtella",
	"GNUtella"
	};

char* MLG_QOS_QOSClassSetup_Str99[] = {
	"Guild Wars",
	"Guild Wars"
	};

char* MLG_QOS_QOSClassSetup_Str100[] = {
	"Half Life",
	"Half Life"
	};

char* MLG_QOS_QOSClassSetup_Str101[] = {
	"Half Life II",
	"Half Life II"
	};

char* MLG_QOS_QOSClassSetup_Str102[] = {
	"Halo - Combat Evolved",
	"Halo - Combat Evolved"
	};

char* MLG_QOS_QOSClassSetup_Str103[] = {
	"Heretic II",
	"Heretic II"
	};

char* MLG_QOS_QOSClassSetup_Str104[] = {
	"Hexen II",
	"Hexen II"
	};

char* MLG_QOS_QOSClassSetup_Str105[] = {
	"Kali",
	"Kali"
	};

char* MLG_QOS_QOSClassSetup_Str106[] = {
	"KaZaA",
	"KaZaA"
	};

char* MLG_QOS_QOSClassSetup_Str107[] = {
	"Lord of the Rings Online",
	"Lord of the Rings Online"
	};

char* MLG_QOS_QOSClassSetup_Str108[] = {
	"Lord of the Rings: Battle for Middle Earth",
	"Lord of the Rings: Battle for Middle Earth"
	};

char* MLG_QOS_QOSClassSetup_Str109[] = {
	"Lord of the Rings: Battle for Middle Earth 2",
	"Lord of the Rings: Battle for Middle Earth 2"
	};

char* MLG_QOS_QOSClassSetup_Str110[] = {
	"Lord of the Rings: War of the Rings",
	"Lord of the Rings: War of the Rings"
	};

char* MLG_QOS_QOSClassSetup_Str111[] = {
	"Madden 06",
	"Madden 06"
	};

char* MLG_QOS_QOSClassSetup_Str112[] = {
	"Madden 07",
	"Madden 07"
	};

char* MLG_QOS_QOSClassSetup_Str113[] = {
	"MechWarrior 4 - Black Knight / Mercenaries / Vengeance",
	"MechWarrior 4 - Black Knight / Mercenaries / Vengeance"
	};

char* MLG_QOS_QOSClassSetup_Str114[] = {
	"MSN Gaming Zone",
	"MSN Gaming Zone"
	};

char* MLG_QOS_QOSClassSetup_Str115[] = {
	"Need For Speed 3",
	"Need For Speed 3"
	};

char* MLG_QOS_QOSClassSetup_Str116[] = {
	"Need for Speed Porsche",
	"Need for Speed Porsche"
	};

char* MLG_QOS_QOSClassSetup_Str117[] = {
	"Outlaws",
	"Outlaws"
	};

char* MLG_QOS_QOSClassSetup_Str118[] = {
	"Rainbow 6",
	"Rainbow 6"
	};

char* MLG_QOS_QOSClassSetup_Str119[] = {
	"Rouge Spear",
	"Rouge Spear"
	};

char* MLG_QOS_QOSClassSetup_Str120[] = {
	"Starcraft",
	"Starcraft"
	};

char* MLG_QOS_QOSClassSetup_Str121[] = {
	"Star Wars",
	"Star Wars"
	};

char* MLG_QOS_QOSClassSetup_Str122[] = {
	"Supreme Commander",
	"Supreme Commander"
	};

char* MLG_QOS_QOSClassSetup_Str123[] = {
	"Tabula Rasa",
	"Tabula Rasa"
	};

char* MLG_QOS_QOSClassSetup_Str124[] = {
	"Tiberian Sun",
	"Tiberian Sun"
	};

char* MLG_QOS_QOSClassSetup_Str125[] = {
	"Ultima",
	"Ultima"
	};

char* MLG_QOS_QOSClassSetup_Str126[] = {
	"Quake 3 Server",
	"Quake 3 Server"
	};

char* MLG_QOS_QOSClassSetup_Str127[] = {
	"Quake 2 Server",
	"Quake 2 Server"
	};

char* MLG_QOS_QOSClassSetup_Str128[] = {
	"World of Warcraft",
	"World of Warcraft"
	};

char* MLG_QOS_QOSClassSetup_Str129[] = {
	"Sony PS-2 / PS-3",
	"Sony PS-2 / PS-3"
	};

char* MLG_QOS_QOSClassSetup_Str130[] = {
	"Nintendo Wii",
	"Nintendo Wii"
	};

char* MLG_QOS_QOSClassSetup_Str131[] = {
	"Xbox 360",
	"Xbox 360"
	};

char* MLG_QOS_QOSClassSetup_Str132[] = {
	"DirecTV Receiver 1",
	"DirecTV Receiver 1"
	};

char* MLG_QOS_QOSClassSetup_Str133[] = {
	"DirecTV Receiver 2",
	"DirecTV Receiver 2"
	};

char* MLG_QOS_QOSClassSetup_Str134[] = {
	"DirecTV Receiver 3",
	"DirecTV Receiver 3"
	};

char* MLG_QOS_QOSClassSetup_Str135[] = {
	"iTunes Music Share",
	"iTunes M&#252;zik Payla&#351;&#305;m&#305;"
	};

char* MLG_QOS_QOSClassSetup_Str136[] = {
	"Net2Phone",
	"Net2Phone"
	};

char* MLG_QOS_QOSClassSetup_Str137[] = {
	"NetFone",
	"NetFone"
	};

char* MLG_QOS_QOSClassSetup_Str138[] = {
	"Slingbox",
	"Slingbox"
	};

char* MLG_QOS_QOSClassSetup_Str139[] = {
	"Quick Time 4 Server",
	"Quick Time 4 Server"
	};

char* MLG_QOS_QOSClassSetup_Str140[] = {
	"Webphone",
	"Web telefon"
	};

char* MLG_QOS_QOSClassSetup_Str141[] = {
	"Gnutella",
	"Gnutella"
	};

char* MLG_QOS_QOSClassSetup_Str142[] = {
	"PC Anywhere",
	"PC Anywhere"
	};

char* MLG_QOS_QOSClassSetup_Str143[] = {
	"Remote Anything",
	"Remote Anything"
	};

char* MLG_QOS_QOSClassSetup_Str144[] = {
	"Remote AnyWhere",
	"Remote AnyWhere"
	};

char* MLG_QOS_QOSClassSetup_Str145[] = {
	"Remote Desktop Connection",
	"Uzak Masa&#252;st&#252; Ba&#287;lant&#305;s&#305;"
	};

char* MLG_QOS_QOSClassSetup_Str146[] = {
	"Windows 2000 Terminal",
	"Windows 2000 Terminal"
	};

char* MLG_QOS_QOSClassSetup_Str147[] = {
	"IPSec",
	"IPSec"
	};

char* MLG_QOS_QOSClassSetup_Str148[] = {
	"L2TP",
	"L2TP"
	};

char* MLG_QOS_QOSClassSetup_Str149[] = {
	"PPTP",
	"PPTP"
	};

char* MLG_QOS_QOSClassSetup_Str150[] = {
	"Shiva VPN",
	"Shiva VPN"
	};

char* MLG_QOS_QOSClassSetup_Str151[] = {
	"DNS Server",
	"DNS Sunucusu"
	};

char* MLG_QOS_QOSClassSetup_Str152[] = {
	"FTP Server",
	"FTP Sunucusu"
	};

char* MLG_QOS_QOSClassSetup_Str153[] = {
	"LDAP Server",
	"LDAP Sunucusu"
	};

char* MLG_QOS_QOSClassSetup_Str154[] = {
	"POP2 Mail Server",
	"POP2 Posta Sunucusu"
	};

char* MLG_QOS_QOSClassSetup_Str155[] = {
	"POP3 Mail Server",
	"POP3 Posta Sunucusu"
	};

char* MLG_QOS_QOSClassSetup_Str156[] = {
	"NNTP Server",
	"NNTP Sunucusu"
	};

char* MLG_QOS_QOSClassSetup_Str157[] = {
	"SMTP Mail Server",
	"SMTP Posta Sunucusu"
	};

char* MLG_QOS_QOSClassSetup_Str158[] = {
	"Telnet Server",
	"Telnet Sunucusu"
	};

char* MLG_QOS_QOSClassSetup_Str159[] = {
	"Web Server",
	"Web Sunucusu"
	};

char* MLG_QOS_QOSClassSetup_Str160[] = {
	"SIP Server",
	"SIP Sunucusu"
	};

char* MLG_QOS_QOSClassSetup_Str161[] = {
	"RTSP Server",
	"RTSP Sunucusu"
	};

char* MLG_QOS_QOSClassSetup_Str162[] = {
	" Delta Force II",
	" Delta Force II"
	};

char* MLG_QOS_QOSClassSetup_Str163[] = {
	"TCP",
	"TCP"
	};

char* MLG_QOS_QOSClassSetup_Str164[] = {
	"UDP",
	"UDP"
	};

char* MLG_QOS_QOSClassSetup_Str165[] = {
	"ICMP",
	"ICMP"
	};

char* MLG_QOS_QOSClassSetup_Str166[] = {
	"IGMP",
	"IGMP"
	};

char* MLG_QOS_QOSClassSetup_Str167[] = {
	"DHCP",
	"DHCP"
	};

char* MLG_QOS_QOSClassSetup_Str168[] = {
	"DSCP",
	"DSCP"
	};

char* MLG_QOS_QOSClassSetup_Str169[] = {
	"802.1P",
	"802.1P"
	};

char* MLG_QOS_QOSClassSetup_Str170[] = {
	"VLAN ID",
	"VLAN ID"
	};

char* MLG_QOS_QOSClassSetup_Str171[] = {
	"0 BE",
	"0 BE"
	};

char* MLG_QOS_QOSClassSetup_Str172[] = {
	"1 BK",
	"1 BK"
	};

char* MLG_QOS_QOSClassSetup_Str173[] = {
	"2 SPARE",
	"2 SPARE"
	};

char* MLG_QOS_QOSClassSetup_Str174[] = {
	"3 EE",
	"3 EE"
	};

char* MLG_QOS_QOSClassSetup_Str175[] = {
	"4 CL",
	"4 CL"
	};

char* MLG_QOS_QOSClassSetup_Str176[] = {
	"5 VI",
	"5 VI"
	};

char* MLG_QOS_QOSClassSetup_Str177[] = {
	"6 VO",
	"6 VO"
	};

char* MLG_QOS_QOSClassSetup_Str178[] = {
	"7 NC",
	"7 NC"
	};

char* MLG_QOS_QOSClassSetup_Str179[] = {
	"NA",
	"NA"
	};

char* MLG_QOS_QOSClassSetup_Str180[] = {
	"IP (0x0800)",
	"IP (0x0800)"
	};

char* MLG_QOS_QOSClassSetup_Str181[] = {
	"ARP (0x0806)",
	"ARP (0x0806)"
	};

char* MLG_QOS_QOSClassSetup_Str182[] = {
	"PPPoE_DISC (0x8863)",
	"PPPoE_DISC (0x8863)"
	};

char* MLG_QOS_QOSClassSetup_Str183[] = {
	"PPPoE_SES (0x8864)",
	"PPPoE_SES (0x8864)"
	};

char* MLG_QOS_QOSClassSetup_Str184[] = {
	" 802.1Q (0x8100)",
	" 802.1Q (0x8100)"
	};

char* MLG_QOS_QOSClassSetup_Str185[] = {
	"Unknown",
	"Bilinmeyen"
	};

char* MLG_QOS_QOSClassSetup_Str186[] = {
	"Protocol",
	"Protokol  "
	};

char* MLG_QOS_QOSClassSetup_Str187[] = {
	"AutoMark",
	"Otomatik &#304;&#351;aretleme"
	};

char* MLG_QOS_QOSClassSetup_Str188[] = {
	"Forward To Interface:",
	"Aray&#252;ze &#304;let:"
	};

char* MLG_QOS_QOSClassSetup_Str189[] = {
	"IPv6 (0x86DD)",
	"IPv6 (0x86DD)"
	};

char* MLG_QOS_QOSClassSetup_Str190[] = {
	"Please follow the guidance through step 1~5 to configure a QoS rule",
	"Bir QoS kural&#305;n&#305; yap&#305;land&#305;rmak i&#231;in ad&#305;m 1 ~ 5 &#252;zerinden k&#305;lavuzu takip ediniz."
	};

char* MLG_QOS_QOSClassSetup_Str191[] = {
	"Step4 Policy Forwarding",
	"Ad&#305;m 4 Politika Y&#246;nlendirme"
	};

char* MLG_QOS_QOSClassSetup_Str192[] = {
	"This module can route or bridge packets to certain interface according to the class settings:",
	"Bu mod&#252;l, k&#246;pr&#252; paketlerini s&#305;n&#305;f ayarlar&#305;na g&#246;re belirli bir aray&#252;ze y&#246;nlendirebilir ya da k&#246;pr&#252;leyebilir:"
	};

char* MLG_QOS_QOSClassSetup_Str193[] = {
	"Step5: Outgoing queue selection",
	"Ad&#305;m 5: Giden kuyruk se&#231;imi "
	};

char* MLG_QOS_QOSClassSetup_Str194[] = {
	"From Intf: ",
	"&#350;u aray&#252;zden:"
	};

char* MLG_QOS_QOSClassSetup_Str195[] = {
	"To Intf: ",
	"&#350;u aray&#252;ze:"
	};

char* MLG_QOS_QOSClassSetup_Str196[] = {
	"Ether Type: ",
	"Ether Type:"
	};

char* MLG_QOS_QOSClassSetup_Str197[] = {
	"Src MAC: ",
	"Kaynak MAC:"
	};

char* MLG_QOS_QOSClassSetup_Str198[] = {
	"DHCP OP",
	"DHCP OP"
	};

char* MLG_QOS_QOSClassSetup_Str199[] = {
	"Src IP: ",
	"Kaynak IP:"
	};

char* MLG_QOS_QOSClassSetup_Str200[] = {
	"Src Port: ",
	"Kaynak Portu:"
	};

char* MLG_QOS_QOSClassSetup_Str201[] = {
	"Dst MAC: ",
	"Hedef MAC:"
	};

char* MLG_QOS_QOSClassSetup_Str202[] = {
	"Dst IP: ",
	"Hedef IP:"
	};

char* MLG_QOS_QOSClassSetup_Str203[] = {
	"Dst Port: ",
	"Hedef Port:"
	};

char* MLG_QOS_QOSClassSetup_Str204[] = {
	"IP Length: ",
	"IP uzunlu&#287;u:"
	};

char* MLG_QOS_QOSClassSetup_Str6[] = {
	"Class Name",
	"S&#305;n&#305;f Ad&#305;"
	};

char* MLG_QOS_QOSClassSetup_Str7[] = {
	"Classification Criteria",
	"S&#305;n&#305;fland&#305;rma Kriterleri"
	};

char* MLG_QOS_QOSClassSetup_Str8[] = {
	"DSCP Mark",
	"DSCP &#304;&#351;areti"
	};

char* MLG_QOS_QOSClassSetup_Str9[] = {
	"802.1P Mark",
	"802.1P &#304;&#351;areti"
	};

char* MLG_QOS_QOSGeneral_AlertMsg_Str1[] = {
	"Please enter valid up rate",
	"L&#252;tfen ge&#231;erli bir art&#305;&#351; de&#287;eri giriniz."
	};

char* MLG_QOS_QOSGeneral_AlertMsg_Str2[] = {
	"Please enter valid down rate",
	"L&#252;tfen ge&#231;erli bir azalma de&#287;eri giriniz."
	};

char* MLG_QOS_QOSGeneral_AlertMsg_Str3[] = {
	"The range of WAN managed upstream bandwith is 0 ~ ",
	"WAN y&#246;netimli &#252;st bant geni&#351;li&#287;i aral&#305;&#287;&#305; 0 ~ "
	};

char* MLG_QOS_QOSGeneral_AlertMsg_Str4[] = {
	"The range of WAN managed downstream bandwith is 0 ~ ",
	"WAN y&#246;netimli alt bant geni&#351;li&#287;i aral&#305;&#287;&#305; 0 ~ "
	};

char* MLG_QOS_QOSGeneral_Str1[] = {
	"Quality of Service(QoS) defines the traffic priority of Internet services to the home network.",
	"Servis Kalitesi (QoS), ev a&#287;&#305;na gelen &#304;nternet servislerinin trafik &#246;nceli&#287;ini tan&#305;mlar."
	};

char* MLG_QOS_QOSGeneral_Str10[] = {
	"Assigned by",
	"Atayan"
	};

char* MLG_QOS_QOSGeneral_Str11[] = {
	"None",
	"Hi&#231;biri"
	};

char* MLG_QOS_QOSGeneral_Str12[] = {
	"Ethernet Priority",
	"Ethernet &#214;nceli&#287;i"
	};

char* MLG_QOS_QOSGeneral_Str13[] = {
	"IP Precedence",
	"IP &#214;nceli&#287;i"
	};

char* MLG_QOS_QOSGeneral_Str14[] = {
	"Packet Length",
	"Paket Uzunlu&#287;u"
	};

char* MLG_QOS_QOSGeneral_Str15[] = {
	"You can assign the upstream bandwidth manually. If the field is empty, the CPE sets the value automatically. <br> If the setting of WAN managed upstream bandwidth is greater than current WAN interface linkup rate, then the WAN managed upstream bandwidth will become current WAN interface linkup rate. ",
	"&#220;st bant geni&#351;li&#287;i manuel olarak atayabilirsiniz. Alan bo&#351; ise, CPE, de&#287;eri otomatik olarak belirler. <br> WAN y&#246;netimli &#252;st bant geni&#351;li&#287;i ayar&#305; ge&#231;erli WAN aray&#252;z ba&#287;lant&#305; noktas&#305; de&#287;erinden b&#252;y&#252;k ise, WAN y&#246;netimli &#252;st bant geni&#351;li&#287;i, ge&#231;erli WAN aray&#252;z ba&#287;lant&#305; noktas&#305; de&#287;eri olacakt&#305;r. "
	};

char* MLG_QOS_QOSGeneral_Str16[] = {
	"WAN Managed Upstream Bandwidth:",
	"WAN Y&#246;netimli &#220;st Bant Geni&#351;li&#287;i:"
	};

char* MLG_QOS_QOSGeneral_Str17[] = {
	"LAN Managed Downstream Bandwidth:",
	"LAN Y&#246;netimli Alt Bant Geni&#351;li&#287;i:"
	};

char* MLG_QOS_QOSGeneral_Str18[] = {
	"Upstream traffic priority Assigned by:",
	"... taraf&#305;ndan atanan &#252;st trafik &#246;nceli&#287;i:"
	};

char* MLG_QOS_QOSGeneral_Str2[] = {
	"QoS :",
	"QoS :"
	};

char* MLG_QOS_QOSGeneral_Str3[] = {
	"State :",
	"Durum:"
	};

char* MLG_QOS_QOSGeneral_Str4[] = {
	"(The settings of QoS are invalid if you select this.)",
	"(Bunu se&#231;erseniz QoS ayarlar&#305; ge&#231;ersizdir.)"
	};

char* MLG_QOS_QOSGeneral_Str5[] = {
	"WAN Managed :",
	"WAN Y&#246;netimli:"
	};

char* MLG_QOS_QOSGeneral_Str6[] = {
	"Upstream Bandwidth :",
	"&#220;st Bant Geni&#351;li&#287;i:"
	};

char* MLG_QOS_QOSGeneral_Str7[] = {
	"LAN Managed :",
	"LAN Y&#246;netimli:"
	};

char* MLG_QOS_QOSGeneral_Str8[] = {
	"Downstream Bandwidth : ",
	"Alt Bant Geni&#351;li&#287;i: "
	};

char* MLG_QOS_QOSGeneral_Str9[] = {
	"Upstream traffic priority :",
	"&#220;st trafik &#246;nceli&#287;i:"
	};

char* MLG_QOS_QOSMonitor_Str1[] = {
	"Monitor shows the statistics of QoS on WAN/LAN interface and the status of Queue setup.",
	"Monit&#246;r, WAN / LAN aray&#252;z&#252;ndeki QoS istatistiklerini ve Kuyruk kurulum durumunu g&#246;sterir."
	};

char* MLG_QOS_QOSMonitor_Str10[] = {
	"Queue Monitor ",
	"Kuyruk Monit&#246;r "
	};

char* MLG_QOS_QOSMonitor_Str11[] = {
	"If the rate fields are empty, either the interface is not up, the general QoS settings are not configured, queue rate limits are not configured, or there are no queues with the same priority and different weights. ",
	"De&#287;er alan&#305; bo&#351; ise, ya aray&#252;z artmam&#305;&#351;, genel QoS ayarlar&#305; yap&#305;land&#305;r&#305;lmam&#305;&#351;, kuyruk oran&#305; s&#305;n&#305;rlar&#305; yap&#305;land&#305;r&#305;lm&#305;&#351;t&#305;r ya da ayn&#305; &#246;ncelik ve farkl&#305; a&#287;&#305;rl&#305;klara sahip hi&#231;bir kuyruk yoktur. "
	};

char* MLG_QOS_QOSMonitor_Str12[] = {
	"No Refresh",
	"Yenileme Yok"
	};

char* MLG_QOS_QOSMonitor_Str2[] = {
	"Monitor",
	"&#304;zle "
	};

char* MLG_QOS_QOSMonitor_Str3[] = {
	"Refresh Interval :",
	"Yenileme S&#305;kl&#305;&#287;&#305;:"
	};

char* MLG_QOS_QOSMonitor_Str4[] = {
	"None",
	"Hi&#231;biri"
	};

char* MLG_QOS_QOSMonitor_Str5[] = {
	"{{1}} seconds",
	"{{1}} saniye"
	};

char* MLG_QOS_QOSMonitor_Str6[] = {
	"Status :",
	"Durum:"
	};

char* MLG_QOS_QOSMonitor_Str7[] = {
	"Interface Monitor ",
	"Aray&#252;z Monit&#246;r&#252; "
	};

char* MLG_QOS_QOSMonitor_Str8[] = {
	"Pass Rate(bps)",
	"Ge&#231;i&#351; H&#305;z&#305; (bps)"
	};

char* MLG_QOS_QOSMonitor_Str9[] = {
	"Drop Rate(bps)",
	"D&#252;&#351;me H&#305;z&#305; (bps)"
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str1[] = {
	"Please enter policer name.",
	"L&#252;tfen kural ad&#305;n&#305; giriniz."
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str10[] = {
	"Invalid conforming action DSCP mark {{1}}",
	"Ge&#231;ersiz uygun eylem DSCP i&#351;areti {{1}}"
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str11[] = {
	"Please enter non conforming action DSCP mark .",
	"L&#252;tfen uygun olmayan bir eylem DSCP i&#351;areti girin."
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str12[] = {
	"Invalid non conforming action DSCP mark {{1}}",
	"Ge&#231;ersiz uygun olmayan eylem DSCP i&#351;areti {{1}}"
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str13[] = {
	"Please enter policer committed rate.",
	"L&#252;tfen kural i&#231;eren h&#305;z&#305; giriniz."
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str14[] = {
	"Please enter policer commited burst size.",
	"L&#252;tfen kural i&#231;eren veri blo&#287;u boyutunu giriniz."
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str15[] = {
	"Please enter policer excess burst size.",
	"L&#252;tfen kural ek veri blo&#287;u boyutunu giriniz."
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str16[] = {
	"Invalid committed rate {{1}}",
	"Ge&#231;ersiz taahh&#252;t edilen h&#305;z {{1}}"
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str17[] = {
	"Invalid committed burst size {{1}}",
	"Ge&#231;ersiz taahh&#252;t edilen veri blo&#287;u boyutu {{1}}"
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str18[] = {
	"Invalid excess burst size {{1}}",
	"Ge&#231;ersiz ek veri blo&#287;u boyutu {{1}}"
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str19[] = {
	"Please enter conforming action DSCP mark .",
	"L&#252;tfen uygun eylem DSCP i&#351;aretini giriniz."
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str2[] = {
	"Please enter valid QoS policer name: No special characters.",
	"L&#252;tfen ge&#231;erli bir QoS policer ad&#305; giriniz. &#214;zel karakter yok."
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str20[] = {
	"Invalid conforming action DSCP mark {{1}}",
	"Ge&#231;ersiz uygun eylem DSCP i&#351;areti {{1}}"
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str21[] = {
	"Please enter partial conforming action DSCP mark .",
	"L&#252;tfen k&#305;smi uygun eylem DSCP i&#351;aretini giriniz."
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str22[] = {
	"Invalid partial conforming action DSCP mark {{1}}",
	"Ge&#231;ersiz k&#305;smi uygun eylem DSCP i&#351;areti {{1}}"
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str23[] = {
	"Please enter non conforming action DSCP mark .",
	"L&#252;tfen uygun olmayan eylem DSCP i&#351;aretini giriniz."
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str24[] = {
	"Invalid non conforming action DSCP mark {{1}}",
	"Ge&#231;ersiz uygun olmayan eylem DSCP i&#351;areti {{1}}"
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str25[] = {
	"Please enter policer committed rate.",
	"L&#252;tfen policer taahh&#252;t edilen h&#305;z&#305; giriniz."
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str26[] = {
	"Please enter policer commited burst size.",
	"L&#252;tfen policer taahh&#252;t edilen veri blo&#287;u boyutunu giriniz."
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str27[] = {
	"Please enter policer peak rate.",
	"L&#252;tfen policer en y&#252;ksek h&#305;z&#305;n&#305; giriniz."
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str28[] = {
	"Please enter policer peak burst size.",
	"L&#252;tfen policer en y&#252;ksek veri blo&#287;u boyutunu giriniz."
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str29[] = {
	"Invalid committed rate {{1}}",
	"Ge&#231;ersiz taahh&#252;t edilen h&#305;z {{1}}"
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str3[] = {
	"Maximum QoS policer name cannot exceed 15 characters.",
	"Maksimum QoS policer ad&#305; 15 karakterden uzun olamaz."
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str30[] = {
	"Invalid committed burst size {{1}}",
	"Ge&#231;ersiz taahh&#252;t edilen veri blo&#287;u boyutu {{1}}"
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str31[] = {
	"Invalid peak rate {{1}}",
	"Ge&#231;ersiz en y&#252;ksek h&#305;z {{1}}"
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str32[] = {
	"Invalid peak burst size {{1}}",
	"Ge&#231;ersiz en y&#252;ksek veri blo&#287;u boyutu {{1}}"
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str33[] = {
	"Peak rate must be equal to or greater than committed rate",
	"En y&#252;ksek de&#287;er, taahh&#252;t edilen de&#287;ere e&#351;it veya daha y&#252;ksek olmal&#305;d&#305;r"
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str34[] = {
	"Please enter conforming action DSCP mark .",
	"L&#252;tfen uygun eylem DSCP i&#351;aretini giriniz."
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str35[] = {
	"Invalid conforming action DSCP mark {{1}}",
	"Ge&#231;ersiz uygun eylem DSCP i&#351;areti {{1}}"
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str36[] = {
	"Please enter partial conforming action DSCP mark .",
	"L&#252;tfen k&#305;smi uyumlu eylem DSCP i&#351;aretini giriniz."
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str37[] = {
	"Invalid partial conforming action DSCP mark {{1}}",
	"Ge&#231;ersiz k&#305;smi uygun eylem DSCP i&#351;areti {{1}}"
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str38[] = {
	"Please enter non conforming action DSCP mark .",
	"L&#252;tfen uygun olmayan eylem DSCP i&#351;aretini giriniz."
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str39[] = {
	"Invalid non conforming action DSCP mark {{1}}",
	"Ge&#231;ersiz uygun olmayan eylem DSCP i&#351;areti {{1}}"
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str4[] = {
	"Policer name exists, please enter another policer name.",
	"Policer ad&#305; var, l&#252;tfen ba&#351;ka bir policer ad&#305; giriniz."
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str40[] = {
	"At least one selected classification is required",
	"En az bir adet se&#231;ilmi&#351; s&#305;n&#305;fland&#305;rma gereklidir."
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str41[] = {
	"QoS couple of Maximum Rate and Burst Size exists, please select another couple of Maximum Rate and Burst Size.",
	"Maksimum H&#305;z ve Veri Blo&#287;u Boyutu QoS &#231;ifti var; l&#252;tfen Maksimum H&#305;z ve Veri Blo&#287;u Boyutu i&#231;in ba&#351;ka bir &#231;ift se&#231;iniz."
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str42[] = {
	"The numbers of classifier of a policer can not exceed three.",
	"Policer s&#305;n&#305;fland&#305;r&#305; adedi &#252;&#231;&#252; ge&#231;emez."
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str43[] = {
	"These classes cannot be added to the policer group becuase ",
	"Bu s&#305;n&#305;flar policer grubuna eklenemez &#231;&#252;nk&#252; "
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str44[] = {
	"Internal Error",
	"Dahili Hata"
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str45[] = {
	"one class exists with Q_DROP queue",
	"&#252;&#231; tane, biri Q_DROP kuyruklu s&#305;n&#305;f "
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str46[] = {
	"one class exists for upstream and one class for downstream.",
	"&#252;&#231; tane, bir s&#305;n&#305;f alt di&#287;er s&#305;n&#305;f &#252;st i&#231;in."
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str5[] = {
	"Please enter policer committed rate.",
	"L&#252;tfen policer taahh&#252;t edilen h&#305;z&#305; giriniz."
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str6[] = {
	"Please enter policer commited burst size.",
	"L&#252;tfen policer taahh&#252;t edilen veri blo&#287;u boyutunu giriniz."
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str7[] = {
	"Invalid committed rate {{1}}",
	"Ge&#231;ersiz taahh&#252;t edilen h&#305;z {{1}}"
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str8[] = {
	"Invalid committed burst size {{1}}",
	"Ge&#231;ersiz taahh&#252;t edilen veri blo&#287;u boyutu {{1}}"
	};

char* MLG_QOS_QOSPolicerSetup_AlertMsg_Str9[] = {
	"Please enter conforming action DSCP mark .",
	"L&#252;tfen uygun eylem DSCP i&#351;aretini giriniz."
	};

char* MLG_QOS_QOSPolicerSetup_Str1[] = {
	"Policer Setup decides the rules of the inbound traffic.",
	"Policer Kurulumu gelen trafik kurallar&#305;n&#305; belirler."
	};

char* MLG_QOS_QOSPolicerSetup_Str10[] = {
	"QoS Policer Configuration",
	"QoS Policer Yap&#305;land&#305;rma"
	};

char* MLG_QOS_QOSPolicerSetup_Str11[] = {
	"Policer Edit",
	"Policer D&#252;zenleme"
	};

char* MLG_QOS_QOSPolicerSetup_Str12[] = {
	"Active",
	"Aktif"
	};

char* MLG_QOS_QOSPolicerSetup_Str13[] = {
	"Meter Type :",
	"Metre T&#252;r&#252;:"
	};

char* MLG_QOS_QOSPolicerSetup_Str14[] = {
	"Simple Token Bucket",
	"Basit Simge Demeti"
	};

char* MLG_QOS_QOSPolicerSetup_Str15[] = {
	"Single Rate Three Color Marker",
	"Tek H&#305;z &#220;&#231; Renk &#304;&#351;aretleyici"
	};

char* MLG_QOS_QOSPolicerSetup_Str16[] = {
	"Two Rate Three Color Marker",
	"&#304;ki H&#305;z &#220;&#231; Renk &#304;&#351;aretleyici"
	};

char* MLG_QOS_QOSPolicerSetup_Str17[] = {
	"Committed Rate :",
	"Taahh&#252;t Edilen H&#305;z:"
	};

char* MLG_QOS_QOSPolicerSetup_Str18[] = {
	"Committed Burst Size :",
	"Taahh&#252;t Edilen Veri Blo&#287;u Boyutu:"
	};

char* MLG_QOS_QOSPolicerSetup_Str19[] = {
	"Peak Rate :",
	"En Y&#252;ksek H&#305;z:"
	};

char* MLG_QOS_QOSPolicerSetup_Str2[] = {
	"Policer Setup",
	"Policer Kurulumu"
	};

char* MLG_QOS_QOSPolicerSetup_Str20[] = {
	"Peak Burst Size :",
	"En Y&#252;ksek Veri Blo&#287;u Boyutu:"
	};

char* MLG_QOS_QOSPolicerSetup_Str21[] = {
	"Conforming Action :",
	"Uygun Eylem:"
	};

char* MLG_QOS_QOSPolicerSetup_Str22[] = {
	"Pass",
	"Ge&#231;i&#351;"
	};

char* MLG_QOS_QOSPolicerSetup_Str23[] = {
	"DSCP Mark",
	"DSCP &#304;&#351;areti"
	};

char* MLG_QOS_QOSPolicerSetup_Str24[] = {
	"Drop",
	"&#304;ptal"
	};

char* MLG_QOS_QOSPolicerSetup_Str25[] = {
	"Partial Conforming Action :",
	"K&#305;smi Uygun Eylem:"
	};

char* MLG_QOS_QOSPolicerSetup_Str26[] = {
	"Non-Conforming Action :",
	"Uygun Olmayan Eylem:"
	};

char* MLG_QOS_QOSPolicerSetup_Str27[] = {
	"Regulated Classes Member Setting",
	"D&#252;zenlenmi&#351; S&#305;n&#305;flar &#220;ye Ayar&#305;"
	};

char* MLG_QOS_QOSPolicerSetup_Str28[] = {
	"Available Class",
	"Mevcut S&#305;n&#305;f"
	};

char* MLG_QOS_QOSPolicerSetup_Str3[] = {
	"Add new Policer",
	"Yeni Policer ekle"
	};

char* MLG_QOS_QOSPolicerSetup_Str30[] = {
	"Selected Class",
	"Se&#231;ili S&#305;n&#305;f"
	};

char* MLG_QOS_QOSPolicerSetup_Str31[] = {
	"Policer Delete",
	"Policer Silme"
	};

char* MLG_QOS_QOSPolicerSetup_Str32[] = {
	"Policer Setting",
	"Policer Ayar&#305;"
	};

char* MLG_QOS_QOSPolicerSetup_Str33[] = {
	"Excess Burst Size",
	"Ek Veri Blo&#287;u Boyutu:"
	};

char* MLG_QOS_QOSPolicerSetup_Str34[] = {
	"Length",
	"Uzunluk"
	};

char* MLG_QOS_QOSPolicerSetup_Str4[] = {
	"Current Settings :",
	"Ge&#231;erli Ayarlar:"
	};

char* MLG_QOS_QOSPolicerSetup_Str5[] = {
	"Policer",
	"Kural"
	};

char* MLG_QOS_QOSPolicerSetup_Str6[] = {
	"Regulated Classes",
	"D&#252;zenlenmi&#351; S&#305;n&#305;flar"
	};

char* MLG_QOS_QOSPolicerSetup_Str7[] = {
	"Meter Type",
	"Metre T&#252;r&#252;"
	};

char* MLG_QOS_QOSPolicerSetup_Str8[] = {
	"Rule",
	"Kural"
	};

char* MLG_QOS_QOSPolicerSetup_Str9[] = {
	"Action",
	"Eylem"
	};

char* MLG_QOS_QOSQueueSetup_AlertMsg_Str1[] = {
	"Please enter QoS queue name.",
	"L&#252;tfen QoS kuyruk ad&#305;n&#305; giriniz."
	};

char* MLG_QOS_QOSQueueSetup_AlertMsg_Str2[] = {
	"Please enter valid QoS queue name: No special characters.",
	"L&#252;tfen ge&#231;erli bir QoS kuyruk ad&#305; girin. &#214;zel karakter yok."
	};

char* MLG_QOS_QOSQueueSetup_AlertMsg_Str3[] = {
	"Maximum QoS queue name cannot exceed 15 characters.",
	"Maksimum QoS kuyruk ad&#305; 15 karakterden uzun olamaz."
	};

char* MLG_QOS_QOSQueueSetup_AlertMsg_Str4[] = {
	"QoS queue name existed, please enter another queue name.",
	"QoS kuyruk ad&#305; var, l&#252;tfen ba&#351;ka bir kuyruk ad&#305; giriniz."
	};

char* MLG_QOS_QOSQueueSetup_AlertMsg_Str5[] = {
	"Queues of WAN interface is limited by 8.",
	"WAN aray&#252;z&#252; kuyruk say&#305;s&#305; 8 ile s&#305;n&#305;rl&#305;d&#305;r."
	};

char* MLG_QOS_QOSQueueSetup_AlertMsg_Str6[] = {
	"Queues of LAN/WLAN interface is limited by 3.",
	"Yerel A&#287; / Kablosuz Yerel A&#287; aray&#252;z kuyruk say&#305;s&#305; 3 ile s&#305;n&#305;rl&#305;d&#305;r."
	};

char* MLG_QOS_QOSQueueSetup_AlertMsg_Str7[] = {
	"Specify an egress interface for this queue.",
	"Bu kuyruk i&#231;in bir &#231;&#305;k&#305;&#351; arabirimi belirtiniz."
	};

char* MLG_QOS_QOSQueueSetup_AlertMsg_Str8[] = {
	"Shaping rate {{1}} should be between 0 and 1024000.",
	"&#350;ekillendirme h&#305;z&#305; {{1}} 0 ile 1024000 aras&#305;nda olmal&#305;d&#305;r."
	};

char* MLG_QOS_QOSQueueSetup_Str1[] = {
	"Queue Setup decides the priority on WAN/LAN interfaces. Use this page to configure QoS queue assignment.",
	"Kuyruk Kurulumu, Yerel A&#287; / Kablosuz Yerel A&#287; aray&#252;zlerindeki &#246;nceliklere karar verir. QoS kuyru&#287;u atamas&#305; yap&#305;land&#305;rmas&#305; i&#231;in bu sayfay&#305; kullan&#305;n&#305;z."
	};

char* MLG_QOS_QOSQueueSetup_Str10[] = {
	"Buffer Management",
	"Arabellek Y&#246;netimi"
	};

char* MLG_QOS_QOSQueueSetup_Str11[] = {
	"Rate Limit (kbps)",
	"H&#305;z Limiti (kbps)"
	};

char* MLG_QOS_QOSQueueSetup_Str12[] = {
	"Maximum of 8 configurable entries for WAN port, and maximum of 3 configurable entries for LAN port.<br>&nbsp;&nbsp;If queue is deleted, then related classifiers will be removed too.<br>&nbsp;&nbsp;Priority level \'1\' is the highest priority for QoS.<br>&nbsp;&nbsp;Rate Limit \'0\' is max bandwidth.",
	"WAN portu i&#231;in maksimum 8 ayarlanabilir girdi ve Yerel A&#287; portu i&#231;in maksimum 3 ayarlanabilir girdi tan&#305;m&#305; yap&#305;labilir . <br> Kuyruk silinirse, ilgili s&#305;n&#305;fland&#305;r&#305;c&#305;lar da silinecektir. <br> &#214;ncelik seviyesi \'1\' QoS i&#231;in en y&#252;ksek &#246;ncelik de&#287;eridir. <br> H&#305;z Limiti \'0\' maksimum bant geni&#351;li&#287;idir."
	};

char* MLG_QOS_QOSQueueSetup_Str13[] = {
	"QoS Queue Configuration",
	"QoS Kuyruk Yap&#305;land&#305;rma"
	};

char* MLG_QOS_QOSQueueSetup_Str14[] = {
	"Queue Edit",
	"Kuyruk D&#252;zenleme"
	};

char* MLG_QOS_QOSQueueSetup_Str15[] = {
	"Queue Settings",
	"Kuyruk Ayarlar&#305;"
	};

char* MLG_QOS_QOSQueueSetup_Str16[] = {
	"Active",
	"Aktif"
	};

char* MLG_QOS_QOSQueueSetup_Str17[] = {
	"To Interface :",
	"Aray&#252;z i&#231;in:"
	};

char* MLG_QOS_QOSQueueSetup_Str18[] = {
	"LAN/WLAN",
	"Yerel A&#287; / Kablosuz Yerel A&#287;"
	};

char* MLG_QOS_QOSQueueSetup_Str19[] = {
	"WAN",
	"WAN"
	};

char* MLG_QOS_QOSQueueSetup_Str2[] = {
	"Queue Setup",
	"Kuyruk Kurulumu"
	};

char* MLG_QOS_QOSQueueSetup_Str20[] = {
	"High",
	"Y&#252;ksek"
	};

char* MLG_QOS_QOSQueueSetup_Str21[] = {
	"Drop Tail (DT)",
	"Kuyruk &#304;ptal (DT)"
	};

char* MLG_QOS_QOSQueueSetup_Str22[] = {
	"Queue Delete",
	"Kuyruk Silme"
	};

char* MLG_QOS_QOSQueueSetup_Str23[] = {
	"USB",
	"USB"
	};

char* MLG_QOS_QOSQueueSetup_Str3[] = {
	"Add new Queue",
	"Yeni Kuyruk ekle"
	};

char* MLG_QOS_QOSQueueSetup_Str4[] = {
	"Current Settings :",
	"Ge&#231;erli Ayarlar:"
	};

char* MLG_QOS_QOSQueueSetup_Str5[] = {
	"Queue",
	"Kuyruk"
	};

char* MLG_QOS_QOSQueueSetup_Str6[] = {
	"DefaultQueue",
	"Varsay&#305;lan Kuyruk"
	};

char* MLG_QOS_QOSQueueSetup_Str7[] = {
	"Interface",
	"Aray&#252;z"
	};

char* MLG_QOS_QOSQueueSetup_Str8[] = {
	"Priority",
	"&#214;ncelik"
	};

char* MLG_QOS_QOSQueueSetup_Str9[] = {
	"Weight",
	"A&#287;&#305;rl&#305;k"
	};

MAPPING_ITEM QOSMappingItem[385];
