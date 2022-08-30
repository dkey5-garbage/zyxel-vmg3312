#include<stdio.h>	
#include<string.h>	
#include<stdlib.h>	
#include<time.h>	
#include "languages.h"	



char* MLG_Security_Certificate_AlertMsg_Str1[] = {
	"Invalid Certificate Name",
	"Ge&#231;ersiz Sertifika &#304;smi"
	};

char* MLG_Security_Certificate_AlertMsg_Str10[] = {
	"Certificate does not match request",
	"Sertifika talep ile uyu&#351;mamaktad&#305;r"
	};

char* MLG_Security_Certificate_AlertMsg_Str11[] = {
	"Certificate type error",
	"Sertifika t&#252;r&#252; hatas&#305;"
	};

char* MLG_Security_Certificate_AlertMsg_Str12[] = {
	"Certificate name not found",
	"Sertifika ismi bulunamamaktad&#305;r"
	};

char* MLG_Security_Certificate_AlertMsg_Str13[] = {
	"Cannot decode upload file format",
	"Y&#252;klenen dosya format&#305;n&#305;n &#351;ifresi &#231;&#246;z&#252;lemiyor."
	};

char* MLG_Security_Certificate_AlertMsg_Str14[] = {
	"pkcs#12 invalid password",
	"pkcs#12 ge&#231;ersiz &#351;ifre"
	};

char* MLG_Security_Certificate_AlertMsg_Str15[] = {
	"password for private key error",
	"&#214;zel tu&#351; hatas&#305; i&#231;in &#351;ifre"
	};

char* MLG_Security_Certificate_AlertMsg_Str16[] = {
	"A certificate with the same name already exists",
	"Ayn&#305; isme sahip bir sertifika zaten mevcuttur"
	};

char* MLG_Security_Certificate_AlertMsg_Str17[] = {
	"Cannot remove certificate",
	"Sertifika kald&#305;r&#305;lam&#305;yor."
	};

char* MLG_Security_Certificate_AlertMsg_Str18[] = {
	"Certificate Error",
	"Sertifika Hatas &#305;"
	};

char* MLG_Security_Certificate_AlertMsg_Str19[] = {
	"This certificate is in use. Other functions may stop working if it is deleted. Are you sure want to force the deletion?",
	"&#304;&#351;bu sertifika kullan&#305;mdad&#305;r. E&#287;er silinirse di&#287;er fonksiyonlar &#231;al&#305;&#351;mayabilir. Silme i&#351;lemini zorlamak istedi&#287;inizden emin misiniz?"
	};

char* MLG_Security_Certificate_AlertMsg_Str2[] = {
	"Common Name should not be empty.",
	"Yerel Ad bo&#351; b&#305;rak&#305;lmamal&#305;d&#305;r."
	};

char* MLG_Security_Certificate_AlertMsg_Str20[] = {
	"This certificate is in use.",
	"&#304;&#351;bu sertifika kullan&#305;mdad&#305;r."
	};


char* MLG_Security_Certificate_AlertMsg_Str3[] = {
	"Organization Name should not be empty.",
	"Kurulu&#351; &#304;smi bo&#351; b&#305;rak&#305;lmamal&#305;d&#305;r."
	};

char* MLG_Security_Certificate_AlertMsg_Str4[] = {
	"State/Province Name should not be empty.",
	"Eyalet/&#304;l &#304;smi bo&#351; b&#305;rak&#305;lmamal&#305;d&#305;r."
	};

char* MLG_Security_Certificate_AlertMsg_Str5[] = {
	"Maximum 4 certificates can be stored.",
	"Haf&#305;zaya en fazla 4 sertifika al&#305;nabilir."
	};

char* MLG_Security_Certificate_AlertMsg_Str6[] = {
	"Certificate Name should not be empty.",
	"Sertifika &#304;smi bo&#351; olmamal&#305;d&#305;r."
	};

char* MLG_Security_Certificate_AlertMsg_Str7[] = {
	"Certificate Public Key should not be empty.",
	"Sertifika Ortak Anahtar bo&#351; b&#305;rak&#305;lmamal&#305;d&#305;r."
	};

char* MLG_Security_Certificate_AlertMsg_Str8[] = {
	"Certificate Private Key should not be empty.",
	"Sertifika &#214;zel Anahtar bo&#351; b&#305;rak&#305;lmamal&#305;d&#305;r."
	};

char* MLG_Security_Certificate_AlertMsg_Str9[] = {
	"This certificate is in use",
	"&#304;&#351;bu sertifika kullan&#305;mdad&#305;r."
	};

char* MLG_Security_Certificates_Str1[] = {
	"Certificates (also known as digital IDs) can authenticate users. In Local Certificate, you can generate certification requests and import the signed certificates.",
	"Sertifika (ayn&#305; zamanda dijital kimlik olarak da bilinmektedir) kullan&#305;c&#305;lar&#305;n kimlik do&#287;rulamas&#305;n&#305; yapabilir. Yerel sertifikada, sertifika talepleri olu&#351;turup, imzalanm&#305;&#351; sertifikalar&#305; i&#231;eriye aktarabilirsiniz."
	};

char* MLG_Security_Certificates_Str10[] = {
	"Organization Name",
	"Organizasyon &#304;smi"
	};

char* MLG_Security_Certificates_Str11[] = {
	"State/Province Name",
	"Eyalet/&#304;l &#304;smi"
	};

char* MLG_Security_Certificates_Str12[] = {
	"Country/Region Name",
	"&#220;lke/B&#246;lge &#304;smi"
	};

char* MLG_Security_Certificates_Str13[] = {
	"Customize",
	"&#214;zelle&#351;tir"
	};

char* MLG_Security_Certificates_Str14[] = {
	"Load Signed Certificate",
	"&#304;mzalanm&#305;&#351; Sertifikay&#305; Y&#252;kle"
	};

char* MLG_Security_Certificates_Str15[] = {
	"Certificate signing request successfully created.  Note a request is not yet functional - have it signed by a Certificate Authority and load the signed certificate to this device.",
	"Sertifika imzalama talebi ba&#351;ar&#305;l&#305; bir &#351;ekilde olu&#351;turulmu&#351;tur. Bir talebin hen&#252;z fonksiyonel olmad&#305;&#287;&#305;n&#305; dikkate al&#305;n&#305;z &#8211; bir Sertifika Yetkilisi taraf&#305;ndan imzalatt&#305;r&#305;p, imzalanm&#305;&#351; sertifikay&#305; i&#351;bu cihaza y&#252;kleyiniz."
	};

char* MLG_Security_Certificates_Str16[] = {
	"Signing Request",
	"&#304;mzalama Talebi"
	};

char* MLG_Security_Certificates_Str17[] = {
	"Load Signed",
	"&#304;mzalanm&#305;&#351; Sureti Y&#252;kle"
	};

char* MLG_Security_Certificates_Str18[] = {
	"Paste signed certificate.",
	"&#304;mzalanm&#305;&#351; sertifikay&#305; yap&#305;&#351;t&#305;r"
	};

char* MLG_Security_Certificates_Str19[] = {
	"Certificate",
	"Sertifika"
	};

char* MLG_Security_Certificates_Str2[] = {
	"Create Certificate Request",
	"Sertifika Talebi Olu&#351;tur"
	};

char* MLG_Security_Certificates_Str20[] = {
	"View Certificate",
	"Sertifikay&#305; G&#246;r&#252;nt&#252;le"
	};

char* MLG_Security_Certificates_Str21[] = {
	"Certificate Details",
	"Sertifika Detaylar &#305;"
	};

char* MLG_Security_Certificates_Str22[] = {
	"Private Key",
	"&#214;zel Anahtar"
	};

char* MLG_Security_Certificates_Str23[] = {
	"The certificate is in one of the following formats.",
	"Sertifika altta belirtilen formatlardan birine sahiptir."
	};

char* MLG_Security_Certificates_BinaryX509[] = {
	"Binary X.509",
	"Binary X.509"
	};

char* MLG_Security_Certificates_Str24[] = {
	"PEM (Base-64) encoded",
	"PEM (Base-64) &#351;ifreli"
	};

char* MLG_Security_Certificates_Str25[] = {
	"Binary PKCS#7",
	"Binary PKCS#7"
	};

char* MLG_Security_Certificates_Str26[] = {
	"PEM (Base-64) encoded PKCS#7",
	"PEM (Base-64) &#351;ifreli PKCS#7"
	};

char* MLG_Security_Certificates_Str27[] = {
	"Import from file",
	"Dosyadan veri aktar"
	};

char* MLG_Security_Certificates_Str28[] = {
	"Certificate File Path",
	"Sertifika Dosya Yolu"
	};

char* MLG_Security_Certificates_Str29[] = {
	"Private Key is protected by a password.",
	"&#214;zel Anahtar bir &#351;ifre taraf&#305;ndan korunmaktad&#305;r."
	};

char* MLG_Security_Certificates_Str3[] = {
	"Import Certificate",
	"Sertifikay&#305; &#304;&#231;e Aktar"
	};

char* MLG_Security_Certificates_Str30[] = {
	"Certification Authority (CA) issues certificates and guarantees the identity of each certificate owner. In Trusted CA, you can save the certificates of trusted CAs.",
	"Onay Kurumu (CA) sertifikalar olu&#351;turup, her sertifika sahibinin kimli&#287;ini taahh&#252;t etmektedir. G&#252;venilir CA&#8217;da, g&#252;venilir CA&#8217;lar&#305;n sertifikalar&#305;n&#305; kaydedebilirsiniz."
	};

char* MLG_Security_Certificates_Str31[] = {
	"Enable Trusted CA for 802.1x Authentication",
	"802.1x Kimlik Do&#287;rulamas&#305; i&#231;in G&#252;venilir CA etkinle&#351;tirin"
	};

char* MLG_Security_Certificates_Str32[] = {
	"Enable Trusted CA for TR-069",
	"TR-069 i&#231;in G&#252;venilir CA etkinle&#351;tirin"
	};

char* MLG_Security_Certificates_Str33[] = {
	"View Certificate",
	"Sertifikay&#305; G&#246;r&#252;nt&#252;le"
	};

char* MLG_Security_Certificates_Str34[] = {
	"Remove Local Certificate Entry",
	"Yerel Sertifika Giri&#351;ini Sil"
	};

char* MLG_Security_Certificates_Str35[] = {
	"insert certificate here",
	"Sertifikay&#305; buradan giriniz"
	};

char* MLG_Security_Certificates_Str36[] = {
	"insert private key here",
	"&#214;zel anahtar&#305; buraya giriniz"
	};

char* MLG_Security_Certificates_Str37[] = {
	"Binary",
	"Binary"
	};

char* MLG_Security_Certificates_Str38[] = {
	"Load Certificate",
	"Sertifika Y&#252;kle"
	};

char* MLG_Security_Certificates_Str39[] = {
	"Enable Trusted CA for TR-069",
	"(null)"
	};

char* MLG_Security_Certificates_Str4[] = {
	"In Use",
	"Kullan&#305;mda"
	};

char* MLG_Security_Certificates_Str41[] = {
	"Current File",
	"Mevcut Dosya"
	};

char* MLG_Security_Certificates_Str42[] = {
	"Issuer",
	"Yay&#305;mlayan"
	};

char* MLG_Security_Certificates_Str43[] = {
	"Valid From",
	"-&#8216;den itibaren ge&#231;erlidir"
	};

char* MLG_Security_Certificates_Str44[] = {
	"Valid To",
	"-&#8216;e kadar ge&#231;erlidir"
	};

char* MLG_Security_Certificates_Str45[] = {
	"Replace PrivateKey/Certificate file in PEM format",
	"&#214;zelAnahtar/Sertifika dosyas&#305;n&#305; PEM format&#305;nda yenisiyle de&#287;i&#351;tiriniz"
	};

char* MLG_Security_Certificates_Str46[] = {
	"Please input certificate filename.",
	"L&#252;tfen sertifika dosya ismini giriniz."
	};

char* MLG_Security_Certificates_Str47[] = {
	"Certificates- Trusted CA",
	"Sertifikalar- G&#252;venilir CA&#8217;lar"
	};


char* MLG_Security_Certificates_Str5[] = {
	"Subject",
	"Konu"
	};

char* MLG_Security_Certificates_Str51[] = {
	"BEGIN CERTIFICATE",
	"SERT&#304;F&#304;KAYI BA&#350;LAT"
	};

char* MLG_Security_Certificates_Str52[] = {
	"insert certificate here",
	"Sertifikay&#305; buradan giriniz"
	};

char* MLG_Security_Certificates_Str53[] = {
	"END CERTIFICATE",
	"SERT&#304;F&#304;KAYI SONU&#199;LANDIR"
	};

char* MLG_Security_Certificates_Str6[] = {
	"Maximum 4 certificates can be stored.",
	"Haf&#305;zaya en fazla 4 sertifika al&#305;nabilir."
	};

char* MLG_Security_Certificates_Str7[] = {
	"To generate a certificate signing request you need to include Common Name, Organization Name, State/Province Name, and the 2-letter Country Code for the certificate.",
	"Bir sertifika imzalama talebini olu&#351;turmak i&#231;in sertifika i&#231;in Yerel Ad, Organizasyon &#304;smi, Eyalet/&#304;l &#304;smi ve 2-harfli &#220;lke Kodunu dahil etmeniz gerekmektedir."
	};

char* MLG_Security_Certificates_Str8[] = {
	"Certificate Name",
	"Sertifika &#304;smi"
	};

char* MLG_Security_Certificates_Str9[] = {
	"Common Name",
	"Yerel Ad"
	};

char* MLG_Security_FirewallACL_AlertMsg_Str1[] = {
	"Max rule entry is 32.",
	"Maks. kural giri&#351;i 32&#8217;dir."
	};

char* MLG_Security_FirewallACL_AlertMsg_Str2[] = {
	"Invalid port number",
	"Ge&#231;ersiz port numaras &#305;"
	};

char* MLG_Security_FirewallACL_AlertMsg_Str3[] = {
	"Port 7547 is used for TR-069.",
	"7547 portu, TR-069 i&#231;in kullan&#305;lmaktad&#305;r."
	};

char* MLG_Security_FirewallACL_AlertMsg_Str4[] = {
	"Invalid source port number",
	"Ge&#231;ersiz kaynak portu numaras &#305;"
	};

char* MLG_Security_FirewallACL_AlertMsg_Str5[] = {
	"Port option can not set large port to Small port",
	"Aral&#305;k belirlerken, k&#252;&#231;&#252;k olan portu b&#252;y&#252;k olan porttan daha &#246;nce yazmal&#305;s&#305;n&#305;z."
	};

char* MLG_Security_FirewallACL_AlertMsg_Str6[] = {
	"Invalid port number",
	"Ge&#231;ersiz port numaras &#305;"
	};

char* MLG_Security_FirewallACL_AlertMsg_Str7[] = {
	"Invalid destination port number",
	"Ge&#231;ersiz var&#305;&#351; port numaras &#305;"
	};

char* MLG_Security_FirewallACL_AlertMsg_Str8[] = {
	"Valid protocol number is 0~255",
	"Ge&#231;erli protokol numaras&#305; 0~255&#8217;tir."
	};

char* MLG_Security_FirewallACL_AlertMsg_Str9[] = {
	"duplicate rule",
	"Kural&#305; kopyala"
	};

char* MLG_Security_FirewallACL_AlertMsg_Str10[] = {
	"ICMPv6 is invalid IPv4 protocol",
	"ICMPv6  ge&#231;ersiz IPv4 protokol&#252;d&#252;r."
	};

char* MLG_Security_FirewallACL_AlertMsg_Str11[] = {
	"Source address {{1}} is invalid IPv6 address.",
	"Kaynak adresi {{1}} ge&#231;ersiz IPv6 adresidir."
	};

char* MLG_Security_FirewallACL_AlertMsg_Str12[] = {
	"ICMP is invalid IPv6 protocol",
	"ICMP ge&#231;ersizdir IPv6 protokol&#252;"
	};

char* MLG_Security_FirewallACL_AlertMsg_Str13[] = {
	"The rule is already in use!",
	"Kural zaten kullan&#305;mdad&#305;r!"
	};

