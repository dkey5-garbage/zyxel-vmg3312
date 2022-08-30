#include<stdio.h>	
#include<string.h>	
#include<stdlib.h>	
#include<time.h>	
#include "languages.h"	



char* MLG_VoIP_AlertMsg_Alert[] = {
	"Alert",
	"&#214;nemli Uyar&#305;"
	};

char* MLG_VoIP_Register[] = {
	"Register",
	"Kayıt et"
	};

char* MLG_VoIP_Unregister[] = {
	"UnRegister",
	"Kaydı kaldır"
	};

char* MLG_VoIP_Inactive[] = {
	"Inactive",
	"Etkin değil"
	};

char* MLG_VoIP_Registered_Onregister[] = {
	"OnRegister",
	"Kayıtlı"
	};

char* MLG_VoIP_Registering[] = {
	"Registering",
	"Kayıt oluyor"
	};

char* MLG_VoIP_ServiceProvider1[] = {
	"ServiceProvider-1",
	"ServisSağlayıcı-1"
	};

char* MLG_VoIP_changeme[] = {
	"changeme",
	"Tanımlanmamış"
	};

char* MLG_VoIP_Status[] = {
	"VoIP Status",
	"VoIP Durumu"
	};

char* MLG_VoIP_Information[] = {
	"Information, such as whether a SIP account is registered and the total call volume made by a SIP account, can be viewed in the page",
	"SIP hesabının kayıtlı olup olmadığı ve SIP hesabının arama trafiği bu sayfada görülebilir"
	};

char* MLG_VoIP_Pollinterval[] = {
	"Poll interval(s)",
	"Sorgulama Aralığı"
	};

char* MLG_VoIP_sec[] = {
	"sec",
	"sn"
	};

char* MLG_VoIP_Setinterval[] = {
	"Set Interval",
	"Aralık ayarla"
	};

char* MLG_VoIP_Stop[] = {
	"Stop",
	"Durdur"
	};

char* MLG_VoIP_SIPStatus[] = {
	"SIP Status",
	"SIP Durumu"
	};

char* MLG_VoIP_Registration[] = {
	"Registration",
	"Hesap Durumu"
	};

char* MLG_VoIP_RegistrationTime[] = {
	"Registration Time",
	"Çalışma Süresi"
	};

char* MLG_VoIP_MessageWaiting[] = {
	"Message Waiting",
	"Mesaj Bekletme"
	};

char* MLG_VoIP_No[] = {
	"No",
	"Hayır"
	};

char* MLG_VoIP_Yes[] = {
	"Yes",
	"Evet"
	};

char* MLG_VoIP_Message1[] = {
	"Last Incoming Number",
	"Son Arayan Numara"
	};

char* MLG_VoIP_Message2[] = {
	"Last Outgoing Number",
	"Son Aranan Numara"
	};

char* MLG_VoIP_Message3[] = {
	"Call Status",
	"Çalışma Durumu"
	};

char* MLG_VoIP_Message4[] = {
	"Duration",
	"Süre"
	};

char* MLG_VoIP_Message5[] = {
	"Peer Number",
	"Eş Numara"
	};

char* MLG_VoIP_Message6[] = {
	"SIP Account",
	"SIP Hesapları"
	};

char* MLG_VoIP_Message7[] = {
	"SIP Service Provider",
	"SIP Servis Sağlayıcılar"
	};

char* MLG_VoIP_Message8[] = {
	"Add new account",
	"Yeni Hesap Ekle"
	};

char* MLG_VoIP_Message9[] = {
	"Account No.",
	"Hesap Numarası"
	};

char* MLG_VoIP_Message10[] = {
	"In order to make Internet phone calls, a valid SIP account is essential. You may need to consult your SIP service provider for the following settings. This configuration should be used in conjunction with SIP Service Provider.",
	"Internet üzerinden telefon görüşmeleri yapabilmek için SIP hesabı gereklidir. Aşağıdaki ayarları öğrenmek için SIP Servis Sağlayıcınız ile görüşmeniz gerekebilir. Bu ayarlar SIP Servis Sağlayıcınız ile bir arada kullanılır."
	};

