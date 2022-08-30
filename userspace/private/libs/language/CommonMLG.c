#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include "languages.h"



char* MLG_Common_128bit[] = {
	"128-bit",
	"128-bit"
	};

char* MLG_Common_64bit[] = {
	"64-bit",
	"64-bit"
	};

char* MLG_Common_80211b[] = {
	"802.11b Only",
	"Sadece 802.11b"
	};

char* MLG_Common_80211bg[] = {
	"802.11b/g Mixed",
	"Karışık 802.11b / g"
	};

char* MLG_Common_80211bgn[] = {
	"802.11b/g/n Mixed",
	"Karışık  802.11b/g/n"
	};

char* MLG_Common_80211g[] = {
	"802.11g Only",
	"Sadece 802.11g"
	};

char* MLG_Common_80211n[] = {
	"802.11n Only",
	"Sadece 802.11n"
	};

char* MLG_Common_IPv4Only[] = {
	"IPv4 Only",
	"Sadece IPv4"
	};

char* MLG_Common_IPv6Only[] = {
	"IPv6 Only",
	"Sadece IPv6"
	};

char* MLG_Common_IPv6IPv4_DualStack[] = {
	"IPv6/IPv4 DualStack",
	"IPv6/IPv4 DualStack"
	};

char* MLG_Common_8021Q[] = {
	"802.1Q",
	"802.1Q"
	};

char* MLG_Common_Action[] = {
	"Action",
	"Eylem"
	};

char* MLG_Common_Active[] = {
	"Active",
	"Aktif"
	};

char* MLG_Common_Passive[] = {
	"Passive",
	"Pasif"
	};

char* MLG_Common_Add[] = {
	"Add",
	"Ekle "
	};

char* MLG_Common_ADSL[] = {
	"ADSL",
	"ADSL"
	};

char* MLG_Common_ADSLoverATM[] = {
	"ADSL over ATM",
	"ATM &#252;zerinden ADSL"
	};

char* MLG_Common_ADSLoverPTM[] = {
	"ADSL over PTM",
	"PTM &#252;zerinden ADSL"
	};

char* MLG_Common_AES[] = {
	"AES",
	"AES"
	};

char* MLG_Common_Alert[] = {
	"Alert",
	"&#214;nemli Uyar&#305;"
	};

char* MLG_Common_AlertMsg_Str1[] = {
	"The username or password is not correct.",
	"Kullan&#305;c&#305; ad&#305; veya &#351;ifre yanl&#305;&#351;."
	};

char* MLG_Common_AlertMsg_Str2[] = {
	"Password is required.",
	"&#350;ifre gereklidir."
	};

char* MLG_Common_AlertMsg_Str3[] = {
	"Are you sure you want to logout ?",
	"Oturumu kapatmak istedi&#287;inizden emin misiniz?"
	};

char* MLG_Common_AlertMsg_Str4[] = {
	"Are you sure you want to delete it ?",
	"Bunu silmek istedi&#287;inizden emin misiniz?"
	};

char* MLG_Common_Allow[] = {
	"Allow",
	"&#304;zin ver"
	};

char* MLG_Common_Apply[] = {
	"Apply",
	"Uygula"
	};

char* MLG_Common_ARP[] = {
	"ARP",
	"ARP"
	};

char* MLG_Common_ATM[] = {
	"ATM",
	"ATM"
	};

char* MLG_Common_Auto[] = {
	"Auto",
	"Otomatik"
	};

char* MLG_Common_Back[] = {
	"Back",
	"Geri"
	};

char* MLG_Common_Bridge[] = {
	"Bridge",
	"K&#246;pr&#252;"
	};

char* MLG_Common_Cancel[] = {
	"Cancel",
	"İptal et"
	};

char* MLG_Common_Update[] = {
	"Update",
	"G&#252;ncelle"
	};

char* MLG_Common_Cellular[] = {
	"Cellular",
	"H&#252;cresel"
	};

char* MLG_Common_Close[] = {
	"Close",
	"Kapat"
	};

char* MLG_Common_LoadSigned[] = {
	"Load_Signed",
	"Y&#252;k_&#304;mzal&#305;"
	};

char* MLG_Common_Configuration[] = {
	"Configuration",
	"Konfig&#252;rasyon"
	};

char* MLG_Common_Configured[] = {
	"Configured",
	"Konfig&#252;re edilmi&#351;"
	};

char* MLG_Common_Locked[] = {
	"Locked",
	"(null)"
	};

char* MLG_Common_Confirm[] = {
	"Confirm",
	"Onayla"
	};

char* MLG_Common_Connect[] = {
	"Connect",
	"Ba&#287;lan"
	};

char* MLG_Common_Day[] = {
	"Day",
	"G&#252;n"
	};

char* MLG_Common_Days[] = {
	"day",
	"g&#252;n"
	};

char* MLG_Common_Default[] = {
	"Default",
	"Varsay&#305;lan"
	};

char* MLG_Common_Delete[] = {
	"Delete",
	"Sil"
	};

char* MLG_Common_DeleteAlertMsg[] = {
	"This will delete the item. Please Confirm this step.",
	"Bu, &#246;&#287;eyi silecektir. L&#252;tfen bu ad&#305;m&#305; onaylay&#305;n&#305;z."
	};