char* MLG_Security_FirewallACL_AlertMsg_Str14[] = {
	"Rule name is duplicated!",
	"Kural ismi kopyalanm&#305;&#351;t&#305;r!"
	};

char* MLG_Security_FirewallACL_AlertMsg_Str15[] = {
	"Add incoming IP filter named %s failed. Status: %d",
	"%s isimli girilen IP filtresi eklenirken ba&#351;ar&#305;s&#305;z olmu&#351;tur. Durum: %d"
	};

char* MLG_Security_FirewallACL_AlertMsg_Str16[] = {
	"Failed to configure DoS Protection. Please try again.",
	"DoS Korumas&#305; konfig&#252;rasyonu ba&#351;ar&#305;s&#305;z olmu&#351;tur. L&#252;tfen tekrar deneyiniz."
	};

char* MLG_Security_FirewallACL_AlertMsg_Str17[] = {
	"Delete ACL rule %s failed, please try again.",
	"ACL kural&#305; % Sil ba&#351;ar&#305;s&#305;z olmu&#351;tur, l&#252;tfen tekrar deneyiniz."
	};

char* MLG_Security_FirewallACL_Str1[] = {
	"An ACL rule is a manually defined rule to accept, reject, or drop the incoming or outgoing data of your network. You may need to create at least one Protocol entry in order to add an ACL rule.",
	"Bir ACL kural&#305;, a&#287;&#305;n&#305;z&#305;n giren veya &#231;&#305;kan verilerini kabul etmek, reddetmek veya kesmek i&#231;in man&#252;el olarak tan&#305;mlanm&#305;&#351; bir kurald&#305;r. Bir ACL kural&#305;n&#305; eklemek i&#231;in en az&#305;ndan bir Protokol giri&#351;ini olu&#351;turman&#305;z gerekebilir."
	};

char* MLG_Security_FirewallACL_Str10[] = {
	"Src IP",
	"Src IP"
	};

char* MLG_Security_FirewallACL_Str11[] = {
	"Dst IP",
	"Dst IP"
	};

char* MLG_Security_FirewallACL_Str12[] = {
	"Protocol",
	"Protokol"
	};

char* MLG_Security_FirewallACL_Str13[] = {
	"Direction",
	"Y&#246;nlendirme"
	};

char* MLG_Security_FirewallACL_Str14[] = {
	"Action",
	"Eylem"
	};

char* MLG_Security_FirewallACL_Str15[] = {
	"Mofify",
	"De&#287;i&#351;tir"
	};

char* MLG_Security_FirewallACL_Str16[] = {
	"General",
	"Genel"
	};

char* MLG_Security_FirewallACL_Str17[] = {
	"Filter Name",
	"Filtre &#304;smi"
	};

char* MLG_Security_FirewallACL_Str18[] = {
	"Select Source Device",
	"Kaynak Cihaz&#305; Se&#231;iniz"
	};

char* MLG_Security_FirewallACL_Str19[] = {
	"Enter IP Address Below",
	"A&#351;a&#287;&#305;daki IP Adresini Giriniz"
	};

char* MLG_Security_FirewallACL_Str2[] = {
	"Denial of Service (DoS) Protection",
	"Hizmet (DoS) Korumas&#305;n&#305;n Reddi"
	};

char* MLG_Security_FirewallACL_Str20[] = {
	"Source IP Address",
	"Kaynak IP adresi"
	};

char* MLG_Security_FirewallACL_Str21[] = {
	"prefix length",
	"&#214;n ek uzunlu&#287;u"
	};

char* MLG_Security_FirewallACL_Str22[] = {
	"Select Destination Device",
	"Hedef Cihaz&#305; Se&#231;iniz"
	};

char* MLG_Security_FirewallACL_Str23[] = {
	"Destination IP Address",
	"Hedef IP Adresi"
	};

char* MLG_Security_FirewallACL_Str24[] = {
	"IP Type",
	"IP Tipi"
	};

char* MLG_Security_FirewallACL_Str25[] = {
	"IPv4",
	"IPv4"
	};

char* MLG_Security_FirewallACL_Str26[] = {
	"Select Protocol",
	"Protokol Se&#231;in"
	};

char* MLG_Security_FirewallACL_Str27[] = {
	"Specific Protocol",
	"Belirgin Protokol"
	};

char* MLG_Security_FirewallACL_Str28[] = {
	"Custom Source Port",
	"&#214;zel Kaynak Portu"
	};

char* MLG_Security_FirewallACL_Str29[] = {
	"port or port:port",
	"Port veya port: port"
	};

char* MLG_Security_FirewallACL_Str3[] = {
	"State",
	"Eyalet"
	};

char* MLG_Security_FirewallACL_Str30[] = {
	"Custom Destination Port",
	"&#214;zel Hedef Portu"
	};

char* MLG_Security_FirewallACL_Str31[] = {
	"TCP/UDP",
	"TCP/UDP"
	};

char* MLG_Security_FirewallACL_Str32[] = {
	"TCP",
	"TCP"
	};

char* MLG_Security_FirewallACL_Str33[] = {
	"UDP",
	"UDP"
	};

char* MLG_Security_FirewallACL_Str34[] = {
	"ICMP",
	"ICMP"
	};

char* MLG_Security_FirewallACL_Str35[] = {
	"TCP Flag Mask",
	"TCP &#304;&#351;aret Maskeleme"
	};

char* MLG_Security_FirewallACL_Str36[] = {
	"TCP Flag",
	"TCP &#304;&#351;aret"
	};

char* MLG_Security_FirewallACL_Str37[] = {
	"Policy",
	"Kural"
	};

char* MLG_Security_FirewallACL_Str38[] = {
	"ACCEPT",
	"KABUL ET"
	};

char* MLG_Security_FirewallACL_Str39[] = {
	"DROP",
	"D&#220;&#350;&#220;R"
	};

char* MLG_Security_FirewallACL_Str4[] = {
	"Enable",
	"Aktif"
	};

char* MLG_Security_FirewallACL_Str40[] = {
	"REJECT",
	"REDDET"
	};

char* MLG_Security_FirewallACL_Str41[] = {
	"Direction",
	"Y&#246;nlendirme"
	};

char* MLG_Security_FirewallACL_Str42[] = {
	"INCOMING",
	"GELEN"
	};

char* MLG_Security_FirewallACL_Str43[] = {
	"OUTGOING",
	"G&#304;DEN"
	};

char* MLG_Security_FirewallACL_Str44[] = {
	"Enable Rate Limit",
	"ORAN L&#304;M&#304;T&#304;N&#304; ETK&#304;NLE&#350;T&#304;R"
	};

char* MLG_Security_FirewallACL_Str45[] = {
	" packet(s) per ",
	" Her ba&#351;&#305;na paket(ler)"
	};

char* MLG_Security_FirewallACL_Str46[] = {
	"Minute",
	"Dakika"
	};

char* MLG_Security_FirewallACL_Str47[] = {
	"Second",
	"Saniye"
	};

char* MLG_Security_FirewallACL_Str48[] = {
	"Scheduler Rules",
	"Programc&#305; Kurallar&#305;"
	};

char* MLG_Security_FirewallACL_Str49[] = {
	"Add New Rule",
	"Yeni Kural Ekle"
	};

char* MLG_Security_FirewallACL_Str50[] = {
	"IPv6",
	"IPv6"
	};

char* MLG_Security_FirewallACL_Str51[] = {
	"ACL Configuration",
	"ACL Konfig&#252;rasyonu"
	};

char* MLG_Security_FirewallACL_Str52[] = {
	"ACL Edit",
	"ACL D&#252;zenle"
	};

char* MLG_Security_FirewallACL_Str53[] = {
	"ACL Delete",
	"ACL Sil"
	};

char* MLG_Security_FirewallACL_Str5[] = {
	"Disable",
	"Devre d&#305;&#351;&#305;"
	};

char* MLG_Security_FirewallACL_Str6[] = {
	"Deny Ping Response",
	"Ping Yan&#305;t&#305;n&#305; Reddet"
	};

char* MLG_Security_FirewallACL_Str7[] = {
	"ACL Rule List",
	"ACL Kural Listesi"
	};

char* MLG_Security_FirewallACL_Str8[] = {
	"Add New ACL Rule",
	"Yeni ACL Kural&#305; Ekle"
	};

char* MLG_Security_FirewallACL_Str9[] = {
	"Name",
	"&#304;sim"
	};

char* MLG_Security_FirewallACL_WhiteList_Str1[] = {
	"White List",
	"Beyaz Liste"
	};

char* MLG_Security_FirewallACL_WhiteList_Str2[] = {
	"Black List",
	"Kara Liste"
	};

char* MLG_Security_FirewallGenera_Str1[] = {
	"When the security level is set to \'High\', only access to the following services is allowed: Telnet, FTP, HTTP, HTTPS, DNS, IMAP, POP3 and SMTP",
	"G&#252;venlik seviyesi &#8220;Y&#252;ksek&#8221; olarak ayarl&#305; iken, sadece altta belirtilen hizmetlere eri&#351;ilmesine izin verilmektedir: Telnet, FTP, HTTP, HTTPS, DNS, IMAP, POP3 ve SMTP"
	};

char* MLG_Security_FirewallGenera_Str2[] = {
	"Security",
	"G&#252;venlik"
	};

char* MLG_Security_FirewallGenera_Str3[] = {
	"Medium",
	"Orta"
	};

char* MLG_Security_FirewallGenera_Str4[] = {
	"Low",
	"D&#252;&#351;&#252;k"
	};

char* MLG_Security_FirewallGenera_Str5[] = {
	"Level",
	"Seviye"
	};

char* MLG_Security_FirewallGenera_Str6[] = {
	"The firewall blocks unauthorized accesses to your network. <br> Drag and drop the indicator to set a security level. <br>Also note that a higher firewall level means more restrictions to the Internet activities you want to do. <br>All rules under <span class=\'explain_text_bold\'>Access Control List (ACL)</span> take precedence over the security levels show below: <br><br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;High - All WAN-to-LAN and LAN-to-WAN traffic is blocked. <br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Medium - All WAN-to-LAN traffic is blocked. All LAN-to-WAN traffic is allowed, except for ACL&#39;s.<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Low - All WAN-to-LAN and LAN-to-WAN traffic is allowed, except for ACL&#39;s.",
	"G&#252;venlik duvar&#305;, bilgisayar a&#287;&#305;n&#305;za yetkisiz eri&#351;imleri engellemektedir. <br> Bir g&#252;venlik seviyesi olu&#351;turmak i&#231;in g&#246;stergeyi istenilen seviyeye s&#252;r&#252;kleyiniz. <br> Ayr&#305;ca daha y&#252;ksek bir g&#252;venlik duvar&#305; seviyesinin,  yerine getirmek istedi&#287;iniz internet faaliyetlerini daha &#231;ok k&#305;s&#305;tlayaca&#287;&#305; anlam&#305;na geldi&#287;ini unutmay&#305;n. <br><span class=\'explain_text_bold\'>Access Control List (ACL)</span> alt&#305;ndaki b&#252;t&#252;n kurallar alta belirtilen g&#252;venlik seviyelere g&#246;re &#252;st&#252;nl&#252;&#287;&#252; bulunmaktad&#305;r: <br><br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Y&#252;ksek - B&#252;t&#252;n WAN-to-LAN ve LAN-to-WAN trafi&#287;i bloke edilmi&#351;tir. <br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Orta - All WAN-to-LAN trafi&#287;i bloke edilmi&#351;tir. All LAN-to-WAN trafi&#287;ine izin verilmektedir, ACL&#8217;ler hari&#231;.<br>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Low - All WAN-to-LAN ve LAN-to-WAN trafi&#287;ine izin verilmektedir, ACL&#8217;ler hari&#231;."
	};

char* MLG_Security_FirewallGeneral_AlertMsg_Str1[] = {
	"Filter name is necessary.",
	"Filtre ismi gereklidir."
	};

char* MLG_Security_FirewallGeneral_AlertMsg_Str2[] = {
	"Please enter valid rule name: (mixed alphabetic and numeric).",
	"L&#252;tfen ge&#231;erli bir kural ismi giriniz: (kar&#305;&#351;&#305;k alfabetik ve n&#252;merik)."
	};

char* MLG_Security_FirewallGeneral_AlertMsg_Str3[] = {
	"Source address {{1}}  is invalid IPv4 address.",
	"Kaynak adresi {{1}}  ge&#231;ersiz IPv4 adresidir."
	};

char* MLG_Security_FirewallGeneral_AlertMsg_Str4[] = {
	"Destination address 2001:0DB8::1428:57ab  is invalid IPv4 address.",
	"Hedef adresi 2001:0DB8::1428:57ab  ge&#231;ersiz IPv4 adresidir."
	};

char* MLG_Security_FirewallGeneral_AlertMsg_Str5[] = {
	"Port 7547 is used for TR-069 and not allow user to set ACL rules for this port.",
	"Ba&#287;lant&#305; noktas&#305; 7547,  TR-069 i&#231;in kullan&#305;lmaktad&#305;r ve kullan&#305;c&#305;n&#305;n i&#351;bu ba&#287;lant&#305; noktas&#305; i&#231;in ACL kurallar&#305; d&#252;zenlemesine izin vermemektedir."
	};

char* MLG_Security_FirewallGeneral_AlertMsg_Str6[] = {
	"Please enter a valid port range.",
	"L&#252;tfen ge&#231;erli bir ba&#287;lant&#305; noktas&#305; aral&#305;&#287;&#305; girin."
	};

char* MLG_Security_FirewallGeneral_AlertMsg_Str7[] = {
	"Port option can not set large port to Small port",
	"Ba&#287;lant&#305; noktas&#305; se&#231;ene&#287;i b&#252;y&#252;k ba&#287;lant&#305; noktas&#305;n&#305; K&#252;&#231;&#252;k ba&#287;lant&#305; noktas&#305; olarak ayarlayamamaktad&#305;r"
	};

char* MLG_Security_FirewallGeneral_AlertMsg_Str8[] = {
	"Please enter rate limit.",
	"L&#252;tfen oran limiti giriniz."
	};

char* MLG_Security_FirewallGeneral_AlertMsg_Str9[] = {
	"Invalid value for rate limit.",
	"Oran limiti i&#231;in ge&#231;ersiz de&#287;er."
	};

char* MLG_Security_FirewallGeneral_AlertMsg_Str10[] = {
	"Configure Firewall Setting failed, please try again.",
	"G&#252;venlik Duvar&#305;n&#305;n Konfig&#252;rasyon D&#252;zenlemesi ba&#351;ar&#305;s&#305;z olmu&#351;tur, l&#252;tfen tekrar deneyiniz."
	};

char* MLG_Security_FirewallProtocol_AlertMsg_Str1[] = {
	"Protocol name is necessary.",
	"Protokol ismi gerekmektedir."
	};

char* MLG_Security_FirewallProtocol_AlertMsg_Str2[] = {
	"Please enter valid rule name: (mixed alphabetic and numeric without special characters).",
	"L&#252;tfen ge&#231;erli kural ismi giriniz: (alfabetik ve n&#252;merik kar&#305;&#351;&#305;k, &#246;zel karakterler olmaks&#305;z&#305;n)."
	};

char* MLG_Security_FirewallProtocol_AlertMsg_Str3[] = {
	"Description contain invalid characters.",
	"Tan&#305;m ge&#231;ersiz karakterler i&#231;ermektedir."
	};

char* MLG_Security_FirewallProtocol_AlertMsg_Str4[] = {
	"No rule specified. Please at least add one rule.",
	"Kural belirlenmemi&#351;tir. L&#252;tfen en az&#305;ndan bir kural ekleyiniz."
	};

char* MLG_Security_FirewallProtocol_AlertMsg_Str5[] = {
	"Protocol name is used, please use another name.",
	"Protokol ismi kullan&#305;mdad&#305;r, l&#252;tfen ba&#351;ka bir isim kullan&#305;n&#305;z."
	};

char* MLG_Security_FirewallProtocol_AlertMsg_Str6[] = {
	"Protocol is used, please use another one.",
	"Protokol kullan&#305;mdad&#305;r, l&#252;tfen ba&#351;ka birini se&#231;iniz."
	};