char* MLG_VoIP_Message11[] = {
	"Edit this account",
	"Bu hesabı düzenle"
	};

char* MLG_VoIP_Message12[] = {
	"SIP Account Selection",
	"SIP Hesap Seçimi"
	};

char* MLG_VoIP_Message13[] = {
	"SIP Service Provider Association",
	"SIP Servis Sağlayıcı Bağlantısı"
	};

char* MLG_VoIP_Message14[] = {
	"SIP Account Associated with  :",
	"SIP Hesap-SIP Servis Sağlayıcı Bağlantısı  :"
	};

char* MLG_VoIP_Message15[] = {
	"Enable SIP account",
	"SIP hesabı etkinleştir"
	};

char* MLG_VoIP_Message16[] = {
	"SIP Account Number :",
	"SIP Hesap Numarası :"
	};

char* MLG_VoIP_Message17[] = {
	"Authentication",
	"Doğrulama"
	};

char* MLG_VoIP_Message18[] = {
	"Apply to Phone",
	"Uygulanacak Telefonlar"
	};

char* MLG_VoIP_Message19[] = {
	"Phone 1",
	"Telefon 1"
	};

char* MLG_VoIP_Message20[] = {
	"Phone 2",
	"Telefon 2"
	};

char* MLG_VoIP_Message21[] = {
	"If both SIP accounts apply to the same phone, the SIP account priority for that phone is SIP0 > SIP1 ...",
	"Eğer iki SIP hesap da aynı telefona uygulanırsa, SIP hesap önceliği şu şekildedir: SIP0>SIP1 ..."
	};

char* MLG_VoIP_Message22[] = {
	"more..",
	"Genişlet.."
	};

char* MLG_VoIP_Message23[] = {
	"less..",
	"Daralt.."
	};

char* MLG_VoIP_Message24[] = {
	"URL Type",
	"URL tipi"
	};

char* MLG_VoIP_Message25[] = {
	"Voice Features",
	"Ses Özellikleri"
	};

char* MLG_VoIP_Message26[] = {
	"Primary Compression Type",
	"Birincil Sıkıştırma Tipi"
	};

char* MLG_VoIP_Message27[] = {
	"Secondary Compression Type",
	"İkincil Sıkıştırma Tipi"
	};

char* MLG_VoIP_Message28[] = {
	"None",
	"Hiçbiri"
	};

char* MLG_VoIP_Message29[] = {
	"Third Compression Type",
	"Üçüncül Sıkıştırma Tipi"
	};

char* MLG_VoIP_Message30[] = {
	"Speaking Volume Control",
	"Konuşma Ses Düzeyi Kontrolü"
	};

char* MLG_VoIP_Message31[] = {
	"Listening Volume Control",
	"Dinleme Ses Düzeyi Kontrolü"
	};

char* MLG_VoIP_Message32[] = {
	"Enable G.168(Echo Cancellation)",
	"G.168(Yankı İptali) Etkinleştir"
	};

char* MLG_VoIP_Message33[] = {
	"Enable VAD (Voice Active Detector)",
	"VAD (Gürültü Aktiflik Detektörü) Etkinleştir"
	};

char* MLG_VoIP_Message34[] = {
	"Call Features",
	"Çağrı Özellikleri"
	};

char* MLG_VoIP_Message35[] = {
	"Send Caller ID",
	"Arayan kimliğini gönder"
	};

char* MLG_VoIP_Message36[] = {
	"Enable Call Transfer",
	"Çağrı Aktarma Etkinleştir"
	};

char* MLG_VoIP_Message37[] = {
	"Enable Call Waiting",
	"Çağrı Bekletme Etkinleştir"
	};

char* MLG_VoIP_Message38[] = {
	"Call Waiting Reject Timer",
	"Çağrı Bekletme Red Zamanlayıcısı"
	};

char* MLG_VoIP_Message39[] = {
	"Second",
	"saniye"
	};

char* MLG_VoIP_Message40[] = {
	"Caution:",
	"Not:"
	};

char* MLG_VoIP_Message41[] = {
	"If you enable [Call Waiting], [Busy Forward] will be ignored.",
	"Eğer Call Waiting özelliği etkin ise, Meşgul Aktarma özelliği göz ardı edilecektir."
	};