char* MLG_Common_Deny[] = {
	"Deny",
	"Reddet"
	};

char* MLG_Common_Description[] = {
	"Description",
	"A&#231;&#305;klama"
	};

char* MLG_Common_Device[] = {
	"Device",
	"Cihaz"
	};

char* MLG_Common_DHCP[] = {
	"DHCP",
	"DHCP"
	};

char* MLG_Common_DHCPDisable[] = {
	"Disable",
	"Devre D&#305;&#351;&#305; B&#305;rak"
	};

char* MLG_Common_DHCPRelay[] = {
	"Relay",
	"Aktar"
	};

char* MLG_Common_DHCPServer[] = {
	"Server",
	"Sunucu"
	};

char* MLG_Common_Disable[] = {
	"Disable",
	"Devre D&#305;&#351;&#305; B&#305;rak"
	};

char* MLG_Common_Disabled[] = {
	"Disabled",
	"Devre d&#305;&#351;&#305;"
	};

char* MLG_Common_Disconnect[] = {
	"Disconnect",
	"Ba&#287;lant&#305;y&#305; kes"
	};

char* MLG_Common_DNS[] = {
	"DNS",
	"DNS"
	};

char* MLG_Common_Down[] = {
	"Down",
	"A&#351;a&#287;&#305;"
	};

char* MLG_Common_Downstream[] = {
	"Downstream",
	"Downstream"
	};

char* MLG_Common_DSCP[] = {
	"DSCP",
	"DSCP"
	};

char* MLG_Common_Edit[] = {
	"Edit",
	"D&#252;zenle"
	};

char* MLG_Common_Enable[] = {
	"Enable",
	"Etkin"
	};

char* MLG_Common_Enabled[] = {
	"Enabled",
	"Etkin"
	};

char* MLG_Common_Error[] = {
	"Error",
	"Hata"
	};

char* MLG_Common_EthernetWAN[] = {
	"Ethernet WAN",
	"Ethernet WAN"
	};

char* MLG_Common_FilePath[] = {
	"File Path",
	"Dosya Yolu"
	};

char* MLG_Common_Fixed[] = {
	"Fixed",
	"Sabit"
	};

char* MLG_Common_FRI[] = {
	"FRI",
	"FRI"
	};

char* MLG_Common_From[] = {
	"From",
	"Kaynak"
	};

char* MLG_Common_Full[] = {
	"Full",
	"Tam"
	};

char* MLG_Common_General[] = {
	"General",
	"Genel"
	};

char* MLG_Common_Half[] = {
	"Half",
	"Yar&#305;m"
	};

char* MLG_Common_High[] = {
	"High",
	"Y&#252;ksek"
	};

char* MLG_Common_Home[] = {
	"Home",
	"Ana Sayfa"
	};

char* MLG_Common_Hour[] = {
	"hour",
	"saat"
	};

char* MLG_Common_ICMP[] = {
	"ICMP",
	"ICMP"
	};

char* MLG_Common_IGMP[] = {
	"IGMP",
	"IGMP"
	};

char* MLG_Common_MLD[] = {
	"MLD",
	"MLD"
	};

char* MLG_Common_Information[] = {
	"Information",
	"Bilgi"
	};

char* MLG_Common_IP[] = {
	"IP",
	"IP"
	};

char* MLG_Common_IPAddress[] = {
	"IPv4 Address",
	"IP Adresi"
	};

char* MLG_Common_IPv6Address[] = {
	"IPv6 Address",
	"IPv6 Adresi"
	};

char* MLG_Common_IPoA[] = {
	"IPoA",
	"IPoA"
	};

char* MLG_Common_IPoE[] = {
	"IPoE",
	"IPoE"
	};

char* MLG_Common_IPSubnetMask[] = {
	"IPv4 Subnet Mask",
	"IP Alt A&#287; Maskesi"
	};

char* MLG_Common_WAN_SubnetMask[] = {
	"WAN Subnet Mask",
	"WAN Alt A&#287; Maskesi"
	};

char* MLG_Common_UpTime[] = {
	"IPv4 Uptime",
	"IPv4 Uptime"
	};

char* MLG_Common_v6UpTime[] = {
	"IPv6 Uptime",
	"(null)"
	};

char* MLG_Common_Kbps[] = {
	"kbps",
	"kbps"
	};

char* MLG_Common_WLAN[] = {
	"WLAN",
	"Kablosuz Yerel A&#287; (WLAN)"
	};

char* MLG_Common_LAN[] = {
	"LAN",
	"Yerel A&#287; (LAN)"
	};

char* MLG_Common_Link[] = {
	"Link",
	"Link"
	};

char* MLG_Common_Loading[] = {
	"Loading&#8230;",
	"Y&#252;kleniyor&#8230;"
	};

char* MLG_Common_Login[] = {
	"Login",
	"Oturum a&#231;"
	};

char* MLG_Common_Telenor_Login[] = {
	"Logg inn",
	"Oturum a&#231;"
	};

char* MLG_Common_LoginMsg[] = {
	"It is highly recommended to setup a new password instead of using the default one for security concerns. The password must contain 4 to 256 characters, include 0-9 and a-z.",
	"G&#252;venli&#287;iniz nedeniyle varsay&#305;lan &#351;ifreyi kullanmak yerine yeni bir &#351;ifre belirlemeniz &#246;nemle tavsiye edilir. &#350;ifre, 0 - 9 ve a - z aras&#305;ndan se&#231;ilen 4 ile 256 karakterden olu&#351;mal&#305;d&#305;r."
	};