char* MLG_Security_FirewallProtocol_AlertMsg_Str7[] = {
	"The rules of port range overlap have been removed.",
	"Ba&#287;lant&#305; noktas&#305; aral&#305;&#287;&#305;n&#305;n &#246;rt&#252;&#351;&#252;m&#252; ile ilgili kurallar silinmi&#351;tir."
	};

char* MLG_Security_FirewallProtocol_AlertMsg_Str8[] = {
	"Configure Protocol Setting failed, please try again.",
	"Protokol Konfig&#252;rasyonu D&#252;zenle ba&#351;ar&#305;s&#305;z olmu&#351;tur, l&#252;tfen tekrar deneyiniz."
	};

char* MLG_Security_FirewallProtocol_Str1[] = {
	"Create predefined Internet services to be used for Access Control List (ACL) settings.",
	"Eri&#351;im Denetim Listesi (ACL) ayarlar&#305; i&#231;in kullan&#305;lmak &#252;zere &#246;nceden tan&#305;mlanm&#305;&#351; &#304;nternet hizmetleri olu&#351;turunuz."
	};

char* MLG_Security_FirewallProtocol_Str10[] = {
	"Protocol",
	"Protokol"
	};

char* MLG_Security_FirewallProtocol_Str11[] = {
	"TCP",
	"TCP"
	};

char* MLG_Security_FirewallProtocol_Str12[] = {
	"UDP",
	"UDP"
	};

char* MLG_Security_FirewallProtocol_Str13[] = {
	"ICMP",
	"ICMP"
	};

char* MLG_Security_FirewallProtocol_Str14[] = {
	"Other",
	"Di&#287;er"
	};

char* MLG_Security_FirewallProtocol_Str15[] = {
	"Any",
	"Herhangi bir"
	};

char* MLG_Security_FirewallProtocol_Str16[] = {
	"Single",
	"Tek"
	};

char* MLG_Security_FirewallProtocol_Str17[] = {
	"Range",
	"Aral&#305;k"
	};

char* MLG_Security_FirewallProtocol_Str18[] = {
	"Source Port",
	"Kaynak Portu"
	};

char* MLG_Security_FirewallProtocol_Str19[] = {
	"Destination Port",
	"Hedef Portu"
	};

char* MLG_Security_FirewallProtocol_Str2[] = {
	"Add New Protocol Entry",
	"Yeni Protokol Giri&#351;i Ekleyin"
	};

char* MLG_Security_FirewallProtocol_Str20[] = {
	"Rule List",
	"Kural Listesi"
	};

char* MLG_Security_FirewallProtocol_Str21[] = {
	"Service Name",
	"Hizmet &#304;smi"
	};

char* MLG_Security_FirewallProtocol_Str22[] = {
	"Service Description",
	"Hizmet Tan&#305;m&#305;"
	};

char* MLG_Security_FirewallProtocol_Str23[] = {
	"Add",
	"Ekle"
	};

char* MLG_Security_FirewallProtocol_Str24[] = {
	"ICMPv6",
	"ICMPv6"
	};

char* MLG_Security_FirewallProtocol_Str25[] = {
	"Protocol Number",
	"Protokol Numaras&#305;"
	};

char* MLG_Security_FirewallProtocol_Str26[] = {
	"Custom Protocol",
	"&#214;zel Protokol"
	};

char* MLG_Security_FirewallProtocol_Str27[] = {
	"Protocol Edit",
	"Protokol D&#252;zenle"
	};

char* MLG_Security_FirewallProtocol_Str28[] = {
	"Protocol Delete",
	"Protokol Sil"
	};

char* MLG_Security_FirewallProtocol_Str29[] = {
	"Delete",
	"Sil"
	};

char* MLG_Security_FirewallProtocol_Str4[] = {
	"Description",
	"Tan&#305;m"
	};

char* MLG_Security_FirewallProtocol_Str5[] = {
	"Ports/Protocol Number",
	"Port/Protokol Numaras&#305;"
	};

char* MLG_Security_FirewallProtocol_Str6[] = {
	"Modify",
	"De&#287;i&#351;tir"
	};

char* MLG_Security_FirewallProtocol_Str7[] = {
	"Note",
	"Dikkate al&#305;n"
	};

char* MLG_Security_FirewallProtocol_Str8[] = {
	"If a protocol rule is removed, related ACL rules will also be removed.",
	"E&#287;er bir protokol kural&#305; silinirse, ilgili ACL kurallar&#305; da ayn&#305; zamanda silinecektir."
	};

char* MLG_Security_FirewallProtocol_Str9[] = {
	"Add Protocol",
	"Protokol Ekle"
	};

char* MLG_Security_IPSecVPN_AlertMsg_Str1[] = {
	"The connection name {{1}} has been used.",
	"Ba&#287;lant&#305; ismi {{1}} kullan&#305;lm&#305;&#351;t&#305;r."
	};

char* MLG_Security_IPSecVPN_AlertMsg_Str10[] = {
	"No certificate available for authentication. Use Certificates page to add certificates or choose another autentication method.",
	"Kimlik do&#287;rulama i&#231;in sertifika mevcut de&#287;ildir. Sertifikalar eklemek veya ba&#351;ka bir kimlik do&#287;rulama y&#246;ntemi se&#231;mek i&#231;in Sertifika men&#252;s&#252;n&#252; kullan&#305;n&#305;z."
	};

char* MLG_Security_IPSecVPN_AlertMsg_Str11[] = {
	"ASN1DN can just be used as certificate.",
	"ASN1DN sadece Sertifikada kullan&#305;labilir."
	};

char* MLG_Security_IPSecVPN_AlertMsg_Str13[] = {
	"Local ID {{1}} is not a valid address",
	"Yerel Kimlik {{1}} ge&#231;erli bir adres de&#287;ildir"
	};

char* MLG_Security_IPSecVPN_AlertMsg_Str14[] = {
	"Remote ID {{1}} is not a valid address",
	"Uzaktan Kimlik {{1}} ge&#231;erli bir adres de&#287;ildir"
	};

char* MLG_Security_IPSecVPN_AlertMsg_Str15[] = {
	"Invalid Manual Encryption Key.",
	"Ge&#231;ersiz Manuel &#350;ifreleme Anahtar&#305;."
	};

char* MLG_Security_IPSecVPN_AlertMsg_Str16[] = {
	"Invalid Manual Authentication Key.",
	"Ge&#231;ersiz Manuel Kimlik Do&#287;rulama Anahtar&#305;."
	};

char* MLG_Security_IPSecVPN_AlertMsg_Str17[] = {
	"The connection name {{1}} has been used.",
	"Ba&#287;lant&#305; ismi {{1}} kullan&#305;lm&#305;&#351;t&#305;r."
	};

char* MLG_Security_IPSecVPN_AlertMsg_Str18[] = {
	"Invalid connection name {{1}}.",
	"Ge&#231;ersiz ba&#287;lant&#305; ismi {{1}}."
	};

char* MLG_Security_IPSecVPN_AlertMsg_Str3[] = {
	"Local IP Address {{1}} is invalid.",
	"Yerel IP Adresi {{1}} ge&#231;ersizdir."
	};

char* MLG_Security_IPSecVPN_AlertMsg_Str4[] = {
	"Local Subnet Mask {{1}} is invalid.",
	"Yerel Alt A&#287;&#305; Maskesi {{1}} ge&#231;ersizdir."
	};

char* MLG_Security_IPSecVPN_AlertMsg_Str5[] = {
	"Remote IP Address {{1}} is invalid.",
	"Uzaktan IP Adresi {{1}} ge&#231;ersizdir."
	};

char* MLG_Security_IPSecVPN_AlertMsg_Str6[] = {
	"Remote IP Address {{1}} is invalid.",
	"Uzaktan IP Adresi {{1}} ge&#231;ersizdir."
	};

char* MLG_Security_IPSecVPN_AlertMsg_Str7[] = {
	"Remote Subnet Mask {{1}} is invalid.",
	"Uzaktan Alt A&#287; Maskesi {{1}} ge&#231;ersizdir."
	};

char* MLG_Security_IPSecVPN_AlertMsg_Str8[] = {
	"Phase 1 Key Life Time is invalid.",
	"A&#351;ama 1 Anahtar &#214;mr&#252; ge&#231;ersizdir."
	};

char* MLG_Security_IPSecVPN_AlertMsg_Str9[] = {
	"Phase 2 Key Life Time is invalid.",
	"A&#351;ama 2 Anahtar &#214;mr&#252; ge&#231;ersizdir."
	};

char* MLG_Security_IPSecVPNMonitor_Str1[] = {
	"The status of IPSec Tunnel is displayed on this page. You can trigger the IPSec Tunnel or change its status by clicking the button in the table. ",
	"IPSec T&#252;nelinin durumu bu sayfada g&#246;r&#252;nt&#252;lenmi&#351;tir. Tablodaki tu&#351;a t&#305;klayarak IPSec T&#252;nelini tetikleyebilirsiniz veya durumunu de&#287;i&#351;tirebilirsiniz."
	};

char* MLG_Security_IPSecVPNMonitor_Str2[] = {
	"Refresh Interval",
	"Aral&#305;&#287;&#305; Yenile"
	};

char* MLG_Security_IPSecVPNMonitor_Str3[] = {
	"Local Addresses",
	"Yerel Adresler"
	};

char* MLG_Security_IPSecVPNMonitor_Str4[] = {
	"Trigger",
	"Tetikle"
	};

char* MLG_Security_IPSecVPNMonitor_Str5[] = {
	"Processing...",
	"&#304;&#351;leme al&#305;yor..."
	};

char* MLG_Security_IPSecVPNMonitor_Str6[] = {
	"IPSec tunnels follow the Firewall Security Level. You can add Firewall ACL Rule to accept some services.",
	"IPSec t&#252;nelleri G&#252;venlik Duvar&#305; G&#252;venlik Seviyesini takip etmektedir. Baz&#305; hizmetleri kabul etmek i&#231;in G&#252;venlik Duvar&#305; ACL Kurallar&#305; ekleyebilirsiniz."
	};

char* MLG_Security_IPSecVPNMonitor_Str7[] = {
	"No Refresh",
	"Yenileme Yapma"
	};

char* MLG_Security_IPSecVPNSetting_Str1[] = {
	"IPSec can be used to protect data flows between a pair of hosts (computer users or servers), security gateways (routers or firewalls), or between a security gateway and a host. You can add or remove IPSec tunnel connections from this page.",
	"IPSec bir &#231;ift kullan&#305;c&#305; (bilgisayar kullan&#305;c&#305;lar&#305; veya sunucular), g&#252;venlik ge&#231;itleri (y&#246;nelticiler veya g&#252;venlik duvarlar&#305;) veya bir g&#252;venlik ge&#231;idi ve bir kullan&#305;c&#305; aras&#305;ndaki veri ak&#305;mlar&#305;n&#305; korumak i&#231;in kullan&#305;labilir. &#304;&#351;bu sayfada IPSec t&#252;nel ba&#287;lant&#305;lar&#305; ekleyebilirsiniz veya silebilirsiniz."
	};

char* MLG_Security_IPSecVPNSetting_Str10[] = {
	"IPSec Connection Name",
	"IPSec Ba&#287;lant&#305; &#304;smi"
	};

char* MLG_Security_IPSecVPNSetting_Str11[] = {
	"Remote IPSec Gateway Address (IP or Domain Name)",
	"Remote IPSec Ge&#231;it Adresi (IP veya Domain &#304;smi)"
	};

char* MLG_Security_IPSecVPNSetting_Str12[] = {
	"Tunnel access from local IP addresses",
	"Yerel IP adreslerden t&#252;nel eri&#351;imi"
	};

char* MLG_Security_IPSecVPNSetting_Str13[] = {
	"IP Address for VPN",
	"VPN i&#231;in IP Adresi"
	};

char* MLG_Security_IPSecVPNSetting_Str14[] = {
	"IP Subnetmask",
	"IP Alt A&#287; Maskesi"
	};

char* MLG_Security_IPSecVPNSetting_Str15[] = {
	"Tunnel access from remote IP addresses",
	"Uzaktan IP adreslerden t&#252;nel eri&#351;imi"
	};

char* MLG_Security_IPSecVPNSetting_Str16[] = {
	"Protocol",
	"Protokol"
	};

char* MLG_Security_IPSecVPNSetting_Str17[] = {
	"Key Exchange Method",
	"Anahtar De&#287;i&#351;tir Y&#246;ntemi"
	};

char* MLG_Security_IPSecVPNSetting_Str18[] = {
	"Auto(IKE)",
	"Oto(IKE)"
	};

char* MLG_Security_IPSecVPNSetting_Str19[] = {
	"Manual",
	"Manuel"
	};

char* MLG_Security_IPSecVPNSetting_Str2[] = {
	"Add New Connection",
	"Yeni Ba&#287;lant&#305; Ekle"
	};

char* MLG_Security_IPSecVPNSetting_Str20[] = {
	"Authentication Method",
	"Kimlik Do&#287;rulama Y&#246;ntemi"
	};

char* MLG_Security_IPSecVPNSetting_Str21[] = {
	"Pre-Shared Key",
	"&#214;nceden Payla&#351;&#305;lm&#305;&#351; Anahtar"
	};

char* MLG_Security_IPSecVPNSetting_Str22[] = {
	"Certificate (X.509)",
	"Sertifika (X.509)"
	};

char* MLG_Security_IPSecVPNSetting_Str23[] = {
	"Certificates",
	"Sertifikalar"
	};

char* MLG_Security_IPSecVPNSetting_Str24[] = {
	"Local ID Type",
	"Yerel Kimlik Tipi"
	};

char* MLG_Security_IPSecVPNSetting_Str25[] = {
	"E-mail",
	"E-Posta"
	};

char* MLG_Security_IPSecVPNSetting_Str26[] = {
	"ASN1DN",
	"ASN1DN"
	};

char* MLG_Security_IPSecVPNSetting_Str27[] = {
	"Local ID Content",
	"Yerel Kimlik &#304;&#231;eri&#287;i"
	};

char* MLG_Security_IPSecVPNSetting_Str28[] = {
	"Remote ID Type",
	"Uzaktan Kimlik Tipi"
	};

char* MLG_Security_IPSecVPNSetting_Str29[] = {
	"Remote ID Content",
	"Uzaktan Kimlik &#304;&#231;eri&#287;i"
	};

char* MLG_Security_IPSecVPNSetting_Str3[] = {
	"Connection Name",
	"Ba&#287;lant&#305; &#304;smi"
	};

char* MLG_Security_IPSecVPNSetting_Str30[] = {
	"Advanced IKE Settings",
	"Geli&#351;mi&#351; IKE Ayarlar&#305;"
	};

char* MLG_Security_IPSecVPNSetting_Str31[] = {
	"more&#8230;",
	"Daha fazlas&#305;&#8230;"
	};

char* MLG_Security_IPSecVPNSetting_Str32[] = {
	"Encryption Algorithm",
	"&#350;ifreleme Algoritmas&#305;"
	};

char* MLG_Security_IPSecVPNSetting_Str33[] = {
	"Encryption Key",
	"&#350;ifreleme Anahtar&#305; "
	};

char* MLG_Security_IPSecVPNSetting_Str34[] = {
	"Authentication Algorithm",
	"Kimlik Do&#287;rulama Algoritmas&#305;"
	};

char* MLG_Security_IPSecVPNSetting_Str35[] = {
	"Authentication Key",
	"Do&#287;rulama Anahtar&#305;"
	};

char* MLG_Security_IPSecVPNSetting_Str36[] = {
	"NAT_Traversal",
	"NAT_Traversal"
	};

char* MLG_Security_IPSecVPNSetting_Str37[] = {
	"Phase 1",
	"A&#351;ama 1"
	};

char* MLG_Security_IPSecVPNSetting_Str38[] = {
	"Main",
	"Ana"
	};

char* MLG_Security_IPSecVPNSetting_Str39[] = {
	"Aggressive",
	"Sald&#305;rgan"
	};

char* MLG_Security_IPSecVPNSetting_Str4[] = {
	"Remote Gateway",
	"Uzaktan A&#287; Ge&#231;idi"
	};