char* MLG_VoIP_Message42[] = {
	"Enable Unconditional Forward",
	"Koşulsuz Aktarma etkinleştir"
	};

char* MLG_VoIP_Message43[] = {
	"To Number",
	"Bu numaraya"
	};

char* MLG_VoIP_Message44[] = {
	"Enable Busy Forward",
	"Meşgul Aktarma etkinleştir"
	};

char* MLG_VoIP_Message45[] = {
	"Enable No Answer Forward",
	"Cevapsız Arama Aktarma Etkinleştir"
	};

char* MLG_VoIP_Message46[] = {
	"No Answer Time",
	"Cevapsız Arama Zamanı"
	};

char* MLG_VoIP_Message47[] = {
	"If you enable (Unconditional Forward), (Busy Forward) and (No Answer) will be ignored.",
	"Eğer Koşulsuz Aktarma özelliği etkin ise, Meşgul Aktarma ve Cevapsuz Arama Aktarma özelliği göz ardı edilecektir."
	};

char* MLG_VoIP_Message48[] = {
	"Enable Do Not Disturb",
	"Rahatsız Etme etkinleştir"
	};

char* MLG_VoIP_Message49[] = {
	"Warning:",
	"Uyarı:"
	};

char* MLG_VoIP_Message50[] = {
	"If you enable this item, you will not get indication when somebody call you.",
	"Rahatsız Etme özelliğini aktif etmeniz durumunda dışarıdan bir arama geldiğinde herhangi bir uyarı alamazsınız."
	};

char* MLG_VoIP_Message51[] = {
	"Enable Anonymous Call Block",
	"Anonim Çağrı Engelleme etkinleştir"
	};

char* MLG_VoIP_Message52[] = {
	"Enable Call Completion on Busy Subscriber",
	"Meşgul Aboneye Erişim etkinleştir"
	};

char* MLG_VoIP_Message53[] = {
	"Notice:",
	"Not:"
	};

char* MLG_VoIP_Message54[] = {
	" If you enable CCBS, activate this feature by pressing phone key 5 after attempting a call on busy.",
	" Meşgul Aboneye Erişim özelliği etkin ise, bu özelliği aktif etmek için meşgulde bir çağrı denedikten sonra telefonunuzda 5 tuşlamanız gerekmektedir."
	};

char* MLG_VoIP_Message55[] = {
	"MWI (Message Waiting Indication)",
	"Mesaj Bekletme Bildirimi"
	};

char* MLG_VoIP_Message56[] = {
	"Expiration Time",
	"Zaman Aşımı"
	};

char* MLG_VoIP_Message57[] = {
	"Hot Line/Warm Line Enable",
	"Yardım/Destek Hattı etkinleştir"
	};

char* MLG_VoIP_Message58[] = {
	"Warm Line",
	"Destek Hattı"
	};

char* MLG_VoIP_Message59[] = {
	"Hot Line",
	"Yardım Hattı"
	};

char* MLG_VoIP_Message60[] = {
	"Hot Line/Warm Line Number",
	"Yardım/Destek Hattı numarası"
	};

char* MLG_VoIP_Message61[] = {
	"Warm Line Timer (sec)",
	"Destek Hattı Zamanlayıcısı"
	};

char* MLG_VoIP_Message62[] = {
	"Enable Missed Call Email Notification",
	"Cevapsız Çağrıda Email Bildirimi etkinleştir"
	};

char* MLG_VoIP_Message63[] = {
	"Mail Server",
	"Mail Sunucusu"
	};

char* MLG_VoIP_Message64[] = {
	"Send Notification to email",
	"Mail adresine bildirim gönder"
	};

char* MLG_VoIP_Message65[] = {
	"Missed Call Email Title",
	"Cevapsız Çağrı Mail Başlığı"
	};

char* MLG_VoIP_Message66[] = {
	"Please configure mail server in Advanced > Email Notification page and select the mail server for this feature.",
	"Lütfen mail sunucusunu Gelişmiş>Email Bildirimi sayfasında ayarlayınız ve mail adresini bu özellik için seçiniz."
	};

