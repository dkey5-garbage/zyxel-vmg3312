#include<stdio.h>	
#include<string.h>	
#include<stdlib.h>	
#include<time.h>	
#include "languages.h"	



char* MLG_Maintenance_CFM_Explain[] = {
	"Ping and TraceRoute are network utilities used to test whether a particular host is reachable. Enter either an IP address or a host name and click one of the buttons to start a Ping or TraceRoute test. The test result will be shown in the Info area.",
	"Ping ve TraceRoute belirli bir hostun eri&#351;ilebilir olup olmad&#305;&#287;&#305;n&#305; test etmek i&#231;in kullan&#305;lan a&#287; ara&#231;lar&#305;d&#305;r. Ya bir IP adresi ya da host ad&#305; girin ve bir ping ve TraceRoute testi ba&#351;latmak i&#231;in butonlardan birine t&#305;klay&#305;n&#305;z. Test sonucu, Bilgiler alan&#305;nda g&#246;sterilecektir. "
	};

char* MLG_Maintenance_CFM_Str15[] = {
	"Ping/TraceRoute Test",
	"Ping/TraceRoute Test"
	};

char* MLG_Maintenance_CFM_Str16[] = {
	"TCP/IP",
	"TCP/IP"
	};

char* MLG_Maintenance_CFM_AlertMsg_Str1[] = {
	"MAC address {{1}} is invalid. Eg. 11:22:33:AA:BB:CC",
	"MAC adresi {{1}} ge&#231;ersiz. &#214;rn. 11:22:33:AA:BB:CC"
	};

char* MLG_Maintenance_CFM_AlertMsg_Str2[] = {
	"VLAN ID {{1}} is out of range [0-4095].",
	"VLAN ID {{1}},  [0-4095] aral&#305;&#287;&#305; d&#305;&#351;&#305;ndad&#305;r."
	};

char* MLG_Maintenance_CFM_AlertMsg_Str3[] = {
	"Address should not be empty!",
	"Adres alan&#305; bo&#351; olmamal&#305;!"
	};

char* MLG_Maintenance_CFM_AlertMsg_Str4[] = {
	"Address is invalid",
	"Adres ge&#231;ersiz"
	};

char* MLG_Maintenance_CFM_Str1[] = {
	"This diagnostic is only used for VDSL PTM mode.",
	"Bu tan&#305;lama, sadece VDSL PTM modu i&#231;in kullan&#305;l&#305;r."
	};

char* MLG_Maintenance_CFM_Str10[] = {
	"Loopback Message (LBM)",
	"Geri D&#246;ng&#252; Mesaj&#305; (LBM)"
	};

char* MLG_Maintenance_CFM_Str11[] = {
	"Linktrace Message (LTM)",
	"Ba&#287;lant&#305; Trace&#39;i Mesaj&#305; (LTM)"
	};

char* MLG_Maintenance_CFM_Str12[] = {
	"Set MD Level",
	"MD Seviyesini ayarla "
	};

char* MLG_Maintenance_CFM_Str13[] = {
	"Send Loopback",
	"Geri D&#246;ng&#252; g&#246;nder"
	};

char* MLG_Maintenance_CFM_Str14[] = {
	"Send Linktrace",
	"Ba&#287;lant&#305; Trace&#39;i G&#246;nder"
	};

char* MLG_Maintenance_CFM_Str2[] = {
	"802.1ag Connectivity Fault Management",
	"802.1ag Ba&#287;lant&#305; Hata Y&#246;netimi"
	};

char* MLG_Maintenance_CFM_Str3[] = {
	"Maintenance Domain (MD) Level",
	"Bak&#305;m Etki Alan&#305; Seviyesi"
	};

char* MLG_Maintenance_CFM_Str4[] = {
	"Destination MAC Address",
	"Hedef MAC Adresi"
	};

char* MLG_Maintenance_CFM_Str5[] = {
	"802.1Q VLAN ID",
	"802.1Q VLAN ID"
	};

char* MLG_Maintenance_CFM_Str6[] = {
	"VDSL Traffic Type",
	"VDSL Trafik Tipi"
	};

char* MLG_Maintenance_CFM_Str7[] = {
	"Active",
	"Aktif"
	};

char* MLG_Maintenance_CFM_Str8[] = {
	"Inactive",
	"Aktif De&#287;il"
	};

char* MLG_Maintenance_CFM_Str9[] = {
	"Test the connection to another Maintenance End Point (MEP)",
	"Ba&#351;ka bir Bak&#305;m Biti&#351; Noktas&#305; ba&#287;lant&#305;s&#305;n&#305; test ediniz"
	};

char* MLG_Maintenance_Configuration_AlertMsg_Str1[] = {
	"Configuration uploading failed. The system is out of memory.",
	" Yap&#305;land&#305;rma y&#252;klemesi ba&#351;ar&#305;s&#305;z. Sistem bellek d&#305;&#351;&#305;ndad&#305;r."
	};

char* MLG_Maintenance_Configuration_AlertMsg_Str10[] = {
	"Router failed to reset wireless settings to factory defaults !!!.",
	"Y&#246;nlendirici kablosuz ayarlar&#305;n&#305; fabrika ayarlar&#305;na d&#246;nd&#252;rmede ba&#351;ar&#305;s&#305;z!."
	};

char* MLG_Maintenance_Configuration_AlertMsg_Str11[] = {
	"Router successfully reset WAN settings to factory defaults.",
	"Y&#246;nlendirici WAN ayarlar&#305;n&#305; ba&#351;ar&#305;yla fabrika ayarlar&#305;na geri d&#246;nd&#252;rd&#252;."
	};

char* MLG_Maintenance_Configuration_AlertMsg_Str12[] = {
	"Router successfully reset Firewall settings to factory defaults.",
	"Y&#246;nlendirici G&#252;venlik Duvar&#305; ayarlar&#305;n&#305; ba&#351;ar&#305;yla fabrika ayarlar&#305;na geri d&#246;nd&#252;rd&#252;."
	};

char* MLG_Maintenance_Configuration_AlertMsg_Str13[] = {
	"Router is updating now. Please wait ...",
	"Y&#246;nlendirici &#351;imdi g&#252;ncelliyor. L&#252;tfen bekleyiniz..."
	};

char* MLG_Maintenance_Configuration_AlertMsg_Str14[] = {
	"As there will be no indication of when the process is complete, please wait for two minutes before attempting to access the router again.",
	"&#304;&#351;lemin tamamland&#305;&#287;&#305;na dair hi&#231;bir g&#246;sterge olmayaca&#287;&#305;ndan, y&#246;nlendiriciye tekrar eri&#351;meyi denemeden &#246;nce l&#252;tfen iki dakika bekleyiniz."
	};

char* MLG_Maintenance_Configuration_AlertMsg_Str15[] = {
	"Router is doing self-diagnostic. Please wait &#8230;",
	"Y&#246;nlendirici kendi kendine tan&#305;lama yap&#305;yor. L&#252;tfen bekleyiniz. &#8230;"
	};

char* MLG_Maintenance_Configuration_AlertMsg_Str16[] = {
	"As there will be no indication of when the process is complete, please wait for 30 seconds before attempting to access the router again.",
	"&#304;&#351;lemin tamamland&#305;&#287;&#305;na dair hi&#231;bir g&#246;sterge olmayaca&#287;&#305;ndan, y&#246;nlendiriciye tekrar eri&#351;meyi denemeden &#246;nce l&#252;tfen 30 dakika bekleyiniz."
	};

char* MLG_Maintenance_Configuration_AlertMsg_Str17[] = {
	"Router is resetting Wireless configuration. Please wait &#8230;",
	"Y&#246;nlendirici, Kablosuz yap&#305;land&#305;rman&#305;z&#305; resetliyor. L&#252;tfen bekleyiniz &#8230;"
	};

char* MLG_Maintenance_Configuration_AlertMsg_Str18[] = {
	"Router is resetting WAN configuration. Please wait &#8230;",
	"Y&#246;nlendirici, WAN yap&#305;land&#305;rman&#305; resetliyor. L&#252;tfen bekleyiniz &#8230;"
	};

char* MLG_Maintenance_Configuration_AlertMsg_Str19[] = {
	"Router is resetting Firewall configuration. Please wait &#8230;",
	"Y&#246;nlendirici, G&#252;venlik Duvar&#305; yap&#305;land&#305;rman&#305; resetliyor. L&#252;tfen bekleyiniz &#8230;"
	};

char* MLG_Maintenance_Configuration_AlertMsg_Str2[] = {
	"Configuration uploading failed. No Configuration file was selected.",
	" Yap&#305;land&#305;rma y&#252;klemesi ba&#351;ar&#305;s&#305;z. Hi&#231;bir Yap&#305;land&#305;rma dosyas&#305; se&#231;ilmedi."
	};

char* MLG_Maintenance_Configuration_AlertMsg_Str3[] = {
	"Configuration uploading failed. The selected file contains an illegal Configuration setting.",
	" Yap&#305;land&#305;rma y&#252;klemesi ba&#351;ar&#305;s&#305;z. Se&#231;ilen dosya ge&#231;ersiz bir yap&#305;land&#305;rma dosyas&#305; i&#231;eriyor."
	};

char* MLG_Maintenance_Configuration_AlertMsg_Str4[] = {
	"Fatal error during Configuration uploading.",
	"Yap&#305;land&#305;rma y&#252;klemesi s&#305;ras&#305;nda &#246;nemli hata."
	};

char* MLG_Maintenance_Configuration_AlertMsg_Str5[] = {
	"Are you sure you want to reset wireless settings to factory defaults?",
	"Kablosuz ayarlar&#305;n&#305; fabrika ayarlar&#305;na d&#246;nd&#252;rmek istedi&#287;inizden emin misiniz?"
	};

char* MLG_Maintenance_Configuration_AlertMsg_Str6[] = {
	"Are you sure you want to reset WAN settings to factory defaults?",
	"WAN ayarlar&#305;n&#305; fabrika ayarlar&#305;na d&#246;nd&#252;rmek istedi&#287;inizden emin misiniz?  "
	};

char* MLG_Maintenance_Configuration_AlertMsg_Str7[] = {
	"Are you sure you want to reset Firewall settings to factory defaults?",
	"G&#252;venlik Duvar&#305; ayarlar&#305;n&#305; fabrika ayarlar&#305;na d&#246;nd&#252;rmek istedi&#287;inizden emin misiniz?  "
	};

char* MLG_Maintenance_Configuration_AlertMsg_Str8[] = {
	"Are you sure you want to restore factory default settings?",
	"Fabrika ayarlar&#305;na geriy&#252;klemek istedi&#287;inizden emin misiniz?  "
	};

char* MLG_Maintenance_Configuration_AlertMsg_Str9[] = {
	"Router successfully reset wireless settings to factory defaults.",
	"Y&#246;nlendirici, kablosuz ayarlar&#305;n&#305; fabrika ayarlar&#305;na ba&#351;ar&#305;yla geri d&#246;nd&#252;rd&#252;."
	};


char* MLG_Maintenance_Configuration_Btn1[] = {
	"Backup",
	"Yedekleme"
	};

char* MLG_Maintenance_Configuration_Btn2[] = {
	"Reset Wireless",
	"Kablosuzu fabrika ayarlar&#305;na y&#252;kle"
	};

char* MLG_Maintenance_Configuration_Btn3[] = {
	"Reset WAN",
	"WAN&#39;&#305; fabrika ayarlar&#305;na y&#252;kle"
	};

char* MLG_Maintenance_Configuration_Btn4[] = {
	"Reset Firewall",
	"G&#252;venlik Duvar&#305;n&#305; fabrika ayarlar&#305;na y&#252;kle"
	};

char* MLG_Maintenance_Configuration_Btn5[] = {
	"Reset",
	"Fabrika ayarlar&#305;na y&#252;kle "
	};

char* MLG_Maintenance_Configuration_Str1[] = {
	"In Configuration you can save the current device settings in a backup file in your computer, or recover the system by restoring the backup file. You can also reset the device back to factory default.",
	"Yap&#305;land&#305;rmada mevcut cihaz ayarlar&#305;n&#305; bilgisayar&#305;n&#305;zda bir yedekleme dosyas&#305;na kaydedebilir veya yedekleme dosyas&#305;n&#305; geri y&#252;kleyerek sistemi kurtarabilirsiniz. Ayr&#305;ca cihaz&#305; fabrika ayarlar&#305;na geri d&#246;nd&#252;rebilirsiniz."
	};