char* MLG_Security_IPSecVPNSetting_Str40[] = {
	"Integrity Algorithm",
	"B&#252;t&#252;nl&#252;k Algoritmas&#305;"
	};

char* MLG_Security_IPSecVPNSetting_Str41[] = {
	"Select Diffie-Hellman Group for Key Exchange",
	"Anahtar de&#287;i&#351;imi ad&#305;na Diffie-Hellman Grubu&#39;nu se&#231;iniz."
	};

char* MLG_Security_IPSecVPNSetting_Str42[] = {
	"Key Life Time",
	"Anahtar &#214;mr&#252; "
	};

char* MLG_Security_IPSecVPNSetting_Str43[] = {
	"Phase 2",
	"A&#351;ama 2"
	};

char* MLG_Security_IPSecVPNSetting_Str44[] = {
	"Perfect Forward Secrecy(PFS)",
	"M&#252;kemmel &#304;letme Gizlili&#287;i (PFS)"
	};

char* MLG_Security_IPSecVPNSetting_Str45[] = {
	"IPSec Configuration Edit",
	"IPSec Yap&#305;sal D&#252;zenlemesi"
	};

char* MLG_Security_IPSecVPNSetting_Str46[] = {
	"Subnet",
	"Alt A&#287;"
	};

char* MLG_Security_IPSecVPNSetting_Str47[] = {
	"Single Address",
	"Tekli Adres"
	};

char* MLG_Security_IPSecVPNSetting_Str48[] = {
	"Remove IPSec Entry",
	"IPSec Giri&#351;ini Kald&#305;r"
	};

char* MLG_Security_IPSecVPNSetting_Str49[] = {
	"Connecting",
	"Ba&#287;lan&#305;yor"
	};

char* MLG_Security_IPSecVPNSetting_Str5[] = {
	"Local Addresses",
	"Yerel Adresler"
	};

char* MLG_Security_IPSecVPNSetting_Str50[] = {
	"Disconnecting",
	"Ba&#287;lant&#305; Kesiliyor"
	};

char* MLG_Security_IPSecVPNSetting_Str51[] = {
	"IPSEC VPN Add",
	"IPSEC VPN Ekle"
	};

char* MLG_Security_IPSecVPNSetting_Str52[] = {
	"IPSEC VPN Edit",
	"IPSEC VPN D&#252;zenle"
	};

char* MLG_Security_IPSecVPNSetting_Str53[] = {
	"ESP",
	"ESP"
	};

char* MLG_Security_IPSecVPNSetting_Str54[] = {
	"AH",
	"AH"
	};

char* MLG_Security_IPSecVPNSetting_Str55[] = {
	"DES",
	"DES"
	};

char* MLG_Security_IPSecVPNSetting_Str56[] = {
	"ESP_NULL",
	"ESP_NULL"
	};

char* MLG_Security_IPSecVPNSetting_Str57[] = {
	"MD5",
	"MD5"
	};

char* MLG_Security_IPSecVPNSetting_Str58[] = {
	"SHA1",
	"SHA1"
	};

char* MLG_Security_IPSecVPNSetting_Str59[] = {
	"digit Hex",
	"Hex say&#305;"
	};

char* MLG_Security_IPSecVPNSetting_Str6[] = {
	"Remote Addresses",
	"Uzaktan Eri&#351;im Adresleri"
	};

char* MLG_Security_IPSecVPNSetting_Str60[] = {
	"SPI",
	"SPI"
	};

char* MLG_Security_IPSecVPNSetting_Str61[] = {
	"HEX",
	"HEX"
	};

char* MLG_Security_IPSecVPNSetting_Str62[] = {
	"AES",
	"AES"
	};

char* MLG_Security_IPSecVPNSetting_Str63[] = {
	"bit",
	"bit"
	};

char* MLG_Security_IPSecVPNSetting_Str64[] = {
	"DH Group",
	"DH Grubu"
	};

char* MLG_Security_IPSecVPNSetting_Str7[] = {
	"IPSec tunnels follow the Firewall Security Level. You can add Firewall ACL Rule to accept some services.",
	"IPSec t&#252;nelleri G&#252;venlik Duvar&#305; G&#252;venlik D&#252;zeyini takip etmektedir. Baz&#305; hizmetleri kabul etmek ad&#305;na Firewall ACL Kural&#305;n&#305; ekleyebilirsiniz. "
	};

char* MLG_Security_IPSecVPNSetting_Str8[] = {
	"IPSec Settings",
	"IPSec Ayarlar&#305;"
	};

char* MLG_Security_IPSecVPNSetting_Str9[] = {
	"Set up IPSec in this page.",
	"IPSec&#8217;i bu sayfada kurun"
	};

char* MLG_Security_PPTPVPNSetting_ENABLEPPTP[] = {
	"Enable PPTP",
	"PPTP Aktif Et"
	};

char* MLG_Security_PPTPVPNSetting_PPTPVPN[] = {
	"PPTP VPN",
	"PPTP VPN"
	};

char* MLG_Security_PPTPVPNSetting_Name[] = {
	"Name",
	"İsim"
	};

char* MLG_Security_PPTPVPNSetting_ServerIP[] = {
	"Server IP",
	"Sunucu IP"
	};

char* MLG_Security_PPTPVPNSetting_Account[] = {
	"PPTP ACCOUNT",
	"PPTP HESAP"
	};

char* MLG_Security_PPTPVPNSetting_Password[] = {
	"PPTP Password",
	"PPTP Şifre"
	};

char* MLG_Security_PPTPVPNSetting_EnablePolicyRoute[] = {
	"Enable Policy Route",
	"Policy Route Aktif Et"
	};

char* MLG_Security_PPTPVPNSetting_RouteTarget[] = {
	"Route Target",
	"RRoute Hedef"
	};

char* MLG_Security_PPTPVPNSetting_RouteMask[] = {
	"Route Mask",
	"Route Maske"
	};

char* MLG_Security_PPTPVPNSetting_Encryption[] = {
	"Encryption",
	"Şifreleme"
	};

char* MLG_Security_PPTPVPNSetting_RequireMPPE[] = {
	"RequireMPPE",
	"MPPE İhtiyacı"
	};

char* MLG_Security_PPTPVPNSetting_Refuse40[] = {
	"Refuse 40-bit Encryption",
	"40-bit Şifreleme Reddet"
	};

char* MLG_Security_PPTPVPNSetting_Refuse128[] = {
	"Refuse 128-bit Encryption",
	"128-bit Şifreleme Reddet"
	};

char* MLG_Security_PPTPVPNSetting_Refusestateless[] = {
	"Refuse stateless Encryption",
	"Şifreleme Reddet"
	};

char* MLG_Security_PPTPVPNSetting_RefuseEAP[] = {
	"Refuse to Authenticate with EAP",
	"EAP ile Kimlik Doğrulama Reddet"
	};

char* MLG_Security_PPTPVPNSetting_Status[] = {
	"Status",
	"Durum"
	};

char* MLG_Security_PPTPVPNSetting_Server[] = {
	"Server",
	"Sunucu"
	};

char* MLG_Security_PPTPVPNSetting_Disconnected[] = {
	"Disconnected",
	"Bağlantı kesildi"
	};

char* MLG_Security_PPTPVPNSetting_IPAddress[] = {
	"IP Address",
	"IP Adresi"
	};

char* MLG_Security_PPTPVPNSetting_PeerIPAddress[] = {
	"Peer IP Address",
	"Peer IP Adresi"
	};

char* MLG_Security_PPTPVPNSetting_Note[] = {
	"Note",
	"Not"
	};

char* MLG_Security_PPTPVPNSetting_Str1[] = {
	"Policy Routing configuration may conflicts with port binding",
	"Policy Routing yapılandırması port eşleştirme ile çakışıyor olabilir."
	};

char* MLG_Security_PPTPVPNSetting_Str2[] = {
	"Please refresh web page to get the status info",
	"Durum bilgisi almak için lütfen web sayfasını yenileyiniz."
	};

char* MLG_Security_PPTPVPNSetting_connect[] = {
	"connect",
	"bağlan"
	};

char* MLG_Security_MACFilter_AlertMsg_Str1[] = {
	"Address {{1}} is invalid MAC address.",
	"Adres {{1}} MAC adresi ge&#231;ersizdir ."
	};

char* MLG_Security_MACFilter_AlertMsg_Str2[] = {
	"Address {{1}} is invalid MAC address.",
	"Adres {{1}} MAC adresi ge&#231;ersizdir ."
	};

char* MLG_Security_MACFilter_AlertMsg_Str3[] = {
	"Address {{1}} is invalid MAC address.",
	"Adres {{1}} MAC adresi ge&#231;ersizdir ."
	};

char* MLG_Security_MACFilter_AlertMsg_Str4[] = {
	"Address {{1}} is duplicated MAC address.",
	"Adres {{1}} MAC adresi kopyalanm&#305;&#351;t&#305;r ."
	};

char* MLG_Security_MACFilter_AlertMsg_Str5[] = {
	"Please at least have one entry in the allow list.",
	"L&#252;tfen izin verilenler listesinde en az bir giri&#351;iniz olsun."
	};

char* MLG_Security_MACFilter_AlertMsg_Str6[] = {
	"Delete the device from list?",
	"Ayg&#305;t&#305; listeden kald&#305;rmak m&#305; istiyorsunuz?"
	};

char* MLG_Security_MACFilter_AlertMsg_Str7[] = {
	"Configure MAC Filter failed, please try again.",
	"MAC Filtresi konfig&#252;rasyonu ba&#351;ar&#305;s&#305;z oldu, l&#252;tfen tekrar deneyiniz."
	};

char* MLG_Security_MACFilter_AlertMsg_Str8[] = {
	"To activated MAC Address Filter, Must be at least one allowed MAC address exists in table.",
	"MAC Adresi Filtresini aktive etmek i&#231;in tabloda izin verilen en az bir MAC adresi bulunmal&#305;d&#305;r."
	};

char* MLG_Security_MACFilter_Str1[] = {
	"MAC Filter",
	"MAC Filtresi"
	};

char* MLG_Security_MACFilter_Str10[] = {
	"Device",
	"Cihaz"
	};

char* MLG_Security_MACFilter_Str11[] = {
	"MAC Address",
	"MAC Adresi"
	};

char* MLG_Security_MACFilter_Str12[] = {
	"Modify",
	"De&#287;i&#351;tir"
	};

char* MLG_Security_MACFilter_Str13[] = {
	"Add Device",
	"Cihaz Ekle"
	};

char* MLG_Security_MACFilter_Str14[] = {
	"Add device to allow list by MAC address",
	"MAC adresine g&#246;re izin verilen liste i&#231;in cihaz ekleyin."
	};

char* MLG_Security_MACFilter_Str15[] = {
	"Add to list by MAC address",
	"MAC adresi listesine ekleyin."
	};

char* MLG_Security_MACFilter_Str16[] = {
	"To add a device, please enter device&#8217;s MAC address :",
	"Bir ayg&#305;t eklemek i&#231;in l&#252;tfen ayg&#305;t &#8217;s MAC adresini girin:"
	};

char* MLG_Security_MACFilter_Str17[] = {
	"unknown",
	"Tan&#305;nmayan"
	};

char* MLG_Security_MACFilter_Str18[] = {
	"Add device to the block List automatically.",
	"Engellenenler listesine otomatik olarak ayg&#305;t ekleyin."
	};

char* MLG_Security_MACFilter_Str19[] = {
	"Add device to block list by MAC address",
	"Mac adresine g&#246;re engellenenler listesine cihaz ekleyin."
	};

char* MLG_Security_MACFilter_Str20[] = {
	"Delete the device from list",
	"Listeden ayg&#305;t&#305; kald&#305;r&#305;n"
	};

char* MLG_Security_MACFilter_Str2[] = {
	"The MAC Filter allows or blocks access to your router by checking the MAC addresses of devices. Edit the MAC filter lists to allow or block a device.",
	"MAC Filtresi ayg&#305;tlar&#305;n MAC adreslerini kontrolden ge&#231;irerek y&#246;nlendiricinize olan eri&#351;imlerine izin vermektedir veya engellemektedir. Bir ayg&#305;ta izin vermek veya engellemek ad&#305;na Mac filtre listelerini d&#252;zenleyin."
	};

char* MLG_Security_MACFilter_Str3[] = {
	"MAC Filter Setup",
	"MAC Filtresi Kurulumu"
	};

char* MLG_Security_MACFilter_Str4[] = {
	"Enable",
	"Etkinle&#351;tir"
	};

char* MLG_Security_MACFilter_Str5[] = {
	"Disable (The settings in this screen are invalid if you select this.)",
	"Devreden &#199;&#305;karma (Bunu se&#231;erseniz bu ekrandaki ayarlar ge&#231;ersiz k&#305;l&#305;nacakt&#305;r.)"
	};

char* MLG_Security_MACFilter_Str6[] = {
	"Add new devices to the Allow List automatically.",
	"Otomatik olarak &#304;zin Listesine yeni ayg&#305;tlar ekleyin."
	};

char* MLG_Security_MACFilter_Str7[] = {
	"MAC Filter Lists",
	"MAC Filtre Listeleri"
	};

char* MLG_Security_MACFilter_Str8[] = {
	"Allow List",
	"&#304;zin Listesi"
	};

char* MLG_Security_MACFilter_Str9[] = {
	"Block List",
	"Engellenenler Listesi"
	};

char* MLG_Security_ParentalControl_AlertMsg_Str1[] = {
	"MAC address error.",
	"MAC adresi hatas&#305;."
	};

char* MLG_Security_ParentalControl_AlertMsg_Str2[] = {
	"This PC Name/IP/MAC is being used.",
	"Bu Bilgisayar &#304;smi/IP/MAC kullan&#305;lm&#305;&#351;t&#305;r."
	};

char* MLG_Security_ParentalControl_AlertMsg_Str3[] = {
	"At least one web site must be added.",
	"En az bir web sitesi eklenmelidir."
	};

char* MLG_Security_ParentalControl_AlertMsg_Str4[] = {
	"Please input website only, not webpage address.",
	"L&#252;tfen sadece web siteleri ekleyin, web sayfas&#305; adresleri eklemeyiniz."
	};

char* MLG_Security_ParentalControl_AlertMsg_Str5[] = {
	"Table is full, max list number is 100",
	"&#199;izelge tablosu doludur, azami liste numaras&#305; 100&#8217;d&#252;r"
	};

char* MLG_Security_ParentalControl_AlertMsg_Str7[] = {
	"You need to add a Scheduler Rule first.",
	"&#304;lk &#246;nce Programc&#305; Kurallar&#305; eklemelisiniz."
	};

char* MLG_Security_ParentalControl_AlertMsg_Str8[] = {
	"The maximum number of Parentcal Control rules is limited to 20.",
	"Listelenen kay&#305;tlar&#305;n say&#305;s&#305; 64 ile s&#305;n&#305;rland&#305;r&#305;lm&#305;&#351;t&#305;r."
	};

char* MLG_Security_ParentalControl_AlertMsg_Str9[] = {
	"There is no Parental Control Profile applied to this user currently. <br />Do you want to create one now?",
	"(null)"
	};

char* MLG_Security_ParentalControl_Str1[] = {
	"In Parental Control, you can set the rule to block websites on your PC. Please click \add new rule\ to decide the rule for website blocking.",
	"Ebeveyn Kontrol&#252;&#8217;nde, Bilgisayar&#305;n&#305;zda web sitelerin engellenmesi i&#231;in kural olu&#351;turabilirsiniz. Web sitesi engelleme kural&#305;n&#305; koymak i&#231;in l&#252;tfen /yeni kural ekleyiniz/&#8217;e t&#305;klay&#305;n&#305;z."
	};

char* MLG_Security_ParentalControl_Str10[] = {
	"Parental Control List Configuration",
	"Ebeveyn Kontrol&#252; Liste Konfig&#252;rasyonu"
	};

char* MLG_Security_ParentalControl_Str11[] = {
	"Parental Control List Delete",
	"Ebeveyn Kontrol&#252; Liste Sil"
	};

char* MLG_Security_ParentalControl_Str12[] = {
	"Parental Control Edit",
	"Ebeveyn Kontrol&#252;&#8217;n&#252;n D&#252;zenlenmesi"
	};