char* MLG_Common_LoginMsg_Retail[] = {
	"It is highly recommended to setup a new password instead of using the default one for security concerns. The password must contain 6 to 20 characters, include 0-9 and a-z.",
	"G&#252;venli&#287;iniz nedeniyle varsay&#305;lan &#351;ifreyi kullanmak yerine yeni bir &#351;ifre belirlemeniz &#246;nemle tavsiye edilir. &#350;ifre, 0 - 9 ve a - z aras&#305;ndan se&#231;ilen 6 ile 20 karakterden olu&#351;mal&#305;d&#305;r."
	};

char* MLG_Common_LoginMsg_Retail1[] = {
	"It is highly recommended to setup a new password instead of using the default one for security concerns. The password must contain numbers and letters together. It should not have more than 3 increasing, decreasing or repeating characters from minimum 8 characters up to 256 characters.",
	"G&#252;venli&#287;iniz nedeniyle varsay&#305;lan &#351;ifreyi kullanmak yerine yeni bir &#351;ifre ile belirlemeniz &#246;nemle tavsiye edilir. &#350;ifre i&#231;inde rakam ve harf birlikte bulunduracak &#351;ekilde, 3&#8217;ten fazla artan, azalan veya tekrar eden karakterlerin bulunmad&#305;&#287;&#305; 8 ile 256 aras&#305; karakterden olu&#351;mal&#305;d&#305;r."
	};

char* MLG_Common_LoginMsg_Str1[] = {
	"Your modem is currently using the randomly generated unique password. For convenience you may wish to change this password to a new password that will be easy to remember yet difficult for others to guess. We suggest you combine text with numbers.",
	"(null)"
	};

char* MLG_Common_LoginMsg_Str2[] = {
	"Enter your new password in the field below and click &#34;Apply&#34;. Otherwise click &#34;Skip&#34; to keep the default password.",
	"(null)"
	};

char* MLG_Common_LockoutMsg_Str1[] = {
	"You have been locked out of your modem's configuration utility for 10 minutes due to failed attempted logins with an incorrect password.",
	"(null)"
	};

char* MLG_Common_LockoutMsg_Str2[] = {
	"You can clear this lock out by powering your modem off and on again.",
	"(null)"
	};

char* MLG_Common_LockoutMsg_Str3[] = {
	"This lock out does not affect the internet connectivity of your modem.",
	"(null)"
	};

char* MLG_Common_LockoutMsg_Str4[] = {
	"Click button to manually retry.",
	"(null)"
	};

char* MLG_Common_Login_AlertMsg_Str1[] = {
	"Username is required.",
	"Kullan&#305;c&#305; Ad&#305; gerekli"
	};

char* MLG_Common_Login_AlertMsg_Str2[] = {
	"Password is required.",
	"&#350;ifre gerekli"
	};

char* MLG_Common_Login_AlertMsg_Str3[] = {
	"The username or password is not correct.",
	"Kullan&#305;c&#305; ad&#305; veya &#351;ifre yanl&#305;&#351;t&#305;r."
	};

char* MLG_Common_Login_AlertMsg_Str4[] = {
	"The password is not correct.",
	"&#350;ifre yanl&#305;&#351;t&#305;r."
	};

char* MLG_Common_Login_AlertMsg_Str5[] = {
	"Please enable javascript in the browser.",
	"L&#252;tfen taray&#305;c&#305;n&#305;zda JavaScript&#39; i etkinle&#351;tiriniz."
	};

char* MLG_Common_Login_AlertMsg_Str6[] = {
	"The Verify New Password is not correct.",
	"Yeni &#350;ifreyi Do&#287;rulama yanl&#305;&#351;t&#305;r."
	};

char* MLG_Common_Login_AlertMsg_Str7[] = {
	"The New Password is not correct",
	"Yeni &#350;ifre yanl&#305;&#351;t&#305;r."
	};

char* MLG_Common_Login_AlertMsg_Str8[] = {
	"Please verify the password and try again.",
	"L&#252;tfen &#351;ifreyi do&#287;rulay&#305;n ve yeniden deneyiniz."
	};

char* MLG_Common_Login_AlertMsg_Str9[] = {
	"The password can not be the empty",
	"&#350;ifre alan&#305; bo&#351; olamaz."
	};

char* MLG_Common_Login_AlertMsg_Str10[] = {
	"The characters in password cannot contain your username.",
	"&#350;ifredeki karakterler ad&#305;n&#305;z&#305; i&#231;eremez."
	};

char* MLG_Common_Login_AlertMsg_Str11[] = {
	"The password must contain at least one numeric character and one alpha character.",
	"&#350;ifre, en az bir say&#305;sal karakter ve bir alfa karakter i&#231;ermelidir."
	};

char* MLG_Common_Login_AlertMsg_Str12[] = {
	"The password must contain 4 to 256 characters.",
	"&#350;ifre, 4 ile 256 aras&#305; karakterden olu&#351;mal&#305;d&#305;r."
	};