char* MLG_Maintenance_Configuration_Str10[] = {
	"Restore Firewall Settings",
	"G&#252;venlik Duvar&#305; Ayarlar&#305;n&#305; Geri Y&#252;kle"
	};

char* MLG_Maintenance_Configuration_Str11[] = {
	"Reset Firewall settings to factory defaults while retaining other RG settings.",
	"Di&#287;er modem ayarlar&#305;n&#305; korurken G&#252;venlik Duvar&#305;n&#305; fabrika ayarlar&#305;na y&#252;kle."
	};

char* MLG_Maintenance_Configuration_Str12[] = {
	"Restore Configuration",
	"Yap&#305;land&#305;rmay&#305; Geri Y&#252;kle"
	};

char* MLG_Maintenance_Configuration_Str13[] = {
	"To restore a previously saved configuration file to your system, browse to the location of the configuration file and click Upload.",
	"Sisteminize daha &#246;nce kaydedilen bir yap&#305;land&#305;rma dosyas&#305;n&#305; geri y&#252;klemek i&#231;in yap&#305;land&#305;rma dosyas&#305;n&#305;n bulundu&#287;u konuma gidiniz ve Kar&#351;&#305;ya Y&#252;kle&#39; yi t&#305;klay&#305;n&#305;z."
	};

char* MLG_Maintenance_Configuration_Str14[] = {
	"Back to Factory Defaults",
	"Fabrika Ayarlar&#305;na Geri D&#246;nme"
	};

char* MLG_Maintenance_Configuration_Str15[] = {
	"Click Reset to clear all user-entered configuration information and return to factory defaults. After resetting, the <br> - LAN IP address will be 192.168.1.1 <br> - DHCP will be reset by server",
	"T&#252;m kullan&#305;c&#305; taraf&#305;ndan girilen yap&#305;land&#305;rma bilgilerini temizlemek ve fabrika ayarlar&#305;na geri d&#246;nmek i&#231;in Resetle se&#231;ene&#287;ine t&#305;klay&#305;n. Resetleme sonras&#305;nda, <br> - Yerel A&#287; IP adresi 192.168.1.254 olacakt&#305;r <br> - DHCP, sunucuya s&#305;f&#305;rlanacakt&#305;r "
	};

char* MLG_Maintenance_Configuration_Str15_1[] = {
	"Click Reset to clear all user-entered configuration information and return to factory defaults. After resetting, the <br> - LAN IP address will be 192.168.1.254 <br> - DHCP will be reset by server",
	"T&#252;m kullan&#305;c&#305; taraf&#305;ndan girilen yap&#305;land&#305;rma bilgilerini temizlemek ve fabrika ayarlar&#305;na geri d&#246;nmek i&#231;in Resetle se&#231;ene&#287;ine t&#305;klay&#305;n. Resetleme sonras&#305;nda, <br> - Yerel A&#287; IP adresi 192.168.1.254 olacakt&#305;r <br> - DHCP, sunucuya s&#305;f&#305;rlanacakt&#305;r "
	};

char* MLG_Maintenance_Configuration_Str15_2[] = {
	"Click Reset to clear all user-entered configuration information and return to factory defaults. After resetting, the",
	"Kullan&#305;c&#305; tan&#305;ml&#305; b&#252;t&#252;n ayarlar&#305; temizlemek ve cihaz&#305; fabrika ayarlar&#305;na geri y&#252;klemek i&#231;in Reset butonuna t&#305;klay&#305;n&#305;z. Resetten sonra,"
	};

char* MLG_Maintenance_Configuration_Str15_3[] = {
	"LAN IP address will be 192.168.1.1",
	"LAN IP adresi 192.168.1.1\'dir."
	};

char* MLG_Maintenance_Configuration_Str15_4[] = {
	"DHCP will be reset to server",
	"DHCP sunucusu fabrika ayarlar&#305;na geri y&#252;klenecektir."
	};


char* MLG_Maintenance_Configuration_Explain[] = {
	"You can save the current device settings in a backup file in your computer, or restore previous settings from a backup file. You can also reset the device back to its factory default.",
	"Mevcut cihaz ayarlar&#305;n&#305; bilgisayar&#305;n&#305;zda bir yedekleme dosyas&#305;na kaydedebilir veya bir yedekleme dosyas&#305;ndan &#246;nceki ayarlar&#305; geri y&#252;kleyebilirsiniz. Ayr&#305;ca cihaz&#305; fabrika ayarlar&#305;na geri d&#246;nd&#252;rebilirsiniz."
	};

char* MLG_Maintenance_Configuration_Str2[] = {
	"Backup Configuration",
	"Yedekleme Yap&#305;land&#305;rmas&#305;"
	};

char* MLG_Maintenance_Configuration_Str3[] = {
	"Click Backup to save the current configuration of your system to your computer.",
	"Bilgisayar&#305;n&#305;za sistemin ge&#231;erli yap&#305;land&#305;rmas&#305;n&#305; kaydetmek i&#231;in Yedekle se&#231;ene&#287;ine t&#305;klay&#305;n&#305;z."
	};

char* MLG_Maintenance_Configuration_Str4[] = {
	"Reset Wireless Configuration",
	"Kablosuz Yap&#305;land&#305;rmas&#305;n&#305; Resetle "
	};

char* MLG_Maintenance_Configuration_Str5[] = {
	"Reset WAN Configuration",
	"WAN Yap&#305;land&#305;rmas&#305;n&#305; Resetle"
	};

char* MLG_Maintenance_Configuration_Str6[] = {
	"Reset Firewall Configuration",
	"G&#252;venlik Duvar&#305; Yap&#305;land&#305;rmas&#305;n&#305; Resetle"
	};

char* MLG_Maintenance_Configuration_Str7[] = {
	"Reset Wireless settings to factory defaults while retaining other RG settings.",
	"Di&#287;er modem ayarlar&#305;n&#305; korurken Kablosuz ayarlar&#305;n&#305; resetleyiniz."
	};

char* MLG_Maintenance_Configuration_Str8[] = {
	"Restore WAN Settings",
	"WAN Ayarlar&#305;n&#305; Geri Y&#252;kle"
	};

char* MLG_Maintenance_Configuration_Str9[] = {
	"Reset WAN settings to factory defaults while retaining other RG settings.",
	"Di&#287;er modem ayarlar&#305;n&#305; korurken WAN ayarlar&#305;n&#305; resetleyiniz."
	};


char* MLG_Maintenance_FWUpgrade_Str10[] = {
	"Upgrade Firmware",
	"Cihaz Yaz&#305;l&#305;m&#305;n&#305; Y&#252;kseltme"
	};

char* MLG_Maintenance_FWUpgrade_AlertMsg_Str1[] = {
	"Image uploading failed. The system is out of memory.",
	"G&#246;r&#252;nt&#252; y&#252;kleme ba&#351;ar&#305;s&#305;z. Sistem bellek d&#305;&#351;&#305;nda."
	};

char* MLG_Maintenance_FWUpgrade_AlertMsg_Str2[] = {
	"Image uploading failed. No image file was selected.",
	"G&#246;r&#252;nt&#252; y&#252;kleme ba&#351;ar&#305;s&#305;z. Hi&#231;bir g&#246;r&#252;nt&#252; dosyas&#305; se&#231;ilmedi."
	};

char* MLG_Maintenance_FWUpgrade_AlertMsg_Str3[] = {
	"Image uploading failed. The selected file is an illegal image.",
	"G&#246;r&#252;nt&#252; y&#252;kleme ba&#351;ar&#305;s&#305;z. Se&#231;ilen dosya ge&#231;ersiz bir g&#246;r&#252;nt&#252; i&#231;eriyor."
	};

char* MLG_Maintenance_FWUpgrade_AlertMsg_Str4[] = {
	"Image uploading failed. The selected file contains an illegal model id.",
	"G&#246;r&#252;nt&#252; y&#252;kleme ba&#351;ar&#305;s&#305;z. Se&#231;ilen dosya ge&#231;ersiz bir model id i&#231;eriyor."
	};

char* MLG_Maintenance_FWUpgrade_AlertMsg_Str5[] = {
	"Image uploading failed. The selected file contains an illegal boot rom size.",
	"G&#246;r&#252;nt&#252; y&#252;kleme ba&#351;ar&#305;s&#305;z. Se&#231;ilen dosya ge&#231;ersiz&#305; bir &#246;ny&#252;kleme rom boyutu i&#231;eriyor."
	};

char* MLG_Maintenance_FWUpgrade_AlertMsg_Str6[] = {
	"Fatal error during image uploading.",
	"G&#246;r&#252;nt&#252; y&#252;kleme s&#305;ras&#305;nda &#246;nemli hata."
	};

char* MLG_Maintenance_FWUpgrade_AlertMsg_Str7[] = {
	"If take too long time for upgrade, Please reboot and check Internet connection or clear browser cookies and temporary files, try again later.",
	"(null)"
	};

char* MLG_Maintenance_FWUpgrade_Str1[] = {
	"Firmware Upgrade is where you can update the device with newly released features by upgrading the latest firmware. You can download the latest firmware from the official website.",
	"Ayg&#305;t Yaz&#305;l&#305;m&#305;n&#305; Y&#252;kseltme, en g&#252;ncel yaz&#305;l&#305;ma y&#252;kselterek cihaz&#305; yeni &#231;&#305;kan &#246;zellikler ile g&#252;ncelleyebilece&#287;iniz ad&#305;md&#305;r. En g&#252;ncel yaz&#305;l&#305;m&#305; resmi web sitesinden indirebilirsiniz."
	};

char* MLG_Maintenance_FWUpgrade_Str2[] = {
	"Restore default settings after firmware upgrade",
	"Ayg&#305;t Yaz&#305;l&#305;m g&#252;ncellemesinden sonra varsay&#305;lan ayarlar&#305; geri y&#252;kle."
	};

char* MLG_Maintenance_FWUpgrade_Str3[] = {
	"Current Firmware Version",
	"Mevcut Ayg&#305;t Yaz&#305;l&#305;m S&#252;r&#252;m&#252;"
	};

char* MLG_Maintenance_FWUpgrade_Str4[] = {
	"Failed to check the latest firmware",
	"G&#252;ncel ayg&#305;t yaz&#305;l&#305;m y&#252;kseltmesi kontrol edilemedi"
	};

char* MLG_Maintenance_FWUpgrade_Str5[] = {
	"File Path",
	"Dosya Yolu"
	};

char* MLG_Maintenance_FWUpgrade_Str6[] = {
	"Upload",
	"Y&#252;kle"
	};

char* MLG_Maintenance_FWUpgrade_Str7[] = {
	"Auto checking the latest firmware",
	"G&#252;ncel cihaz yaz&#305;l&#305;m&#305;n&#305; otomatik olarak kontrol etme"
	};

char* MLG_Maintenance_FWUpgrade_Str8[] = {
	"Complete checking, there is no newer firmware.",
	"Kontrol&#252; tamamla, daha yeni bir cihaz yaz&#305;l&#305;m&#305; yoktur."
	};

char* MLG_Maintenance_FWUpgrade_Str9[] = {
	"Upgrade firmware to version:",
	"Cihaz yaz&#305;l&#305;m&#305;n&#305; ..... s&#252;r&#252;m&#252;ne y&#252;kseltme:"
	};

char* MLG_Maintenance_FWUpgrade_Str15[] = {
	"Download NEW firmware, please wait...",
	"(null)"
	};

char* MLG_Maintenance_FWUpgrade_Str11[] = {
	"Firmware Upgrade from Auto Provisioning Server",
	"Oto-Provizyon Sunucusu ile Yaz&#305;l&#305;m G&#252;ncelleme"
	};

char* MLG_Maintenance_FWUpgrade_Str12[] = {
	"Check on Server (force auto firmware upgrade to check the auto provisioning server)",
	"Sunucuyu Yokla(Oto-Provizyon sunucusunda yenibir yaz&#305;l&#305;m olup olmad&#305;&#287;&#305;n&#305;n&#305; kontrol et)"
	};