char* MLG_Security_ParentalControl_Str13[] = {
	"Block Web Site",
	"Web Sitesi Engelle"
	};

char* MLG_Security_ParentalControl_Str14[] = {
	"Allow Web Site",
	"Web Sitesi Eri&#351;imine &#304;zin Ver"
	};

char* MLG_Security_ParentalControl_Str15[] = {
	"Block All",
	"Hepsini Engelle"
	};

char* MLG_Security_ParentalControl_Str16[] = {
	"Remove",
	"Kald&#305;r"
	};

char* MLG_Security_ParentalControl_Str17[] = {
	"Scheduler Rules",
	"Programc&#305; Kurallar&#305;"
	};

char* MLG_Security_ParentalControl_Str2[] = {
	"The settings in this screen are invalid if you select this.",
	"Bunu se&#231;erseniz bu ekrandaki ayarlar ge&#231;ersiz k&#305;l&#305;nacakt&#305;r."
	};

char* MLG_Security_ParentalControl_Str3[] = {
	"Rule List",
	"Kural Listesi"
	};

char* MLG_Security_ParentalControl_Str4[] = {
	"Add new rule",
	"Yeni kural ekle"
	};

char* MLG_Security_ParentalControl_Str5[] = {
	"PC Name/IP/MAC",
	"Bilgisayar &#304;smi/IP/MAC"
	};

char* MLG_Security_ParentalControl_Str6[] = {
	"Access Type",
	"Eri&#351;im T&#252;r&#252;"
	};

char* MLG_Security_ParentalControl_Str7[] = {
	"Web Site",
	"Web Site"
	};

char* MLG_Security_ParentalControl_Str8[] = {
	"Scheduler Name",
	"Programc&#305; Ad&#305; "
	};

char* MLG_Security_ParentalControl_Profile_Name[] = {
	"Parental Control Profile Name",
	"Ebeveyn Kontrol&#252; Profil Ad&#305;"
	};

char* MLG_Security_ParentalControl_Profile[] = {
	"Parental Control Profile (PCP)",
	"Ebeveyn Kontrol Profili (EKP)"
	};

char* MLG_Security_Add_New_PCP[] = {
	"Add new PCP",
	"Yeni EKP ekleyiniz"
	};

char* MLG_Security_ParentalControl_Str9[] = {
	"You need to add {{1}} first.",
	"&#304;lk &#246;nce {{1}}&#8217;i eklemelisiniz. "
	};

char* MLG_Security_Scheduler_AlertMsg_Str1[] = {
	"Rule Name is being used.",
	"Kural Ad&#305; kullan&#305;lm&#305;&#351;t&#305;r."
	};

char* MLG_Security_Scheduler_AlertMsg_Str10[] = {
	"Time of Day Range is in 24 hour clock",
	"G&#252;n i&#231;indeki saat de&#287;er aral&#305;&#287;&#305; 24 saatlik zaman bi&#231;imi &#351;eklindedir."
	};

char* MLG_Security_Scheduler_AlertMsg_Str11[] = {
	"Modem time is not set and Scheduling will not work correctly without it!  Please set it in \'Maintenance/Time\' Setting",
	"Modem saati kurulmam&#305;&#351;t&#305;r ve bu olmadan Zaman Planlama d&#252;zg&#252;n bir &#351;ekilde &#231;al&#305;&#351;mayacakt&#305;r! L&#252;tfen &#8216;Bak&#305;m/Zaman Ayarlamas&#305;&#8217;n&#305; ayarlay&#305;n&#305;z."
	};

char* MLG_Security_Scheduler_AlertMsg_Str12[] = {
	"(hh:mm)",
	"(ss:dd)"
	};

char* MLG_Security_Scheduler_AlertMsg_Str2[] = {
	"Please enter a scheduler rule name",
	"L&#252;tfen bir programc&#305; kural&#305; girin"
	};

char* MLG_Security_Scheduler_AlertMsg_Str3[] = {
	"Please enter valid rule name: No special characters.",
	"L&#252;tfen ge&#231;erli bir kural ad&#305; girin: &#214;zel karakterler kullanmay&#305;n."
	};

char* MLG_Security_Scheduler_AlertMsg_Str4[] = {
	"Description contains invalid characters.",
	"Tan&#305;mlama ge&#231;ersiz karakterler i&#231;ermektedir. "
	};

char* MLG_Security_Scheduler_AlertMsg_Str5[] = {
	"No days were specified.",
	"G&#252;nler belirtilmemi&#351;tir"
	};

char* MLG_Security_Scheduler_AlertMsg_Str6[] = {
	"is an invalid time.",
	"Ge&#231;ersiz bir zamand&#305;r"
	};

char* MLG_Security_Scheduler_AlertMsg_Str7[] = {
	"Stop time is before start time.",
	"Durdurma zaman&#305; ba&#351;latma zaman&#305;ndan &#246;ncedir."
	};

char* MLG_Security_Scheduler_AlertMsg_Str8[] = {
	"This rule is used by Parental Control can not be removed.",
	"Bu kural Ebeveyn Kontrol&#252; taraf&#305;ndan kullan&#305;lmaktad&#305;r, silinemez."
	};

char* MLG_Security_Scheduler_AlertMsg_Str9[] = {
	"This rule is still used by ACL.",
	"Bu kural halen ACL taraf&#305;ndan kullan&#305;lmaktad&#305;r. "
	};

char* MLG_Security_Scheduler_Str1[] = {
	"Scheduler Rules can let you define scheduling rules and turn them into reusable objects. These objects can be selected in other configuration pages when scheduling is needed.",
	"Programc&#305; Kurallar&#305; zaman planlama kurallar&#305;n&#305; tan&#305;mlaman&#305;za ve onlar&#305; tekrar kullan&#305;labilir nesnelere d&#246;n&#252;&#351;t&#252;rmenize izin verebilir. Bu nesneler zaman planlama gerekli oldu&#287;u zamanlarda di&#287;er yap&#305;sal d&#252;zenleme sayfalardan se&#231;ilebilir."
	};

char* MLG_Security_Scheduler_Str2[] = {
	"Add new rule",
	"Yeni kural ekleyin"
	};

char* MLG_Security_Scheduler_Str3[] = {
	"Rule Name",
	"Kural Ad&#305;"
	};

char* MLG_Security_Scheduler_Str4[] = {
	"Scheduler Rule Configuration",
	"Programc&#305; Kural&#305; Konfig&#252;rasyonu"
	};

char* MLG_Security_Scheduler_Str5[] = {
	"Scheduler Rule Delete",
	"Programc&#305; Kural&#305;n&#305; Sil"
	};

char* MLG_Security_Scheduler_Str6[] = {
	"Scheduler Rule Edit",
	"Programc&#305; Kural&#305;n&#305; D&#252;zenle"
	};

char* MLG_Security_Scheduler_Str7[] = {
	"Time Of Day Range",
	"G&#252;n &#304;&#231;indeki Saatin Aral&#305;&#287;&#305;"
	};

char* MLG_Security_Scheduler_Str8[] = {
	"Scheduler Rule List Delete",
	"Programc&#305; Kural&#305; Listesini Sil"
	};

char* MLG_Security_Scheduler_Str9[] = {
	"in 24 hour format",
	"24 saatlik zaman bi&#231;iminde"
	};

char* MLG_Security_Scheduler_Str10[] = {
	"A scheduler rule is a scheduling setting and a re-usable object that should be used in conjunction with other configurations.",
	"Bir programc&#305; kural&#305; bir programlama ayar&#305; olup, di&#287;er yap&#305;sal d&#252;zenlemeler ile birlikte kullan&#305;lmas&#305; gereken yeniden kullan&#305;labilir bir nesnedir."
	};

char* MLG_Security_Scheduler_Str11[] = {
	"Time of Day Range",
	"G&#252;n &#304;&#231;indeki Saatin Aral&#305;&#287;&#305;"
	};

char* MLG_Security_ServiceControl_AlertMsg_Str1[] = {
	" HTTP port {{1}} is used for other service.",
	"HTTP ba&#287;lant&#305; noktas&#305; {{1}} di&#287;er hizmetler i&#231;in kullan&#305;lmaktad&#305;r."
	};

char* MLG_Security_ServiceControl_AlertMsg_Str10[] = {
	" FTP port {{1}} is  invalid (1~65535).",
	"FTP ba&#287;lant&#305; noktas&#305; {{1}} ge&#231;ersizdir (1~65535)."
	};

char* MLG_Security_ServiceControl_AlertMsg_Str11[] = {
	" Subnet {{1}} is  invalid.",
	"Alt a&#287; {{1}} ge&#231;ersizdir."
	};

char* MLG_Security_ServiceControl_AlertMsg_Str12[] = {
	" IP Address {{1}} is  invalid.",
	"IP Adresi {{1}} ge&#231;ersizdir."
	};

char* MLG_Security_ServiceControl_AlertMsg_Str13[] = {
	"Subnet is invalid.",
	"Alt a&#287; ge&#231;ersizdir."
	};

char* MLG_Security_ServiceControl_AlertMsg_Str14[] = {
	"IP Address is invalid.",
	"IP Adresi ge&#231;ersizdir."
	};

char* MLG_Security_ServiceControl_AlertMsg_Str15[] = {
	"IP Address {{1}} is invalid.",
	"IP Adresi {{1}} ge&#231;ersizdir."
	};

char* MLG_Security_ServiceControl_AlertMsg_Str16[] = {
	"Subnet {{1}} is invalid.",
	"Alt a&#287; {{1}} ge&#231;ersizdir."
	};

char* MLG_Security_ServiceControl_AlertMsg_Str17[] = {
	"Configure Service Control failed, please try again.",
	"Hizmet Denetimi Konfig&#252;rasonu ba&#351;ar&#305;s&#305;z olmu&#351;tur, l&#252;tfen tekrar deneyin."
	};

char* MLG_Security_ServiceControl_AlertMsg_Str2[] = {
	" HTTPS port {{1}} is used for other service.",
	" HTTPS portu {{1}} di&#287;er hizmetler i&#231;in kullan&#305;lmaktad&#305;r."
	};

char* MLG_Security_ServiceControl_AlertMsg_Str3[] = {
	" SSH port {{1}} is used for other service.",
	" SSH portu{{1}} di&#287;er hizmetler i&#231;in kullan&#305;lmaktad&#305;r."
	};

char* MLG_Security_ServiceControl_AlertMsg_Str4[] = {
	" TELNET port {{1}} is used for other service.",
	"TELNET portu {{1}} di&#287;er hizmetler i&#231;in kullan&#305;lmaktad&#305;r."
	};

char* MLG_Security_ServiceControl_AlertMsg_Str5[] = {
	" FTP port {{1}} is used for other service.",
	"FTP portu {{1}} di&#287;er hizmetler i&#231;in kullan&#305;lmaktad&#305;r."
	};

char* MLG_Security_ServiceControl_AlertMsg_Str6[] = {
	" Http port {{1}} is invalid (1~65535).",
	"Http portu {{1}} ge&#231;ersizdir (1~65535)."
	};

char* MLG_Security_ServiceControl_AlertMsg_Str7[] = {
	" Https port {{1}} is  invalid (1~65535).",
	"Httpsportu {{1}} ge&#231;ersizdir (1~65535)."
	};

char* MLG_Security_ServiceControl_AlertMsg_Str8[] = {
	" SSH port {{1}} is  invalid (1~65535).",
	"SSH portu {{1}} ge&#231;ersizdir (1~65535)."
	};

char* MLG_Security_ServiceControl_AlertMsg_Str9[] = {
	" Telnet port {{1}} is  invalid (1~65535).",
	"Telnet portu {{1}} ge&#231;ersizdir (1~65535)."
	};

char* MLG_Security_ServiceControl_Str1[] = {
	"Service Control",
	"Hizmet Denetimi"
	};

char* MLG_Security_ServiceControl_Str10[] = {
	"HTTPS Certificate:",
	"HTTPS Sertifikas&#305;:"
	};

char* MLG_Security_ServiceControl_Str11[] = {
	"default",
	"&#214;nceden tan&#305;mlanm&#305;&#351;"
	};

char* MLG_Security_ServiceControl_Str12[] = {
	"Notes",
	"Notlar"
	};

char* MLG_Security_ServiceControl_Str13[] = {
	"1.Service Control setting will be affected by ACL.",
	"1. Hizmet Denetimi ayarlar&#305; ACL taraf&#305;ndan etkilenecektir."
	};

char* MLG_Security_ServiceControl_Str14[] = {
	"2.You need to change the HTTPS certificate to reopen browser or reimport a new certificate.",
	"2. Internet taray&#305;c&#305;s&#305;n&#305; tekrar a&#231;mak i&#231;in HTTPS sertifikas&#305;n&#305; de&#287;i&#351;tirmelisiniz veya yeni bir sertifikay&#305; i&#231;eri aktarmal&#305;s&#305;n&#305;z."
	};

char* MLG_Security_ServiceControl_Str15[] = {
	"Error",
	"Hata"
	};

char* MLG_Security_ServiceControl_Str16[] = {
	"Services Control",
	"Hizmetler Denetimi"
	};

char* MLG_Security_ServiceControl_Str17[] = {
	"HTTP",
	"HTTP"
	};

char* MLG_Security_ServiceControl_Str18[] = {
	"HTTPS",
	"HTTPS"
	};

char* MLG_Security_ServiceControl_Str19[] = {
	"SSH",
	"SSH"
	};

char* MLG_Security_ServiceControl_Str20[] = {
	"TELNET",
	"TELNET"
	};

char* MLG_Security_ServiceControl_Str21[] = {
	"FTP",
	"FTP"
	};

char* MLG_Security_ServiceControl_Str22[] = {
	"When creating a rule causes inaccessible devices, please restore to the factory defaults.",
	"Kural olu&#351;turman&#305;z eri&#351;ilemeyen ayg&#305;tlara neden oldu&#287;unda, l&#252;tfen fabrika ayarlar&#305;na geri d&#246;n&#252;n&#252;z."
	};

char* MLG_Security_ServiceControl_Str2[] = {
	"Service Control allows you to choose the network service(s) that {{1}} allow(s).",
	"Hizmet Denetimi {{1}}&#8217;in izin verdi&#287;i a&#287; hizmet(ler)ini se&#231;menize izin vermektedir."
	};

char* MLG_Security_ServiceControl_Str3[] = {
	"You can set one trust domain for remote management. Let trust domain can be through your choose the network services to access the {{1}}.",
	"Uzaktan y&#246;netim i&#231;in bir g&#252;venli etki alan&#305; ayarlayabilirsiniz. G&#252;venilir etki alan&#305; {{1}} eri&#351;mek i&#231;in kulland&#305;&#287;&#305;n&#305;z a&#287; hizmetlerinden se&#231;erek ayarlayabilirsiniz.  "
	};

char* MLG_Security_ServiceControl_Str4[] = {
	"Trust Domain",
	"G&#252;venli Etki Alan&#305;"
	};

char* MLG_Security_ServiceControl_Str5[] = {
	"Services Name",
	"Hizmetler Ad&#305;"
	};

char* MLG_Security_ServiceControl_Str6[] = {
	"LAN",
	"LAN (Yerel alan a&#287;&#305;)"
	};

char* MLG_Security_ServiceControl_Str7[] = {
	"WAN",
	"WAN (Geni&#351; alan a&#287;&#305;)"
	};

char* MLG_Security_ServiceControl_Str8[] = {
	"Port",
	"Port"
	};

char* MLG_Security_ServiceControl_Str9[] = {
	"Certificate",
	"Sertifika"
	};

char* MLG_Security_FirewallIndex[] = {
	"The firewall blocks unauthorized accesses to your network. Drag and drop the indicator to set a security level. Also note that a higher firewall level means more restrictions to the Internet activities you want to do.",
	"G&#252;venlik duvar&#305;, bilgisayar a&#287;&#305;n&#305;za yetkisiz eri&#351;imleri engellemektedir. Bir g&#252;venlik seviyesi olu&#351;turmak i&#231;in g&#246;stergeyi istenilen seviyeye s&#252;r&#252;kleyiniz. Ayr&#305;ca daha y&#252;ksek bir g&#252;venlik duvar&#305; seviyesinin, &#160;yerine getirmek istedi&#287;iniz internet faaliyetlerini daha &#231;ok k&#305;s&#305;tlayaca&#287;&#305; anlam&#305;na geldi&#287;ini unutmay&#305;n."
	};