char* MLG_Common_Login_AlertMsg_Str13[] = {
	"It is suggested to change your password and note it down.",
	"&#350;ifrenizi de&#287;i&#351;tirmeniz ve bir yere not etmeniz &#246;nerilir."
	};

char* MLG_Common_Login_AlertMsg_Str14[] = {
	"A user has logined. Please wait.",
	"(null)"
	};

char* MLG_Common_Login_AlertMsg_Str15[] = {
	"The password must contain 6 to 20 characters.",
	"&#350;ifre, 6 ile 20 aras&#305; karakterden olu&#351;mal&#305;d&#305;r."
	};

char* MLG_Common_Login_AlertMsg_Str16[] = {
	"The password must contain 8 to 256 characters.",
	"&#350;ifre, 8 ile 256 aras&#305; karakterden olu&#351;mal&#305;d&#305;r."
	};

char* MLG_Common_Login_Str1[] = {
	"Welcome to",
	"Ho&#351; geldiniz"
	};

char* MLG_Common_Login_Str2[] = {
	"Welcome",
	"Ho&#351; geldiniz"
	};

char* MLG_Common_Minute[] = {
	"minutes",
	"dakika"
	};

char* MLG_Common_Telenor_Login_Str1[] = {
	"Velkommen",
	"Ho&#351; geldiniz"
	};

char* MLG_Common_Login_Str3[] = {
	"Welcome to {{1}} configuration interface. Please enter username and password to login. ",
	"{{1}} Yap&#305;land&#305;rma ara y&#252;z&#252;ne ho&#351; geldiniz. Giri&#351; yapmak i&#231;in l&#252;tfen kullan&#305;c&#305; ad&#305;n&#305;z&#305; ve &#351;ifrenizi giriniz."
	};

char* MLG_Common_Login_Str4[] = {
	"Welcome to the Web-Based Configurator",
	"Web Tabanl&#305; Yap&#305;land&#305;r&#305;c&#305;ya ho&#351; geldiniz"
	};

char* MLG_Common_Login_Str5[] = {
	"Your default password is the same as the Wireless Security Key printed on the label on the underside of your modem ",
	"(null)"
	};

char* MLG_Common_Telenor_Login_Str2[] = {
	"Velkommen til konfigureringssidene for Telenors ",
	"(null)"
	};

char* MLG_Common_Telenor_Login_Str3[] = {
	" multimodem. Skriv inn brukernavn og passord for &#229; f&#229; tilgang. ",
	"(null)"
	};

char* MLG_Common_TelenorNorwayStaticText[] = {
	"Ditt sambandsnummer er:",
	"(null)"
	};

char* MLG_Common_TelenorNorwayNoteHead1[] = {
	"Privatkunder:",
	"(null)"
	};

char* MLG_Common_TelenorNorwayNote1[] = {
	"For &#229; logge inn p&#229; modemet benytter du f&#248;lgende:",
	"(null)"
	};

char* MLG_Common_TelenorNorwayNote2[] = {
	"&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Brukernavn: admin",
	"(null)"
	};

char* MLG_Common_TelenorNorwayNote3[] = {
	" dette finner du p&#229; lappen under modemet etter teksten",
	"(null)"
	};

char* MLG_Common_TelenorNorwayNote4[] = {
	"&#171;WPA2&#187; og best&#229;r av 13 sm&#229; bokstaver.",
	"(null)"
	};

char* MLG_Common_TelenorNorwayNote5[] = {
	"Skal du endre dine tr&#229;dl&#248;se innstillinger: nettverksnavn og nettverkspassord (krypteringsn&#248;kkel) anbefaler Telenor at du gj&#248;r dette p&#229;&nbsp;&#171;Mine Sider&#187; <a href=http://www.telenor.no/minesider/><FONT size=2>www.telenor.no/minesider</FONT></a>.",
	"(null)"
	};

char* MLG_Common_TelenorNorwayNote6[] = {
	"Da vil dine innstillinger bli lagret og modemet automatisk oppdatert dersom du bytter det eller m&#229; nullstille det.",
	"(null)"
	};

char* MLG_Common_TelenorNorwayNote7[] = {
	"Trenger du hjelp med modeminnstillinger kan du kontakte&nbsp;&#171;Telenoreksperten&#187; p&#229; telefon: <nobr>820 90 100.</nobr>",
	"(null)"
	};

char* MLG_Common_TelenorNorwayNote8[] = {
	"OBS: endring av modeminnstillinger kan medf&#248;re redusert ytelse og sikkerhet i ditt nettverk. Telenor anbefaler derfor at du kontakter&nbsp;&#171;Telenoreksperten&#187; dersom du har behov for dette.",
	"(null)"
	};

char* MLG_Common_TelenorNorwayNoteHead2[] = {
	"Bedriftskunder:",
	"(null)"
	};

char* MLG_Common_TelenorNorwayNote9[] = {
	"For &#229; logge inn p&#229; modemet benytter du f&#248;lgende:",
	"(null)"
	};

char* MLG_Common_TelenorNorwayNote10[] = {
	"&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Brukernavn: admin",
	"(null)"
	};

char* MLG_Common_TelenorNorwayNote11[] = {
	"vet du ikke ditt admin passord kan du kontakte&nbsp;&#171;Kundeservice&#187; p&#229; telefon: 05000.",
	"(null)"
	};