char* MLG_VoIP_Message67[] = {
	"Early Media",
	"Erken Medya"
	};

char* MLG_VoIP_Message68[] = {
	"IVR Play Index",
	"IVR Oynatma indeksi"
	};

char* MLG_VoIP_Message69[] = {
	"Music On Hold",
	"Bekletmede müzik"
	};

char* MLG_VoIP_Message70[] = {
	"Add new provider",
	"Yeni sağlayıcı ekle"
	};

char* MLG_VoIP_Message71[] = {
	"SIP Service Provider Name",
	"SIP Servis Sağlayıcı Adı"
	};

char* MLG_VoIP_Message72[] = {
	"SIP Server Address",
	"SIP Sunucu Adresi"
	};

char* MLG_VoIP_Message73[] = {
	"REGISTER Server Address",
	"Kayıt Sunucu Adresi"
	};

char* MLG_VoIP_Message74[] = {
	"SIP Service Domain",
	"SIP Servis Alan adı"
	};

char* MLG_VoIP_Message75[] = {
	"Modify",
	"Değiştir"
	};

char* MLG_VoIP_Message76[] = {
	"Edit this provider",
	"Bu sağlayıcıyı düzenle"
	};

char* MLG_VoIP_Message77[] = {
	"SIP Service Provider offers services of making Internet calls using VoIP technology. You may need to consult your SIP Service Provider for the following settings. This configuration should be used in conjunction with SIP Account.",
	"SIP Servis Sağlayıcısı, VOIP teknolojisi kullanılarak İnternet aramaları yapma hizmetleri sunmaktadır. Bu konfigürasyon, SIP Hesabı ile birlikte kullanılmadır."
	};

char* MLG_VoIP_Message78[] = {
	"SIP Service Provider Selection",
	"SIP Servis Sağlayıcı Seçimi"
	};

char* MLG_VoIP_Message79[] = {
	"Service Provider Selection",
	"Servis Sağlayıcı Seçimi"
	};

char* MLG_VoIP_Message80[] = {
	"General",
	"Genel"
	};

char* MLG_VoIP_Message81[] = {
	"SIP Service Provider Name",
	"SIP Servis Sağlayıcı Adı"
	};

char* MLG_VoIP_Message82[] = {
	"SIP Local Port",
	"SIP Yerel Portu"
	};

char* MLG_VoIP_Message83[] = {
	"SIP Server Port",
	"SIP Sunucu Portu"
	};

char* MLG_VoIP_Message84[] = {
	"REGISTER Server Address",
	"Kayıt Sunucu Adresi"
	};

char* MLG_VoIP_Message85[] = {
	"REGISTER Server Port",
	"Kayıt Sunucu Portu"
	};

char* MLG_VoIP_Message86[] = {
	"RFC support",
	"RFC Desteği"
	};

char* MLG_VoIP_Message87[] = {
	"Support Locating SIP Server (RFC 3263)",
	"SIP Sunucu Yerleştirme Desteği (RFC 3263)"
	};

char* MLG_VoIP_Message88[] = {
	"RFC 3262 (Require: 100rel)",
	"RFC 3262 (Gereklilik: 100rel)"
	};

char* MLG_VoIP_Message89[] = {
	"VoIP IOP Flags",
	"VOIP IOP Bayrakları"
	};

char* MLG_VoIP_Message90[] = {
	"Replace dial digit",
	"Arama numaralarını"
	};

char* MLG_VoIP_Message90_2[] = {
	" in SIP messages",
	"'e çevir"
	};

char* MLG_VoIP_Message90_1[] = {
	"to",
	"SIP mesajlarındaki"
	};

char* MLG_VoIP_Message91[] = {
	"Remove :5060 and transport=udp from request-uri in SIP messages",
	"5060 ve transport=udp yi SIP mesajlarındaki request-uriden çıkar"
	};

char* MLG_VoIP_Message92[] = {
	"Remove the Route header in SIP messages",
	"SIP mesajlarındaki Route başlığını çıkar"
	};

