#include<stdio.h>	
#include<string.h>	
#include<stdlib.h>	
#include<time.h>	
#include "languages.h"	



char* MLG_WLAN_AlertMsg_Alert[] = {
	"Alert",
	"&#214;nemli Uyar&#305;"
	};

char* MLG_WLAN_AdditionalWLANs_AlertMsg_Str1[] = {
	"should not be longer than 32 characters.",
	"32 karakterden daha uzun olmamal&#305;d&#305;r."
	};

char* MLG_WLAN_AdditionalWLANs_AlertMsg_Str2[] = {
	"The DHCP Start Address is invalid. Enter a valid address.",
	"DHCP Ba&#351;lang&#305;&#231; Adresi ge&#231;ersiz. Ge&#231;erli bir adres giriniz."
	};

char* MLG_WLAN_AdditionalWLANs_AlertMsg_Str3[] = {
	"The DHCP End Address is invalid. Enter a valid address.",
	"DHCP Biti&#351; Adresi ge&#231;ersiz. Ge&#231;erli bir adres giriniz."
	};

char* MLG_WLAN_AdditionalWLANs_AlertMsg_Str4[] = {
	"The SSID Subnet is invalid.  Enter a valid subnet.",
	"SSID Alt A&#287;&#305; ge&#231;ersiz.  Ge&#231;erli bir alt a&#287; giriniz."
	};

char* MLG_WLAN_AdditionalWLANs_AlertMsg_Str5[] = {
	"The LAN IP Address is invalid. Enter a valid address.",
	" Yerel Alan A&#287;&#305; IP Adresi ge&#231;ersiz. Ge&#231;erli bir adres giriniz."
	};

char* MLG_WLAN_AdditionalWLANs_AlertMsg_Str6[] = {
	"The defined subnet is in use.  Enter a unique subnet different than the subnet already in use with DHCP.",
	"Tan&#305;ml&#305; alt a&#287; kullan&#305;mdad&#305;r.  DHCP ile kullan&#305;mda olan alt a&#287;dan farkl&#305; benzersiz bir alt a&#287; giriniz."
	};

char* MLG_WLAN_AdditionalWLANs_Str1[] = {
	"Assign a name and a security level (if needed) to a new second wireless network service.",
	"İkinci bir kablosuz  ağ hizmetini başlatmak için bir kablosuz ağ adı (SSID) ve güvenlik seviyesi (gerekirse) atayınız."
	};

char* MLG_WLAN_AdditionalWLANs_Str10[] = {
	"SSID Subnetmask",
	"SSID Alt A&#287; Maskesi  "
	};

char* MLG_WLAN_AdditionalWLANs_Str11[] = {
	"LAN IP Address",
	"Yerel Alan A&#287;&#305;(LAN) IP Adresi"
	};

char* MLG_WLAN_AdditionalWLANs_Str12[] = {
	"Enable Wireless LAN",
	"Enable Wireless LAN"
	};

char* MLG_WLAN_AdditionalWLANs_Str13[] = {
	"Configure as isolated Guest WLAN",
	"Configure as isolated Guest WLAN"
	};

char* MLG_WLAN_AdditionalWLANs_Str2[] = {
	"This device can enable up to 3 wireless networks to work at the same time. Assign a name and a security level (if needed) to start the 2nd, and 3rd wireless network services.",
	"Bu ayg&#305;t, ayn&#305; anda 3 kablosuz a&#287;&#305; &#231;al&#305;&#351;t&#305;rabilir. 2. ve 3. kablosuz a&#287; hizmetlerini ba&#351;latmak i&#231;in bir kablosuz a&#287; ad&#305;  ve g&#252;venlik seviyesi (gerekirse) atay&#305;n&#305;z."
	};

char* MLG_WLAN_AdditionalWLANs_Str3[] = {
	"Status",
	"Durum "
	};

char* MLG_WLAN_AdditionalWLANs_Str4[] = {
	"SSID",
	"SSID "
	};

char* MLG_WLAN_AdditionalWLANs_Str5[] = {
	"Security",
	"G&#252;venlik"
	};

char* MLG_WLAN_AdditionalWLANs_GuestWLAN[] = {
	"Guest WLAN",
	"Ziyaret&#231;i WLAN"
	};

char* MLG_WLAN_AccessScenario[] = {
	"Access Scenario",
	"Eri&#351;im Senaryosu"
	};

char* MLG_WLAN_AdditionalWLANs_ExternalGuest[] = {
	"External Guest",
	"Harici Ziyaret&#231;i"
	};

char* MLG_WLAN_AdditionalWLANs_GuestHome[] = {
	"Guest Home",
	"Ziyaret&#231;i Evi"
	};

char* MLG_WLAN_AdditionalWLANs_Str6[] = {
	"SSID Subnet",
	"SSID Alt A&#287;&#305;"
	};

char* MLG_WLAN_AdditionalWLANs_Str7[] = {
	"More AP Edit",
	"Daha fazla AP D&#252;zenleme"
	};

char* MLG_WLAN_AdditionalWLANs_Str8[] = {
	"DHCP Start Address",
	"DHCP Ba&#351;lang&#305;&#231; Adresi"
	};

char* MLG_WLAN_AdditionalWLANs_Str9[] = {
	"DHCP End Address",
	"DHCP Biti&#351; Adresi"
	};

char* MLG_WLAN_Advanced_AlertMsg_Str1[] = {
	"RTS threshold {{1}} should be between 0 and 2347.",
	"RTS e&#351;i&#287;i {{1}}, 0 ile 2347 aras&#305;nda olmal&#305;d&#305;r."
	};

char* MLG_WLAN_Advanced_AlertMsg_Str2[] = {
	"Fragmentation threshold {{1}} should be between 256 and 2346.",
	"Par&#231;alanma e&#351;i&#287;i {{1}}, 256 ve 2346 aras&#305;nda olmal&#305;d&#305;r."
	};

char* MLG_WLAN_Advanced_AlertMsg_Str3[] = {
	"DTIM interval {{1}} should be between 1 and 255.",
	"DTIM aral&#305;&#287;&#305; {{1}}, 1 ile 255 aras&#305;nda olmal&#305;d&#305;r."
	};

char* MLG_WLAN_Advanced_AlertMsg_Str4[] = {
	"Beacon interval {{1}} should be between 50 and 1000.",
	"Beacon aral&#305;&#287;&#305; {{1}}, 50 ile 1000 aras&#305;nda olmal&#305;d&#305;r."
	};


char* MLG_WLAN_Advanced_AlertMsg_11ac_Str1[] = {
	"Pre-Network Radar Check {{1}} should be between 0 and 99.",
	"Pre-Network Radar Check {{1}} should be between 0 and 99."
	};

char* MLG_WLAN_Advanced_AlertMsg_11ac_Str2[] = {
	"In-Network Radar Check{{1}} should be between 10 and 99.",
	"In-Network Radar Check{{1}} should be between 10 and 99."
	};

char* MLG_WLAN_Advanced_AlertMsg_Str5[] = {
	"N mode only does not support WEP security. You should change security in ",
	"Sadece N modu WEP g&#252;venli&#287;ini desteklemez. G&#252;venli&#287;i de&#287;i&#351;tirmeniz gerekmektedir."
	};

char* MLG_WLAN_Advanced_Str1[] = {
	"The configurations below are the advanced wireless settings.",
	"A&#351;a&#287;&#305;daki yap&#305;land&#305;rmalar geli&#351;mi&#351; kablosuz ba&#287;lant&#305; ayarlar&#305;d&#305;r."
	};

char* MLG_WLAN_Advanced_Str10[] = {
	"DTIM Interval",
	"DTIM Aral&#305;&#287;&#305;"
	};

char* MLG_WLAN_Advanced_Str2[] = {
	"Wireless Advanced Setup",
	"Kablosuz Geli&#351;mi&#351; Kurulum"
	};

char* MLG_WLAN_Advanced_Str3[] = {
	"RTS/CTS Threshold",
	"RTS/CTS E&#351;i&#287;i"
	};

char* MLG_WLAN_Advanced_Str4[] = {
	"Fragmentation Threshold",
	"Par&#231;alanma E&#351;i&#287;i"
	};

char* MLG_WLAN_Advanced_Str5[] = {
	"Auto Channel Timer",
	"Otomatik Kanal Zamanlay&#305;c&#305;"
	};

char* MLG_WLAN_Advanced_Str6[] = {
	"min",
	"dakika"
	};