char* MLG_Common_TelenorNorwayNote12[] = {
	"Hilsen Telenor",
	"(null)"
	};

char* MLG_Common_Loginsum_AlertMsg_Str1[] = {
	"Password verification fail.",
	"&#350;ifre do&#287;rulama ba&#351;ar&#305;s&#305;z."
	};

char* MLG_Common_Loginsum_Str1[] = {
	"Hello",
	"Merhaba"
	};

char* MLG_Common_Loginsum_Str2[] = {
	"Welcome to the TELUS {{1}}. <br>Please change your password to secure your home gateway.",
	"TELUS VSG1432&#39; ye ho&#351; geldiniz. <br> L&#252;tfen ev a&#287; ge&#231;idinizin g&#252;venli&#287;i i&#231;in &#351;ifrenizi de&#287;i&#351;tiriniz."
	};

char* MLG_Common_Loginsum_Str3[] = {
	"New Password",
	"Yeni &#350;ifre"
	};

char* MLG_Common_Loginsum_Str4[] = {
	"Verify New Password",
	"Yeni &#350;ifreyi Do&#287;rula"
	};

char* MLG_Common_Loginsum_Str5[] = {
	"Remind me later",
	"Daha sonra hat&#305;rlat"
	};

char* MLG_Common_Loginsum_Str6[] = {
	"Change password",
	"&#350;ifreyi de&#287;i&#351;tir"
	};

char* MLG_Common_Loginsum_Str7[] = {
	"Do not remind me again",
	"Tekrar hat&#305;rlatma"
	};

char* MLG_Common_Loginsum_Str8[] = {
	"Retype New Password",
	"Tekrar Yeni &#350;ifre"
	};

char* MLG_Common_Logout[] = {
	"Logout",
	"&#199;&#305;k&#305;&#351;"
	};

char* MLG_Common_Long[] = {
	"Long",
	"Uzun"
	};

char* MLG_Common_Low[] = {
	"Low",
	"D&#252;&#351;&#252;k"
	};

char* MLG_Common_MACAddress[] = {
	"MAC Address",
	"MAC Adresi"
	};

char* MLG_Common_ManualInput[] = {
	"Manual Input",
	"Manuel Giri&#351;"
	};

char* MLG_Common_Manual[] = {
	"Manual",
	"Manuel"
	};

char* MLG_Common_Medium[] = {
	"Medium",
	"Orta"
	};

char* MLG_Common_Message[] = {
	"Message",
	"Mesaj"
	};

char* MLG_Common_MixedWPAWPA2[] = {
	"Mixed WPA2/WPA",
	"Kar&#305;&#351;&#305;k WPA2/WPA"
	};

char* MLG_Common_MixedWPAWPA2PSK[] = {
	"Mixed WPA2-PSK/WPA-PSK",
	"Kar&#305;&#351;&#305;k WPA2-PSK/WPA-PSK"
	};

char* MLG_Common_MoCA[] = {
	"MoCA",
	"MoCA"
	};

char* MLG_Common_Mode[] = {
	"Mode",
	"Mod"
	};

char* MLG_Common_Modify[] = {
	"Modify",
	"De&#287;i&#351;tir"
	};

char* MLG_Common_TRUE[] = {
	"TRUE",
	"ger&#231;ek"
	};

char* MLG_Common_MON[] = {
	"MON",
	"PZT"
	};

char* MLG_Common_Monitor[] = {
	"Monitor",
	"&#304;zle"
	};

char* MLG_Common_NA[] = {
	"N/A",
	"N/A"
	};

char* MLG_Common_Name[] = {
	"Name",
	"Ad&#305;"
	};

char* MLG_Common_No[] = {
	"No",
	"Hayır"
	};

char* MLG_Common_NoLink[] = {
	"NoLink",
	"Ba&#287;lant&#305; Yok"
	};

char* MLG_Common_None[] = {
	"None",
	"Hi&#231;biri"
	};

char* MLG_Common_NoSecurity1[] = {
	"No Security",
	"G&#252;venlik Yok"
	};

char* MLG_Common_NoSecurity2[] = {
	"NO SECURITY",
	"G&#220;VENL&#304;K YOK"
	};

char* MLG_Common_Note[] = {
	"Note",
	"Not Ediniz"
	};

char* MLG_Common_Notes[] = {
	"Notes",
	"Notlar"
	};

char* MLG_Common_noVDSLoverATM[] = {
	"Not support VDSL over ATM",
	"ATM &#252;zerinden VDSL desteklenmiyor"
	};

char* MLG_Common_Off[] = {
	"Off",
	"Kapal&#305;"
	};

char* MLG_Common_OK[] = {
	"OK",
	"TAMAM"
	};

char* MLG_Common_On[] = {
	"On",
	"A&#231;&#305;k"
	};

char* MLG_Common_Open[] = {
	"Open",
	"A&#231;&#305;k"
	};

char* MLG_Common_Password[] = {
	"Password",
	"&#350;ifre"
	};

char* MLG_Common_Telenor_Password[] = {
	"Passord",
	"&#350;ifre"
	};

char* MLG_Common_VerifyPassword[] = {
	"Verify Password",
	"&#350;ifreyi Do&#287;rula"
	};

char* MLG_Common_PPPoA[] = {
	"PPPoA",
	"PPPoA"
	};