char* MLG_VoIP_Message93[] = {
	"Don't send re-Invite to the remote party when there are multiple codecs answered in the SDP",
	"SDP'de cevaplanmış çoklu kodekler olduğu zaman uzak tarafa tekrar davet gönderme"
	};

char* MLG_VoIP_Message94[] = {
	"Bound Interface Name",
	"Bound Inerface Adı"
	};

char* MLG_VoIP_Message95[] = {
	"Outbound Proxy",
	"Giden Proxy"
	};

char* MLG_VoIP_Message96[] = {
	"Outbound Proxy Address",
	"Giden Proxy Adresi"
	};

char* MLG_VoIP_Message97[] = {
	"Outbound Proxy Port",
	"Giden Proxy Portu"
	};

char* MLG_VoIP_Message98[] = {
	"RTP Port Range",
	"RTP Port Aralığı"
	};

char* MLG_VoIP_Message99[] = {
	"Start Port",
	"Başlangıç Portu"
	};

char* MLG_VoIP_Message100[] = {
	"End Port",
	"Bitiş Portu"
	};

char* MLG_VoIP_Message101[] = {
	"SRTP Support",
	"SRTP Desteği"
	};

char* MLG_VoIP_Message102[] = {
	"Crypto Suite",
	"Kripto Paketi"
	};

char* MLG_VoIP_Message103[] = {
	"(Encryption and Authentication type)",
	"(Şifreleme ve Doğrulama Tipi)"
	};

char* MLG_VoIP_Message104[] = {
	"DTMF Mode",
	"DTMF Modu"
	};

char* MLG_VoIP_Message105[] = {
	"Transport Type",
	"Taşıma Tipi"
	};

char* MLG_VoIP_Message106[] = {
	"Ignore Direct IP",
	"Direk IP'yi ihmal et"
	};

char* MLG_VoIP_Message107[] = {
	"FAX Option",
	"FAX Seçeneği"
	};

char* MLG_VoIP_Message108[] = {
	"T.38 FAX Relay",
	"T.38 FAX Geçişi"
	};

char* MLG_VoIP_Message109[] = {
	"Fax Passthrough Codec",
	"Fax Passthrough Kodek"
	};

char* MLG_VoIP_Message110[] = {
	"QoS Tag",
	"QoS Etiket"
	};

char* MLG_VoIP_Message111[] = {
	"SIP DSCP Mark Setting",
	"SIP DSCP İşaret Ayarı"
	};

char* MLG_VoIP_Message112[] = {
	"RTP DSCP Mark Setting",
	"RTP DSCP İşaret Ayarı"
	};

char* MLG_VoIP_Message113[] = {
	"Timer Setting",
	"Zamanlayıcı Ayarlama"
	};

char* MLG_VoIP_Message114[] = {
	"Expiration Duration",
	"Sonlanma Süresi"
	};

char* MLG_VoIP_Message115[] = {
	"Register Re-send timer",
	"Tekrar kayıt gönderme zamanlayıcısı"
	};

char* MLG_VoIP_Message116[] = {
	"Session Expires",
	"Oturum Sonlanması"
	};

char* MLG_VoIP_Message117[] = {
	"Phone Key Config",
	"Telefon Anahtar Yapılandırması"
	};

char* MLG_VoIP_Message118[] = {
	"Call Return",
	"Geri Arama"
	};

char* MLG_VoIP_Message119[] = {
	"One Shot Caller Display Call",
	"Tek seferlik arayan gösterme"
	};

char* MLG_VoIP_Message120[] = {
	"One Shot Caller Hidden Call",
	"Tek seferlik arayan gizli arama"
	};

char* MLG_VoIP_Message121[] = {
	"Call Waiting Enable",
	"Arama bekleme etkinleştir"
	};

char* MLG_VoIP_Message122[] = {
	"Call Waiting Disable",
	"Arama bekleme devredışı bırak"
	};

char* MLG_VoIP_Message123[] = {
	"IVR",
	"Sesli yanıt sistemi"
	};

char* MLG_VoIP_Message124[] = {
	"Internal Call",
	"Dahili Arama"
	};

char* MLG_VoIP_Message125[] = {
	"Call Transfer",
	"Arama aktarma"
	};