char* MLG_WLAN_Advanced_Str7[] = {
	"ms",
	"ms"
	};

char* MLG_WLAN_Advanced_Str8[] = {
	"Output Power",
	"&#199;&#305;k&#305;&#351; G&#252;c&#252;"
	};

char* MLG_WLAN_Advanced_Str9[] = {
	"Beacon Interval",
	"Beacon Aral&#305;&#287;&#305;"
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str1[] = {
	"SSID should not be empty.",
	"SSID bo&#351; olmamal&#305;d&#305;r."
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str10[] = {
	"Shared Secret {{1}} is invalid.",
	"Payla&#351;&#305;lan Gizlilik {{1}}, ge&#231;ersizdir."
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str11[] = {
	"WEP security does not support WPS. You should disable wps in",
	"WEP g&#252;venli&#287;i, WPS&#39; i desteklemiyor. WPS&#39; i devre d&#305;&#351;&#305; b&#305;rakman&#305;z gerekmektedir."
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str12[] = {
	"WEP security does not support n only mode. You should disable wps in",
	"WEP g&#252;venli&#287;i, sadece n modunu desteklemiyor. WPS&#39; yi devre d&#305;&#351;&#305; b&#305;rakman&#305;z gerekir "
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str13[] = {
	"The Key Index was not selected!",
	"Anahtar Dizini se&#231;ilmedi!"
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str14[] = {
	"Cannot choose key that has empty value.",
	"Bo&#351; de&#287;ere sahip anahtar se&#231;emezsiniz."
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str15[] = {
	"Key {{1}} is invalid. Please enter 13 ASCII characters or 26 hexadecimal digits for a 128-bit WEP encryption key.",
	"Anahtar {{1}} ge&#231;ersiz. L&#252;tfen 128-bit bir WEP &#351;ifreleme anahtar&#305; i&#231;in 13 ASCII karakter veya 26 adet heksadesimal say&#305; giriniz."
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str16[] = {
	"Key {{1}} is invalid. Please enter 5 ASCII characters or 10 hexadecimal digits for a 64-bit WEP encryption key.",
	"Anahtar {{1}} ge&#231;ersiz. L&#252;tfen 64-bit bir WEP &#351;ifreleme anahtar&#305; i&#231;in 5 ASCII karakter veya 10 adet heksadesimal say&#305; giriniz."
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str17[] = {
	"Found a non-ISO-8859-1 character at position: {{1}} in password {{2}}, Please eliminate before continuing.",
	"{{1}} konumunda &#351;ifre {{2}} i&#231;inde ISO-8859-1 olmayan bir karakter bulundu:  , l&#252;tfen devam etmeden &#246;nce sorunu gideriniz."
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str18[] = {
	"Found a non-ISO-8859-1 character at position: {{1}} in password 2, Please eliminate before continuing.",
	"{{1}} konumunda &#351;ifre 2 i&#231;inde ISO-8859-1 olmayan bir karakter bulundu:  , l&#252;tfen devam etmeden &#246;nce sorunu gideriniz."
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str19[] = {
	"Found a non-ISO-8859-1 character at position: {{1}} in password 3, Please eliminate before continuing.",
	"{{1}} konumunda &#351;ifre 3 i&#231;inde ISO-8859-1 olmayan bir karakter bulundu:  , l&#252;tfen devam etmeden &#246;nce sorunu gideriniz."
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str2[] = {
	"SSID {{1}} should be less than 32 characters.",
	"SSID {{1}} 32 karakterden az olmal&#305;d&#305;r."
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str20[] = {
	"Found a non-ISO-8859-1 character at position: {{1}}  in password 4, Please eliminate before continuing.",
	"{{1}} konumunda &#351;ifre 4 i&#231;inde ISO-8859-1 olmayan bir karakter bulundu:  , l&#252;tfen devam etmeden &#246;nce sorunu gideriniz."
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str21[] = {
	"Please eliminate before continuing.",
	"L&#252;tfen devam etmeden &#246;nce sorunu gideriniz."
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str22[] = {
	"N mode only does not support WEP security. You should change security settings.",
	"Sadece N modu WEP g&#252;venli&#287;ini desteklemez. G&#252;venlik ayarlar&#305;n&#305; de&#287;i&#351;tirmeniz gerekir."
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str3[] = {
	"Found a non-ISO-8859-1 character at position: {{1}} in SSID, Please eliminate before continuing.",
	"{{1}} konumunda SSID i&#231;inde ISO-8859-1 olmayan bir karakter bulundu:  , l&#252;tfen devam etmeden &#246;nce sorunu gideriniz."
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str4[] = {
	"WPA Pre-Shared Key should be between 8 and 63 ASCII characters or 64 hexadecimal digits.",
	"WPA &#214;n Payla&#351;&#305;ml&#305; Anahtar, 8 ve 63 ASCII karakter veya 64 adet onalt&#305;l&#305;k say&#305; basama&#287;&#305; aras&#305;nda olmal&#305;d&#305;r.  "
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str5[] = {
	"Found a non-ISO-8859-1 character at position: {{1}} in WPA Pre-Shared Key, Please eliminate before continuing.",
	"{{1}} konumunda WPA &#214;n-Payla&#351;&#305;ml&#305; anahtar i&#231;inde ISO-8859-1 olmayan bir karakter bulundu:  , l&#252;tfen devam etmeden &#246;nce sorunu gideriniz."
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str6[] = {
	"WPA Group Rekey Interval {{1}} should be between 0 and 2147483647.",
	"WPA Grup Yeniden Anahtarlama Aral&#305;&#287;&#305; {{1}}, 0 ve 2147483647 aras&#305;nda olmal&#305;d&#305;r."
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str7[] = {
	"WPA Network Reauthentication Interval {{1}} should be between 0 and 2147483647.",
	"WPA A&#287; Yeniden Kimlik Do&#287;rulama Aral&#305;&#287;&#305; {{1}}, 0 ve 2147483647 aras&#305;nda olmal&#305;d&#305;r."
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str8[] = {
	"RADIUS Server IP Address {{1}} is invalid IP address.",
	"RADIUS Sunucu IP adresi {{1}} ge&#231;ersiz bir IP adresidir."
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str9[] = {
	"RADIUS Port {{1}} should be between 1 and 65535.",
	"RADIUS Portu {{1}}, 1 ile 65535 aras&#305;nda olmal&#305;d&#305;r."
	};

char* MLG_WLAN_BasicWirelessSetup_Str1[] = {
	"Wireless security can protect the data from unauthorized access or damage via wireless network. <br> You need a wireless network name (also known as SSID) and security mode to set up the wireless security.",
	"Kablosuz g&#252;venli&#287;i, verileri yetkisiz eri&#351;im ya da kablosuz a&#287; &#252;zerinden gelecek zarara kar&#351;&#305; korur. <br> Kablosuz g&#252;venli&#287;ini kurmak i&#231;in bir kablosuz a&#287; ad&#305; (SSID olarak da bilinir) ve g&#252;venlik modu gereklidir."
	};

char* MLG_WLAN_BasicWirelessSetup_Str10[] = {
	"20MHz",
	"20MHz"
	};

char* MLG_WLAN_BasicWirelessSetup_Str11[] = {
	"40MHz",
	"40MHz"
	};

char* MLG_WLAN_BasicWirelessSetup_Str12[] = {
	"20MHz in Both Band",
	"Her iki Bantta 20MHz"
	};

char* MLG_WLAN_BasicWirelessSetup_Str13[] = {
	"40MHz in Both Band",
	"Her iki Bantta 40MHz"
	};

char* MLG_WLAN_BasicWirelessSetup_Str14[] = {
	"20MHz in 2.4GHz and 40MHz in 5GHz",
	"2.4G Band&#305;nda 20MHz ve 5G Band&#305;nda 40MHz "
	};

char* MLG_WLAN_BasicWirelessSetup_Str15[] = {
	"Control Sideband",
	"Kontrol Yanbant"
	};

char* MLG_WLAN_BasicWirelessSetup_Str16[] = {
	"Lower",
	"Alt"
	};

char* MLG_WLAN_BasicWirelessSetup_Str17[] = {
	"Upper",
	"&#220;st"
	};

char* MLG_WLAN_BasicWirelessSetup_Str18[] = {
	"802.11 Mode",
	"802.11 Modu"
	};

char* MLG_WLAN_BasicWirelessSetup_Str19[] = {
	"802.11 Protection",
	"802.11 Korumas&#305;"
	};

char* MLG_WLAN_BasicWirelessSetup_Str2[] = {
	"Wireless Network Setup",
	"Kablosuz A&#287; Kurulumu"
	};

char* MLG_WLAN_BasicWirelessSetup_Str20[] = {
	"Preamble",
	"Giri&#351;"
	};

char* MLG_WLAN_BasicWirelessSetup_Str21[] = {
	"Output Power",
	"&#199;&#305;k&#305;&#351; G&#252;c&#252;"
	};

char* MLG_WLAN_BasicWirelessSetup_Str22[] = {
	"Wireless Network Settings",
	"Kablosuz A&#287; Ayarlar&#305;"
	};

char* MLG_WLAN_BasicWirelessSetup_Str23[] = {
	"Wireless Network Name",
	"Kablosuz A&#287; Ad&#305;"
	};

char* MLG_WLAN_BasicWirelessSetup_Str24[] = {
	"Hide SSID",
	"SSID gizle"
	};

char* MLG_WLAN_BasicWirelessSetup_Str25[] = {
	"Client Isolation",
	"&#304;stemci &#304;zolasyonu"
	};

char* MLG_WLAN_BasicWirelessSetup_Str26[] = {
	"WLAN clients on the same SSID are isolated from each other",
	"Ayn&#305; SSID&#39; de yer alan Kablosuz Yerel A&#287;(WLAN) istemcileri birbirinden izole edilir."
	};

char* MLG_WLAN_BasicWirelessSetup_Str27[] = {
	"MBSSID/LAN Isolation",
	"MBSSID / Yerel Alan A&#287;&#305; &#304;zolasyonu"
	};

char* MLG_WLAN_BasicWirelessSetup_Str28[] = {
	"WLAN clients are isolated from LAN or other WLANs clients",
	"Kablosuz Yerel A&#287; istemcileri, Yerel Alan A&#287;&#305; veya di&#287;er Kablosuz Yerel A&#287; istemcilerinden izole edilir"
	};

char* MLG_WLAN_BasicWirelessSetup_Str29[] = {
	"Internet Only",
	"Sadece &#304;nternet"
	};

char* MLG_WLAN_BasicWirelessSetup_Str3[] = {
	"Wireless",
	"Kablosuz"
	};

char* MLG_WLAN_BasicWirelessSetup_Str30[] = {
	"WLAN clients can not access the device",
	"Kablosuz Yerel A&#287; istemcileri cihaza eri&#351;emez"
	};

char* MLG_WLAN_BasicWirelessSetup_EnhanceMulticastForwarding[] = {
	"Enhanced Multicast Forwarding",
	"Geli&#351;tirilmi&#351; Multicast Y&#246;nlendirme"
	};

char* MLG_WLAN_BasicWirelessSetup_Str32[] = {
	"WLAN clients will receive multicast in unicast format to further enhance wireless performance",
	"Kablosuz Yerel A&#287; istemcileri, multicast yay&#305;n&#305; kablosuz ba&#287;lant&#305; performans&#305;n&#305; daha da art&#305;rmak i&#231;in unicast yay&#305;n format&#305;nda al&#305;r."
	};

char* MLG_WLAN_BasicWirelessSetup_Str33[] = {
	"BSSID",
	"BSSID"
	};

char* MLG_WLAN_BasicWirelessSetup_Str34[] = {
	"Security Mode",
	"G&#252;venlik Modu"
	};

char* MLG_WLAN_BasicWirelessSetup_Str35[] = {
	"Passphrase Type",
	"Passphrase Tipi"
	};

char* MLG_WLAN_BasicWirelessSetup_Str36[] = {
	"Passphrase Key",
	"Passphrase Anahtar&#305; "
	};

char* MLG_WLAN_BasicWirelessSetup_Str37[] = {
	"Please enter 13 ASCII characters (a-z, A-Z, 0-9) or 26 hexadecimal characters (A-F, 0-9) for a 128 bit WEP encryption key.  Please enter 5 ASCII characters (a-z, A-Z, 0-9) or 10 hexadecimal characters (A-F, 0-9) for a 64-bit WEP encryption key. Spaces and underscores are not allowed.",
	"L&#252;tfen 128 bit WEP &#351;ifreleme anahtar&#305; i&#231;in 13 ASCII karakteri (a-z, A-Z, 0-9) veya 26 adet heksadesimal karakter (A-F, 0-9) giriniz.  L&#252;tfen 64-bit WEP &#351;ifreleme anahtar&#305; i&#231;in 5 ASCII karakter (a-z, A-Z, 0-9) veya 10 adet heksadesimal karakter (A-F, 0-9) giriniz. Bo&#351;luk ve alt&#231;izgi kullan&#305;lamaz."
	};

char* MLG_WLAN_BasicWirelessSetup_Str37_1[] = {
	"Please enter 13 ASCII characters (a-z, A-Z, 0-9) or 26 hexadecimal characters (A-F, 0-9) for a 128 bit WEP encryption key.",
	"L&#252;tfen 128 bit WEP &#351;ifreleme anahtar&#305; i&#231;in 13 ASCII karakteri (a-z, A-Z, 0-9) veya 26 adet heksadesimal karakter (A-F, 0-9) giriniz."
	};

char* MLG_WLAN_BasicWirelessSetup_Str37_2[] = {
	"Please enter 5 ASCII characters (a-z, A-Z, 0-9) or 10 hexadecimal characters (A-F, 0-9) for a 64-bit WEP encryption key.",
	"L&#252;tfen 64-bit WEP &#351;ifreleme anahtar&#305; i&#231;in 5 ASCII karakter (a-z, A-Z, 0-9) veya 10 adet heksadesimal karakter (A-F, 0-9) giriniz."
	};

char* MLG_WLAN_BasicWirelessSetup_Str38[] = {
	"Select one password as your active password.",
	"Etkin &#351;ifreniz olarak bir &#351;ifre se&#231;iniz"
	};

char* MLG_WLAN_BasicWirelessSetup_Str39[] = {
	"Password 1",
	"&#350;ifre 1"
	};

char* MLG_WLAN_BasicWirelessSetup_Str4[] = {
	"settings are invalid when disabled",
	"devre d&#305;&#351;&#305; b&#305;rak&#305;ld&#305;&#287;&#305;nda ayarlar ge&#231;ersizdir"
	};

char* MLG_WLAN_BasicWirelessSetup_Str59[] = {
	"The settings in this screen are invalid if you select this.",
	"Bunu se&#231;meniz durumunda, bu ekrandaki ayarlar ge&#231;ersizdir."
	};

char* MLG_WLAN_BasicWirelessSetup_Str40[] = {
	"Password 2",
	"&#350;ifre 2"
	};

char* MLG_WLAN_BasicWirelessSetup_Str41[] = {
	"Password 3",
	"&#350;ifre 3"
	};

char* MLG_WLAN_BasicWirelessSetup_Str42[] = {
	"Password 4",
	"&#350;ifre 4"
	};

char* MLG_WLAN_BasicWirelessSetup_Str43[] = {
	"WEP Encryption",
	"WEP &#350;ifreleme"
	};

char* MLG_WLAN_BasicWirelessSetup_Str44[] = {
	"128-bit",
	"128-bit"
	};

char* MLG_WLAN_BasicWirelessSetup_Str45[] = {
	"64-bit",
	"64-bit"
	};

char* MLG_WLAN_BasicWirelessSetup_Str46[] = {
	"Enter 8-63 characters (a-z, A-Z, 0-9, \'-\', \'_\' and \'.\'), other characters are not allowed.",
	"8 ile 63 karakter aras&#305; karakter(a-z, A-Z, 0-9, \'-\', \'_\' ve \'.\') giriniz, di&#287;er karakterlere izin verilmez."
	};

char* MLG_WLAN_BasicWirelessSetup_Str47[] = {
	"Authentication Server",
	"Kimlik Do&#287;rulama Sunucusu"
	};

char* MLG_WLAN_BasicWirelessSetup_Str48[] = {
	"IP Address",
	"IP Adresi"
	};

char* MLG_WLAN_BasicWirelessSetup_Str49[] = {
	"Port Number",
	"Port Numaras&#305;"
	};

char* MLG_WLAN_BasicWirelessSetup_Str5[] = {
	"Band",
	"Bant"
	};

char* MLG_WLAN_BasicWirelessSetup_Str50[] = {
	"Shared Secret",
	"Payla&#351;&#305;lan &#350;ifre"
	};

char* MLG_WLAN_BasicWirelessSetup_Str51[] = {
	"WPA-PSK Compatible",
	"WPA-PSK Uyumlu"
	};

char* MLG_WLAN_BasicWirelessSetup_Str52[] = {
	"WPA Compatible",
	"WPA Uyumlu"
	};

char* MLG_WLAN_BasicWirelessSetup_Str53[] = {
	"Encryption",
	"&#350;ifreleme"
	};

char* MLG_WLAN_BasicWirelessSetup_Str54[] = {
	"WPA2 Pre-authentication",
	"WPA2 &#214;n Kimlik Do&#287;rulama"
	};

char* MLG_WLAN_BasicWirelessSetup_Str55[] = {
	"Network Re-auth Interval",
	"A&#287; Yeniden Kimlik Do&#287;rulama Aral&#305;&#287;&#305;"
	};

char* MLG_WLAN_BasicWirelessSetup_Str56[] = {
	"Group Key Update Timer",
	"Grup Anahtar&#305; G&#252;ncelleme Zamanlay&#305;c&#305;s&#305;"
	};

char* MLG_WLAN_BasicWirelessSetup_Str57[] = {
	"Generate password automatically",
	"Otomatik olarak &#351;ifre olu&#351;tur"
	};

char* MLG_WLAN_BasicWirelessSetup_Str58[] = {
	"hide password",
	"&#351;ifreyi gizle "
	};

char* MLG_WLAN_BasicWirelessSetup_Str6[] = {
	"2.4GHz",
	"2.4GHz"
	};

char* MLG_WLAN_BasicWirelessSetup_Str61[] = {
	"Security Level",
	"G&#252;venlik Seviyesi"
	};

char* MLG_WLAN_BasicWirelessSetup_Str62[] = {
	"No Security",
	"G&#252;venlik Yok"
	};

char* MLG_WLAN_BasicWirelessSetup_Str63[] = {
	"Basic",
	"Temel"
	};

char* MLG_WLAN_BasicWirelessSetup_Str64[] = {
	"More Secure",
	"Daha G&#252;venli"
	};

char* MLG_WLAN_BasicWirelessSetup_Str65[] = {
	"Recommended",
	"&#214;nerilen"
	};

char* MLG_WLAN_BasicWirelessSetup_Str66[] = {
	"Enter 5 ASCII characters or 10 hex characters (\'0-9\', \'A-F\')",
	"5 ASCII karakteri veya 10 heksadesimal karakter giriniz. (\'0 -9 \',\' A-F \') "
	};

char* MLG_WLAN_BasicWirelessSetup_Str67[] = {
	"Enter 13 ASCII characters or 26 hex characters (\'0-9\', \'A-F\')",
	"13 ASCII karakteri veya 26 heksadesimal karakter giriniz. (\'0 -9 \',\' A-F \') "
	};

char* MLG_WLAN_BasicWirelessSetup_Str68[] = {
	"WMM and APSD have beneficial effects on delay-sensitive applications over wireless connection, such as multimedia streaming, because WMM enhances data transmission quality and APSD improves power management on wireless clients.",
	"WMM veri iletim kalitesini art&#305;rd&#305;&#287;&#305;ndan ve APSD kablosuz  istemcilerinde g&#252;&#231; y&#246;netimini geli&#351;tirdi&#287;inden WMM ve APSD&#39; nin multimedya ak&#305;&#351;&#305; gibi kablosuz ba&#287;lant&#305; &#252;zerinden gecikmeye duyarl&#305; uygulamalarda olumlu etkileri vard&#305;r."
	};

char* MLG_WLAN_BasicWirelessSetup_Str69[] = {
	"Auto",
	"Otomatik"
	};

char* MLG_WLAN_BasicWirelessSetup_Str72[] = {
	"Generate password",
	"parola olu&#351;turmak"
	};

char* MLG_WLAN_BasicWirelessSetup_Str73[] = {
	"Password strength",
	"&#350;ifre g&#252;c&#252;"
	};

char* MLG_WLAN_BasicWirelessSetup_Str74[] = {
	"very weak",
	"&#231;ok zay&#305;f"
	};

char* MLG_WLAN_BasicWirelessSetup_Str75[] = {
	"weak",
	"zay&#305;f"
	};

char* MLG_WLAN_BasicWirelessSetup_Str76[] = {
	"better",
	"daha iyi"
	};

char* MLG_WLAN_BasicWirelessSetup_Str77[] = {
	"medium",
	"orta"
	};

char* MLG_WLAN_BasicWirelessSetup_Str78[] = {
	"strong",
	"g&#252;&#231;l&#252;"
	};

char* MLG_WLAN_BasicWirelessSetup_Str79[] = {
	"very strong",
	"&#231;ok g&#252;&#231;l&#252;"
	};

char* MLG_WLAN_BasicWirelessSetup_Str7[] = {
	"5GHz",
	"5GHz"
	};

char* MLG_WLAN_BasicWirelessSetup_Str71[] = {
	"password unmask",
	"password unmask"
	};

char* MLG_WLAN_BasicWirelessSetup_Str8[] = {
	"Channel",
	"Kanal"
	};

char* MLG_WLAN_BasicWirelessSetup_Str9[] = {
	"Bandwidth",
	"Bant Geni&#351;li&#287;i"
	};

char* MLG_WLAN_BasicWirelessButtom_Str1[] = {
	"Enable WPS/WiFi Button",
	"Enable WPS/WiFi Button"
	};

char* MLG_WLAN_BasicWirelessSetup_EmailNotificationSetting[] = {
	"E-mail notification when the wireless guest visit",
	"E-mail notification when the wireless guest visit"
	};

char* MLG_WLAN_MACAuthentication_AlertMsg_Str1[] = {
	"No WLAN is enabled. Please enable WLAN to modify \'MAC Authenication\'.",
	"Kablosuz Yerel A&#287;  Etkin de&#287;ildir. L&#252;tfen \'MAC Kimlik Do&#287;rulamas&#305;n&#305;\' de&#287;i&#351;tirmek i&#231;in Kablosuz Yerel A&#287;&#305; etkinle&#351;tiriniz."
	};

char* MLG_WLAN_MACAuthentication_AlertMsg_Str2[] = {
	"The number of mac filter records is limited to 32.",
	"MAC Filtre kay&#305;t adedi 32 ile s&#305;n&#305;rl&#305;d&#305;r."
	};

char* MLG_WLAN_MACAuthentication_AlertMsg_Str3[] = {
	"Address {{1}} is duplicated MAC address.",
	"Adres {{1}}, yinelenen bir MAC adresidir."
	};

char* MLG_WLAN_MACAuthentication_AlertMsg_Str4[] = {
	"Address {{1}} is invalid MAC address.",
	"Adres {{1}, ge&#231;ersiz bir MAC adresidir."
	};

char* MLG_WLAN_MACAuthentication_Str1[] = {
	"MAC Authentication can allow or block the access of the device(s) to your wireless network. Edit the list in the table to decide the rule of the access on device(s).",
	"MAC Kimlik Do&#287;rulamas&#305;, cihaz&#305;n (lar) kablosuz a&#287;a eri&#351;imine izin verebilir veya eri&#351;imi engelleyebilir. Cihaz (lar) &#252;zerindeki eri&#351;im kural&#305;na karar vermek i&#231;in tablodaki listeyi d&#252;zenleyiniz."
	};

char* MLG_WLAN_MACAuthentication_Str10[] = {
	"Manual Input",
	"Manuel Giri&#351;"
	};

char* MLG_WLAN_MACAuthentication_Str11[] = {
	"MAC Filter Delete",
	"MAC Filtresi Sil"
	};

char* MLG_WLAN_MACAuthentication_Str12[] = {
	"This will delete the item. Please confirm this step.",
	"Bu, &#246;&#287;eyi silecektir. L&#252;tfen bu ad&#305;m&#305; onaylay&#305;n&#305;z."
	};

char* MLG_WLAN_MACAuthentication_Str13[] = {
	"MAC address List",
	"MAC Adres Listesi"
	};

char* MLG_WLAN_MACAuthentication_Str14[] = {
	"Note: If mode of first SSID 'allow' is choosed and MAC list is empty, WPS will be disabled",
	"Note: If mode of first SSID 'allow' is choosed and MAC list is empty, WPS will be disabled"
	};

char* MLG_WLAN_MACAuthentication_Str15[] = {
	"Note: The MAC list is empty, WPS will be disabled.",
	"Note: The MAC list is empty, WPS will be disabled."
	};

char* MLG_WLAN_MACAuthentication_Str2[] = {
	"MAC Restrict Mode",
	"MAC S&#305;n&#305;rlama Modu "
	};

char* MLG_WLAN_MACAuthentication_Str3[] = {
	"MAC List",
	"MAC Listesi"
	};

char* MLG_WLAN_MACAuthentication_Str4[] = {
	"MAC Address",
	"MAC Adresi"
	};

char* MLG_WLAN_MACAuthentication_Str5[] = {
	"MAC Filter Configuration",
	"MAC Filtre Konfig&#252;rasyonu"
	};

char* MLG_WLAN_MACAuthentication_Str6[] = {
	"Add to list by MAC address",
	"MAC adresine g&#246;re listeye ekle"
	};

char* MLG_WLAN_MACAuthentication_Str7[] = {
	"The number of mac filter records is limited to 32.",
	"MAC Filtre kay&#305;t adedi 32 ile s&#305;n&#305;rl&#305;d&#305;r."
	};

char* MLG_WLAN_MACAuthentication_Str8[] = {
	"To add a device, please enter device&rsquo;s MAC address",
	"Bir ayg&#305;t eklemek i&#231;in, cihaz&#305;n MAC adresini giriniz."
	};

char* MLG_WLAN_MACAuthentication_Str9[] = {
	"Select Device Info",
	"Ayg&#305;t Bilgisini se&#231;iniz."
	};

char* MLG_WLAN_WDS_AlertMsg_Str1[] = {
	"Wireless is disabled. Please set enabled in \'{{1}}\' page.",
	"Kablosuz ba&#287;lant&#305; devre d&#305;&#351;&#305;. L&#252;tfen \'{{1}}\' sayfas&#305;nda etkin se&#231;ene&#287;ini ayarlay&#305;n&#305;z."
	};

char* MLG_WLAN_WDS_AlertMsg_Str2[] = {
	"No needs to delete empty record.",
	"Bo&#351; bir kayd&#305; silmek gerekmez."
	};

char* MLG_WLAN_WDS_AlertMsg_Str3[] = {
	"Duplicate static lease information! Please check the MAC address.",
	"Ayn&#305; statik lease bilgisi! L&#252;tfen MAC adresini kontrol ediniz."
	};

char* MLG_WLAN_WDS_AlertMsg_Str4[] = {
	"Address {{1}} is multicast address, which is invalid remote bridge MAC address.",
	"Adres {{1}}, ge&#231;ersiz uzak k&#246;pr&#252; MAC adresi olan multicast bir adrestir."
	};

char* MLG_WLAN_WDS_Str1[] = {
	"This page allows you to set the operating mode of your CPE to Access Point (AP) or Wireless Bridge. Select Wireless Bridge to disable AP functionality. Select Access Point to enable the CPE to act as an access point while on bridge mode so that other wireless stations are still able to associate with the AP. Select Disable in Bridge Restrict to enable any wireless station to establish a wireless bridge connection to the CPE. Select Enable in Bridge Restrict to limit wireless bridge connections only to wireless stations listed in the table.",
	"Bu sayfa, CPE &#231;al&#305;&#351;ma modunu Eri&#351;im Noktas&#305; (AP) veya Kablosuz Ba&#287;lant&#305; K&#246;pr&#252;s&#252; i&#231;in ayarlaman&#305;z&#305; sa&#287;lar. AP i&#351;levini devre d&#305;&#351;&#305; b&#305;rakmak i&#231;in Kablosuz Ba&#287;lant&#305; K&#246;pr&#252;s&#252;n&#252; se&#231;iniz. K&#246;pr&#252; modunda iken CPE&#39; nin bir AP gibi hareket etmesini sa&#287;lamak i&#231;in eri&#351;im noktas&#305; se&#231;iniz, b&#246;ylece di&#287;er kablosuz ba&#287;lant&#305; istasyonlar&#305;n&#305; Eri&#351;im Noktas&#305; ile ili&#351;kilendirmek m&#252;mk&#252;n olur. CPE&#39; ye bir kablosuz k&#246;pr&#252; ba&#287;lant&#305;s&#305; kuracak herhangi bir kablosuz ba&#287;lant&#305; istasyonunu etkinle&#351;tirmek i&#231;in K&#246;pr&#252; S&#305;n&#305;rlamada Devre D&#305;&#351;&#305; B&#305;rak se&#231;ene&#287;ini se&#231;iniz. Sadece tabloda listelenen kablosuz ba&#287;lant&#305; istasyonlar&#305;na kablosuz k&#246;pr&#252; ba&#287;lant&#305;s&#305; hakk&#305; vermek i&#231;in K&#246;pr&#252; S&#305;n&#305;rlamada Etkinle&#351;tir se&#231;ene&#287;ini se&#231;in."
	};

char* MLG_WLAN_WDS_Str10[] = {
	"When Bridge Restrict is enabled, only the MAC Addresses entered in the table below will be able to WDS bridge to the {{1}} . <br> When Bridge Restrict is disabled, any WDS bridge may connect to the {{2}}. ",
	"K&#246;pr&#252; S&#305;n&#305;rlama etkinle&#351;tirildi&#287;inde, sadece tabloya girilmi&#351; a&#351;a&#287;&#305;daki MAC Adresleri {{1}} i&#231;in WDS k&#246;pr&#252;lemesi yapabilecektir. <br> K&#246;pr&#252; S&#305;n&#305;rlama devre d&#305;&#351;&#305; b&#305;rak&#305;ld&#305;&#287;&#305;nda, herhangi bir WDS k&#246;pr&#252;s&#252; {{2}}&#39; e ba&#287;lanabilir. "
	};

char* MLG_WLAN_WDS_Str11[] = {
	"1.The WDS function only works when the security mode is set to No Security, WEP, WPA-PSK and WPA2-PSK. <br> 2. The WDS connection security mode is based on the settings configured in the Wireless > General screen. <br> 3. The WDS function only works with the first SSID. <br> 4. If the AP mode is Wireless Bridge, WPS will be disabled. <br> 5. The SSID should be the same in both WPA-PSK or WPA2-PSK security modes.",
	"1. WDS fonksiyonu, sadece g&#252;venlik modu G&#252;venlik Yok, WEP, WPA-PSK ve WPA2-PSK olarak ayarland&#305;&#287;&#305;nda &#231;al&#305;&#351;&#305;r. <br> 2. WDS ba&#287;lant&#305; g&#252;venlik modu, Kablosuz> Genel ekran&#305;nda yap&#305;land&#305;r&#305;lan ayarlara dayanmaktad&#305;r. <br> 3. WDS fonksiyonu sadece ilk SSID ile &#231;al&#305;&#351;&#305;r. <br> 4. Eri&#351;im Noktas&#305; modu Kablosuz K&#246;pr&#252; ise, WPS devre d&#305;&#351;&#305; b&#305;rak&#305;lacakt&#305;r. <br> 5. SSID, hem WPA-PSK hem de WPA2-PSK g&#252;venlik modlar&#305;nda ayn&#305; olmal&#305;d&#305;r."
	};

char* MLG_WLAN_WDS_Str12[] = {
	"Scan",
	"Tara "
	};

char* MLG_WLAN_WDS_Str13[] = {
	"Remote Bridges MAC Address",
	"Uzak K&#246;pr&#252; MAC Adresi"
	};

char* MLG_WLAN_WDS_Str14[] = {
	"Modify list by MAC address",
	"MAC adresine g&#246;re listeyi de&#287;i&#351;tir"
	};

char* MLG_WLAN_WDS_Str15[] = {
	"To modify a device, please enter device&rsquo;s MAC address",
	"Bir cihaz&#305; de&#287;i&#351;tirmek i&#231;in, cihaz&#305;n MAC adresini giriniz"
	};

char* MLG_WLAN_WDS_Str16[] = {
	"Scan SSID",
	"SSID Tarama "
	};

char* MLG_WLAN_WDS_Str17[] = {
	"Wireless Bridge Scan Setup",
	"Kablosuz K&#246;pr&#252; Tarama Kurulumu"
	};

char* MLG_WLAN_WDS_Str18[] = {
	"WDS Delete",
	"WDS Silme"
	};

char* MLG_WLAN_WDS_Str2[] = {
	"When AP mode is set to {{1}} mode the {{2}} will: <br>     -Bridge to other WDS enabled wirless bridges <br>      -Allow WLAN clients to associate to {{3}}",
	"Eri&#351;im Noktas&#305; modu {{1}} moduna ayarland&#305;&#287;&#305;nda {{2}} ..... olacakt&#305;r: <br> - Di&#287;er WDS etkin kablosuz ba&#287;lant&#305; k&#246;pr&#252;leri i&#231;in <br> - WLAN istemcilerine {{3}} ili&#351;kilendirmesi i&#231;in izin ver "
	};

char* MLG_WLAN_WDS_Str3[] = {
	"When AP mode is set to {{1}} mode the {{2}} will:<br>     -Only bridge to other WDS enabled wireless bridges ",
	"Eri&#351;im Noktas&#305; modu {{1}} moduna ayarland&#305;&#287;&#305;nda {{2}} ..... olacakt&#305;r: <br> Sadece di&#287;er WDS etkin kablosuz ba&#287;lant&#305; k&#246;pr&#252;leri i&#231;in  "
	};

char* MLG_WLAN_WDS_Str4[] = {
	"Wireless Bridge Setup",
	"Kablosuz K&#246;pr&#252; Kurulumu"
	};

char* MLG_WLAN_WDS_Str5[] = {
	"AP Mode",
	"Eri&#351;im Noktas&#305;(AP) Modu"
	};

char* MLG_WLAN_WDS_Str6[] = {
	"Access Point",
	"Eri&#351;im Noktas&#305;"
	};

char* MLG_WLAN_WDS_Str7[] = {
	"Wireless Bridge",
	"Kablosuz K&#246;pr&#252;"
	};

char* MLG_WLAN_WDS_Str8[] = {
	"Remote Bridges MAC Address",
	"Uzak K&#246;pr&#252; MAC Adresi"
	};

char* MLG_WLAN_WDS_Str9[] = {
	"Bridge Restrict",
	"K&#246;pr&#252; S&#305;n&#305;rlama"
	};

char* MLG_WLAN_Wirelsss_Btn1[] = {
	"Register",
	"Kaydol"
	};

char* MLG_WLAN_Wirelsss_Btn2[] = {
	"Release Configuration",
	"Yap&#305;land&#305;rmay&#305; serbest b&#305;rak"
	};

char* MLG_WLAN_Wirelsss_Btn3[] = {
	"Generate New PIN Number",
	"Yeni PIN Numaras&#305; Olu&#351;tur"
	};

char* MLG_WLAN_Wirelsss_Btn4[] = {
	"Refresh",
	"Yenile "
	};

char* MLG_WLAN_Wirelsss_Btn5[] = {
	"Add new MAC address",
	"Yeni MAC adresi ekle"
	};

char* MLG_WLAN_Wirelsss_Btn6[] = {
	"Release Lock",
	"Release Lock"
	};

char* MLG_WLAN_WMM_Str1[] = {
	"Wi-Fi Multimedia (WMM) prioritizes traffic according to four standarized Access Categories - Voice, Video, Best Effort, and Background.",
	"Wi-Fi &#199;oklu Ortam&#305; (WMM), standart hale getirilmi&#351; d&#246;rt eri&#351;im kategorisine - Ses, Video, En &#304;yi Eri&#351;im ve Arka Plan -  g&#246;re trafi&#287;i &#246;nceliklendirir."
	};

char* MLG_WLAN_WMM_Str2[] = {
	"WMM may also enable Power Saving mechanisms from 802.11e and legacy 802.11 for fine-tuning power consumption.",
	"WMM ayr&#305;ca 802.11e ve standart 802.11&#39;de ince ayar g&#252;&#231; t&#252;ketimi i&#231;in  g&#252;&#231; tasarrufunu etkin hale getirebilir."
	};

char* MLG_WLAN_WMM_Str3[] = {
	"WMM (Wi-Fi Multimedia)",
	"WMM (Wi-Fi &#199;oklu Ortam&#305;)"
	};

char* MLG_WLAN_WMM_Str4[] = {
	"WMM",
	"WMM"
	};

char* MLG_WLAN_WMM_Str5[] = {
	"WMM Automatic Power Save Delivery(APSD)",
	"WMM Otomatik G&#252;&#231; Tasarrufu Da&#287;&#305;t&#305;m&#305; (APSD)"
	};

char* MLG_WLAN_WPS_AlertMsg_Str1[] = {
	"Basic SSID is not enabled. So WPS is not running.",
	"Temel SSID etkin de&#287;il. Bu y&#252;zden WPS &#231;al&#305;&#351;m&#305;yor."
	};

char* MLG_WLAN_WPS_AlertMsg_Str2[] = {
	"Invalid PIN number",
	"Ge&#231;ersiz PIN numaras&#305;"
	};

char* MLG_WLAN_WPS_AlertMsg_Str3[] = {
	"WPS does not support WEP security. You should change security in",
	"WPS, WEP g&#252;venli&#287;ini desteklemiyor. G&#252;venli&#287;i de&#287;i&#351;tirmeniz gerekir "
	};

char* MLG_WLAN_WPS_AlertMsg_Str4[] = {
	"Hide SSID does not support with WPS 2.0. You should disable it in",
	"WPS, WEP g&#252;venli&#287;ini desteklemiyor. G&#252;venli&#287;i de&#287;i&#351;tirmeniz gerekir "
	};

char* MLG_WLAN_WPS_AlertMsg_Str5[] = {
	"WPA-PSK can not work on WPS 2.0",
	"WPA-PSK çalışır olamaz WPS 2.0"
	};

char* MLG_WLAN_WPS_AlertMsg_Str6[] = {
	"Or disable WPS 2.0 in",
	"Veya devre d&#305;&#351;&#305; WPA 2.0"
	};

char* MLG_WLAN_WPS_AlertMsg_Str7[] = {
	"Warning! Before enable WPS you should add at least one MAC in allow list or change MAC restrict mode with first SSID in ",
	"Warning! Before enable WPS you should add at least one MAC in allow list or change MAC restrict mode with first SSID in "
	};

char* MLG_WLAN_WPS_AlertMsg_page[] = {
	"page",
	"sayfa"
	};

char* MLG_WLAN_WPS_AlertMsg_Others[] = {
	"Others",
	"Di&#287;er"
	};

char* MLG_WLAN_WPS_Str1[] = {
	"Wi-Fi Protected Setup (WPS) lets you set up wireless security easily. Select a method for establishing a WPS connection between the router and another WPS-compatible device.",
	" Wi-Fi Korumal&#305; Kurulum (WPS), kablosuz ba&#287;lant&#305; g&#252;venli&#287;inizi kolayca ayarlaman&#305;z&#305; sa&#287;lar. Y&#246;nlendirici ve ba&#351;ka bir WPS uyumlu cihaz aras&#305;nda bir WPS ba&#287;lant&#305;s&#305; kurmak i&#231;in bir y&#246;ntem se&#231;iniz.."
	};

char* MLG_WLAN_WPS_Str10[] = {
	"Enter the PIN of your wireless client and click \'Register\'",
	"Kablosuz istemcinizin PIN kodunu giriniz ve \'Kaydol\' se&#231;ene&#287;ine t&#305;klay&#305;n&#305;z."
	};

char* MLG_WLAN_WPS_Str11[] = {
	"Activate WPS on the wireless client within 2 minutes after clicking \'Connect\'",
	"\'Ba&#287;lan\' se&#231;ene&#287;ine t&#305;klad&#305;ktan sonra 2 dakika i&#231;inde kablosuz istemcide WPS&#39; yi etkinle&#351;tiriniz."
	};

char* MLG_WLAN_WPS_Str12[] = {
	"Enter AP&#39;s PIN Number in Wireless Client",
	"AP PIN Numaras&#305;n&#305; Kablosuz &#304;stemcisine giriniz"
	};

char* MLG_WLAN_Currnet[] = {
	"Current",
	"Ge&#231;erli"
	};

char* MLG_WLAN_WPS_Str13[] = {
	"Current state: Configured",
	"Ge&#231;erli durum: Konfig&#252;re edilmi&#351;"
	};

char* MLG_WLAN_WPS_Str13_1[] = {
	"Current state",
	"Ge&#231;erli durum"
	};

char* MLG_WLAN_WPS_Str14[] = {
	"Unconfigured",
	"Konfig&#252;re edilmemi&#351;"
	};

char* MLG_WLAN_WPS_Str15[] = {
	"Please release configuration if you want to configure the wireless settings",
	"Kablosuz ayarlar&#305;n&#305; yap&#305;land&#305;rmak istiyorsan&#305;z l&#252;tfen yap&#305;land&#305;rmay&#305; serbest b&#305;rak&#305;n&#305;z"
	};

char* MLG_WLAN_WPS_Str15_1[] = {
	"on your wireless client",
	"kablosuz istemcinizde"
	};

char* MLG_WLAN_WPS_Str16[] = {
	"Enter current PIN",
	"Ge&#231;erli PIN kodunu giriniz"
	};

char* MLG_WLAN_WPS_Str16_1[] = {
	"Enter current PIN",
	"Ge&#231;erli PIN kodunu giriniz"
	};

char* MLG_WLAN_WPS_Str16_2[] = {
	"on your wireless client",
	"kablosuz ba&#287;lant&#305; istemcinizde"
	};

char* MLG_WLAN_WPS_Str17[] = {
	"1. This function only works on the first SSID. <br> 2. Click the \'Release Configuration\' button to have the WPS status changed to \'Unconfigured\'. Otherwise, WPS status is in \'Configured\' mode.",
	"1. Bu i&#351;lev sadece ilk SSID&#39; de &#231;al&#305;&#351;&#305;r. <br> 2. WPS durumunu ''Yap&#305;land&#305;r&#305;lmam&#305;&#351;\' olarak de&#287;i&#351;tirmek i&#231;in \'Konfig&#252;rasyonu b&#305;rak\' d&#252;&#287;mesine t&#305;klay&#305;n. Aksi takdirde, WPS durumu \'Yap&#305;land&#305;r&#305;lm&#305;&#351;\' modunda kal&#305;r."
	};

char* MLG_WLAN_WPS_Str18[] = {
	"Adding a new device",
	"Yeni bir ayg&#305;t ekleme"
	};

char* MLG_WLAN_WPS_Str19[] = {
	"Establishing WPS connection.",
	"WPS ba&#287;lant&#305;s&#305; kuruluyor"
	};

char* MLG_WLAN_WPS_Str2[] = {
	"WPS settings will be applied to SSID: ",
	"WPS ayarlar&#305; SSID i&#231;in uygulanacakt&#305;r"
	};

char* MLG_WLAN_WPS_Str20[] = {
	"Press the WPS button on your new wireless client device now ({{1}} seconds left).",
	"&#350;imdi yeni kablosuz istemci cihaz&#305;n&#305;zdaki WPS d&#252;&#287;mesine bas&#305;n&#305;z. ({{1}} saniye kald&#305;)."
	};

char* MLG_WLAN_WPS_Str20_1[] = {
	"Press the WPS button on your new wireless client device now ",
	"&#350;imdi yeni kablosuz istemci cihaz&#305;n&#305;zdaki WPS d&#252;&#287;mesine bas&#305;n&#305;z. "
	};

char* MLG_WLAN_WPS_Str20_2[] = {
	"seconds left",
	"saniye kald&#305;"
	};

char* MLG_WLAN_WPS_Str21[] = {
	"WPS connection timeout.",
	"WPS ba&#287;lant&#305;s&#305; zaman&#305;nda tamamlanamad&#305;."
	};

char* MLG_WLAN_WPS_Str22[] = {
	"WPS success",
	"WPS ba&#351;ar&#305;l&#305;"
	};

char* MLG_WLAN_WPS_Str23[] = {
	"Unknown error happened.Please retry again",
	"Bilinmeyen hata olu&#351;tu. L&#252;tfen tekrar deneyiniz."
	};

char* MLG_WLAN_WPS_Str24[] = {
	"Pin error. Please input the correct pin of client.",
	" Pin hatas&#305;. L&#252;tfen do&#287;ru istemci pinini giriniz."
	};

char* MLG_WLAN_WPS_Str25[] = {
	"Please release lock if you want to configure the wireless settings",
	"Please release lock if you want to configure the wireless settings"
	};

char* MLG_WLAN_WPS_Str26[] = {
	"WPS PIN Feature",
	"WPS PIN Özelliği"
	};

char* MLG_WLAN_WPS_Str3[] = {
	"WPS Setup",
	"WPS Kurulumu"
	};

char* MLG_WLAN_WPS_Str4[] = {
	"WPS",
	"WPS"
	};

char* MLG_WLAN_WPS_Str5[] = {
	"Method",
	"Y&#246;ntem"
	};

char* MLG_WLAN_WPS_Str6[] = {
	"Push Button Configuration",
	"Butona Basarak Konfig&#252;rasyon"
	};

char* MLG_WLAN_WPS_Str7[] = {
	"Click \'Connect\'",
	"Ba&#287;lan&#39; t&#305;klay&#305;n&#305;z."
	};

char* MLG_WLAN_WPS_Str8[] = {
	"Activate WPS on the wireless client within 2 minutes after clicking &quot;Connect&quot;.",
	"\'Ba&#287;lan\' se&#231;ene&#287;ine t&#305;klad&#305;ktan sonra 2 dakika i&#231;inde kablosuz istemcide WPS&#39; i etkinle&#351;tiriniz."
	};

char* MLG_WLAN_WPS_Str9[] = {
	"Register Wireless Client PIN Number",
	"Kablosuz &#304;stemci PIN Numaras&#305;n&#305; Kaydedin"
	};

char* MLG_WLAN_Refresh_Str1[] = {
	"Restarting Wireless... Click menu in the left panel for manual refresh",
	"Kablosuz yeniden ba&#351;lat&#305;l&#305;yor... Manuel yenileme i&#231;in sol paneldeki men&#252;ye t&#305;klay&#305;n&#305;z"
	};

char* MLG_WLAN_WPA[] = {
	"WPA",
	"WPA"
	};

char* MLG_WLAN_WPA2[] = {
	"WPA2",
	"WPA2"
	};

char* MLG_WLAN_WPAPSK[] = {
	"WPA-PSK",
	"WPA-PSK"
	};

char* MLG_WLAN_WPA2PSK[] = {
	"WPA2-PSK",
	"WPA2-PSK"
	};

char* MLG_WLAN_TKIPAES[] = {
	"TKIP+AES",
	"TKIP+AES"
	};

char* MLG_WLAN_AES[] = {
	"AES",
	"AES"
	};

char* MLG_WLAN_ChannelStatus_Str1[] = {
	"The chart shows channel status",
	"Grafik, kanal durumunu g&#246;sterir"
	};

char* MLG_WLAN_ChannelStatus_Str2[] = {
	"Channel Monitor",
	"Kanal &#304;zleyicisi"
	};

char* MLG_WLAN_ChannelStatus_Str3[] = {
	"Scan Wireless LAN Channels",
	"Kablosuz LAN Kanallar&#305;n&#305; Tara"
	};

char* MLG_WLAN_ChannelStatus_Str4[] = {
	"It takes about 15 seconds to scan the wireless channels",
	"Kablosuz kanallar&#305; taramak yakla&#351;&#305;k 15 saniye s&#252;rer"
	};

char* MLG_WLAN_ChannelStatus_Str5[] = {
	"Channel Scan Result",
	"Kanal Tarama Sonucu"
	};

char* MLG_WLAN_ChannelStatus_Str6[] = {
	"Channel Noise",
	"Kanal G&#252;r&#252;lt&#252;s&#252;"
	};

char* MLG_WLAN_ChannelStatus_Str7[] = {
	"Current WLAN Channel",
	"Ge&#231;erli WLAN Kanal&#305;"
	};

char* MLG_WLAN_ChannelStatus_Str8[] = {
	"Channel NO.",
	"Kanal Numaras&#305;."
	};

char* MLG_WLAN_ChannelStatus_Str9[] = {
	"&nbsp;&nbsp;The value of Channel Noise is not an \'absolute value\' but a \'relative value\', so there is always a channel getting Channel Noise with 100.",
	"&nbsp;&nbsp; Kanal G&#252;r&#252;lt&#252; de&#287;eri \'mutlak bir de&#287;er\' de&#287;il \'g&#246;receli bir de&#287;erdir\', bu y&#252;zden Kanal G&#252;r&#252;lt&#252;s&#252; 100 olan bir kanal her zaman vard&#305;r."
	};

char* MLG_WLAN_ChannelStatus_Str10[] = {
	"Retrieve data failed, please press \'Scan\' to try again.",
	"Al veri ba&#351;ar&#305;s&#305;z, yeniden denemek i&#231;in \'Tarama\' tu&#351;una bas&#305;n l&#252;tfen."
	};

char* MLG_WLAN_ChannelStatus_Str11[] = {
	"This channel scan function only works in 2.4G Band with 20HMZ Bandwidth.",
	"Kanal tarama fonksiyonu sadece 20Mhz bant geni&#351;li&#287;iyle 2.4G band&#305;nda &#231;al&#305;&#351;&#305;r."
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str23[] = {
	"WPA Pre-Shared Key should be between 8 and 63 characters(a-z, A-Z, 0-9, \'-\', \'_\' and \'.\') or 64 hexadecimal digits.",
	"WPA Payla&#351;&#305;lan Anahtar&#305; 8 ve 63 karakter (a-z, A-Z, 0-9, \'-\', \'_\' ve \'.\')  veya 64 heksadesimal aras&#305;nda olmal&#305;d&#305;r."
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str24[] = {
	"Max clients should be between 1 and 32.",
	"Max istemcileri 1 ile 32 aras&#305;nda olmal&#305;d&#305;r."
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str25[] = {
	"You can disable wps 2.0 in",
	"Sen wps 2.0 devre d&#305;&#351;&#305; b&#305;rakabilirsiniz"
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str26[] = {
	"It is not allowed to configure SSID name like as \'FON ... etc\'.",
	"&#304;&#231;inde &#8216;FON&#8217; ve benzeri ifadelerin ge&#231;ti&#287;i a&#287; ad&#305; tan&#305;m&#305;na izin verilmemektedir."
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str27[] = {
	" No special characters in WLAN SSID !!",
	"(null)"
	};

char* MLG_WLAN_BasicWirelessSetup_AlertMsg_Str18_1[] = {
	"Found a non-ISO-8859-1 character at position: {{1}} in password 1, Please eliminate before continuing.",
	"&#351;ifre 1&#39;de {1} ISO-8859-1 olmayan bir karakter yer almaktad&#305;r, devam etmeden &#246;nce kald&#305;r&#305;n&#305;z."
	};

char* MLG_WLAN_WDS_AlertMsg_Str11[] = {
	"Wireless is disabled. Please set enabled in",
	"Kablosuz devre d&#305;&#351;&#305;. L&#252;tfen etkinle&#351;tiriniz."
	};

char* MLG_WLAN_WDS_Str12_1[] = {
	"Scanning...",
	"Tarama..."
	};

char* MLG_WLAN_General_Str1[] = {
	"Max clients",
	"Max istemcileri"
	};

char* MLG_WLAN_General_MaxUpstreamBandwidth[] = {
	"Max. Upstream Bandwidth",
	"Maksimum Upstream Bantgeni&#351;li&#287;i"
	};

char* MLG_WLAN_General_MaxDownstreamBandwidth[] = {
	"Max. Downstream Bandwidth",
	"Maksimum Downstream Bantgeni&#351;li&#287;i"
	};

char* MLG_WLAN_General_Str2[] = {
	"Maximum Bandwidth",
	"Maximum Bandwidth"
	};

char* MLG_WLAN_General_Max_Down_BW[] = {
	"Max. Downstream Bandwidth",
	"Maksimum Downstream Bantgeni&#351;li&#287;i"
	};

char* MLG_WLAN_General_Max_Up_BW[] = {
	"Max. Upstream Bandwidth",
	"Maksimum Upstream Bantgeni&#351;li&#287;i"
	};

char* MLG_WLAN_Other_power_save[] = {
	"RX Chain Power Save",
	"RX Chain Power Save"
	};

char* MLG_WLAN_Other_FrameBurst[] = {
	"XPress&#8482; Technology",
	"XPress&#8482; Technology"
	};

char* MLG_WLAN_Other_WPSV2[] = {
	"WPS 2.0",
	"WPS 2.0"
	};

char* MLG_WLAN_BasicWirelessSetup_Eircom_Str1[] = {
	"1. The different WEP key lengths configure different strength security, 40/64-bit, or 128-bit respectively. Your wireless client must match the security strength set on the router.",
	"1. The different WEP key lengths configure different strength security, 40/64-bit, or 128-bit respectively. Your wireless client must match the security strength set on the router."
	};

char* MLG_WLAN_BasicWirelessSetup_Eircom_Str2[] = {
	"2. Please type exactly 5, or 13 characters (5 will create a 64-bit key and 13 will create a 128-bit key)",
	"2. Please type exactly 5, or 13 characters (5 will create a 64-bit key and 13 will create a 128-bit key)"
	};

char* MLG_WLAN_BasicWirelessSetup_Eircom_Str3[] = {
	"3. Alternatively type exactly 10 or 26 Hexadecimal (numbers 0-9 or letters a-f) characters (10 will create a 64-bit key and 26 will create a 128-bit key).",
	"3. Alternatively type exactly 10 or 26 Hexadecimal (numbers 0-9 or letters a-f) characters (10 will create a 64-bit key and 26 will create a 128-bit key)."
	};

char* MLG_WLAN_BasicWirelessSetup_Note[] = {
	"Notes",
	"Notlar"
	};

char* MLG_WLAN_BasicWirelessSetup_80Mbps[] = {
	"80MHz",
	"80MHz"
	};

char* MLG_WLAN_BasicWirelessSetup_5g_str1[] = {
	"802.11h",
	"802.11h"
	};

char* MLG_WLAN_BasicWirelessSetup_5g_str2[] = {
	"802.11d",
	"802.11d"
	};

char* MLG_WLAN_BasicWirelessSetup_5g_str3[] = {
	"Regulatory Mode",
	"Regulatory Mode"
	};

char* MLG_WLAN_BasicWirelessSetup_5g_str4[] = {
	"Pre-Network Radar Check",
	"Pre-Network Radar Check"
	};

char* MLG_WLAN_BasicWirelessSetup_5g_str5[] = {
	"In-Network Radar Check",
	"In-Network Radar Check"
	};

char* MLG_WLAN_BasicWirelessSetup_5g_str6[] = {
	"TPC Mitigation(db)",
	"TPC Mitigation(db)"
	};

char* MLG_WLAN_BasicWirelessSetup_5g_str7[] = {
	"OBSS Coexistence",
	"OBSS Coexistence"
	};

char* MLG_WLAN_BasicWirelessSetup_rifs[] = {
	"RIFS Advertisement",
	"RIFS Advertisement"
	};

char* MLG_WLAN_PASSWORD_Str1[] = {
	"You had changed the wireless password. Please remember your new password.",
	"Modeminizin alt&#305;nda yazan varsay&#305;lan kablosuz &#351;ifrenizi de&#287;i&#351;tirdiniz. Kablosuz ba&#287;lant&#305; yaparken bu yeni &#351;ifrenizi kullanabilirsiniz."
	};

char* MLG_WLAN_moreapnote1[] = {
	"1.Max. Upstream Bandwidth:This field allow user configure the maximum bandwidth of this SSID to WAN.",
	"1. Maksimum Upstream Bantgeni&#351;li&#287;i: Bu alan kullan&#305;c&#305;ya, WAN taraf&#305;ndaki bir SSID'nin maksimum bantgeni&#351;li&#287;ini yap&#305;land&#305;rabilmesi i&#231;in izin verir."
	};

char* MLG_WLAN_moreapnote2[] = {
	"2.Max. Downstream Bandwidth:This field allow user configure the maximum bandwidth of WAN to this SSID.",
	"2. Maksimum Downstream Bantgeni&#351;li&#287;i: Bu alan kullan&#305;c&#305;ya, bu SSID &uuml;zerinden maksimum WAN bantgeni&#351;li&#287;i yap&#305;land&#305;rabilmesi i&#231;in izin verir."
	};

char* MLG_WLAN_moreapnote3[] = {
	"3.If Max. Upstream/Downstream Bandwidth is empty, the CPE sets the value automatically.",
	"3. E&#287;er Maksimum Upstream/Downstream Bantgeni&#351;li&#287;i alan&#305; bo&#351; ise, CPE bu de&#287;eri otomatik olarak atayacakt&#305;r."
	};

char* MLG_WLAN_parent_control_err2[] = {
	"Hide SSID does not support on WPS 2.0. You should disable wps in {{1}} page.",
	"SSID Gizle özelliği WPS 2.0'da desteklenmemektedir. Önce {{1}} sayfasından wps'i devre ."
	};

char* MLG_WLAN_bandwidth_err1[] = {
	"Invalid maximum bandwidth.",
	"Geçersiz maksimum bantgenişliği."
	};


MAPPING_ITEM WLANMappingItem[292];