char* MLG_Security_LAN_to_WAN[] = {
	"LAN to WAN",
	"LAN&#8217;dan WAN&#8217;a"
	};

char* MLG_Security_WAN_to_LAN[] = {
	"WAN to LAN",
	"WAN&#8217;dan LAN&#8217;a"
	};

char* MLG_Security_WAN_to_ROUTER[] = {
	"WAN to ROUTER",
	"WAN&#8217;dan ROUTER&#8217;a"
	};

char* MLG_Security_LAN_to_ROUTER[] = {
	"LAN to ROUTER",
	"LAN&#8217;dan ROUTER&#8217;a"
	};

char* MLG_Security_Low[] = {
	"Low",
	"D&#252;&#351;&#252;k"
	};

char* MLG_Security_Medium[] = {
	"Medium",
	"Orta "
	};

char* MLG_Security_Recommended[] = {
	"(Recommended)",
	"(&#214;nerilen)"
	};

char* MLG_Security_High[] = {
	"High",
	"Y&#252;ksek"
	};

char* MLG_Security_Note_Str1[] = {
	"LAN to WAN: Allow access to all internet services",
	"LAN&#8217;dan WAN&#8217;a: B&#252;t&#252;n internet hizmetlerine eri&#351;im sa&#287;lans&#305;n."
	};

char* MLG_Security_Note_Str2[] = {
	"WAN to LAN: Allow access from other computers on the Internet",
	"WAN&#8217;dan LAN&#8217;a: &#304;nternette olan di&#287;er bilgisayarlardan eri&#351;im sa&#287;lans&#305;n."
	};

char* MLG_Security_Note_Str3[] = {
	"When the security level is set to \'High\', access to the following services is allowed: Telnet, FTP, HTTP, HTTPS, DNS, IMAP, POP3 and SMTP",
	"G&#252;venlik d&#252;zeyi &#8216;Y&#252;ksek&#8217; olarak ayarland&#305;&#287;&#305; zaman altta belirtilmi&#351; olan hizmetlere eri&#351;im sa&#287;lanmaktad&#305;r: Telnet, FTP, http, HTTPS, DNS, IMAP, POP3 ve SMTP"
	};

char* MLG_Security_Note_Str4[] = {
	"Each entry in the following table represents a application or a set of custom protocol rules. It is a re-usable object and should be used in conjunction with ACL Rules in Access Control.",
	"A&#351;a&#287;&#305;da belirtilmi&#351; olan &#231;izelge tablosuna yap&#305;lan her giri&#351; bir veya bir tak&#305;m &#246;zel protokol kurallar&#305;n&#305; temsil etmektedir. Yeniden kullan&#305;labilir bir nesnedir ve Eri&#351;im Kontrol&#252;&#8217;nde ACL Kurallar&#305; ile birlikte kullan&#305;lmal&#305;d&#305;r."
	};

char* MLG_Security_NATLoopback[] = {
	"NATLoopBack",
	"NATLoopBack"
	};

char* MLG_Security_AddService_entry[] = {
	"Add new service entry",
	"Yeni hizmet giri&#351;i ekleyin"
	};

char* MLG_Security_Add_NewService[] = {
	"Add New Service",
	"Yeni Hizmet Ekleyin"
	};

char* MLG_Security_AlertMsg_Port30005[] = {
	"Port 50805 is used for TR-069.",
	"50805 portu, TR-069 ad&#305;na kullan&#305;lmaktad&#305;r"
	};

char* MLG_Security_AlertMsg_Port7547[] = {
	"Port 7547 is used for TR069.",
	"7547 portu, TR069 ad&#305;na kullan&#305;lmaktad&#305;r"
	};

char* MLG_Security_Rules_Storage[] = {
	"Rules Storage Space usage",
	"Saklama Kapasitesi kullan&#305;m&#305; ile ilgili Kurallar"
	};

char* MLG_Security_Service[] = {
	"Service",
	"Hizmet"
	};

char* MLG_Security_prefix_length[] = {
	"[/prefix length]",
	"[/&#246;n ek uzunlu&#287;u]"
	};

char* MLG_Security_Order[] = {
	"Order",
	"S&#305;ralama"
	};

char* MLG_Security_SelectService[] = {
	"Select Service",
	"Hizmet Se&#231;iniz"
	};

char* MLG_Security_MAC_Filter_Note[] = {
	"Enable MAC Filter and add the MAC addresses of the LAN clients in your home or office to the following table if you wish to allow only them to access your network. Sometimes, MAC Filter is considered a method to increase the security of your network.",
	"MAC Filtresini etkinle&#351;tirin ve evinizdeki veya ofisinizdeki LAN m&#252;&#351;terilerin MAC adreslerini, e&#287;er sadece onlar&#305;n a&#287;&#305;n&#305;za eri&#351;melerine izin vermek istiyorsan&#305;z, altta belirtilen tabloya ekleyin. Bazen, MAC Filtresi bilgisayar a&#287;&#305;n&#305;z&#305;n g&#252;venli&#287;ini y&#252;kselten bir y&#246;ntem olarak g&#246;r&#252;lmektedir."
	};

char* MLG_Security_MACFilter[] = {
	"MAC Address Filter",
	"MAC Adresi Filtresi "
	};

char* MLG_Security_MACFilter_Note2[] = {
	"Only devices listed here are granted access to the network.",
	"Sadece burada listelenmi&#351; olan ayg&#305;tlara bilgisayar a&#287;&#305;na eri&#351;melerine izin verildi."
	};

char* MLG_Security_MACFilter_Note3[] = {
	"settings are invalid when disabled",
	"Ayarlar devre d&#305;&#351;&#305; b&#305;rak&#305;ld&#305;&#287;&#305; zaman ge&#231;ersiz olacakt&#305;r. "
	};

char* MLG_Security_MACFilter_Note4[] = {
	"To limit the time of using Internet or to prevent family members from inappropriate contents and online activities, the administrator can define Parental Control Profile (PCP) to a specific home network user. A maximum of 20 profiles can be created.",
	"Internet kullan&#305;m&#305;n s&#252;resini s&#305;n&#305;rlamak veya aile bireylerini uygunsuz i&#231;eriklerden ve &#231;evrim i&#231;i faaliyetlerden korumak ad&#305;na, y&#246;netici &#246;zel bir ev a&#287;&#305; kullan&#305;c&#305;s&#305;na Ebeveyn Kontrol Profili (EKP) tan&#305;mlayabilir.  Azami olarak 20 profil olu&#351;turulabilir."
	};

char* MLG_Security_Dos_Note3[] = {
	"When firewall is disabled , the DoS and Deny Ping can not setup.",
	"G&#252;venlik duvar&#305; devre d&#305;&#351;&#305; b&#305;rak&#305;ld&#305;&#287;&#305; zaman, DOS ve Ping&#39;e yan&#305;t ayarlanamaz. "
	};

char* MLG_Security_Dos_Note4[] = {
	"DoS Protection Blocking",
	"DoS Korumas&#305;n&#305; Engelleme"
	};

char* MLG_Security_Dos_Note5[] = {
	"Deny Ping Response",
	"Ping Yan&#305;t&#305;n&#305; Reddet"
	};

char* MLG_Security_Dos_Note6[] = {
	"Ping Death Protection",
	"Ping Öl&#252;m Koruma"
	};

char* MLG_Security_MACFilter_HostName[] = {
	"Host name",
	"Kullan&#305;c&#305;"
	};

char* MLG_Security_ParentalControl_Str18[] = {
	"PCP Edit",
	"EKP D&#252;zenle"
	};

char* MLG_Security_ParentalControl_Str19[] = {
	"Home Network User",
	"Ev A&#287;&#305; Kullan&#305;c&#305;s&#305;"
	};


char* MLG_Security_ParentalControl_Str20[] = {
	"MAC",
	"MAC"
	};

char* MLG_Security_ParentalControl_Str21[] = {
	"PCP Name",
	"EKP Ad&#305;"
	};

char* MLG_Security_ParentalControl_Str22[] = {
	"Internet Access Schedule",
	"Internet Eri&#351;im Zamanlama Plan&#305;"
	};

char* MLG_Security_ParentalControl_Str23[] = {
	"Network Service",
	"A&#287; Hizmetleri"
	};

char* MLG_Security_ParentalControl_Str24[] = {
	"Website Blocked",
	"Web site Engellenmi&#351;tir"
	};

char* MLG_Security_ParentalControl_Str25[] = {
	"Everyday",
	"Her g&#252;n "
	};

char* MLG_Security_ParentalControl_Str26[] = {
	"Monday",
	"Pazartesi"
	};

char* MLG_Security_ParentalControl_Str27[] = {
	"Tuesday",
	"Sal&#305;"
	};

char* MLG_Security_ParentalControl_Str28[] = {
	"Wednesday",
	"&#199;ar&#351;amba"
	};

char* MLG_Security_ParentalControl_Str29[] = {
	"Thursday",
	"Per&#351;embe"
	};

char* MLG_Security_ParentalControl_Str30[] = {
	"Friday",
	"Cuma "
	};

char* MLG_Security_ParentalControl_Str31[] = {
	"Saturday",
	"Cumartesi"
	};

char* MLG_Security_ParentalControl_Str32[] = {
	"Sunday",
	"Pazar"
	};

char* MLG_Security_ParentalControl_Str33[] = {
	"Time (Start - End)",
	"S&#252;re (Ba&#351;lang&#305;&#231; - Son)"
	};

char* MLG_Security_ParentalControl_Str34[] = {
	"No access",
	"Eri&#351;im yok"
	};

char* MLG_Security_ParentalControl_Str35[] = {
	"Authorized access",
	"Yetkili Eri&#351;im"
	};

char* MLG_Security_ParentalControl_Str36[] = {
	"selected service(s)",
	"Se&#231;ilmi&#351; Hizmet(ler)"
	};

char* MLG_Security_ParentalControl_Str37[] = {
	"Blocked Site/URL Keyword",
	"Engellenmi&#351; Site/URL Anahtar kelime"
	};

char* MLG_Security_ParentalControl_Str38[] = {
	"Example",
	"&#214;rnek"
	};

char* MLG_Security_ParentalControl_Str39[] = {
	"Block",
	"Engelle"
	};

char* MLG_Security_ParentalControl_Str41[] = {
	"UserDefined",
	"Kullanıcı Tanımlı"
	};

char* MLG_Security_ParentalControl_Str42[] = {
	"XboxLive",
	"XboxLive"
	};

char* MLG_Security_ParentalControl_Str43[] = {
	"HTTPS",
	"HTTPS"
	};

char* MLG_Security_ParentalControl_Str44[] = {
	"IPSEC_IKE",
	"IPSEC_IKE"
	};

char* MLG_Security_ParentalControl_Str45[] = {
	"MicrosoftRemoteDesktop",
	"Microsoft Uzak Masa&#252;st&#252;"
	};

char* MLG_Security_ParentalControl_Str46[] = {
	"NetMeeting",
	"NetMeeting"
	};

char* MLG_Security_ParentalControl_Str47[] = {
	"POP3",
	"POP3"
	};

char* MLG_Security_ParentalControl_Str48[] = {
	"PPTP",
	"PPTP"
	};

char* MLG_Security_ParentalControl_Str49[] = {
	"SMTP",
	"SMTP"
	};

char* MLG_Security_ParentalControl_Str50[] = {
	"SSH",
	"SSH"
	};

char* MLG_Security_ParentalControl_Str51[] = {
	"VNC",
	"VNC"
	};

char* MLG_Security_ParentalControl_Str52[] = {
	"Port",
	"Port "
	};

char* MLG_Security_Firewalltext[] = {
	"Prevent DoS attack",
	"Dos sald&#305;r&#305;lar&#305;n&#305; engelle"
	};

char* MLG_Security_Firewall_Custom[] = {
	"Custom",
	"&#214;zel "
	};

char* MLG_Security_Firewall_All[] = {
	"All",
	"Hepsi"
	};

char* MLG_Security_ParentalControl_Str53[] = {
	"Web browsing service(HTTP) is not available.",
	"Web taray&#305;c&#305; servisleri(HTTP) kullan&#305;labilir durumda de&#287;ildir."
	};


char* MLG_Security_FirewallGeneral_AlertMsg_Str51[] = {
	"Port 50805 is used for TR-069 and the user is not allowed to set ACL rules for this port.",
	"Port 50805, TR-069 i&#231;in kullan&#305;lmaktad&#305;r ve kullan&#305;c&#305;n&#305;n bu port i&#231;in ACL kurallar&#305; girmesine izin vermemektedir."
	};


char* MLG_Security_Certificates_Str61[] = {
	"Please input the password.",
	"L&#252;tfen &#351;ifreyi giriniz."
	};


char* MLG_Security_ParentalControl_AlertMsg_Str11[] = {
	"Please enter a profile name",
	"L&#252;tfen profil ad&#305;n&#305; giriniz."
	};

char* MLG_Security_ParentalControl_AlertMsg_Str12[] = {
	"Please enter valid profile name: No special characters.",
	"L&#252;tfen ge&#231;erli bir profil ad&#305; giriniz: &#214;zel karakterler hari&#231;"
	};

char* MLG_Security_ParentalControl_AlertMsg_Str13[] = {
	"The browser does not support XMLHttp Object.",
	"Tray&#305;c&#305;n&#305;c XML, Http Nesnesini desteklememektedir."
	};

char* MLG_Security_ParentalControl_AlertMsg_Str14[] = {
	"This rule already exists, please set up new rule again.",
	"Bu kural zaten vard&#305;r, l&#252;tfen tekrar yeni bir kural olu&#351;turunuz."
	};

char* MLG_Security_ParentalControl_AlertMsg_Str15[] = {
	"The Service Name cannot be empty. Please enter the Service Name for your account.",
	"Servis Ad&#305; bo&#351; olamaz. L&#252;tfen hesab&#305;n&#305;z&#305;n Servis Ad&#305;&#39;n&#305; giriniz."
	};

char* MLG_Security_ParentalControl_AlertMsg_Str16[] = {
	"The Port cannot be empty. Please enter at least one port for your service.",
	"Port bo&#351; olamaz.L&#252;tfen servisinizin en az bir portunu giriniz."
	};

char* MLG_Security_ParentalControl_AlertMsg_Str17[] = {
	"Port range error !(1-65535)",
	"Port aral&#305;&#287;&#305; hatas&#305;! (1-65535)"
	};

char* MLG_Security_ParentalControl_AlertMsg_Str18[] = {
	"Port range error! The end port must great than start port.",
	"Port aral&#305;&#287;&#305; hatas&#305;! Biti&#351; portu ba&#351;lang&#305;&#231; potundan b&#252;y&#252;k olmal&#305;d&#305;r."
	};

char* MLG_Security_ParentalControl_AlertMsg_Str19[] = {
	"The service ports are out of range. The total number is 8 for different ports.",
	"Servis portlar&#305; aral&#305;k d&#305;&#351;&#305;ndad&#305;r. De&#287;i&#351;ik portlar i&#231;in toplam say&#305; 8&#39;dir."
	};

char* MLG_Security_ParentalControl_AlertMsg_Str20[] = {
	"The number of keywords is out of range. Please remove some keywords after adding blocked site.",
	"Anahtar kelime say&#305;s&#305; aral&#305;k d&#305;&#351;&#305;ndad&#305;r. Engellenmi&#351; siteleri ekledikten sonra l&#252;tfen baz&#305; anahtar kelimeleri kald&#305;r&#305;n&#305;z."
	};

char* MLG_Security_ParentalControl_AlertMsg_Str21[] = {
	"There are duplicate keywords. Please input another keyword.",
	"Tekrar eden anahtar kelimedir. L&#252;tfen ba&#351;ka bir anahtar kelime giriniz."
	};

char* MLG_Security_Certificates_Country_Str1[] = {
	"AD (Andorra)",
	"AD (Andorra)"
	};