char* MLG_Common_PPPoE[] = {
	"PPPoE",
	"PPPoE"
	};

char* MLG_Common_PTM[] = {
	"PTM",
	"PTM"
	};

char* MLG_Common_RefreshInterval[] = {
	"Refresh Interval",
	"Yenileme S&#305;kl&#305;&#287;&#305;"
	};

char* MLG_Common_Release[] = {
	"Release",
	"S&#252;r&#252;m"
	};

char* MLG_Common_Renew[] = {
	"Renew",
	"Yenile"
	};

char* MLG_Common_RenewIP[] = {
	"Renew IP",
	"IP Yenile"
	};

char* MLG_Common_SAT[] = {
	"SAT",
	"CMT"
	};

char* MLG_Common_Save[] = {
	"Save",
	"Kaydet"
	};

char* MLG_Common_Sec[] = {
	"sec",
	"saniye"
	};

char* MLG_Common_Second[] = {
	"second",
	"saniye"
	};

char* MLG_Common_Seconds[] = {
	"Seconds",
	"Saniye"
	};

char* MLG_Common_Settings[] = {
	"Settings",
	"Ayarlar"
	};

char* MLG_Common_Set[] = {
	"Set",
	"Ayarla"
	};

char* MLG_Common_Short[] = {
	"Short",
	"K&#305;sa"
	};

char* MLG_Common_State[] = {
	"State",
	"Durum"
	};

char* MLG_Common_Status[] = {
	"Status",
	"Durum"
	};

char* MLG_Common_SubnetMask[] = {
	"Subnet Mask",
	"Alt a&#287; maskesi"
	};

char* MLG_Common_SUN[] = {
	"SUN",
	"PAZ"
	};

char* MLG_Common_TCP[] = {
	"TCP",
	"TCP"
	};

char* MLG_Common_THU[] = {
	"THU",
	"PER"
	};

char* MLG_Common_Time[] = {
	"Time",
	"S&#252;re"
	};

char* MLG_Common_TKIP[] = {
	"TKIP",
	"TKIP"
	};

char* MLG_Common_TKIPAES[] = {
	"TKIP+AES",
	"TKIP+AES"
	};

char* MLG_Common_To[] = {
	"To",
	"Hedef"
	};

char* MLG_Common_TUE[] = {
	"TUE",
	"SAL"
	};

char* MLG_Common_Type[] = {
	"Type",
	"T&#252;r"
	};

char* MLG_Common_UDP[] = {
	"UDP",
	"UDP"
	};

char* MLG_Common_Unconfigured[] = {
	"Unconfigured",
	"Yap&#305;land&#305;r&#305;lmam&#305;&#351;"
	};

char* MLG_Common_Unknown[] = {
	"unknown",
	"bilinmeyen"
	};

char* MLG_Common_UP[] = {
	"Up",
	"Yukar&#305;"
	};

char* MLG_Common_Upload[] = {
	"Upload",
	"Y&#252;kle"
	};

char* MLG_Common_Upstream[] = {
	"Upstream",
	"Upstream"
	};

char* MLG_Common_UserDefined[] = {
	"User Defined",
	"Kullan&#305;c&#305; Tan&#305;ml&#305;"
	};

char* MLG_Common_Username[] = {
	"Username",
	"Kullan&#305;c&#305; Ad&#305;"
	};

char* MLG_Common_Telenor_Username[] = {
	"Brukernavn:",
	"Kullan&#305;c&#305; Ad&#305;"
	};

char* MLG_Common_User_Name[] = {
	"User Name",
	"Kullan&#305;c&#305; Ad&#305;"
	};

char* MLG_Common_Variable[] = {
	"Variable",
	"De&#287;i&#351;ken"
	};

char* MLG_Common_VDSL[] = {
	"VDSL",
	"VDSL"
	};

char* MLG_Common_View[] = {
	"View",
	"G&#246;r&#252;nt&#252;le"
	};

char* MLG_Common_ViewingMode[] = {
	"Viewing mode ",
	"G&#246;r&#252;nt&#252;leme modu "
	};

char* MLG_Common_VLANID[] = {
	"VLAN ID",
	"VLAN ID"
	};

char* MLG_Common_WAN[] = {
	"WAN",
	"WAN"
	};

char* MLG_Common_Port[] = {
	"Port",
	"Port"
	};

char* MLG_Common_Warning[] = {
	"Warning",
	"Uyar&#305;"
	};

char* MLG_Common_WED[] = {
	"WED",
	"&#199;AR"
	};

char* MLG_Common_WEP[] = {
	"WEP",
	"WEP"
	};

char* MLG_Common_WPA[] = {
	"WPA",
	"WPA"
	};

char* MLG_Common_WPA2[] = {
	"WPA2",
	"WPA2"
	};

char* MLG_Common_WPA2PSK[] = {
	"WPA2-PSK",
	"WPA2-PSK"
	};

char* MLG_Common_WPAPSK[] = {
	"WPA-PSK",
	"WPA-PSK"
	};

char* MLG_Common_Yes[] = {
	"Yes",
	"Evet"
	};

char* MLG_Common_more[] = {
	"more",
	"daha fazla"
	};

char* MLG_Common_less[] = {
	"less",
	"daha az"
	};

char* MLG_Common_Language[] = {
	"Language",
	"Dil"
	};