char* MLG_Maintenance_FWUpgrade_Str13[] = {
	"Upgrade from server (inactive unless there is a firmware available)",
	"Sunucudan Y&#252;kle (Yeni bir yaz&#305;l&#305;m yoksa inaktif g&#246;r&#252;n&#252;r)"
	};

char* MLG_Maintenance_FWUpgrade_Str14[] = {
	"Check",
	"kontrol"
	};

char* MLG_Maintenance_Upgrade[] = {
	"Upgrade",
	"Y&#252;kle"
	};

char* MLG_Maintenance_LogsSetting_Str1[] = {
	"Logs Setting defines the level of logs to be recorded and where to send the log history. If the log mode is enabled, the system will begin to record selected logs.",
	"Kay&#305;t Ayarlar&#305; kaydedilecek kay&#305;t seviyesini ve bu kay&#305;t ge&#231;mi&#351;inin nereye g&#246;nderilece&#287;ini tan&#305;mlar. Kay&#305;t modu etkin ise, sistem se&#231;ili kay&#305;tlar&#305; kaydetmeye ba&#351;layacakt&#305;r."
	};

char* MLG_Maintenance_LogsSetting_Str10[] = {
	"SMTP Server NAME or IP",
	"SMTP Sunucusu ADI veya IP"
	};

char* MLG_Maintenance_LogsSetting_Str11[] = {
	"System Log Mail Subject",
	"Sistem G&#252;nl&#252;&#287;&#252; Mail Konusu"
	};

char* MLG_Maintenance_LogsSetting_Str12[] = {
	"Security Log Mail Subject",
	"G&#252;venlik G&#252;nl&#252;&#287;&#252; Mail Konusu"
	};

char* MLG_Maintenance_LogsSetting_Str13[] = {
	"From",
	"Kimden"
	};

char* MLG_Maintenance_LogsSetting_Str14[] = {
	"E-Mail Address",
	"E-Posta Adresi"
	};

char* MLG_Maintenance_LogsSetting_Str15[] = {
	"Send Log to",
	"G&#252;nl&#252;&#287;&#252; g&#246;nder"
	};

char* MLG_Maintenance_LogsSetting_Str16[] = {
	"Send Alarm to",
	"Alarm&#305; g&#246;nder"
	};

char* MLG_Maintenance_LogsSetting_Str17[] = {
	"Alarm Interval",
	"Alarm Aral&#305;&#287;&#305;"
	};

char* MLG_Maintenance_LogsSetting_Str18[] = {
	"Allowed Capacity Before email Notification",
	"E-posta Bildirimi &#214;ncesinde &#304;zin Verilen Kapasite"
	};

char* MLG_Maintenance_LogsSetting_Str19[] = {
	"SMTP Authentication",
	"SMTP Kimlik Do&#287;rulamas&#305;"
	};

char* MLG_Maintenance_LogsSetting_Str2[] = {
	"Syslog Logging",
	"Syslog Kayd&#305;"
	};

char* MLG_Maintenance_LogsSetting_Str20[] = {
	"User Name",
	"Kullan&#305;c&#305; Ad&#305;"
	};

char* MLG_Maintenance_LogsSetting_Str21[] = {
	"Password",
	"&#350;ifre"
	};

char* MLG_Maintenance_LogsSetting_Old_Pwd[] = {
	"Old Password",
	"Eski &#350;ifre"
	};

char* MLG_Maintenance_LogsSetting_New_Pwd[] = {
	"New Password",
	"Yeni &#350;ifre"
	};

char* MLG_Maintenance_LogsSetting_Pwd_Confirm[] = {
	"Retype to confirm",
	"Onaylamak i&#231;in yeniden yaz&#305;n"
	};

char* MLG_Maintenance_Enable_Local_Admin[] = {
	"Enable Local Admin Login",
	"(null)"
	};

char* MLG_Maintenance_UserAccount_Explain[] = {
	"Password that you use to log in the configuration interface can be changed in this page. Once a new password is given and saved, you need to use the new one next time when logging in the interface.",
	"Yap&#305;land&#305;rma aray&#252;z&#252;nde oturum a&#231;mak i&#231;in kulland&#305;&#287;&#305;n&#305;z &#350;ifre bu sayfada de&#287;i&#351;tirilebilir. Yeni bir &#351;ifre verilip kaydedildikten sonra, bir dahaki sefere aray&#252;zde oturum a&#231;arken yeni &#351;ifreyi kullanman&#305;z gerekir."
	};

char* MLG_Maintenance_LogsSetting_Str22[] = {
	"Clear log after sending mail",
	"E-Posta g&#246;nderdikten sonra g&#252;nl&#252;&#287;&#252; temizle "
	};

char* MLG_Maintenance_LogsSetting_Str23[] = {
	"Active Log and Alert",
	"Aktif Kay&#305;t ve &#214;nemli Uyar&#305;"
	};

char* MLG_Maintenance_LogsSetting_Str24[] = {
	"System Log",
	"Sistem G&#252;nl&#252;&#287;&#252;"
	};

char* MLG_Maintenance_LogsSetting_Str25[] = {
	"System",
	"Sistem"
	};

char* MLG_Maintenance_LogsSetting_Str26[] = {
	"DHCP client",
	"DHCP istemcisi"
	};

char* MLG_Maintenance_LogsSetting_Str27[] = {
	"PPPoE",
	"PPPoE"
	};

char* MLG_Maintenance_LogsSetting_Str28[] = {
	"Wireless",
	"Kablosuz"
	};

char* MLG_Maintenance_LogsSetting_Str29[] = {
	"DHCP Server",
	"DHCP Sunucusu"
	};

char* MLG_Maintenance_LogsSetting_Str3[] = {
	"Active",
	"Aktif"
	};

char* MLG_Maintenance_LogsSetting_Str30[] = {
	"UPnP",
	"UPnP"
	};

char* MLG_Maintenance_LogsSetting_Str31[] = {
	"NAT",
	"NAT"
	};

char* MLG_Maintenance_LogsSetting_Str32[] = {
	"Static Route",
	"Statik Y&#246;nlendirme"
	};

char* MLG_Maintenance_LogsSetting_Str33[] = {
	"DDNS",
	"DDNS"
	};

char* MLG_Maintenance_LogsSetting_Str34[] = {
	"IGMP",
	"IGMP"
	};

char* MLG_Maintenance_LogsSetting_Str35[] = {
	"QoS",
	"QoS"
	};

char* MLG_Maintenance_LogsSetting_Str36[] = {
	"TR-069",
	"TR-069"
	};

char* MLG_Maintenance_LogsSetting_Str37[] = {
	"NTP",
	"NTP"
	};

char* MLG_Maintenance_LogsSetting_Str38[] = {
	"Security log",
	"G&#252;venlik G&#252;nl&#252;&#287;&#252;"
	};

char* MLG_Maintenance_LogsSetting_Str39[] = {
	"Firewall",
	"G&#252;venlik Duvar&#305;"
	};

char* MLG_Maintenance_LogsSetting_Str4[] = {
	"Mode",
	"Mod"
	};

char* MLG_Maintenance_LogsSetting_Str40[] = {
	"MAC Filter",
	"MAC Filtresi"
	};

char* MLG_Maintenance_LogsSetting_Str41[] = {
	"Forward Web Sites",
	"Web Sitelerini &#304;let"
	};

char* MLG_Maintenance_LogsSetting_Str42[] = {
	"Blocked Web Sites",
	"Engelli Web Siteleri"
	};

char* MLG_Maintenance_LogsSetting_Str43[] = {
	"Attack",
	"Sald&#305;r&#305;"
	};

char* MLG_Maintenance_LogsSetting_Str44[] = {
	"Certificate",
	"Sertifika"
	};

char* MLG_Maintenance_LogsSetting_Str45[] = {
	"IPSec",
	"IPSec"
	};

char* MLG_Maintenance_LogsSetting_Str46[] = {
	"Account",
	"Hesap"
	};

char* MLG_Maintenance_LogsSetting_Str47[] = {
	"Send immediate alert",
	"Acil &#246;nemli uyar&#305; g&#246;nder"
	};

char* MLG_Maintenance_LogsSetting_Str48[] = {
	"Attacks",
	"Sald&#305;r&#305;lar"
	};

char* MLG_Maintenance_LogsSetting_Str49[] = {
	"Blocked Web Sites",
	"Engelli Web Siteleri"
	};

char* MLG_Maintenance_LogsSetting_Str50[] = {
	"Local",
	"Yerel"
	};

char* MLG_Maintenance_LogsSetting_Str51[] = {
	"Remote",
	"Uzak"
	};

char* MLG_Maintenance_LogsSetting_Str55[] = {
	"Server Port",
	"Sunucu Portu"
	};

char* MLG_Maintenance_LogsSetting_Str53[] = {
	"Syslog Server",
	"Syslog Sunucusu"
	};

char* MLG_Maintenance_LogsSetting_Str54[] = {
	"MoCA",
	"MoCA"
	};

char* MLG_Maintenance_LogsSetting_Str56[] = {
	"XDSL",
	"XDSL"
	};

char* MLG_Maintenance_LogsSetting_Str57[] = {
	"Internet",
	"Internet"
	};

char* MLG_Maintenance_LogsSetting_Str58[] = {
	"VoIP",
	"VoIP"
	};

char* MLG_Maintenance_LogsSetting_Str59[] = {
	"Remote",
	"Uzaktan Eri&#351;im"
	};

char* MLG_Maintenance_LogsSetting_Str60[] = {
	"Local File",
	"Yerel Dosya"
	};

char* MLG_Maintenance_LogsSetting_Str61[] = {
	"Local File and Remote",
	"Yerel Dosya ve Uzaktan Eri&#351;im"
	};


char* MLG_Maintenance_Remote_Title[] = {
	"Trust Domain",
	"G&#252;venilir Alan Ad&#305;"
	};

char* MLG_Maintenance_Remote_Add_Domain[] = {
	"Add Trust Domain",
	"G&#252;venilir Alan Ad&#305;"
	};

char* MLG_Maintenance_Remote_Title_Certificate[] = {
	"Certificate",
	"Sertifika"
	};

char* MLG_Maintenance_Remote_Title_Certificate_Str[] = {
	"HTTPS Certificate",
	"HTTPS Sertifikas&#305;"
	};

char* MLG_Maintenance_Remote_Str[] = {
	"prefix length",
	"&#246;nek uzunlu&#287;u"
	};


char* MLG_Maintenance_Remote_Explain[] = {
	"Remote MGMT enables various approaches to access this device remotely from a WAN and/or LAN connection.",
	"Uzak MGMT, bir WAN ve / veya Yerel A&#287; ba&#287;lant&#305;s&#305; ile uzaktan bu cihaza eri&#351;im i&#231;in &#231;e&#351;itli y&#246;ntemler sa&#287;lar."
	};

char* MLG_Maintenance_Remote_Passwordchanged_Str[] = {
	"Remote access will not be enabled unless the GUI login password is changed. Would you like to change your password now?",
	"Modemin arayüz giriş şifresi değiştirilmediği takdirde uzaktan erişim etkin olmayacaktır. Modeminizi şifresini değiştirmek ister misiniz?"
	};

char* MLG_Maintenance_Remote_HTTPS_Str[] = {
	"HTTPS",
	"HTTPS"
	};

char* MLG_Maintenance_Remote_HTTP_Str[] = {
	"HTTP",
	"HTTP"
	};

char* MLG_Maintenance_Remote_TELNET_Str[] = {
	"TELNET",
	"TELNET"
	};

char* MLG_Maintenance_Remote_FTP_Str[] = {
	"FTP",
	"FTP"
	};

char* MLG_Maintenance_Remote_SSH_Str[] = {
	"SSH",
	"SSH"
	};

char* MLG_Maintenance_Remote_Services_Str[] = {
	"HTTP",
	"HTTP"
	};

char* MLG_Maintenance_WAN_USED_FOR_SERVERS[] = {
	"WAN Interface used for services",
	"Servisler i&#231;in kullan&#305;lan WAN aray&uuml;zleri"
	};

char* MLG_Maintenance_Trust_Domain_Explain[] = {
	"Click the 'Add Trust Domain' button to enter the IP address of the management station permitted to access the local management services",
	"Uzak MGMT, bir WAN ve / veya Yerel A&#287; ba&#287;lant&#305;s&#305; ile uzaktan bu cihaza eri&#351;im i&#231;in &#231;e&#351;itli y&#246;ntemler sa&#287;lar."
	};