char* MLG_Security_Certificates_Country_Str2[] = {
	"AE (United Arab Emirates)",
	"AE (Birleşik Arap Emirlikleri)"
	};

char* MLG_Security_Certificates_Country_Str3[] = {
	"AF (Afghanistan)",
	"AF (Afganistan)"
	};

char* MLG_Security_Certificates_Country_Str4[] = {
	"AG (Antigua and Barbuda)",
	"AG (Antigua and Barbuda)"
	};

char* MLG_Security_Certificates_Country_Str5[] = {
	"AI (Anguilla)",
	"AI (Anguilla)"
	};

char* MLG_Security_Certificates_Country_Str6[] = {
	"AL (Albania)",
	"AL (Arnavutluk)"
	};

char* MLG_Security_Certificates_Country_Str7[] = {
	"AM (Armenia)",
	"AM (Armenia)"
	};

char* MLG_Security_Certificates_Country_Str8[] = {
	"AN (Netherlands Antilles)",
	"AN (Hollanda Antilleri)"
	};

char* MLG_Security_Certificates_Country_Str9[] = {
	"AO (Angola)",
	"AO (Angola)"
	};

char* MLG_Security_Certificates_Country_Str10[] = {
	"AQ (Antarctica)",
	"AQ (Antartika)"
	};

char* MLG_Security_Certificates_Country_Str11[] = {
	"AR (Argentina)",
	"AR (Arjantin)"
	};

char* MLG_Security_Certificates_Country_Str12[] = {
	"AS (American Samoa)",
	"AS (Amerikan Samoası)"
	};

char* MLG_Security_Certificates_Country_Str13[] = {
	"AT (Austria)",
	"AT (Avusturya)"
	};

char* MLG_Security_Certificates_Country_Str14[] = {
	"AU (Australia)",
	"AU (Avustralya)"
	};

char* MLG_Security_Certificates_Country_Str15[] = {
	"AW (Aruba)",
	"AW (Aruba)"
	};

char* MLG_Security_Certificates_Country_Str16[] = {
	"AZ (Azerbaijan)",
	"AZ (Azerbaycan)"
	};

char* MLG_Security_Certificates_Country_Str17[] = {
	"BA (Bosnia and Herzegovina)",
	"BA (Bosna Hersek)"
	};

char* MLG_Security_Certificates_Country_Str18[] = {
	"BB (Barbados)",
	"BB (Barbados)"
	};

char* MLG_Security_Certificates_Country_Str19[] = {
	"BD (Bangladesh)",
	"BD (Bangladeş)"
	};

char* MLG_Security_Certificates_Country_Str20[] = {
	"BE (Belgium)",
	"BE (Belçika)"
	};

char* MLG_Security_Certificates_Country_Str21[] = {
	"BF (Burkina Faso)",
	"BF (Burkina Faso)"
	};

char* MLG_Security_Certificates_Country_Str22[] = {
	"BG (Bulgaria)",
	"BG (Bulgaristan)"
	};

char* MLG_Security_Certificates_Country_Str23[] = {
	"BH (Bahrain)",
	"BH (Bahreyn)"
	};

char* MLG_Security_Certificates_Country_Str24[] = {
	"BI (Burundi)",
	"BI (Burundi)"
	};

char* MLG_Security_Certificates_Country_Str25[] = {
	"BJ (Benin)",
	"BJ (Benin)"
	};

char* MLG_Security_Certificates_Country_Str26[] = {
	"BM (Bermuda)",
	"BM (Bermuda)"
	};

char* MLG_Security_Certificates_Country_Str27[] = {
	"BN (Brunei)",
	"BN (Brunei)"
	};

char* MLG_Security_Certificates_Country_Str28[] = {
	"BO (Bolivia)",
	"BO (Bolivya)"
	};

char* MLG_Security_Certificates_Country_Str29[] = {
	"BR (Brazil)",
	"BR (Brezilya)"
	};

char* MLG_Security_Certificates_Country_Str30[] = {
	"BS (Bahamas)",
	"BS (Bahamalar)"
	};

char* MLG_Security_Certificates_Country_Str31[] = {
	"BT (Bhutan)",
	"BT (Bhutan)"
	};

char* MLG_Security_Certificates_Country_Str32[] = {
	"BV (Bouvet Islands)",
	"BV (Bouvet Adaları)"
	};

char* MLG_Security_Certificates_Country_Str33[] = {
	"BW (Botswana)",
	"BW (Botswana)"
	};

char* MLG_Security_Certificates_Country_Str34[] = {
	"BY (Belarus)",
	"BY (Belarus)"
	};

char* MLG_Security_Certificates_Country_Str35[] = {
	"CA (Canada)",
	"CA (Kanada)"
	};

char* MLG_Security_Certificates_Country_Str36[] = {
	"CC (Cocos Keeling)",
	"CC (Cocos Keeling)"
	};

char* MLG_Security_Certificates_Country_Str37[] = {
	"CD (Congo(DRC))",
	"CD (Kongo(DRC))"
	};

char* MLG_Security_Certificates_Country_Str38[] = {
	"CF (Central African Republic)",
	"CF (Merkezi Afrika Cumhuriyeti)"
	};

char* MLG_Security_Certificates_Country_Str39[] = {
	"CG (Congo)",
	"CG (Kongo)"
	};

char* MLG_Security_Certificates_Country_Str40[] = {
	"CH (Switzerland)",
	"CH (Switzerland)"
	};

char* MLG_Security_Certificates_Country_Str41[] = {
	"CI (Cote D'lvoire)",
	"CI (Cote D'lvoire)"
	};

char* MLG_Security_Certificates_Country_Str42[] = {
	"CK (Cook Islands)",
	"CK (Cook Islands)"
	};

char* MLG_Security_Certificates_Country_Str43[] = {
	"CL (Chile)",
	"CL (Şili)"
	};

char* MLG_Security_Certificates_Country_Str44[] = {
	"CM (Cameroon)",
	"CM (Kamerun)"
	};

char* MLG_Security_Certificates_Country_Str45[] = {
	"CN (China)",
	"CN (Çin)"
	};

char* MLG_Security_Certificates_Country_Str46[] = {
	"CO (Colombia)",
	"CO (Kolombiya)"
	};

char* MLG_Security_Certificates_Country_Str47[] = {
	"CR (Costa Rica)",
	"CR (Costa Rica)"
	};

char* MLG_Security_Certificates_Country_Str48[] = {
	"CU (Cuba)",
	"CU (Küba)"
	};

char* MLG_Security_Certificates_Country_Str49[] = {
	"CV (Cape Verde)",
	"CV (Cape Verde)"
	};

char* MLG_Security_Certificates_Country_Str50[] = {
	"CX (Chrismas Island)",
	"CX (Chrismas Island)"
	};

char* MLG_Security_Certificates_Country_Str51[] = {
	"CY (Cyprus)",
	"CY (Kıbrıs)"
	};

char* MLG_Security_Certificates_Country_Str52[] = {
	"CZ (Czech Republic)",
	"CZ (Çek Cumhuriyeti)"
	};

char* MLG_Security_Certificates_Country_Str53[] = {
	"DE (Germany)",
	"DE (Almanya)"
	};

char* MLG_Security_Certificates_Country_Str54[] = {
	"DJ (Djibouti)",
	"DJ (Djibouti)"
	};

char* MLG_Security_Certificates_Country_Str55[] = {
	"DK (Denmark)",
	"DK (Danimarka)"
	};

char* MLG_Security_Certificates_Country_Str56[] = {
	"DM (Dominica)",
	"DM (Dominica)"
	};

char* MLG_Security_Certificates_Country_Str57[] = {
	"DO (Dominican Republic)",
	"DO (Dominik Cumhuriyeti)"
	};

char* MLG_Security_Certificates_Country_Str58[] = {
	"DZ (Algeria)",
	"DZ (Cezayir)"
	};

char* MLG_Security_Certificates_Country_Str59[] = {
	"EC (Ecuador)",
	"EC (Ekvador)"
	};

char* MLG_Security_Certificates_Country_Str60[] = {
	"EE (Estonia)",
	"EE (Estonya)"
	};

char* MLG_Security_Certificates_Country_Str61[] = {
	"EG (Egypt)",
	"EG (Mısır)"
	};

char* MLG_Security_Certificates_Country_Str62[] = {
	"ER (Eritrea)",
	"ER (Eritrea)"
	};

char* MLG_Security_Certificates_Country_Str63[] = {
	"ES (Spain)",
	"ES (İspanya)"
	};

char* MLG_Security_Certificates_Country_Str64[] = {
	"ET (Ethiopia)",
	"ET (Etiyopya)"
	};

char* MLG_Security_Certificates_Country_Str65[] = {
	"FI (Finland)",
	"FI (Finlandiya)"
	};

char* MLG_Security_Certificates_Country_Str66[] = {
	"FJ (Fiji Islands)",
	"FJ (Fiji Islands)"
	};

char* MLG_Security_Certificates_Country_Str67[] = {
	"FK (Falkland Islands)",
	"FK (Falkland Islands)"
	};

char* MLG_Security_Certificates_Country_Str68[] = {
	"FM (Micronesia)",
	"FM (Micronesia)"
	};

char* MLG_Security_Certificates_Country_Str69[] = {
	"FR (France)",
	"FR (Fransa)"
	};

char* MLG_Security_Certificates_Country_Str70[] = {
	"FX (France, Metropolit)",
	"FX (Fransa, Metropolit)"
	};

char* MLG_Security_Certificates_Country_Str71[] = {
	"GA (Gabon)",
	"GA (Gabon)"
	};

char* MLG_Security_Certificates_Country_Str72[] = {
	"GB (United Kingdom)",
	"GB (Büyük Britanya)"
	};

char* MLG_Security_Certificates_Country_Str73[] = {
	"GD (Grenada)",
	"GD (Grenada)"
	};

char* MLG_Security_Certificates_Country_Str74[] = {
	"GE (Georgia)",
	"GE (Georgia)"
	};

char* MLG_Security_Certificates_Country_Str75[] = {
	"GF (French Guiana)",
	"GF (French Guiana)"
	};

char* MLG_Security_Certificates_Country_Str76[] = {
	"GH (Ghana)",
	"GH (Gana)"
	};

char* MLG_Security_Certificates_Country_Str77[] = {
	"GI (Gibraltar)",
	"GI (Gibraltar)"
	};

char* MLG_Security_Certificates_Country_Str78[] = {
	"GL (Greenland)",
	"GL (Grönland)"
	};

char* MLG_Security_Certificates_Country_Str79[] = {
	"GM (Gambia, The)",
	"GM (Gambia, The)"
	};

char* MLG_Security_Certificates_Country_Str80[] = {
	"GN (Guinea)",
	"GN (Gine)"
	};

char* MLG_Security_Certificates_Country_Str81[] = {
	"GP (Guadeloupe)",
	"GP (Guadeloupe)"
	};

char* MLG_Security_Certificates_Country_Str82[] = {
	"GQ (Equatoria Guinea)",
	"GQ (Equatoria Gine)"
	};

char* MLG_Security_Certificates_Country_Str83[] = {
	"GR (Greece)",
	"GR (Yunanistan)"
	};

char* MLG_Security_Certificates_Country_Str84[] = {
	"GS (South Georgia And the South Sandwich Islands)",
	"GS (Güney Georgia ve Güney Sandwich Adaları)"
	};

char* MLG_Security_Certificates_Country_Str85[] = {
	"GT (Guatemala)",
	"GT (Guatemala)"
	};

char* MLG_Security_Certificates_Country_Str86[] = {
	"GU (Guam)",
	"GU (Guam)"
	};

char* MLG_Security_Certificates_Country_Str87[] = {
	"GW (Guinea-Bissau)",
	"GW (Guinea-Bissau)"
	};

char* MLG_Security_Certificates_Country_Str88[] = {
	"GY (Guyana)",
	"GY (Guyana)"
	};

char* MLG_Security_Certificates_Country_Str89[] = {
	"HK (Hong Kong S.A.R)",
	"HK (Hong Kong S.A.R)"
	};

char* MLG_Security_Certificates_Country_Str90[] = {
	"HM (Heard and McDo)",
	"HM (Heard and McDo)"
	};

char* MLG_Security_Certificates_Country_Str91[] = {
	"HN (Honduras)",
	"HN (Honduras)"
	};

char* MLG_Security_Certificates_Country_Str92[] = {
	"HR (Croatia)",
	"HR (Hırvatistan)"
	};

char* MLG_Security_Certificates_Country_Str93[] = {
	"HT (Haiti)",
	"HT (Haiti)"
	};

char* MLG_Security_Certificates_Country_Str94[] = {
	"HU (Hungary)",
	"HU (Macaristan)"
	};

char* MLG_Security_Certificates_Country_Str95[] = {
	"ID (Indonesia)",
	"ID (Endonezya)"
	};

char* MLG_Security_Certificates_Country_Str96[] = {
	"IE (Ireland)",
	"IE (İrlanda)"
	};

char* MLG_Security_Certificates_Country_Str97[] = {
	"IL (Israel)",
	"IL (İsrail)"
	};

char* MLG_Security_Certificates_Country_Str98[] = {
	"IN (India)",
	"IN (Hindistan)"
	};

char* MLG_Security_Certificates_Country_Str99[] = {
	"IO (British Indian Ocean Territory)",
	"IO (British Indian Ocean Territory)"
	};

char* MLG_Security_Certificates_Country_Str100[] = {
	"IQ (Iraq)",
	"IQ (Irak)"
	};

char* MLG_Security_Certificates_Country_Str101[] = {
	"IR (Iran)",
	"IR (İran)"
	};

char* MLG_Security_Certificates_Country_Str102[] = {
	"IS (Iceland)",
	"IS (İzlanda)"
	};

char* MLG_Security_Certificates_Country_Str103[] = {
	"IT (Italy)",
	"IT (İtalya)"
	};

char* MLG_Security_Certificates_Country_Str104[] = {
	"JM (Jamaica)",
	"JM (Jamaika)"
	};

char* MLG_Security_Certificates_Country_Str105[] = {
	"JO (Jordan)",
	"JO (Jordan)"
	};

char* MLG_Security_Certificates_Country_Str106[] = {
	"JP (Japan)",
	"JP (Japonya)"
	};

char* MLG_Security_Certificates_Country_Str107[] = {
	"KE (Kenya)",
	"KE (Kenya)"
	};

char* MLG_Security_Certificates_Country_Str108[] = {
	"KG (Kyrgyzstan)",
	"KG (Kırgızistan)"
	};

char* MLG_Security_Certificates_Country_Str109[] = {
	"KH (Cambodia)",
	"KH (Kamboçya)"
	};

char* MLG_Security_Certificates_Country_Str110[] = {
	"KI (Kiribati)",
	"KI (Kiribati)"
	};

char* MLG_Security_Certificates_Country_Str111[] = {
	"KM (Comoros)",
	"KM (Comoros)"
	};

char* MLG_Security_Certificates_Country_Str112[] = {
	"KN (St. Kitts And Nevis)",
	"KN (St. Kitts And Nevis)"
	};

char* MLG_Security_Certificates_Country_Str113[] = {
	"KP (North Korea)",
	"KP (Kuzey Kore)"
	};

char* MLG_Security_Certificates_Country_Str114[] = {
	"KR (Korea)",
	"KR (Kore)"
	};

char* MLG_Security_Certificates_Country_Str115[] = {
	"KW (Kuwait)",
	"KW (Kuveyt)"
	};

char* MLG_Security_Certificates_Country_Str116[] = {
	"KY (Cayman Islands)",
	"KY (Cayman Adaları)"
	};

char* MLG_Security_Certificates_Country_Str117[] = {
	"KZ (Kazakhstan)",
	"KZ (Kazakistan)"
	};

char* MLG_Security_Certificates_Country_Str118[] = {
	"LA (Laos)",
	"LA (Laos)"
	};

char* MLG_Security_Certificates_Country_Str119[] = {
	"LB (Lebanon)",
	"LB (Lübnan)"
	};

char* MLG_Security_Certificates_Country_Str120[] = {
	"LC (St. Lucia)",
	"LC (St. Lucia)"
	};