char* MLG_Common_DSLLine[] = {
	"DSL Line{{1}}",
	"DSL Hatt&#305; {{1}}"
	};

char* MLG_Common_Include[] = {
	"include",
	"dahil et"
	};

char* MLG_Common_Exclude[] = {
	"exclude",
	"hari&#231; tut"
	};

char* MLG_Common_Primary[] = {
	"Primary",
	"Birincil"
	};

char* MLG_Common_Secondary[] = {
	"Secondary",
	"&#304;kincil"
	};

char* MLG_Common_Primary_DNS_server[] = {
	"Primary DNS server",
	"Birincil DNS sunucusu"
	};

char* MLG_Common_Secondary_DNS_server[] = {
	"Secondary DNS server",
	"&#304;kincil DNS sunucusu"
	};

char* MLG_Common_Primary_IPv6_DNS_server[] = {
	"Primary IPv6 DNS server",
	"Birincil IPv6 DNS sunucusu"
	};

char* MLG_Common_Secondary_IPv6_DNS_server[] = {
	"Secondary IPv6 DNS server",
	"&#304;kincil IPv6 DNS sunucusu"
	};

char* MLG_Common_PPP_Password[] = {
	"PPP Password",
	"PPP &#350;ifresi"
	};

char* MLG_Common_PPPoE_ServiceName[] = {
	"PPPoE Service Name",
	"PPPoE Servis Ad&#305;"
	};

char* MLG_Common_Specific_IPAddress[] = {
	"Specific IP Address",
	"&#214;zel IP Adresi"
	};

char* MLG_Common_Specific_Service[] = {
	"Specific Service",
	"&#214;zel Servis"
	};

char* MLG_Common_PPP[] = {
	"PPP",
	"PPP"
	};

char* MLG_Common_Automatic[] = {
	"Automatic",
	"Otomatik"
	};

char* MLG_Common_Ip_From_DHCPServer[] = {
	"Get IPv6 Address From DHCPv6 Server(IA_NA)",
	"DHCPv6 Sunucu (IA_NA) itibaren IPv6 Adres"
	};

char* MLG_Common_Prefix_From_DHCPServer[] = {
	"Prefix Delegation(IA_PD)",
	"&#214;nek Delegasyonu (IA_PD)"
	};

char* MLG_Common_PrefixLength[] = {
	"Prefix Length",
	"&#214;nek Uzunlu&#287;u"
	};

char* MLG_Common_IPv6[] = {
	"IPv6",
	"IPv6"
	};

char* MLG_Common_Administrator[] = {
	"Administrator",
	"Y&#246;netici"
	};

char* MLG_Common_User[] = {
	"User",
	"Kullan&#305;c&#305;"
	};

char* MLG_Common_Supervisor[] = {
	"Supervisor",
	"S&#252;perviz&#246;r"
	};

char* MLG_Common_PrivilegeSetting[] = {
	"Privilege Setting",
	"Ayr&#305;cal&#305;k Ayar&#305;"
	};

char* MLG_Common_Expand_All[] = {
	"Expand All",
	"T&#252;m&#252;n&#252; Geni&#351;let"
	};

char* MLG_Common_Collapse_All[] = {
	"Collapse All",
	"T&#252;m&#252;n&#252; Daralt"
	};

char* MLG_Common_Wizard[] = {
	"Wizard",
	"Sihirbaz"
	};

char* MLG_Common_QuickStart[] = {
	"Quick Start",
	"H&#305;zl&#305; Ba&#351;lang&#305;&#231;"
	};

char* MLG_Common_EasySetup[] = {
	"Easy Setup",
	"kolay Kurulum"
	};

char* MLG_Common_Group[] = {
	"Group",
	"Grupla"
	};

char* MLG_Common_UntitledDocument[] = {
	"Untitled Document",
	"Ads&#305;z Belge"
	};

char* MLG_Common_USB[] = {
	"USB",
	"USB"
	};

char* MLG_Common_English[] = {
	"English",
	"English"
	};

char* MLG_Common_Turkish[] = {
	"Turkish",
	"T&#252;rk&#231;e"
	};

char* MLG_Common_German[] = {
	"German",
	"Alman"
	};

char* MLG_Common_French[] = {
	"French",
	"(null)"
	};

char* MLG_Common_LoginPrivilege[] = {
	"Login Privilege",
	"Giri&#351; Ayr&#305;cal&#305;&#287;&#305;"
	};

char* MLG_Common_Next[] = {
	"Next",
	"Sonraki"
	};

char* MLG_Common_Retry[] = {
	"Retry",
	"Tekrar dene"
	};

char* MLG_Common_nopage[] = {
	"no page",
	"sayfa yok"
	};

char* MLG_Common_tabpage[] = {
	"tab page",
	"sekme sayfas&#305;"
	};

char* MLG_Common_singlepage[] = {
	"single page",
	"tek sayfa"
	};

char* MLG_Common_QuickStartmeg[] = {
	"Do not automatically show this Quick Start after login.",
	"Giri&#351; yapt&#305;ktan sonra bu H&#305;zl&#305; Ba&#351;lang&#305;c&#305; otomatik olarak &#8203;&#8203;g&#246;sterme."
	};

char* MLG_Common_Skip[] = {
	"Skip",
	"Atla"
	};

