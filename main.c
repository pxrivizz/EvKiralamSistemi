#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"turkish");
	int secim,i,j,k,l,secim1,secim2,secim3,secim4,secim5,kiralama_onay,kiralama_suresi,onay_secim,devam_secim;
	int kullanici_yas ,odenecek_ucret,indirim_miktari,yeni_ucret;
	char username[50],yetkili_pass=' ',pass[50],posta=' ',evler[][100]={"1-Babaeski Kurtulus Mahallesi 2+1 Iki Katli Ev (Tadilat)(Gunluk - TL)" ,"2-Babaeski Fevzi Cakmak Mahallesi 1+1 Tek Katli Ev (Gunluk 500 TL)" , "3-Babaeski Fatih Caddesi Dublex Villa (Gunluk 800 TL)" , "4-Luleburgaz 39Burda Arkasi Evim Villari (Tadilat)(Gunluk - TL)" , "5-Edirne Selimiye Camii Yakinlari 3+1 Ev (Gunluk 1275 TL)", "6-Istanbul Beylikduzu 1+1 Ev (Gunluk 900 TL)" , "7-Ankara 2+1 Ev (Tadilat)(Gunluk - TL)" , "8-Ankara 1+0 Studyo Ev (Gunluk 602 TL)" , "9-Canakkale 3+1 Ayvacik Sahil Kenari Ev (Gunluk 1825 TL)" ,"10-Mugla Marmaris Dublex Sahile sifir Ev (Tadilat)(Gunluk - TL)"};
	char kart_numarasi[20],soyadi[20],adi[20],date[20],cvv[20],yetkili_posta;
	int ucretler[100]={0,500,800,0,1275,900,0,602,1825,0} , ev_sayilari[]={1,2,3,4,5,6,7,8,9,10};
	i=0;
	j=0;
	k=0;
	l=0;
	
	printf("\n********Kiralama Sistemine Hosgeldiniz!!!*******\n");
	printf("\nGiris Secenekleri\n");
	printf("\n1-Kullanici Girisi  ");
	printf("2-Yeni Kullanici Olustur  ");
	printf("3-Yetkili Girisi  ");
	printf("4-Giris Yapmadan Devam Et\n");
	printf("Lutfen Seciminizi yapiniz!(1-4): ");
	scanf("%d",&secim);
	switch(secim){
		
		case 1 : 
		printf("\nLutfen Kullanici Adinizi Giriniz: ");
		scanf("%s",&username);
		printf("Lutfen Sifrenizi Giriniz: ");
		scanf("%s",&pass);
		break;
		
		case 2 : 
		printf("\n********Yeni Kullanici Olusturma********\n");
		printf("Mailiniz Giriniz: ");
		scanf("%s",&posta);
		
		printf("Kullanici Adinizi Giriniz: ");
		scanf("%s",&username);
				
		while(1){
			printf("Yasinizi Giriniz: ");
			scanf("%d",&kullanici_yas);
		
			if(kullanici_yas<=17){
				printf("\nKayit Olmaniz icin yasiniz 18'den buyuk olmalidir!!!\n");
				printf("Program 1 saniye sonra kapatilacaktir.\n");
				sleep(1);
				printf("Program Kapatiliyor , bizi tercih ettiginiz icin tesekkurler <3");
				return 0;	
				
			}
			else {
				break;
			}
		}
		
		while(1) {
			printf("Sifrenizi Giriniz: ");
			scanf("%s",&pass);
			if (strlen(pass)<7){
				printf("\nSifreniz en az 7 karakter olmalidir!!!\n");
			}
			else{
				break;
			}
		}
		
		break;
		
		case 3 :
			printf("Yetkili Kullanici Adi Giriniz: ");
			scanf("%s",&username);
			printf("Yetkili Mail Giriniz: ");
			scanf("%s",&posta);
			if(posta=='h'){	
		}
		else{
			printf("Lutfen Sadece Yetkiliyseniz Giris Yapiniz.");
			return 0;
		}
			printf("Yetkili Sifre Giriniz: ");
			scanf("%s",&yetkili_pass);
			if(yetkili_pass=='z'){
				printf("Yetkili Giris Yapildi!!");
			}
			break;
		
		case 4:
			printf("\nUzgunuz Bu Uygulamada Kullanici Girisi Yapilmadan Islem Yapilmamaktadir.");
			return 0;
			break;
		
		default:
			printf("\nLutfen Gecerli Bir Giris Yapiniz!!!!\n");
			break;
	}
		ev_sec:
		printf("\n*******Sisteme Hosgeldiniz %s *******\n",username);
		for(j=0;j<10;j++){
			
			printf("%s\n",evler[j]);
			
		}
		//Ev sayisi kontrol ettir!!!!!
		printf("\nLutfen Kiralamak Istediginiz Evi Seciniz!!!");
		scanf("%d",&secim1);
		printf("Ev Hakkinda Daha Fazla Bilgi Almak Ister Misiniz? (1-Evet , 2-Hayir) ");
		scanf("%d",&secim2);
		
		if (secim2==1){
		while(1){
			printf("\nHangi Ev Hakkinda Bilgi Almak Istersiniz? ");
			scanf("%d",&secim3);
			
			switch (secim3){
				
				case 1:
					printf("\nKurtulus Mahallesinde Zincir Marketlere Maksimum 10 dakika!!!. Dogal Guzellikler arasinda bir eviniz olmaninizi isterseniz bu ev tam size gore.Dogalgaz ile alttan isitma. En iyi alt yapi sistemlerine sahiptir.");
					break;
					
				case 2:
					printf("\nBalkonlu, asansoru var aktiftir. havuz cepheli kat sosyal olanaklar (acik kapali otopark ,havuz ,spor salonu, cocuk oyun parki cafeterya ,eczane mescit cami hastane )");
					break;
				
				case 3:
					printf("\nKIRKLARELI/BABAESKI/FATIH Caddesinde Bulunan Satilik Musatakil Evimiz 325 m2 Arsanin Icerisinde Bulunmaktadir. 3,5 Kat Imarli Olan Evimiz Carsi,Market,Eczane,Hastane,Saglik Ocagi,Belediye,Semt Pazari,Ilk okul-Orta okul Lise-Universite vb. Yerlere Yurume Mesafesindedir .");
					break;
					
				case 4:
					printf("\nVillamiz 4+1 olup 300 m2 kullanim alanina sahiptir. * villamiz 2 arsadan olusmaktadir. toplam 830 m2 dir. 1946 ada 1 parsel ve 1946 ada 4 parsel. *villamiz 1946 ada 1 parsel uzerine kuruludur. *150 m2 de depolama alani mevcuttur * hizli trene 30 sn mesafededir. * lokasyon olarak sehrin gelisen bolgesindedir * acik otopark mevcuttur * cocuk oyun parki * yesil bahce alani * camasir yikama odasi * ebeveyn banyosu * yatak odasi icerisinde giyinme odasi * ocak, davlumbaz ve firindan olusan ankastre set * portmanto * tum malzemeler ve iscilik 1. siniftir. * radyal temel uzerine kuruludur.");
					break;	
			
				case 5:
					printf("\nspatcami Mah. Sanayi Caddesi Uzerinde 3+1 Esyali Daire Satiliktir. Dairenin en dikkat cekici ozellikleri: (Genis balkonu, modern mutfagi, Okula Yakinlik, ) Cevre hakkinda bilgiler: (Okullar, hastaneler, alisveris merkezlerine yakinlik, Cennet Bahcesi ) 3+1 Esyali. Bina Ozellikleri:  Asansor Bulunmamaktadir. Acik Otopark Cevre: Okullara, AVM'lere ve Ulasim Duraklarina Yakin: Cocugunuzun okuluna, alisveris merkezlerine ve toplu tasima duraklarina kolayca ulasabileceginiz merkezi bir konum. Yesil Alanlar: Dogayla ic ice bir yasam icin park ve bahcelere yakin. Neden Bu Daireyi Kiralamalisiniz? Sehir Hayatinin Kalbinde: Tum imkanlara yurume mesafesinde, modern ve konforlu bir yasam.");
					break;	
				
				case 6:
					printf("\nbeylikduzu yasam vadisinde beylikduzu kavakli mahallesinde merkezi konum kisa katli binada butik site icerisinde 2+1 ara kat genis m2 hamam guclu alt yapi guvenli dayanakli ferah ve sessiz!! konforlu ve kaliteli bir yasam icin tasarlanmis ister yatirimlik ister oturumluk led & spot aydinlatma prim garantisi! sik tasarim ulasim yurume mesafesinde hastanelere, semt pazarina, marketlere yakin konum.");
					break;
					
				case 7:
					printf("\nata mahallesinde; kabil caddesi ile lizbon caddesi arasinda ; dikmen caddesine 4 dk yurume mesafesinde; kabi·l caddesine 3 dk yurume mesafesi·nde keklikpinari semt pazarina 5 dk yurume mesafesinde, gun boyu gunes alan guney - bati cepheli, kot 1 de, bagimsiz salon, 2+1, vaillant kombili·, 2 alafranga wc, antrede genis vestiyer dolabi, dairemiz merkezi konumda olup, alisveris yerlerine , marketlere, okullara , hastanelere , ulasima , parklara , semt pazarina , ovecler vadisinde , kurumlara yakin konumda, ana arterlere ulasim mesafesindedir. evin konumu itibariyla sosyal yasamin gerektirdigi tum ihtiyaclar kisa mesafeden kolaylikla karsilanabilmektedir. kat mulkiyetli.");
					break;	
					
				case 8:
					printf("\nGazi Hastanesi Migros Vamos Spor Salonu 50 M Toplu tasima 50 M Daireler sifir olup kullanilmamistir. Kat cephe secenegi mevcuttur. Amerikan mutfak Gomme dolaplar Boy camlar Ferah genis dairelerdir. Buyuk ekran TV Buzdolabi Camasir makinesi Elektirirk supurgesi Utu Utu masasi Gazli ocak Cift kisilik yatak Mutfak masasi ve Sandalyeleri ile eksiksiz, her ihtiyacinizi karsilayacak nitelikte dairelerdir. HERSEY DAHIL sistemdir. Aylik 100kw elektirik 4 m3 ( 3m3 soguk 1 m3 sicak su) Sinirsiz isinma Kiraya dahildir.");
					break;	
					
				case 9:
					printf("\nKucukkuyu Mihli Mahallesi'nde Denize 100 metre mesafede Alt katta acik mutfak ve genis salon ve 1 Banyo 20 m² cam balkonlu veranda Ust Katta 3 yatak odasi 1 banyo Otomatik Panjurlu camlar Isi Pompasi ile yaz kis oturuma hazir?Yeni tadilat yapilmis, mutfagi yenilenmis 200 m² Bahcesinde zeytin agaci ve cesitli meyveagaclari olan, Yaz Kis peyzaji bakimi yapilmaktadir, bir tarafi Kaz Daglari manzarali, diger tarafi denize bakan, konumu nezih butik yazlik bir site icerisindedir.");
					break;	
					
				case 10:
					printf("\nmarmaris'in turunc mahallesi'nde ana caddeye ve sahile yaklasik 10 dakika yuruyus mesafesi·nde bulunan, orta kat ve cati katindan olusan dubleks daire satiliktir. satilik daire; 120 metrekare kapali kullanim alanina sahip olup, bu alana balkonlar dahil degildir. dairenin giris katinda; bir salon,acik plan mutfak, bir yatak odasi,bir tuvalet / lavabosu, salon ve yatak odasindan gecisi olan doga manzarali bir balkonu bulunmaktadir. cati katinda ise; balkonlu iki yatak odasi ve bir banyo / tuvaleti mevcuttur. daire esyasiz olarak satiliktir. dairenin kat mulkiyetine gecilmis mesken ( konut ) tapusu bulunmaktadir. satilik dairenin yasal, idari ve / veya imari hic bir problemi yoktur.");
					break;
					
				default :
					printf("Gecerli Secim Yapiniz!!!");
			}
			printf("\nFarkli ev hakkinda bilgi almak için 1'e , devam etmek icin 2'ye basiniz. ");
			scanf("%d",&devam_secim);
			if(devam_secim==2){
				break;
			}
		}
	}	
			

		while(1){
			printf("\nHangi Evi Kiralamak Istersiniz? ");
			scanf("%d",&secim4);
			if(secim4>0 && secim4<11) {
			if (secim4==1 || secim4==4 || secim4==7 ){
				printf("Secilen ev suan da kiralanamamaktadir.");
			}
			else {
				break;	
			}
		}
				else {
				printf("Lutfen Gecerli Bir secim yapiniz.");
				}	
		
			
		}
		while(1){
			gun_hesap:
			printf("\n14 Gun Uzeri Yuzde 11.5 indirim Uygulanmaktadir!!!\n");
			printf("Secilen Evi Ne kadar Kiralamak Istiyorsunuz? (Lutfen Yapicaginiz Secimi Tam Gun Olarak Yapiniz.) ");
			scanf("%d",&kiralama_suresi);
			
			printf("\nEvinizi %d gun olarak kiraliyorsunuz. Onayliyor Musunuz? (1-Evet 2-Hayir) ",kiralama_suresi);
			scanf("%d",&kiralama_onay);
			
			if(kiralama_onay==1){
				break;
			}
		}
		
		odenecek_ucret=ucretHesapla(kiralama_suresi,ucretler[secim4-1]);
		if(kiralama_suresi>14){
		indirim_miktari=odenecek_ucret*115/1000;
		}
		yeni_ucret=odenecek_ucret-indirim_miktari;
		
		printf("\n*******Kontrol ET!!!!*********\n");
		printf("\nSecilen %s %d gun kiraliyorsunuz. Normal olan ucret : %d TL'dir. Ýndirim Tutari: %.2d TL'dir. Odencek Net Tutar %d'dir. \n",evler[secim4-1],kiralama_suresi,odenecek_ucret,indirim_miktari,yeni_ucret);
		printf("Odeme yerine gecmek icin 1'e , kalinacak gunleri degistirmek icin 2'ye , kalinacak evi degistirmek icin 3'e basiniz.");
		scanf("%d",&onay_secim);
		
		if(onay_secim==1){
			
			printf("\n******ODEME SAYFASI*********\n");
			printf("\nKart Bilgileri\n");
			
			printf("Adi: ");
			scanf("%s",&adi);
			printf("Soyadi: ");
			scanf("%s",&soyadi);
			printf("Kart Numarasi: ");
			scanf("%s",&kart_numarasi);
			printf("CVV: ");
			scanf("%s",&cvv);
			printf("Son Kullanma Tarihi: ");
			scanf("%s",&date);
			odemeOnay(yeni_ucret,kiralama_suresi);
			
			
		}
		else if(onay_secim==2){
			goto gun_hesap;
		}
		else if (onay_secim==3) {
			goto ev_sec;
		}
	FILE *dosya = fopen("kiralanmisSeyler.txt", "w");
	
	if (dosya == NULL) {
        printf("Dosya açýlamadý!\n");
        return 0;
    }
	fprintf(dosya, "Kullanici Adi: %s\n Kalinacak Gun: %d\n Odenecek Ucret:%d\n , Kiralanan Ev : %s ",username,kiralama_suresi,yeni_ucret,evler[secim4-1]);
	fclose(dosya);
	
	return 0;

}

int ucretHesapla(int gun , int secim){
	
	int toplamucret=gun*secim;
	return toplamucret;
}
int odemeOnay(int fiyat , int gunSecimler){
	printf("Girilen Kart Bilgileri Kontrol ediliyor.\n");
	printf("Girilen Kart Bilgileri Onaylandi!!!\n");
	printf("Odeme Yapiliyor.\n");
	printf("Kalinacak Gun sayisi : %d ,",gunSecimler);
	printf(" Karttan Çekilen Tutar: %d\n",fiyat);
	printf("Bizi Tercih Ettiðiniz Icin Tesekkurler!!!.");
}