char* MLG_Security_Certificates_Country_Str121[] = {
	"LI (Liechtenstein)",
	"LI (Liechtenstein)"
	};

char* MLG_Security_Certificates_Country_Str122[] = {
	"LK (Sri Lanka)",
	"LK (Sri Lanka)"
	};

char* MLG_Security_Certificates_Country_Str123[] = {
	"LR (Liberia)",
	"LR (Liberia)"
	};

char* MLG_Security_Certificates_Country_Str124[] = {
	"LS (Lesotho)",
	"LS (Lesotho)"
	};

char* MLG_Security_Certificates_Country_Str125[] = {
	"LT (Lithuania)",
	"LT (Litvanya)"
	};

char* MLG_Security_Certificates_Country_Str126[] = {
	"LU (Luxembourg)",
	"LU (Lüksemburg)"
	};

char* MLG_Security_Certificates_Country_Str127[] = {
	"LV (Latvia)",
	"LV (Letonya)"
	};

char* MLG_Security_Certificates_Country_Str128[] = {
	"LY (Libya)",
	"LY (Libya)"
	};

char* MLG_Security_Certificates_Country_Str129[] = {
	"MA (Morocco)",
	"MA (Morocco)"
	};

char* MLG_Security_Certificates_Country_Str130[] = {
	"MC (Monaco)",
	"MC (Monako)"
	};

char* MLG_Security_Certificates_Country_Str131[] = {
	"MD (Moldova)",
	"MD (Moldova)"
	};

char* MLG_Security_Certificates_Country_Str132[] = {
	"MG (Madagascar)",
	"MG (Madagaskar)"
	};

char* MLG_Security_Certificates_Country_Str133[] = {
	"MH (Marshall Islands)",
	"MH (Marshall Adaları)"
	};

char* MLG_Security_Certificates_Country_Str134[] = {
	"MK (Macedonia)",
	"MK (Makedonya)"
	};

char* MLG_Security_Certificates_Country_Str135[] = {
	"ML (Mali)",
	"ML (Mali)"
	};

char* MLG_Security_Certificates_Country_Str136[] = {
	"MM (Myanmar)",
	"MM (Myanmar)"
	};

char* MLG_Security_Certificates_Country_Str137[] = {
	"MN (Mongolia)",
	"MN (Mongolia)"
	};

char* MLG_Security_Certificates_Country_Str138[] = {
	"MO (Macau S.A.R.)",
	"MO (Macau S.A.R.)"
	};

char* MLG_Security_Certificates_Country_Str139[] = {
	"MP (Northern Mariana Islands)",
	"MP (Kuzey Mariana Adaları)"
	};

char* MLG_Security_Certificates_Country_Str140[] = {
	"MQ (Martinique)",
	"MQ (Martinique)"
	};

char* MLG_Security_Certificates_Country_Str141[] = {
	"MR (Mauritania)",
	"MR (Mauritania)"
	};

char* MLG_Security_Certificates_Country_Str142[] = {
	"MS (Montserrat)",
	"MS (Montserrat)"
	};

char* MLG_Security_Certificates_Country_Str143[] = {
	"MT (Malta)",
	"MT (Malta)"
	};

char* MLG_Security_Certificates_Country_Str144[] = {
	"MU (Mauritius)",
	"MU (Mauritius)"
	};

char* MLG_Security_Certificates_Country_Str145[] = {
	"MV (Maldives)",
	"MV (Maldivler)"
	};

char* MLG_Security_Certificates_Country_Str146[] = {
	"MW (Malawi)",
	"MW (Malawi)"
	};

char* MLG_Security_Certificates_Country_Str147[] = {
	"MX (Mexico)",
	"MX (Meksika)"
	};

char* MLG_Security_Certificates_Country_Str148[] = {
	"MY (Malaysia)",
	"MY (Malaysia)"
	};

char* MLG_Security_Certificates_Country_Str149[] = {
	"MZ (Mozambique)",
	"MZ (Mozambique)"
	};

char* MLG_Security_Certificates_Country_Str150[] = {
	"NA (Namibia)",
	"NA (Namibia)"
	};


char* MLG_Security_Certificates_Country_Str151[] = {
	"NC (New Caledonia)",
	"NC (New Caledonia)"
	};

char* MLG_Security_Certificates_Country_Str152[] = {
	"NE (Niger)",
	"NE (Nijer)"
	};

char* MLG_Security_Certificates_Country_Str153[] = {
	"NF (Norfolk Island)",
	"NF (Norfolk Adası)"
	};

char* MLG_Security_Certificates_Country_Str154[] = {
	"NG (Nigeria)",
	"NG (Nijerya)"
	};

char* MLG_Security_Certificates_Country_Str155[] = {
	"NI (Nicaragua)",
	"NI (Nikaragua)"
	};

char* MLG_Security_Certificates_Country_Str156[] = {
	"NL (Netherlands, The)",
	"NL (Hollanda)"
	};

char* MLG_Security_Certificates_Country_Str157[] = {
	"NO (Norway)",
	"NO (Norveç)"
	};

char* MLG_Security_Certificates_Country_Str158[] = {
	"NP (Nepal)",
	"NP (Nepal)"
	};

char* MLG_Security_Certificates_Country_Str159[] = {
	"NR (Nauru)",
	"NR (Nauru)"
	};

char* MLG_Security_Certificates_Country_Str160[] = {
	"NU (Niue)",
	"NU (Niue)"
	};

char* MLG_Security_Certificates_Country_Str161[] = {
	"NZ (New Zealand)",
	"NZ (Yeni Zellanda)"
	};

char* MLG_Security_Certificates_Country_Str162[] = {
	"OM (Oman)",
	"OM (Oman)"
	};

char* MLG_Security_Certificates_Country_Str163[] = {
	"PA (Panama)",
	"PA (Panama)"
	};

char* MLG_Security_Certificates_Country_Str164[] = {
	"PE (Peru)",
	"PE (Peru)"
	};

char* MLG_Security_Certificates_Country_Str165[] = {
	"PF (French Polynesia)",
	"PF (French Polynesia)"
	};

char* MLG_Security_Certificates_Country_Str166[] = {
	"PG (Papua New Guinea)",
	"PG (Papua New Guinea)"
	};

char* MLG_Security_Certificates_Country_Str167[] = {
	"PH (Philippines)",
	"PH (Philippines)"
	};

char* MLG_Security_Certificates_Country_Str168[] = {
	"PK (Pakistan)",
	"PK (Pakistan)"
	};

char* MLG_Security_Certificates_Country_Str169[] = {
	"PL (Poland)",
	"PL (Polanya)"
	};

char* MLG_Security_Certificates_Country_Str170[] = {
	"PM (St. Pierre and Miquelon)",
	"PM (St. Pierre and Miquelon)"
	};

char* MLG_Security_Certificates_Country_Str171[] = {
	"PN (Pitcairn Islands)",
	"PN (Pitcairn Adaları)"
	};

char* MLG_Security_Certificates_Country_Str172[] = {
	"PR (Puerto Rico)",
	"PR (Porta Riko)"
	};

char* MLG_Security_Certificates_Country_Str173[] = {
	"PT (Portugal)",
	"PT (Portekiz)"
	};

char* MLG_Security_Certificates_Country_Str174[] = {
	"PW (Palau)",
	"PW (Palau)"
	};

char* MLG_Security_Certificates_Country_Str175[] = {
	"PY (Paraguay)",
	"PY (Paraguay)"
	};

char* MLG_Security_Certificates_Country_Str176[] = {
	"QA (Qatar)",
	"QA (Katar)"
	};

char* MLG_Security_Certificates_Country_Str177[] = {
	"RE (Reunion)",
	"RE (Reunion)"
	};

char* MLG_Security_Certificates_Country_Str178[] = {
	"RO (Romania)",
	"RO (Romanya)"
	};

char* MLG_Security_Certificates_Country_Str179[] = {
	"RU (Russia)",
	"RU (Rusya)"
	};

char* MLG_Security_Certificates_Country_Str180[] = {
	"RW (Rwanda)",
	"RW (Rwanda)"
	};

char* MLG_Security_Certificates_Country_Str181[] = {
	"SA (Saudi Arabia)",
	"SA (Suudi Arabistan)"
	};

char* MLG_Security_Certificates_Country_Str182[] = {
	"SB (Solomon Islands)",
	"SB (Solomon Adaları)"
	};

char* MLG_Security_Certificates_Country_Str183[] = {
	"SC (Seychelles)",
	"SC (Seyşeller)"
	};

char* MLG_Security_Certificates_Country_Str184[] = {
	"SD (Sudan)",
	"SD (Sudan)"
	};

char* MLG_Security_Certificates_Country_Str185[] = {
	"SE (Sweden)",
	"SE (İsveç)"
	};

char* MLG_Security_Certificates_Country_Str186[] = {
	"SG (Singapore)",
	"SG (Singapur)"
	};

char* MLG_Security_Certificates_Country_Str187[] = {
	"SH (St. Helena)",
	"SH (St. Helena)"
	};

char* MLG_Security_Certificates_Country_Str188[] = {
	"SI (Slovenia)",
	"SI (Slovenya)"
	};

char* MLG_Security_Certificates_Country_Str189[] = {
	"SJ (Svalbard And Jan Mayen Islands)",
	"SJ (Svalbard ve Jan Mayen Adaları)"
	};

char* MLG_Security_Certificates_Country_Str190[] = {
	"SK (Slovakia)",
	"SK (Slovakya)"
	};

char* MLG_Security_Certificates_Country_Str191[] = {
	"SL (Sierra Leone)",
	"SL (Sierra Leone)"
	};

char* MLG_Security_Certificates_Country_Str192[] = {
	"SM (San Marino)",
	"SM (San Marino)"
	};

char* MLG_Security_Certificates_Country_Str193[] = {
	"SN (Senegal)",
	"SN (Senegal)"
	};

char* MLG_Security_Certificates_Country_Str194[] = {
	"SO (Somalia)",
	"SO (Somalia)"
	};

char* MLG_Security_Certificates_Country_Str195[] = {
	"RS (Serbia)",
	"RS (Surbistan)"
	};

char* MLG_Security_Certificates_Country_Str196[] = {
	"SR (Suriname)",
	"SR (Suriname)"
	};

char* MLG_Security_Certificates_Country_Str197[] = {
	"ST (Sao Tome and Principe)",
	"ST (Sao Tome and Principe)"
	};

char* MLG_Security_Certificates_Country_Str198[] = {
	"SV (El Salvador)",
	"SV (El Salvador)"
	};

char* MLG_Security_Certificates_Country_Str199[] = {
	"SY (Syria)",
	"SY (Suriye)"
	};

char* MLG_Security_Certificates_Country_Str200[] = {
	"SZ (Swaziland)",
	"SZ (Swaziland)"
	};

char* MLG_Security_Certificates_Country_Str201[] = {
	"TC (Turks And Caicos Island)",
	"TC (Turks And Caicos Island)"
	};

char* MLG_Security_Certificates_Country_Str202[] = {
	"TD (Chad)",
	"TD (Çad)"
	};

char* MLG_Security_Certificates_Country_Str203[] = {
	"TF (French Southern Territories)",
	"TF (French Southern Territories)"
	};

char* MLG_Security_Certificates_Country_Str204[] = {
	"TG (Togo)",
	"TG (Togo)"
	};

char* MLG_Security_Certificates_Country_Str205[] = {
	"TH (Thailand)",
	"TH (Tayland)"
	};

char* MLG_Security_Certificates_Country_Str206[] = {
	"TJ (Tajikistan)",
	"TJ (Tajikistan)"
	};

char* MLG_Security_Certificates_Country_Str207[] = {
	"TK (Tokelau)",
	"TK (Tokelau)"
	};

char* MLG_Security_Certificates_Country_Str208[] = {
	"TM (Turkmenistan)",
	"TM (Türkmenistan)"
	};

char* MLG_Security_Certificates_Country_Str209[] = {
	"TN (Tunisia)",
	"TN (Tunus)"
	};

char* MLG_Security_Certificates_Country_Str210[] = {
	"TO (Tonga)",
	"TO (Tonga)"
	};

char* MLG_Security_Certificates_Country_Str211[] = {
	"TP (East Timor)",
	"TP (East Timor)"
	};

char* MLG_Security_Certificates_Country_Str212[] = {
	"TR (Turkey)",
	"TR (Türkiye)"
	};

char* MLG_Security_Certificates_Country_Str213[] = {
	"TT (Trinidad and Tobago)",
	"TT (Trinidad and Tobago)"
	};

char* MLG_Security_Certificates_Country_Str214[] = {
	"TV (Tuvalu)",
	"TV (Tuvalu)"
	};

char* MLG_Security_Certificates_Country_Str215[] = {
	"TW (Taiwan)",
	"TW (Tayvan)"
	};

char* MLG_Security_Certificates_Country_Str216[] = {
	"TZ (Tanzania)",
	"TZ (Tanzanya)"
	};

char* MLG_Security_Certificates_Country_Str217[] = {
	"UA (Ukraine)",
	"UA (Ukranya)"
	};

char* MLG_Security_Certificates_Country_Str218[] = {
	"UG (Uganda)",
	"UG (Uganda)"
	};

char* MLG_Security_Certificates_Country_Str219[] = {
	"UM (U.S. Minor Outlyi)",
	"UM (U.S. Minor Outlyi)"
	};

char* MLG_Security_Certificates_Country_Str220[] = {
	"US (United States)",
	"US (Birleşik Devletleri)"
	};

char* MLG_Security_Certificates_Country_Str221[] = {
	"UY (Uruguay)",
	"UY (Uruguay)"
	};

char* MLG_Security_Certificates_Country_Str222[] = {
	"UZ (Uzbekistan)",
	"UZ (Özbekistan)"
	};

char* MLG_Security_Certificates_Country_Str223[] = {
	"VA (Vatican City)",
	"VA (Vatikan)"
	};

char* MLG_Security_Certificates_Country_Str224[] = {
	"VC (St. Vincent And The Grenadines)",
	"VC (St. Vincent And The Grenadines)"
	};

char* MLG_Security_Certificates_Country_Str225[] = {
	"VE (Venezuela)",
	"VE (Venezuela)"
	};

char* MLG_Security_Certificates_Country_Str226[] = {
	"VG (Virgin Islands, British)",
	"VG (Virgin Adaları, İngiliz)"
	};

char* MLG_Security_Certificates_Country_Str227[] = {
	"VI (Virgin Islands)",
	"VI (Virgin Adaları)"
	};

char* MLG_Security_Certificates_Country_Str228[] = {
	"VN (Viet Nam)",
	"VN (Viet Nam)"
	};

char* MLG_Security_Certificates_Country_Str229[] = {
	"VU (Vanuatu)",
	"VU (Vanuatu)"
	};

char* MLG_Security_Certificates_Country_Str230[] = {
	"WF (Wallis and Futuna)",
	"WF (Wallis and Futuna)"
	};

char* MLG_Security_Certificates_Country_Str231[] = {
	"WS (Samoa)",
	"WS (Samoa)"
	};

char* MLG_Security_Certificates_Country_Str232[] = {
	"YE (Yemen)",
	"YE (Yemen)"
	};

char* MLG_Security_Certificates_Country_Str233[] = {
	"YT (Mayotte)",
	"YT (Mayotte)"
	};

char* MLG_Security_Certificates_Country_Str234[] = {
	"YU (Yugoslvia)",
	"YU (Yugoslavya)"
	};

char* MLG_Security_Certificates_Country_Str235[] = {
	"ZA (South Africa)",
	"ZA (Güney Afrika)"
	};

char* MLG_Security_Certificates_Country_Str236[] = {
	"ZM (Zambia)",
	"ZM (Zambia)"
	};

char* MLG_Security_Certificates_Country_Str237[] = {
	"ZW (Zimbabwe)",
	"ZW (Zimbabwe)"
	};

char* MLG_Security_Certificates_Country_Str238[] = {
	"SS (South Sudan)",
	"SS (Güney Sudan)"
	};

char* MLG_Security_parent_control_err1[] = {
	"The number of list records is limited to 20.",
	"Liste kayıtları sayısı 20 ile sınırlandırılmıştır."
	};

MAPPING_ITEM SecurityMappingItem[746];