char* MLG_Common_Admin[] = {
	"Admin",
	"Y&#246;netici"
	};

char* MLG_Common_zyxel[] = {
	"ZyXEL",
	"ZyXEL"
	};

char* MLG_Common_FamilySafety[] = {
	"Family Safety",
	"Aile Korumas&#305;"
	};

char* MLG_Common_Security[] = {
	"Security",
	"G&#252;venlik"
	};

char* MLG_Common_Last[] = {
	"Last",
	"Son"
	};

char* MLG_Common_Inactive[] = {
	"Inactive",
	"Aktif De&#287;il"
	};

char* MLG_Common_Characters[] = {
	"characters",
	"(null)"
	};

char* MLG_Common_ExternalPort[] = {
	"External Port",
	"(null)"
	};

char* MLG_Common_InternalPort[] = {
	"Internal Port",
	"(null)"
	};


char* MLG_Common_AddSIPAccount[] = {
	"Add this SIP Account",
	"(null)"
	};


char* MLG_Common_EditSIPAccount[] = {
	"Edit this SIP Account",
	"(null)"
	};

char* MLG_Common_ApplyWorringMessageCancel[] = {
	"Cancel",
	"(null)"
	};

char* MLG_Common_ApplyWorringMessageContinue[] = {
	"Continue",
	"(null)"
	};

char* MLG_Common_ApplyWorringMessageMakeSure[] = {
	"Error",
	"(null)"
	};

char* MLG_Common_80211a[] = {
	"802.11a Only",
	"802.11a Only"
	};

char* MLG_Common_AutoFWNotify[] = {
	"There is a newer firmware.",
	"Yeni bir yaz&#305;l&#305;m mevcut."
	};

char* MLG_Common_AutoFWNotify_2[] = {
	"Enter the username and password then click \"Upgrade\" to update the firmware of",
	"Yaz&#305;l&#305;m g&#252;ncelleme i&#231;in, kullan&#305;c&#305; ad&#305; ve &#351;ifreyi girdikten sonra, \"Y&#252;kle\" butonuna bas&#305;n&#305;z"
	};

char* MLG_Common_FirmwareUpgradeInProgress[] = {
	"Firmware upgrade in progress",
	"Yaz&#305;l&#305;m G&#252;ncelle&#351;tirme &#304;&#351;lemi S&#252;r&#252;yor"
	};

char* MLG_Common_DoNotTurnOffTheDevice[] = {
	"Do not Turn Off the Device.",
	"Cihaz&#305; kapatmay&#305;n&#305;z."
	};

char* MLG_Common_PleaseWait[] = {
	"Please Wait ...",
	"L&#252;tfen Bekleyiniz ..."
	};

char* MLG_Common_FirmwareUpgradeInProgress_CONTENT_1[] = {
	"If a VoIP call is still active, the device waits for the call to end before starting the firmware upgrade process.",
	"E&#287;er bir VoIP aramas&#305; hala aktifse, cihaz yaz&#305;l&#305;m g&#252;ncelle&#351;tirme i&#351;lemini ba&#351;latmak i&#231;in araman&#305;n sonlanmas&#305;n&#305; bekliyor olabilir."
	};

char* MLG_Common_FirmwareUpgradeInProgress_CONTENT_2[] = {
	"Please wait for the device to finish restarting. This should take about three minutes.",
	"L&#252;tfen cihaz&#305;n&#305;z&#305;n yeniden ba&#351;lat&#305;lmas&#305;n&#305; bekleyiniz. Bu i&#351;lem 3 dakika s&#252;rebilir."
	};

char* MLG_Common_FirmwareUpgradeInProgress_CONTENT_3[] = {
	"To access the device after a successful firmware upgrade, you need to log in again. Check your new firmware version in the system status menu.",
	"Ba&#351;ar&#305;l&#305; bir yaz&#305;l&#305;m g&#252;ncelle&#351;tirme i&#351;leminin ard&#305;ndan cihaza eri&#351;ebilmek i&#231;in tekrar giri&#351; yapmaya ihtiyac&#305;n&#305;z var. L&#252;fen yeni yaz&#305;l&#305;m&#305;n&#305;z&#305; sistem durum men&#252;s&#252;nden kontrol ediniz."
	};

char* MLG_Common_Note_Common[] = {
	"Note : ",
	"Not"
	};

char* MLG_Common_80211an[] = {
	"802.11a/n Mixed",
	"Karışık 802.11a / n"
	};

char* MLG_Common_80211anac[] = {
	"802.11a/n/ac Mixed",
	"Karışık 802.11a / n /ac"
	};

char* MLG_Common_80211nac[] = {
	"802.11n/ac Mixed",
	"Karışık 802.11n /ac"
	};

char* MLG_Common_Vlan_ID[] = {
	"This ID is reserved for the other application.",
	"Bu ID ba&#351;ka bir uygulama i&#231;in rezerve edilmi&#351;tir."
	};

char* MLG_Common_TTHGW_Model_Name[] = {
	"VMG8324-B10A T&#252;rk Telekom",
	"VMG8324-B10A T&#252;rk Telekom"
	};

char* MLG_Common_Login_User[] = {
	"Login User: ",
	"Oturum a&#231;an kullan&#305;c&#305;: "
	};

MAPPING_ITEM CommonMappingItem[314];