char* MLG_Maintenance_Add_Trust_Domain_Explain[] = {
	"Enter the IP address of the management station permitted to access the local management services, and click 'Apply'",
	"Uzak MGMT, bir WAN ve / veya Yerel A&#287; ba&#287;lant&#305;s&#305; ile uzaktan bu cihaza eri&#351;im i&#231;in &#231;e&#351;itli y&#246;ntemler sa&#287;lar."
	};


char* MLG_Maintenance_Trust_Domain_Alert_str1[] = {
	"IP Address {{1}} is  exist",
	"Uzak MGMT, bir WAN ve / veya Yerel A&#287; ba&#287;lant&#305;s&#305; ile uzaktan bu cihaza eri&#351;im i&#231;in &#231;e&#351;itli y&#246;ntemler sa&#287;lar."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str1[] = {
	"System log mail subject cannot be empty.",
	"Sistem kayd&#305; e-posta konusu bo&#351; olamaz."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str2[] = {
	"Security log mail subject cannot be empty.",
	"G&#252;venlik kayd&#305; e- posta konusu bo&#351; olamaz."
	};

char* MLG_Maintenance_LogsSetting_Explain[] = {
	"Log Setting defines which types of logs and which log levels you want to record. If you have a LAN client on your network that is running a syslog utility, you can also save the log files there by enabling Syslog Logging and enter the IP address of that LAN client.",
	"Kay&#305;t Ayar&#305;, kaydetmek istedi&#287;iniz kay&#305;t t&#252;rlerini ve kay&#305;t seviyelerini tan&#305;mlar. Bir syslog program&#305; &#231;al&#305;&#351;t&#305;ran a&#287; &#252;zerinde bir Yerel A&#287; istemciniz varsa, siz de Sistem Giri&#351; Kayd&#305;n&#305; etkinle&#351;tirerek ve Yerel A&#287; istemcisi IP adresini girerek kay&#305;t dosyalar&#305;n&#305; oraya kaydedebilirsiniz."
	};

char* MLG_Maintenance_LogsSetting_Str52[] = {
	"settings are invalid when disabled",
	"devre d&#305;&#351;&#305; b&#305;rak&#305;ld&#305;&#287;&#305;nda ayarlar ge&#231;ersizdir"
	};

char* MLG_Maintenance_LogsSetting_Title[] = {
	"Syslog Setting",
	"Syslog Ayarlar&#305;"
	};


char* MLG_Maintenance_LogsSetting_AlertMsg_Str3[] = {
	"Invalid alert interval, valid range: 0~3600",
	"Ge&#231;ersiz &#246;nemli uyar&#305; aral&#305;&#287;&#305;, ge&#231;erli aral&#305;k: 0~3600 &#39;d&#252;r."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str4[] = {
	"Invalid capacity alarm percent, valid range: 0~100",
	"Ge&#231;ersiz kapasite alarm y&#252;zdesi, ge&#231;erli aral&#305;k: 0~100 &#39;d&#252;r."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str5[] = {
	"SMTP user cannot be empty.",
	"SMTP kullan&#305;c&#305;s&#305; bo&#351; olamaz."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str6[] = {
	"SMTP password cannot be empty.",
	"SMTP &#351;ifresi bo&#351; olamaz."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str7[] = {
	"Please set Mail Server in Maintenance->Email Notification",
	"Bak&#305;m-> E-posta Bildirimi sekmesindeki E- Posta Sunucusunu ayarlay&#305;n&#305;z."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str8[] = {
	"Server IP address {{1}} is invalid IP address or host name.",
	"Sunucu IP adresi {{1}} ge&#231;ersiz bir IP adresi veya host ad&#305;d&#305;r."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str9[] = {
	"Server UDP port {{1}} is invalid.",
	"UDP portu Sunucusu {{1}} ge&#231;ersizdir."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str10[] = {
	"Log E-Mail address {{1}} is invalid.",
	"E-Posta adresi Kayd&#305;{{1}} ge&#231;ersizdir."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str11[] = {
	"Mail server address {{1}} is invalid IP address or host name.",
	"E-Posta sunucu adresi {{1}} ge&#231;ersiz bir IP adresi veya host ad&#305;d&#305;r."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str12[] = {
	"Alert E-Mail address {{1}} is invalid.",
	"E-Posta adresi &#246;nemli uyar&#305;s&#305; {{1}} ge&#231;ersizdir."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str13[] = {
	"The password must contain 4 to 256 characters.",
	"&#350;ifre, 4 ile 256 aras&#305; karakterden olu&#351;mal&#305;d&#305;r."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str14[] = {
	"The password must contain at least one numeric character and one alpha character.",
	"&#350;ifre, en az bir rakam ve bir harf i&#231;ermelidir!"
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str15[] = {
	"The characters in password cannot contain your username.",
	"&#350;ifredeki karakterler ad&#305;n&#305;z&#305; i&#231;eremez."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str16[] = {
	"The password can not be the empty.",
	"&#350;ifre alan&#305; bo&#351; olamaz"
	};


char* MLG_Maintenance_LogsSetting_AlertMsg_Str17[] = {
	"Please verify the password and try again.",
	"L&#252;tfen &#351;ifreyi do&#287;rulay&#305;n ve yeniden deneyin."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str18[] = {
	"Administrator level can not change password.",
	"Y&#246;netici d&#252;zeyi, parolay&#305; de&#287;i&#351;tiremez."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str19[] = {
	"HTTP port {{1}} is used for other service.",
	"HTTP portu {{1}} di&#287;er hizmet i&#231;in kullan&#305;l&#305;yor."
	};

char* MLG_Maintenance_Email_Notification_Explain[] = {
	"Add email to set email notification for logs, 3G Backup and Wireless.",
	"Kay&#305;tlar, 3G Yedekleme ve i&#231;in e-posta bildirimini ayarlamak i&#231;in e-posta ekleyin."
	};

char* MLG_Maintenance_Email_Notification_Explain_NoVoip[] = {
	"Add email to set email notification for logs, 3G Backup.",
	"(null)"
	};

char* MLG_Maintenance_Email_Str1[] = {
	"Email Notification",
	"E-posta Bildirimi"
	};

char* MLG_Maintenance_Email_Str2[] = {
	"Email Delete",
	"E-posta Sil "
	};

char* MLG_Maintenance_Email_Title[] = {
	"Email Notification Configuration",
	"E-posta Bildirimi Yap&#305;land&#305;rmas&#305;"
	};

char* MLG_Maintenance_Email_Notification_Str[] = {
	"E-mail notification only support the e-mail server using port 25.",
	"E-posta bildirimi sadece port 25 kullanan e-posta sunucusunu destekler."
	};

char* MLG_Maintenance_Btn_Add_New_Email[] = {
	"Add New Email",
	"Yeni E-posta ekle"
	};

char* MLG_Maintenance_Email_Address_Str[] = {
	"Email Address",
	"E-posta Adresi"
	};

char* MLG_Maintenance_Email_Authentication_Password_Str[] = {
	"Authentication Password",
	"Do&#287;rulama &#350;ifresi"
	};

char* MLG_Maintenance_Email_Authentication_Username_Str[] = {
	"Authentication Username",
	"Do&#287;rulama Kullan&#305;c&#305; Ad&#305;"
	};

char* MLG_Maintenance_Email_Account_Email_Address_Str[] = {
	"Account Email Address",
	"Hesap E-posta Adresi"
	};

char* MLG_Maintenance_Mail_Server_Address_Str[] = {
	"Mail Server Address",
	"Posta Sunucu Adresi"
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str20[] = {
	"HTTPS port {{1}} is used for other service.",
	"HTTP portu {{1}} di&#287;er hizmet i&#231;in kullan&#305;l&#305;yor."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str21[] = {
	"SSH port {{1}} is used for other service.",
	"SSH portu {{1}} di&#287;er hizmet i&#231;in kullan&#305;l&#305;yor."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str22[] = {
	"TELNET port {{1}} is used for other service.",
	"TELNET portu {{1}} di&#287;er hizmet i&#231;in kullan&#305;l&#305;yor."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str23[] = {
	"FTP port {{1}} is used for other service.",
	"FTP portu {{1}} di&#287;er hizmet i&#231;in kullan&#305;l&#305;yor."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str24[] = {
	"Http port {{1}} is invalid (1~65535).",
	"Http portu{{1}}, (1 ~ 65535) aral&#305;&#287;&#305;nda ge&#231;ersizdir."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str25[] = {
	"Https port {{1}} is invalid (1~65535).",
	"Http portu{{1}}, (1 ~ 65535) aral&#305;&#287;&#305;nda ge&#231;ersizdir"
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str26[] = {
	"SSH port {{1}} is invalid (1~65535).",
	"SSH portu{{1}}, (1 ~ 65535) aral&#305;&#287;&#305;nda ge&#231;ersizdir."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str27[] = {
	"Telnet port {{1}} is invalid (1~65535).",
	"Telnet portu{{1}}, (1 ~ 65535) aral&#305;&#287;&#305;nda ge&#231;ersizdir."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str28[] = {
	"FTP port {{1}} is invalid (1~65535).",
	"FTP portu{{1}}, ge&#231;ersizdir"
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str29[] = {
	"IP Address {{1}} is  invalid.",
	"IP adresi {{1}}, ge&#231;ersizdir."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str30[] = {
	"Mail Server Address {{1}} is  invalid.",
	"Posta Sunucu Adresi {{1}}, ge&#231;ersizdir."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str31[] = {
	"Account Email Address {{1}} is  invalid.",
	"Hesap E-Posta Adresi {{1}}, ge&#231;ersizdir."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str32[] = {
	"From E-Mail address {{1}} is  invalid.",
	"E-Posta G&#246;nderen Adresi {{1}}, ge&#231;ersizdir."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str33[] = {
	"Please set Mail Server in Email Notification",
	"L&#252;tfen E-Posta Bildiriminde E-Posta Sunucusunu ayarlay&#305;n&#305;z."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str34[] = {
	"Old Password error.",
	"Eski Şifre hatası."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str35[] = {
	"The password must contain 4 to 256 characters, include 0-9 and a-z.",
	"&#350;ifre, 0 - 9 ve a - z aras&#305;ndan se&#231;ilen 4 ile 256 karakterden olu&#351;mal&#305;d&#305;r."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str36[] = {
	"The password must contain 6 to 20 characters, include 0-9 and a-z.",
	"&#350;ifre, 0 - 9 ve a - z aras&#305;ndan se&#231;ilen 6 ile 20 karakterden olu&#351;mal&#305;d&#305;r."
	};


char* MLG_Maintenance_LogsSetting_AlertMsg_Str37[] = {
	"The password must contain 6 to 20 characters.",
	"&#350;ifre, 6 ile 20 aras&#305; karakterden olu&#351;mal&#305;d&#305;r."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str38[] = {
	"The password must contain numbers and letters together; it shouldn’t have more than 3 increasing, decreasing or repeating characters from minimum 8 characters up to 256 characters.",
	"Şifre içinde rakam ve harf birlikte bulunduracak şekilde, 3’ten fazla artan, azalan veya tekrar eden karakterlerin bulunmadığı 8 ile 256 arası karakterden oluşmalıdır."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str39[] = {
	"Your password has more than 3 increasing or decreasing numbers or letters. Please do not create a password that can be easily guessed for your own security.",
	"&#350;ifrenizde 3&#8217;ten fazla artan veya azalan rakamlar veya harfler var. G&#252;venli&#287;iniz i&#231;in l&#252;tfen kolay tahmin edilebilir &#351;ifreler girmeyiz!"
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str40[] = {
	"Your password has more than 3 repeating characters. Please do not create a password that can be easily guessed for your own security.",
	"&#350;ifrenizde 3&#8217;ten fazla tekrar eden karakterler var. G&#252;venli&#287;iniz i&#231;in l&#252;tfen kolay tahmin edilebilir &#351;ifreler girmeyiz!"
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str41[] = {
	"The password must contain 8 to 256 characters.",
	"&#350;ifre, 8 Ile 256 aras&#305; karakterden olu&#351;mal&#305;d&#305;r."
	};

char* MLG_Maintenance_LogsSetting_AlertMsg_Str42[] = {
	"Your new password is same with your old password. Please define a new password.",
	"Yeni şifreniz eski şifreniz ile aynı. Lütfen başka bir şifre tanımlayınız."
	};

char* MLG_Maintenance_LogsSetting_Str5[] = {
	"Syslog Server IP Address",
	"Syslog Sunucusu IP Adresi"
	};

char* MLG_Maintenance_LogsSetting_Str6[] = {
	"Server NAME or IPv4/IPv6 Address",
	"Sunucu ADI veya IP Adresi"
	};

char* MLG_Maintenance_LogsSetting_Str7[] = {
	"UDP Port",
	"UDP Portu"
	};

char* MLG_Maintenance_LogsSetting_Str8[] = {
	"E-mail Log Settings",
	"E-Posta Giri&#351; Ayarlar&#305;"
	};

char* MLG_Maintenance_LogsSetting_Str9[] = {
	"Mail Server",
	"E-Posta Sunucusu"
	};

char* MLG_Maintenance_OAMPing_Str1[] = {
	"OAM Ping is a computer network administration utility used to test ADSL connection status.",
	"OAM Ping, ADSL ba&#287;lant&#305;s&#305; durumunu test etmek i&#231;in kullan&#305;lan bir bilgisayar a&#287; y&#246;netimi arac&#305;d&#305;r."
	};

char* MLG_Maintenance_OAMPing_Str10[] = {
	"FAIL",
	"HATA"
	};

char* MLG_Maintenance_OAMPing_Str11[] = {
	"F4 FAIL",
	"F4 HATA"
	};

char* MLG_Maintenance_OAMPing_Str12[] = {
	"{{1}} Test: FAIL",
	" {{1}} Test: HATA"
	};

char* MLG_Maintenance_OAMPing_Str13[] = {
	"{{1}} Test: PASS",
	" {{1}} Test: GE&#199;T&#304; "
	};

char* MLG_Maintenance_OAMPing_Str14[] = {
	"{{1}} Test: DISABLED <br> ADSL link is down, tests not done",
	" {{1}} Test: DEVRE DI&#350;I <br> ADSL ba&#287;lant&#305;s&#305; koptu, testler yap&#305;lamad&#305; "
	};

char* MLG_Maintenance_OAMPing_Str2[] = {
	"Info",
	"Bilgi"
	};

char* MLG_Maintenance_OAMPing_Str3[] = {
	"F4 segment",
	"F4 segmenti"
	};

char* MLG_Maintenance_OAMPing_Str4[] = {
	"F4 end-end",
	"U&#231;tan uca F4"
	};

char* MLG_Maintenance_OAMPing_Str5[] = {
	"F5 segment",
	"F5 segmenti"
	};

char* MLG_Maintenance_OAMPing_Str6[] = {
	"F5 end-end",
	"U&#231;tan uca F5"
	};

char* MLG_Maintenance_OAMPing_Str7[] = {
	"DISABLED",
	"DEVRE DI&#350;I "
	};

char* MLG_Maintenance_OAMPing_Str8[] = {
	"SKIP",
	"ATLA"
	};

char* MLG_Maintenance_OAMPing_Str9[] = {
	"PASS",
	"GE&#199; "
	};

char* MLG_Maintenance_PingTraceRouteNsLookup_Str1[] = {
	"Traceroute is a computer network administration utility used to test whether a particular host is reachable. You can enter IP or hostname to do traceroute test.",
	"Traceroute, belirli bir hostun eri&#351;ilebilir olup olmad&#305;&#287;&#305;n&#305; test etmek i&#231;in kullan&#305;lan bir a&#287; arac&#305;d&#305;r. Traceroute testi yapmak i&#231;in IP veya host ad&#305;n&#305; girebilirsiniz."
	};

char* MLG_Maintenance_PingTraceRouteNsLookup_Str2[] = {
	"Ping is a computer network administration utility used to test whether a particular host is reachable. You can enter IP or hostname to do Ping test.",
	"Ping, belirli bir hostun eri&#351;ilebilir olup olmad&#305;&#287;&#305;n&#305; test etmek i&#231;in kullan&#305;lan bir a&#287; arac&#305;d&#305;r. Ping testi yapmak i&#231;in IP veya host ad&#305;n&#305; girebilirsiniz."
	};

char* MLG_Maintenance_PingTraceRouteNsLookup_Str3[] = {
	"Info",
	"Bilgi"
	};

char* MLG_Maintenance_PingTraceRouteNsLookup_Str4[] = {
	"Address",
	"Adres"
	};

char* MLG_Maintenance_PingTraceRouteNsLookup_Str5[] = {
	"URL or IP Address",
	"URL veya IP Adresi"
	};

char* MLG_Maintenance_PingTraceRouteNsLookup_Str6[] = {
	"Ping",
	"Ping"
	};

char* MLG_Maintenance_PingTraceRouteNsLookup_Str7[] = {
	"Trace Route",
	"Trace route"
	};

char* MLG_Maintenance_PingTraceRouteNsLookup_Str8[] = {
	"Nslookup",
	"Nslookup"
	};


char* MLG_Maintenance_PingTraceRouteNsLookup_AlertMsg_Str1[] = {
	"Address should not be empty!",
	"Adres alan&#305; bo&#351; olmamal&#305;!"
	};

char* MLG_Maintenance_PingTraceRouteNsLookup_AlertMsg_Str2[] = {
	"Address is invalid",
	"Adres ge&#231;ersiz."
	};

char* MLG_Maintenance_OAMPing_Str15[] = {
	"VPI/VCI",
	"VPI/VCI"
	};

char* MLG_Maintenance_OAMPing_Str16[] = {
	"Test: DISABLED",
	"Test: DEVRE DI&#350;I "
	};

char* MLG_Maintenance_OAMPing_Str17[] = {
	"ADSL link is down, tests not done",
	"ADSL ba&#287;lant&#305;s&#305; koptu, testler yap&#305;lamad&#305;."
	};

char* MLG_Maintenance_Reboot_AlertMsg_Str1[] = {
	"Router is rebooting now. Please wait &#8230;",
	"Y&#246;nlendirici &#351;imdi yeniden ba&#351;lat&#305;l&#305;yor. L&#252;tfen bekleyiniz &#8230;"
	};

char* MLG_Maintenance_Reboot_AlertMsg_Str2[] = {
	"As there will be no indication of when the process is complete, please wait for one minute before attempting to access the router again.",
	"&#304;&#351;lemin tamamland&#305;&#287;&#305;na dair hi&#231;bir g&#246;sterge olmayaca&#287;&#305;ndan, y&#246;nlendiriciye tekrar eri&#351;meyi denemeden &#246;nce l&#252;tfen bir dakika bekleyin."
	};

char* MLG_Maintenance_Apply_Btn[] = {
	"Apply",
	"Uygula"
	};

char* MLG_Maintenance_Cancel_Btn[] = {
	"Cancel",
	"&#304;ptal"
	};

char* MLG_Maintenance_Reboot_Btn1[] = {
	"Reboot",
	"Yeniden ba&#351;lat"
	};

char* MLG_Maintenance_Reboot_Str1[] = {
	"Reboot performs a software restart of the device. It takes a few minutes before you can log into the device again after reboot.",
	"Yeniden ba&#351;latma se&#231;ene&#287;i, cihaz&#305;n yaz&#305;l&#305;m&#305;n&#305; yeniden ba&#351;latmas&#305;n&#305; sa&#287;lar. Bu yeniden ba&#351;latma i&#351;leminden sonra cihaza tekrar giri&#351; yapabilmeniz i&#231;in bir ka&#231; dakika beklemeniz gerekmektedir."
	};

char* MLG_Maintenance_Reboot_Str2[] = {
	"System Reboot",
	"Sistemi Yeniden Ba&#351;lat"
	};

char* MLG_Maintenance_Reboot_Str3[] = {
	"Router is restarting now.Please wait ...",
	"Y&#246;nlendiriciniz yeniden ba&#351;lat&#305;l&#305;yor.L&#252;tfen bekleyiniz&#8230;"
	};

char* MLG_Maintenance_SNMP_AlertMsg_Str1[] = {
	"Read community is required.",
	"Community okuma gerekli."
	};

char* MLG_Maintenance_SNMP_AlertMsg_Str2[] = {
	"Set community is required.",
	"Community ayarlama gerekli."
	};

char* MLG_Maintenance_SNMP_AlertMsg_Str3[] = {
	"The length of read community {{1}} is too long [0-15].",
	"Community okuma uzunlu&#287;u {{1}}, &#231;ok uzundur, [0-15]."
	};

char* MLG_Maintenance_SNMP_AlertMsg_Str4[] = {
	"The length of set community {{1}} is too long [0-15].",
	"Community ayarlama uzunlu&#287;u {{1}}, &#231;ok uzundur, [0-15]."
	};

char* MLG_Maintenance_SNMP_AlertMsg_Str5[] = {
	"The length of System name {{1}} is too long [0-15].",
	"SysName uzunlu&#287;u {{1}}, &#231;ok uzundur, [0-15]."
	};

char* MLG_Maintenance_SNMP_AlertMsg_Str6[] = {
	"The length of System Contact {{1}} is too long [0-15].",
	"SysContact uzunlu&#287;u {{1}}, &#231;ok uzundur,  [0-15]."
	};

char* MLG_Maintenance_SNMP_AlertMsg_Str7[] = {
	"The length of System Location {{1}} is too long [0-15].",
	"SysLocation uzunlu&#287;u {{1}}, &#231;ok uzundur,  [0-15]."
	};

char* MLG_Maintenance_SNMP_AlertMsg_Str8[] = {
	"Trap Management IP address {{1}} is invalid IP address.",
	"Trap&#39;lerin g&#246;nderilece&#287;i Y&#246;netici IP adresi {{1}}, ge&#231;ersiz bir IP adresidir."
	};

char* MLG_Maintenance_SNMP_Str1[] = {
	"Simple Network Management Protocol (SNMP) allows a management application to retrieve statistics and status from the SNMP agent in this device. <br> Select the desired values and click \'Apply\' to configure the SNMP options. ",
	"Basit A&#287; Y&#246;netimi Protokol&#252; (SNMP), bir y&#246;netim uygulamas&#305;n&#305;n bu cihazdaki SNMP agent&#39;&#305;ndan istatistikleri ve durumu almas&#305;n&#305; sa&#287;lar. <br> &#304;stenilen de&#287;erleri se&#231;in ve SNMP se&#231;eneklerini yap&#305;land&#305;rmak i&#231;in \'Uygula\' d&#252;&#287;mesine t&#305;klay&#305;n. "
	};

char* MLG_Maintenance_SNMP_Str2[] = {
	"SNMP Agent",
	"SNMP Agent"
	};

char* MLG_Maintenance_SNMP_Str3[] = {
	"Read Community",
	"Community Oku"
	};

char* MLG_Maintenance_SNMP_Str4[] = {
	"Set Community",
	"Community Ayarla"
	};

char* MLG_Maintenance_SNMP_Str5[] = {
	"System Name",
	"Sistem Ad&#305;"
	};

char* MLG_Maintenance_SNMP_Str6[] = {
	"System Location",
	"Sistem Konumu"
	};

char* MLG_Maintenance_SNMP_Str7[] = {
	"System Contact",
	"Sistem &#304;leti&#351;imi"
	};

char* MLG_Maintenance_SNMP_Str8[] = {
	"Trap Manager IP",
	"Trap Y&#246;netici IP"
	};

char* MLG_Maintenance_TimeSetting_Str1[] = {
	"You can adjust the time of the device with the following settings. Current Date/Time is in 24 hour format.",
	"A&#351;a&#287;&#305;daki ayarlar ile cihaz&#305;n zaman&#305;n&#305; ayarlayabilirsiniz. Ge&#231;erli Tarih / Saat, 24 saat format&#305;ndad&#305;r."
	};

char* MLG_Maintenance_TimeSetting_Str10[] = {
	"clock.fmt.he.net",
	"clock.fmt.he.net"
	};

char* MLG_Maintenance_TimeSetting_Str11[] = {
	"clock.nyc.he.net",
	"clock.nyc.he.net"
	};

char* MLG_Maintenance_TimeSetting_Str12[] = {
	"clock.sjc.he.net",
	"clock.sjc.he.net"
	};

char* MLG_Maintenance_TimeSetting_Str13[] = {
	"clock.via.net",
	"clock.via.net"
	};

char* MLG_Maintenance_TimeSetting_Str14[] = {
	"ntp1.tummy.com",
	"ntp1.tummy.com"
	};

char* MLG_Maintenance_TimeSetting_Str15[] = {
	"time.cachenetworks.com",
	"time.cachenetworks.com"
	};

char* MLG_Maintenance_TimeSetting_Str16[] = {
	"time.nist.gov",
	"time.nist.gov"
	};

char* MLG_Maintenance_TimeSetting_Str17[] = {
	"Time Zone",
	"Zaman Dilimi"
	};

char* MLG_Maintenance_TimeSetting_Str18[] = {
	"Time zone offset",
	"Saat dilimi farkl&#305;l&#305;&#287;&#305;"
	};

char* MLG_Maintenance_TimeSetting_Str19[] = {
	"(GMT-09:00)Alaska",
	"(GMT-09:00)Alaska"
	};

char* MLG_Maintenance_TimeSetting_Str2[] = {
	"Current Date/Time",
	"Ge&#231;erli Tarih / Saat"
	};

char* MLG_Maintenance_TimeSetting_Current_Time[] = {
	"Current Time",
	"Ge&#231;erli Saat"
	};

char* MLG_Maintenance_TimeSetting_Current_Date[] = {
	"Current Date",
	"Ge&#231;erli Tarih"
	};

char* MLG_Maintenance_TimeSetting_Str20[] = {
	"(GMT-08:00) Pacific Time, Tijuana",
	"(GMT-08: 00) Pasifik Saati, Tijuana"
	};

char* MLG_Maintenance_TimeSetting_Str21[] = {
	"(GMT-07:00) Mountain Time",
	"(GMT-07: 00) Mountain Saati"
	};

char* MLG_Maintenance_TimeSetting_Str22[] = {
	"(GMT-06:00) Central time",
	"(GMT-06: 00) Merkezi saat"
	};

char* MLG_Maintenance_TimeSetting_Str23[] = {
	"(GMT-05:00) Eastern Time",
	"(GMT-05: 00) Do&#287;u Saati"
	};

char* MLG_Maintenance_TimeSetting_Str24[] = {
	"Daylight Saving",
	"G&#252;n&#305;&#351;&#305;&#287;&#305;ndan Tasarruf"
	};

char* MLG_Maintenance_TimeSetting_Str25[] = {
	"Start rule",
	"Kural Ba&#351;lat"
	};

char* MLG_Maintenance_TimeSetting_Str26[] = {
	"Day",
	"G&#252;n"
	};

char* MLG_Maintenance_TimeSetting_Str27[] = {
	"in",
	"de"
	};

char* MLG_Maintenance_TimeSetting_Str28[] = {
	"Week",
	"Hafta"
	};

char* MLG_Maintenance_TimeSetting_Str29[] = {
	"Sunday",
	"Pazar"
	};

char* MLG_Maintenance_TimeSetting_Str3[] = {
	"System Time",
	"Sistem Zaman&#305;"
	};

char* MLG_Maintenance_TimeSetting_Str30[] = {
	"Monday",
	"Pazartesi"
	};

char* MLG_Maintenance_TimeSetting_Str31[] = {
	"Tuesday",
	"Sal&#305;"
	};

char* MLG_Maintenance_TimeSetting_Str32[] = {
	"Wednesday",
	"&#199;ar&#351;amba"
	};

char* MLG_Maintenance_TimeSetting_Str33[] = {
	"Thursday",
	"Per&#351;embe"
	};

char* MLG_Maintenance_TimeSetting_Str34[] = {
	"Friday",
	"Cuma"
	};

char* MLG_Maintenance_TimeSetting_Str35[] = {
	"Saturday",
	"Cumartesi"
	};

char* MLG_Maintenance_TimeSetting_Str36[] = {
	"Month",
	"Ay"
	};

char* MLG_Maintenance_TimeSetting_Str37[] = {
	"January",
	"Ocak"
	};

char* MLG_Maintenance_TimeSetting_Str38[] = {
	"February",
	"&#350;ubat"
	};

char* MLG_Maintenance_TimeSetting_Str39[] = {
	"March",
	"Mart"
	};

char* MLG_Maintenance_TimeSetting_Str4[] = {
	"NTP Time Server",
	"NTP Zaman Sunucusu"
	};

char* MLG_Maintenance_TimeSetting_First_NTP_Service[] = {
	"First Time Server",
	"&#304;lk Zaman Sunucusu"
	};

char* MLG_Maintenance_TimeSetting_Second_NTP_Service[] = {
	"Second Time Server",
	"&#304;kinci Zaman Sunucusu"
	};

char* MLG_Maintenance_TimeSetting_Fourth_NTP_Service[] = {
	"Fourth Time Server",
	"D&#246;rd&#252;nc&#252; Zaman Sunucusu"
	};

char* MLG_Maintenance_TimeSetting_Fifth_NTP_Service[] = {
	"Fifth Time Server",
	"Be&#351;inci Zaman Sunucusu"
	};

char* MLG_Maintenance_TimeSetting_Third_NTP_Service[] = {
	"Third Time Server",
	"&#220;&#231;&#252;nc&#252; Zaman Sunucusu"
	};

char* MLG_Maintenance_TimeSetting_Str40[] = {
	"April",
	"Nisan"
	};

char* MLG_Maintenance_TimeSetting_Str41[] = {
	"May",
	"May&#305;s"
	};

char* MLG_Maintenance_TimeSetting_Str42[] = {
	"June",
	"Haziran"
	};

char* MLG_Maintenance_TimeSetting_Str43[] = {
	"July",
	"Temmuz"
	};

char* MLG_Maintenance_TimeSetting_Str44[] = {
	"August",
	"A&#287;ustos"
	};

char* MLG_Maintenance_TimeSetting_Str45[] = {
	"September",
	"Eyl&#252;l"
	};

char* MLG_Maintenance_TimeSetting_Str46[] = {
	"October",
	"Ekim"
	};

char* MLG_Maintenance_TimeSetting_Str47[] = {
	"November",
	"Kas&#305;m"
	};

char* MLG_Maintenance_TimeSetting_Str48[] = {
	"December",
	"Aral&#305;k"
	};

char* MLG_Maintenance_TimeSetting_Str49[] = {
	"Time",
	"Zaman"
	};

char* MLG_Maintenance_TimeSetting_Str5[] = {
	"First NTP time server",
	"&#304;lk NTP zaman sunucusu"
	};

char* MLG_Maintenance_TimeSetting_Str50[] = {
	"End rule",
	"Biti&#351; kural&#305; "
	};

char* MLG_Maintenance_TimeSetting_Str51[] = {
	"Hour",
	"Saat"
	};

char* MLG_Maintenance_TimeSetting_Str52[] = {
	"Order",
	"D&#252;zen"
	};

char* MLG_Maintenance_TimeSetting_Str53[] = {
	"First",
	"Birinci"
	};

char* MLG_Maintenance_TimeSetting_Str54[] = {
	"Second",
	"&#304;kinci"
	};

char* MLG_Maintenance_TimeSetting_Str55[] = {
	"Third",
	"&#220;&#231;&#252;nc&#252;"
	};

char* MLG_Maintenance_TimeSetting_Str56[] = {
	"Fourth",
	"D&#246;rd&#252;nc&#252;"
	};

char* MLG_Maintenance_TimeSetting_Str57[] = {
	"Fifth",
	"Be&#351;inci"
	};

char* MLG_Maintenance_TimeSetting_Str58[] = {
	"Min",
	"Dakika"
	};

char* MLG_Maintenance_TimeSetting_Str59[] = {
	"(GMT-12:00) International Date Line West",
	"(GMT-12:00) Uluslararas&#305; Tarih De&#287;i&#351;tirme &#199;izgisi"
	};

char* MLG_Maintenance_TimeSetting_Str60[] = {
	"(GMT-11:00) Midway Island, Samoa",
	"(GMT-11:00) Midway Adas&#305;, Samoa"
	};

char* MLG_Maintenance_TimeSetting_Str61[] = {
	"(GMT-10:00) Hawaii",
	"(GMT-10:00) Hawaii"
	};

char* MLG_Maintenance_TimeSetting_Str62[] = {
	"(GMT-09:00) Alaska",
	"(GMT-09:00) Alaska"
	};

char* MLG_Maintenance_TimeSetting_Str63[] = {
	"(GMT-08:00) Pacific Time, Tijuana",
	"(GMT-08:00) Pasifik Saati, Tijuana"
	};

char* MLG_Maintenance_TimeSetting_Str64[] = {
	"(GMT-07:00) Arizona, Mazatlan",
	"(GMT-07:00) Arizona, Mazatlan"
	};

char* MLG_Maintenance_TimeSetting_Str65[] = {
	"(GMT-07:00) Chihuahua",
	"(GMT-07:00) Chihuahua"
	};

char* MLG_Maintenance_TimeSetting_Str66[] = {
	"(GMT-07:00) Mountain Time",
	"(GMT-07:00) Mountain Saati"
	};

char* MLG_Maintenance_TimeSetting_Str67[] = {
	"(GMT-06:00) Central America",
	"(GMT-06:00) Central America"
	};

char* MLG_Maintenance_TimeSetting_Str68[] = {
	"(GMT-06:00) Central Time",
	"(GMT-06:00) Merkezi Saat"
	};

char* MLG_Maintenance_TimeSetting_Str69[] = {
	"(GMT-06:00) Guadalajara, Mexico City, Monterrey",
	"(GMT-06:00) Guadalajara, Mexico City, Monterrey"
	};

char* MLG_Maintenance_TimeSetting_Str70[] = {
	"(GMT-06:00) Saskatchewan",
	"(GMT-06:00) Saskatchewan"
	};

char* MLG_Maintenance_TimeSetting_Str71[] = {
	"(GMT-05:00) Bogota, Lima, Quito",
	"(GMT-05:00) Bogota, Lima, Quito"
	};

char* MLG_Maintenance_TimeSetting_Str72[] = {
	"(GMT-05:00) Eastern Time",
	"(GMT-05:00) Do&#287;u Saati"
	};

char* MLG_Maintenance_TimeSetting_Str73[] = {
	"(GMT-05:00) Indiana",
	"(GMT-05:00) Indiana"
	};

char* MLG_Maintenance_TimeSetting_Str74[] = {
	"(GMT-04:00) Atlantic Time",
	"(GMT-04:00) Atlantik Saati"
	};

char* MLG_Maintenance_TimeSetting_Str75[] = {
	"(GMT-04:00) Caracas, La Paz",
	"(GMT-04:00) Caracas, La Paz"
	};

char* MLG_Maintenance_TimeSetting_Str76[] = {
	"(GMT-04:00) Santiago",
	"(GMT-04:00) Santiago"
	};

char* MLG_Maintenance_TimeSetting_Str77[] = {
	"(GMT-04:00) Georgetown",
	"(GMT-04:00) Georgetown"
	};

char* MLG_Maintenance_TimeSetting_Str78[] = {
	"(GMT-03:30) Newfoundland",
	"(GMT-03:30) Newfoundland"
	};

char* MLG_Maintenance_TimeSetting_Str79[] = {
	"(GMT-03:00) Brasilia",
	"(GMT-03:00) Brezilya"
	};

char* MLG_Maintenance_TimeSetting_Str80[] = {
	"(GMT-03:00) Buenos Aires",
	"(GMT-03:00) Buenos Aires"
	};

char* MLG_Maintenance_TimeSetting_Str81[] = {
	"(GMT-03:00) Greenland",
	"(GMT-03:00) Gr&#246;nland"
	};

char* MLG_Maintenance_TimeSetting_Str82[] = {
	"(GMT-02:00) Mid-Atlantic",
	"(GMT-02:00) Orta Atlantik"
	};

char* MLG_Maintenance_TimeSetting_Str83[] = {
	"(GMT-01:00) Azores",
	"(GMT-01:00) Azores"
	};

char* MLG_Maintenance_TimeSetting_Str84[] = {
	"(GMT-01:00) Cape Verde Is.",
	"(GMT-01:00) Cape Verde Is."
	};

char* MLG_Maintenance_TimeSetting_Str85[] = {
	"(GMT-00:00) Casablanca",
	"(GMT-00:00) Kazablanka"
	};

char* MLG_Maintenance_TimeSetting_Str86[] = {
	"(GMT-00:00) Monrovia",
	"(GMT-00:00) Monrovia"
	};

char* MLG_Maintenance_TimeSetting_Str87[] = {
	"(GMT-00:00) Greenwich Mean Time: Edinburgh, London",
	"(GMT-00:00) Greenwich Ana Saati: Edinburgh, Londra"
	};

char* MLG_Maintenance_TimeSetting_Str88[] = {
	"(GMT-00:00) Greenwich Mean Time: Dublin",
	"(GMT-00:00) Greenwich Ana Saati: Dublin"
	};

char* MLG_Maintenance_TimeSetting_Str89[] = {
	"(GMT-00:00) Lisbon",
	"(GMT-00:00) Lizbon"
	};

char* MLG_Maintenance_TimeSetting_Str90[] = {
	"(GMT+01:00) Amsterdam, Berlin, Bern, Rome, Stockholm, Vienna",
	"(GMT+01:00) Amsterdam, Berlin, Bern, Roma, Stockholm, Viyana"
	};

char* MLG_Maintenance_TimeSetting_Str91[] = {
	"(GMT+01:00) Belgrade, Bratislava, Budapest, Ljubljana, Prague",
	"(GMT+01:00) Belgrad, Bratislava, Budape&#351;te, Ljubljana, Prag"
	};

char* MLG_Maintenance_TimeSetting_Str92[] = {
	"(GMT+01:00) Brussels, Copenhagen, Madrid, Paris",
	"(GMT+01:00) Br&#252;ksel, Kopenhag, Madrid, Paris"
	};

char* MLG_Maintenance_TimeSetting_Str93[] = {
	"(GMT+01:00) Sarajevo, Skopje, Warsaw, Zagreb",
	"(GMT+01:00) Sarajevo, Skopje, Warsaw, Zagreb"
	};

char* MLG_Maintenance_TimeSetting_Str94[] = {
	"(GMT+01:00) West Central Africa",
	"(GMT+01:00) Bat&#305; Merkezi Afrika"
	};

char* MLG_Maintenance_TimeSetting_Str95[] = {
	"(GMT+02:00) Athens, Istanbul, Minsk",
	"(GMT+02:00) &#304;stanbul, Atina, Minsk"
	};

char* MLG_Maintenance_TimeSetting_Str96[] = {
	"(GMT+02:00) Bucharest",
	"(GMT+02:00) B&#252;kre&#351;"
	};

char* MLG_Maintenance_TimeSetting_Str97[] = {
	"(GMT+02:00) Cairo",
	"(GMT+02:00) Kahire"
	};

char* MLG_Maintenance_TimeSetting_Str98[] = {
	"(GMT+02:00) Harare, Pretoria",
	"(GMT+02:00) Harare, Pretoria"
	};

char* MLG_Maintenance_TimeSetting_Str99[] = {
	"(GMT+02:00) Pretoria",
	"(GMT+02:00) Pretoria"
	};

char* MLG_Maintenance_TimeSetting_Str100[] = {
	"(GMT+02:00) Helsinki, Kyiv, Riga, Sofia, Tallinn, Vilnius",
	"(GMT+02:00) Helsinki, Kiev, Riga, Sofya, Tallinn, Vilnius"
	};

char* MLG_Maintenance_TimeSetting_Str101[] = {
	"(GMT+02:00) Jerusalem",
	"(GMT+02:00) Kud&#252;s"
	};

char* MLG_Maintenance_TimeSetting_Str102[] = {
	"(GMT+03:00) Baghdad",
	"(GMT+03:00) Ba&#287;dat"
	};

char* MLG_Maintenance_TimeSetting_Str103[] = {
	"(GMT+03:00) Kuwait, Riyadh",
	"(GMT+03:00) Kuveyt, Riyad"
	};

char* MLG_Maintenance_TimeSetting_Str104[] = {
	"(GMT+03:00) Moscow, St. Petersburg, Volgograd",
	"(GMT+03:00) Moskova, St. Petersburg, Volgograd"
	};

char* MLG_Maintenance_TimeSetting_Str105[] = {
	"(GMT+03:00) Nairobi",
	"(GMT+03:00) Nairobi"
	};

char* MLG_Maintenance_TimeSetting_Str106[] = {
	"(GMT+03:30) Tehran",
	"(GMT+03:30) Tahran"
	};

char* MLG_Maintenance_TimeSetting_Str107[] = {
	"(GMT+04:00) Abu Dhabi, Muscat",
	"(GMT+04:00) Abu Dhabi, Muscat"
	};

char* MLG_Maintenance_TimeSetting_Str108[] = {
	"(GMT+04:00) Baku",
	"(GMT+04:00) Baku"
	};

char* MLG_Maintenance_TimeSetting_Str109[] = {
	"(GMT+04:00) Yerevan",
	"(GMT+04:00) Yerevan"
	};

char* MLG_Maintenance_TimeSetting_Str110[] = {
	"(GMT+04:00) Tbilisi",
	"(GMT+04:00) Tiflis"
	};

char* MLG_Maintenance_TimeSetting_Str111[] = {
	"(GMT+04:30) Kabul",
	"(GMT+04:30) Kabil"
	};

char* MLG_Maintenance_TimeSetting_Str112[] = {
	"(GMT+05:00) Yekaterinburg",
	"(GMT+05:00) Yekaterinburg"
	};

char* MLG_Maintenance_TimeSetting_Str113[] = {
	"(GMT+05:00) Islamabad, Karachi",
	"(GMT+05:00) Islamabad, Kara&#231;i"
	};

char* MLG_Maintenance_TimeSetting_Str114[] = {
	"(GMT+05:00) Tashkent",
	"(GMT+05:00) Ta&#351;kent"
	};

char* MLG_Maintenance_TimeSetting_Str115[] = {
	"(GMT+05:30) Chennai, Kolkata, Mumbai, New Delhi",
	"(GMT+05:30) Chennai, Kolkata, Mumbai, Yeni Delhi"
	};

char* MLG_Maintenance_TimeSetting_Str116[] = {
	"(GMT+05:45) Kathmandu",
	"(GMT+05:45) Kathmandu"
	};

char* MLG_Maintenance_TimeSetting_Str117[] = {
	"(GMT+06:00) Almaty, Astana",
	"(GMT+06:00) Almaata, Astana"
	};

char* MLG_Maintenance_TimeSetting_Str118[] = {
	"(GMT+06:00) Novosibirsk",
	"(GMT+06:00) Novosibirsk"
	};

char* MLG_Maintenance_TimeSetting_Str119[] = {
	"(GMT+06:00) Dhaka",
	"(GMT+06:00) Dhaka"
	};

char* MLG_Maintenance_TimeSetting_Str120[] = {
	"(GMT+06:00) Sri Jayawardenapura",
	"(GMT+06:00) Sri Jayawardenapura"
	};

char* MLG_Maintenance_TimeSetting_Str121[] = {
	"(GMT+06:30) Yangoon",
	"(GMT+06:30) Yangoon"
	};

char* MLG_Maintenance_TimeSetting_Str122[] = {
	"(GMT+07:00) Bangkok, Hanoi",
	"(GMT+07:00) Bangkok, Hanoi"
	};

char* MLG_Maintenance_TimeSetting_Str123[] = {
	"(GMT+07:00) Jakarta",
	"(GMT+07:00) Jakarta"
	};

char* MLG_Maintenance_TimeSetting_Str124[] = {
	"(GMT+07:00) Krasnoyarsk",
	"(GMT+07:00) Krasnoyarsk"
	};

char* MLG_Maintenance_TimeSetting_Str125[] = {
	"(GMT+08:00) Hong Kong",
	"(GMT+08:00) Hong Kong"
	};

char* MLG_Maintenance_TimeSetting_Str126[] = {
	"(GMT+08:00) Beijing, Chongquing, Urumqi",
	"(GMT+08:00) Beijing, Chongquing, Urumqi"
	};

char* MLG_Maintenance_TimeSetting_Str127[] = {
	"(GMT+08:00) Irkutsk",
	"(GMT+08:00) Irkutsk"
	};

char* MLG_Maintenance_TimeSetting_Str128[] = {
	"(GMT+08:00) Ulaan Bataar",
	"(GMT+08:00) Ulaan Bataar"
	};

char* MLG_Maintenance_TimeSetting_Str129[] = {
	"(GMT+08:00) Kuala Lumpur",
	"(GMT+08:00) Kuala Lumpur"
	};

char* MLG_Maintenance_TimeSetting_Str130[] = {
	"(GMT+08:00) Singapore",
	"(GMT+08:00) Singapur"
	};

char* MLG_Maintenance_TimeSetting_Str131[] = {
	"(GMT+08:00) Perth",
	"(GMT+08:00) Perth"
	};

char* MLG_Maintenance_TimeSetting_Str132[] = {
	"(GMT+08:00) Taipei",
	"(GMT+08:00) Taipei"
	};

char* MLG_Maintenance_TimeSetting_Str133[] = {
	"(GMT+09:00) Osaka, Sapporo, Tokyo",
	"(GMT+09:00) Osaka, Sapporo, Tokyo"
	};

char* MLG_Maintenance_TimeSetting_Str134[] = {
	"(GMT+09:00) Seoul",
	"GMT+09:00) Seul"
	};

char* MLG_Maintenance_TimeSetting_Str135[] = {
	"(GMT+09:00) Yakutsk",
	"(GMT+09:00) Yakutsk"
	};

char* MLG_Maintenance_TimeSetting_Str136[] = {
	"(GMT+09:30) Adelaide",
	"(GMT+09:30) Adelaide"
	};

char* MLG_Maintenance_TimeSetting_Str137[] = {
	"(GMT+09:30) Darwin",
	"(GMT+09:30) Darwin"
	};

char* MLG_Maintenance_TimeSetting_Str138[] = {
	"(GMT+10:00) Brisbane",
	"(GMT+10:00) Brisbane"
	};

char* MLG_Maintenance_TimeSetting_Str139[] = {
	"(GMT+10:00) Canberra, Melbourne, Sydney",
	"(GMT+10:00) Canberra, Melbourne, Sidney"
	};

char* MLG_Maintenance_TimeSetting_Str140[] = {
	"(GMT+10:00) Guam",
	"(GMT+10:00) Guam"
	};

char* MLG_Maintenance_TimeSetting_Str141[] = {
	"(GMT+10:00) Port Moresby",
	"(GMT+10:00) Port Moresby"
	};

char* MLG_Maintenance_TimeSetting_Str142[] = {
	"(GMT+10:00) Hobart",
	"(GMT+10:00) Hobart"
	};

char* MLG_Maintenance_TimeSetting_Str143[] = {
	"(GMT+10:00) Vladivostok",
	"(GMT+10:00) Vladivostok"
	};

char* MLG_Maintenance_TimeSetting_Str144[] = {
	"(GMT+11:00) Magadan",
	"(GMT+10:00) Magadan"
	};

char* MLG_Maintenance_TimeSetting_Str145[] = {
	"(GMT+11:00) Solomon Is.",
	"(GMT+11:00) Solomon Is."
	};

char* MLG_Maintenance_TimeSetting_Str146[] = {
	"(GMT+11:00) New Caledonia",
	"(GMT+11:00) New Caledonia"
	};

char* MLG_Maintenance_TimeSetting_Str147[] = {
	"(GMT+12:00) Auckland, Wellington",
	"(GMT+12:00) Auckland, Wellington"
	};

char* MLG_Maintenance_TimeSetting_Str148[] = {
	"(GMT+12:00) Kamchatka",
	"(GMT+12:00) Kamchatka"
	};

char* MLG_Maintenance_TimeSetting_Str149[] = {
	"(GMT+12:00) Marshall Is.",
	"(GMT+12:00) Marshall Is."
	};

char* MLG_Maintenance_TimeSetting_Str150[] = {
	"(GMT+12:00) Fiji",
	"(GMT+12:00) Fiji"
	};

char* MLG_Maintenance_TimeSetting_AlertMsg_Str1[] = {
	"First time server is other, but Other field is blank",
	"&#304;lk zaman sunucusu Di&#287;erleridir, fakat Di&#287;er alan&#305; bo&#351;tur."
	};

char* MLG_Maintenance_TimeSetting_AlertMsg_Str2[] = {
	"Second time server is other, but Other field is blank",
	"&#304;kinci zaman sunucusu Di&#287;erleridir, fakat Di&#287;er alan&#305; bo&#351;tur."
	};

char* MLG_Maintenance_TimeSetting_AlertMsg_Str3[] = {
	"Third time server is other, but Other field is blank",
	"&#220;&#231;&#252;nc&#252; zaman sunucusu Di&#287;erleridir, fakat Di&#287;er alan&#305; bo&#351;tur."
	};

char* MLG_Maintenance_TimeSetting_AlertMsg_Str4[] = {
	"Fourth time server is other, but Other field is blank",
	"D&#246;rd&#252;nc&#252; zaman sunucusu Di&#287;erleridir, fakat Di&#287;er alan&#305; bo&#351;tur."
	};

char* MLG_Maintenance_TimeSetting_AlertMsg_Str5[] = {
	"Fifth time server is other, but Other field is blank",
	"Be&#351;inci, zaman sunucusu Di&#287;erleridir, fakat Di&#287;er alan&#305; bo&#351;tur."
	};

char* MLG_Maintenance_TimeSetting_AlertMsg_Str6[] = {
	"Daylight saving rule is not correct",
	"Yaz saati kural&#305; do&#287;ru de&#287;ildir."
	};

char* MLG_Maintenance_TimeSetting_AlertMsg_Str7[] = {
	"NTP Time Server has been exist",
	"NTP Zaman Sunucusu mevcuttur."
	};

char* MLG_Maintenance_TimeSetting_AlertMsg_Str8[] = {
	"Please enter the NTP time server without special characters",
	"&#214;zel karakterler olmaks&#305;z&#305;n NTP zaman sunucusunu giriniz."
	};

char* MLG_Maintenance_TimeSetting_Str6[] = {
	"Second NTP time server",
	"&#304;kinci NTP zaman sunucusu"
	};

char* MLG_Maintenance_TimeSetting_Str7[] = {
	"Third NTP time server",
	"&#220;&#231;&#252;nc&#252; NTP zaman sunucusu"
	};

char* MLG_Maintenance_TimeSetting_Str8[] = {
	"Fourth NTP time server",
	"D&#246;rd&#252;nc&#252; NTP zaman sunucusu"
	};

char* MLG_Maintenance_TimeSetting_Explain[] = {
	"In order to get a correct time for the device, fill in a time server address, select the time zone where this device is physically located, and complete the daylight saving settings if needed.",
	"Cihaz i&#231;in do&#287;ru zaman&#305; almak i&#231;in, bir zaman sunucusu adresi yaz&#305;n&#305;z, bu cihaz&#305;n fiziksel olarak bulundu&#287;u saat dilimini se&#231;in ve gerekirse g&#252;n &#305;&#351;&#305;&#287;&#305;ndan yararlanma ayarlar&#305;n&#305; kaydediniz."
	};

char* MLG_Maintenance_TimeSetting_Str9[] = {
	"Fifth NTP time server",
	"Be&#351;inci NTP zaman sunucusu"
	};

char* MLG_Maintenance_TR064_Str1[] = {
	"TR064 is a LAN automation control.",
	"TR064, bir Yerel A&#287; otomasyon kontrol&#252;d&#252;r."
	};

char* MLG_Maintenance_TR069_Explain[] = {
	"TR-069 is a remote management tool on this device. The operator can upgrade firmware, modify settings, and diagnose problems remotely when TR-069 is enabled.",
	" TR-069, bu cihazdaki bir uzaktan y&#246;netim arac&#305;d&#305;r. Operat&#246;r, ayg&#305;t yaz&#305;l&#305;m&#305;n&#305; y&#252;kseltebilir, ayarlar&#305; de&#287;i&#351;tirebilir ve TR-069 etkinle&#351;tirildi&#287;inde sorunlar&#305; uzaktan tan&#305;layabilir."
	};

char* MLG_Maintenance_TR069_AlertMsg_Str1[] = {
	"ACS URL is required.",
	"ACS URL gerekli."
	};

char* MLG_Maintenance_TR069_AlertMsg_Str2[] = {
	"The length of ACS URL ({{1}}) is too long [1-256].",
	"ACS URL uzunlu&#287;u ({{1}}) &#231;ok uzundur, [1-256] karakter aras&#305;nda olmal&#305;d&#305;r."
	};

char* MLG_Maintenance_TR069_AlertMsg_Str3[] = {
	"The length of ACS user name {{1}} is too long [0-256].",
	"ACS kullan&#305;c&#305; ad&#305; {{1}} uzunlu&#287;u &#231;ok uzundur, [0-256] karakter aras&#305;nda olmal&#305;d&#305;r."
	};

char* MLG_Maintenance_TR069_AlertMsg_Str4[] = {
	"The length of ACS password {{1}} is too long [0-256].",
	"SysName uzunlu&#287;u {{1}} &#231;ok uzundur, [0-256] karakter aras&#305;nda olmal&#305;d&#305;r."
	};

char* MLG_Maintenance_TR069_AlertMsg_Str5[] = {
	"The length of connection request user name {{1}} is too long [0-256].",
	"Ba&#287;lant&#305; kullan&#305;c&#305; ad&#305; iste&#287;i {{1}}, &#231;ok uzundur, [0-256] karakter aras&#305;nda olmal&#305;d&#305;r."
	};

char* MLG_Maintenance_TR069_AlertMsg_Str6[] = {
	"The length of connection request password {{1}} is too long [0-256].",
	"Ba&#287;lant&#305; &#351;ifre iste&#287;i{{1}}, &#231;ok uzundur, [0-256] karakter aras&#305;nda olmal&#305;d&#305;r."
	};

char* MLG_Maintenance_TR069_AlertMsg_Str7[] = {
	"Invalid Inform interval {{1}} is invalid.",
	"Bilgilendirme s&#305;kl&#305;&#287;&#305; {{1}}, ge&#231;ersizdir."
	};

char* MLG_Maintenance_TR069_AlertMsg_Str8[] = {
	"Invalid Inform interval {{1}} is out of range [30-31536000].",
	"Bilgilendirme s&#305;kl&#305;&#287;&#305; {{1}}, [30-31.536.000] aral&#305;&#287;&#305; d&#305;&#351;&#305;ndad&#305;r."
	};

char* MLG_Maintenance_TR069_AlertMsg_Str9[] = {
	"At least one interface must be used.",
	"En az bir aray&#252;z kullan&#305;lmas&#305; gerekir."
	};

char* MLG_Maintenance_TR069_Str1[] = {
	"TR-069 is a remote management tool on your device. The operator can upgrade firmware, modify settings, and diagnose problems remotely when you enable TR-069. ",
	"TR-069, cihaz&#305;n&#305;zdaki bir uzaktan y&#246;netim arac&#305;d&#305;r. Operat&#246;r, ayg&#305;t yaz&#305;l&#305;m&#305;n&#305; y&#252;kseltebilir, ayarlar&#305; de&#287;i&#351;tirebilir ve TR-069 etkinle&#351;tirildi&#287;inde sorunlar&#305; uzaktan tan&#305;layabilir. "
	};

char* MLG_Maintenance_TR069_Str10[] = {
	"Connection Request User Name",
	"Kullan&#305;c&#305; Ad&#305; Ba&#287;lant&#305; &#304;ste&#287;i "
	};

char* MLG_Maintenance_TR069_Str11[] = {
	"Connection Request Password",
	"&#350;ifre Ba&#287;lant&#305; &#304;ste&#287;i "
	};

char* MLG_Maintenance_TR069_Str12[] = {
	"Connection Request URL",
	"Ba&#287;lant&#305; &#304;ste&#287;i URL&#39;i"
	};

char* MLG_Maintenance_TR069_Str13[] = {
	"Local certificate used by TR-069 client",
	"TR-069 istemcisi taraf&#305;ndan kullan&#305;lan yerel sertifika"
	};

char* MLG_Maintenance_TR069_Str14[] = {
	"Any_WAN",
	"Any_WAN"
	};

char* MLG_Maintenance_TR069_Str15[] = {
	"Multi_WAN",
	"Multi_WAN"
	};

char* MLG_Maintenance_TR069_Str2[] = {
	"Inform",
	"Bilgi"
	};

char* MLG_Maintenance_TR069_Str3[] = {
	"Inform Interval",
	"Bilgilendirme Aral&#305;&#287;&#305;"
	};

char* MLG_Maintenance_TR069_Str4[] = {
	"ACS URL",
	"ACS URL"
	};

char* MLG_Maintenance_TR069_Str5[] = {
	"ACS User Name",
	"ACS Kullan&#305;c&#305; Ad&#305;"
	};

char* MLG_Maintenance_TR069_Str6[] = {
	"ACS Password",
	"ACS &#350;ifre"
	};

char* MLG_Maintenance_TR069_Str7[] = {
	"WAN Interface used by TR-069 client",
	"TR-069 istemcisi taraf&#305;ndan kullan&#305;lan WAN Aray&#252;z&#252;"
	};

char* MLG_Maintenance_TR069_Str8[] = {
	"Display SOAP messages on serial console",
	"Seri konsolda SOAP mesajlar&#305;n&#305; g&#246;ster "
	};

char* MLG_Maintenance_TR069_Str9[] = {
	"Connection Request Authentication ",
	"Ba&#287;lant&#305; &#304;ste&#287;i Do&#287;rulama "
	};

char* MLG_Maintenance_Configuration_Str16[] = {
	"Click Reset to clear all user-entered configuration information and return to factory defaults. After resetting, the",
	"Kullan&#305;c&#305; tan&#305;ml&#305; b&#252;t&#252;n ayarlar&#305; temizlemek ve cihaz&#305; fabrika ayarlar&#305;na geri y&#252;klemek i&#231;in Reset butonuna t&#305;klay&#305;n&#305;z. Resetten sonra,"
	};

char* MLG_Maintenance_Configuration_Str17[] = {
	"LAN IP address will be 192.168.1.1",
	"LAN IP adresi 192.168.1.1&#39;dir."
	};

char* MLG_Maintenance_Configuration_Str18[] = {
	"DHCP will be reset to server",
	"DHCP sunucusu fabrika ayarlar&#305;na geri y&#252;klenecektir."
	};

char* MLG_Maintenance_Remove[] = {
	"Remove",
	"Kald&#305;r"
	};

char* MLG_Maintenance_Other[] = {
	"Other",
	"Di&#287;er "
	};

char* MLG_Maintenance_Diagnostic_AlertMsg_Str1[] = {
	"Unknown Host or Unreachable Network!",
	"Bilinmeyen host ve ya adrese erişim mevcut değil"
	};

char* MLG_Maintenance_Diagnostic_AlertMsg_Str2[] = {
	"Unknown Host or Unreachable Network!",
	"Bilinmeyen host ve ya adrese erişim mevcut değil"
	};

char* MLG_Maintenance_Diagnostic_AlertMsg_Str3[] = {
	"NsLookup end",
	"NsLookup end"
	};

char* MLG_Maintenance_FWUpgrade_Explain[] = {
	"Firmware Upgrade is where you can update the device with newly released features by upgrading the latest firmware. You can download the latest firmware file from the manufacturer website of this device.",
	"Yaz&#305;l&#305;m Y&#252;kleme i&#351;lemi ile modeminize, mevcut olan en yeni &#246;zellikleri i&#231;eren en g&#252;ncel yaz&#305;l&#305;m&#305; y&#252;kleyebilirsiniz.En g&#252;ncel yaz&#305;l&#305;m&#305; ZyXEL&#39;in internet sitesinden indirebilirsiniz."
	};


char* MLG_Maintenance_3G_package_title[] = {
	"Upgrade 3G Package",
	"3G Package Güncelleme"
	};


char* MLG_Maintenance_3G_package_CurrentVer[] = {
	"Current 3G Package Version",
	"Mevcut 3G Package Versiyonu"
	};

char* MLG_Maintenance_3G_package_FilePath[] = {
	"File Path",
	"Dosya Path"
	};

char* MLG_Maintenance_Remote_err1[] = {
	"At least one interface must be used",
	"En azından bir arayüz kullanılmalıdır."
	};

char* MLG_Maintenance_TR069_Str16[] = {
	"WAN manage for TR069",
	"WAN manage for TR069"
	};

MAPPING_ITEM MaintenanceMappingItem[484];