char* MLG_VoIP_Message126[] = {
	"Unconditional Call Forward Enable",
	"Koşulsuz çağrı aktarma etkinleştir"
	};

char* MLG_VoIP_Message127[] = {
	"Unconditional Call Forward Disable",
	"Koşulsuz aktarma deverdışı bırak"
	};

char* MLG_VoIP_Message128[] = {
	"No Answer Call Forward Enable",
	"Cevapsız arama aktarma etkinleştir"
	};

char* MLG_VoIP_Message129[] = {
	"No Answer Call Forward Disable",
	"Cevapsız arama aktarma devredışı bırak"
	};

char* MLG_VoIP_Message130[] = {
	"Call Forward When Busy Enable",
	"Meşgulken çağrı aktarma etkinleştir"
	};

char* MLG_VoIP_Message131[] = {
	"Call Forward When Busy Disable",
	"Meşgulken çağrı aktarma devredışı bırak"
	};

char* MLG_VoIP_Message132[] = {
	"One Shot Call Waiting Enable",
	"Tek seferlik çağrı bekleme etkinleştir"
	};

char* MLG_VoIP_Message133[] = {
	"One Shot Call Waiting Disable",
	"Tek seferlik çağrı bekleme devredışı bırak"
	};

char* MLG_VoIP_Message134[] = {
	"Do Not Disturb Enable",
	"Rahatsız etme etkinleştir"
	};

char* MLG_VoIP_Message135[] = {
	"Do Not Disturb Disable",
	"Rahatsız etme devredışı bırak"
	};

char* MLG_VoIP_Message136[] = {
	"Call Completion on Busy Subscriber (CCBS) Deactivate",
	"Meşgul aboneye erişimini (CCBS) devredışı bırak"
	};

char* MLG_VoIP_Message137[] = {
	"Outgoing SIP",
	"Giden SIP"
	};

char* MLG_VoIP_Message138[] = {
	"Redial Code",
	"Tekrar arama kodu"
	};

char* MLG_VoIP_Message139[] = {
	"Answering Machine Unconditional Enable",
	"Çağrı yanıtlama makinesi koşulsuz etkinleştir"
	};

char* MLG_VoIP_Message140[] = {
	"Answering Machine Unconditional Disable",
	"Çağrı yanıtlama makinesi koşulsuz devredışı bırak"
	};

char* MLG_VoIP_Message141[] = {
	"Answering Machine Record Greeting",
	"Çağrı yanıtlama makinesi kayıt sesli iletisi"
	};

char* MLG_VoIP_Message142[] = {
	"Answering Machine Play Greeting",
	"Çağrı yanıtlama makine oynatma sesli iletisi"
	};

char* MLG_VoIP_Message143[] = {
	"Answering Machine On No Answer Enable",
	"Cevapsızken çağrı yanıtlama makinesini etkinleştir"
	};

char* MLG_VoIP_Message144[] = {
	"Answering Machine On No Answer Disable",
	"Cevapsızken çağrı yanıtlama makinesini devredışı bırak"
	};

char* MLG_VoIP_Message145[] = {
	"Answering Machine On Busy Enable",
	"Meşgulken çağrı yanıtlama makinesini etkinleştir"
	};

char* MLG_VoIP_Message146[] = {
	"Answering Machine On Busy Disable",
	"Meşgulken çağrı yanıtlama makinesini devredışı bırak"
	};

char* MLG_VoIP_Message147[] = {
	"Answering Machine Message Handling",
	"Çağrı yanıtlama makinesi mesaj  yönetimi"
	};

char* MLG_VoIP_Message148[] = {
	"Anonymous Per Call Enable",
	"Çağrı başına anonim etkinleştir"
	};

char* MLG_VoIP_Message149[] = {
	"Anonymous Per Call Disable",
	"Çağrı başına anonim devredışı bırak"
	};

char* MLG_VoIP_Message150[] = {
	"Anonymous Calls To Answering Machine Enable",
	"Anonim çağrılar çağrı yanıtlama makinesine yönlenme etkinleştir"
	};

