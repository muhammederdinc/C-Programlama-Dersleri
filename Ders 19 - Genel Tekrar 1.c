#include <stdio.h>
#define pi 3.141592653589793 // pi say�s�n� burada tan�ml�yor ve her yerde kullanabiliyoruz.
/*
Haz�rlayan : Muhammed Erdin� - muhammederdinc.com
*/
int main () {
	float daire_yaricap,kare_kenar,dikdortgen_genislik,dikdortgen_yukseklik,daire_alan,daire_cevre,kare_alan,kare_cevre,dikdortgen_cevre,dikdortgen_alan,orta,ortc;
	// yukar�da kullanaca��m�z de�erleri tan�ml�yoruz.
	
	printf("Dairenin Yaricapini Giriniz : "); // Ekrana yazd�rma kodu.
	scanf("%f", &daire_yaricap); // Daire yar��ap�n� float de�erin i�ine at�yorum.
	printf("\nKarenin Kenar Uzunlugunu Giriniz : ");
	scanf("%f" , &kare_kenar);
	printf("\nDikdortgenin Genisligini Giriniz : ");
	scanf("%f" , &dikdortgen_genislik);
	printf("\nDikdortgenin Yuksekligini Giriniz : ");
	scanf("%f" , &dikdortgen_yukseklik);
	
	
	//printf("Girilen Deger :%f %f %f %f" , daire_yaricap, kare_kenar, dikdortgen_genislik, dikdortgen_yukseklik);
	
	daire_alan = pi * (daire_yaricap * daire_yaricap) ; // daire alan�n�n hesaplanmas�
	//printf("Cevap : %f" , daire_alan);
	daire_cevre = 2 * pi * daire_yaricap; // dairenin cevresini bulma
	//printf("Cevap : %f" , daire_cevre);
	kare_alan = kare_kenar * kare_kenar; // karenin alan�n� bulma
	//printf("Cevap1 : %f" , kare_alan);
	kare_cevre = kare_kenar*4; // karenin �evresini bulma
	//printf("Cevap2 : %f" , kare_cevre);
	dikdortgen_cevre = (dikdortgen_genislik + dikdortgen_yukseklik) *2; // dikd�rtgenin cevresini bulma
	//printf("Cevap : %f" , dikdortgen_cevre);
	dikdortgen_alan = dikdortgen_genislik * dikdortgen_yukseklik; // dikd�rtgenin alan�n� bulma
	//printf("Cevap : %f" , dikdortgen_alan);
	orta = (dikdortgen_alan +kare_alan +daire_alan)/3; // alanlar�n ortalamas�
	ortc = (dikdortgen_cevre+kare_cevre+daire_cevre)/3; // �evrelerin ortalamas�

	
	
printf("\n+------------+------------+------------+");
printf("\n|            |    Alan    |   Cevre    |");
printf("\n+------------+------------+------------+");
printf("\n|Daire       |        %.1f|        %.1f|", daire_alan , daire_cevre);
printf("\n|Kare        |        %.1f|        %.1f|",kare_alan,kare_cevre);
printf("\n|Dikdortgen  |        %.1f|        %.1f|",dikdortgen_alan,dikdortgen_cevre);
printf("\n+------------+------------+------------+");
printf("\n|Ortalama    |        %.1f|        %.1f|",orta,ortc);
printf("\n+------------+------------+------------+\n\n\n");

// yukar�da tabloyu olu�turup i�erisine de�erleri yazd�r�yoruz.
	
	return 0;
	
}