char* MLG_VoIP_Message151[] = {
	"Anonymous Calls To Answering Machine Disable",
	"Anonim çağrılar çağrı yanıtlama makinesine yönlensin devredışı bırak"
	};

char* MLG_VoIP_Message152[] = {
	"Anonymous Call Block Enable",
	"Anonim çağrı engelle etkinleştir"
	};

char* MLG_VoIP_Message153[] = {
	"Anonymous Call Block Disable",
	"Anonim çağrı engelle bırak devredışı bırak"
	};

char* MLG_VoIP_Message154[] = {
	"Always Anonymous Call Enable",
	"Her zaman anonim çağrı etkinleştir"
	};

char* MLG_VoIP_Message155[] = {
	"Always Anonymous Call Disable",
	"Her zaman anonim çağrı devredışı bırak"
	};

char* MLG_VoIP_Message156[] = {
	"Active Dial Enable",
	"Aktif arama etkinleştir"
	};

char* MLG_VoIP_Message157[] = {
	"Active Dial Disable",
	"Aktif arama devredışı bırak"
	};

char* MLG_VoIP_Message158[] = {
	"Dial Plan",
	"Arama planı"
	};

char* MLG_VoIP_Message159[] = {
	"Dial Plan Enable",
	"Aramaı planı etkinleştir"
	};

char* MLG_VoIP_Message160[] = {
	"Dialing Interval Selection",
	"Çevirme Interval Seçimi"
	};

char* MLG_VoIP_Message161[] = {
	"Immediate Dial Enable",
	"Anlık arama etkinleştir"
	};

char* MLG_VoIP_Message162[] = {
	"When certain phone numbers are dialed on a regular basis, Speed Dial accelerates dialing process. The following rules apply to all the phone devices connected to this device.",
	"Ayarlanmış telefon numaraları çevrildiğinde, Hızlı Çevirme özelliği telefon numarası çevirme sürecini hızlandırır. Aşağıdaki kurallar bu cihaza bağlı tüm telefon cihazlarına uygulanır."
	};

char* MLG_VoIP_Message163[] = {
	"Call rule",
	"Çağrı Kuralları"
	};

char* MLG_VoIP_Message164[] = {
	"Clear all speed dials",
	"Tüm hızlı telefon çevirme kurallarını temizle"
	};

char* MLG_VoIP_Message165[] = {
	"Keys",
	"Anahtarlar"
	};

char* MLG_VoIP_Message166[] = {
	"Number",
	"Numara"
	};

char* MLG_VoIP_Message167[] = {
	"Selecting current region where this device is physically located provides better quality of phone calls.",
	"Bu cihazın kullanıldığı bölge seçimini yapmak daha kaliteli telefon görüşmeleri sağlar."
	};

char* MLG_VoIP_Message168[] = {
	"Region Settings",
	"Bölge Ayarları"
	};

char* MLG_VoIP_Message169[] = {
	"Call Service Mode",
	"Çağrı Servis Modu"
	};

char* MLG_VoIP_Message170[] = {
	"Europe Type",
	"Avrupa Tipi"
	};

char* MLG_VoIP_Message171[] = {
	"USA Type",
	"ABD Tipi"
	};

char* MLG_VoIP_Message172[] = {
	"When Region Settings is changed, you need to reboot device to take settings effect.",
	"Yapılan Bölge ayarlarının cihazda etkinleştirilmesi için cihazı yeniden başlatmanız gerekir."
	};

char* MLG_VoIP_Message173[] = {
	"Phone Status",
	"Telefon Durumu"
	};

char* MLG_VoIP_Message174[] = {
	"Outgoing Number",
	"Aranan Numara"
	};

char* MLG_VoIP_Message175[] = {
	"Incoming Number",
	"Arayan Numara"
	};

char* MLG_VoIP_Message176[] = {
	"MissedCallNotification",
	"Cevapsız Çağrı Bildirimi"
	};

char* MLG_VoIP_Registered_Notregister[] = {
	"Not Register",
	"Kayıtlı Değil"
	};

char* MLG_VoIP_Registered_Idle[] = {
	"Idle",
	"Boş"
	};

MAPPING_ITEM VoIPMappingItem[200];
