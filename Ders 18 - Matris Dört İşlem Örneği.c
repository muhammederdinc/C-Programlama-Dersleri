#include <stdio.h>
#include <conio.h>
/*
Haz�rlayan : Muhammed Erdin� - muhammederdinc.com
*/
int main() {

	int dizi1[2][2],dizi2[2][2],sonuc[2][2],a,b,islem; // De�i�kenlerimizi Ve Dizilerimizi Olu�turuyoruz.
	
	gonder:
	printf("1) Toplama\n2) Cikarma\n3) Carpma\nYapilmak Istenen Islem : "); // Kullan�c�dan Yapmak �stedi�i ��lem �steniyor.
	scanf("%d",&islem);
	
	if (islem<1 || islem>3) {  // Girilen ��lem Ge�erlimi Ge�ersizmi Kontrol Edip ge�ersizse tekrar girmesini istiyoruz.
		printf("Girilen Deger Gecersizdir..\n");
		goto gonder;
	}
	
	for (a=0; a<2; a++) {

		for (b=0; b<2; b++) {
	
		printf("Birinci Matris Degerlerini Giriniz [%d][%d] :",a, b);
		scanf("%d",&dizi1[a][b]);
	
			}	}
			
			printf ("*************************************************\n");
			
	for (a=0; a<2; a++) {

		for (b=0; b<2; b++) {
	
		printf("Ikinci Matris Degerlerini Giriniz [%d][%d] :",a, b);
		scanf("%d",&dizi2[a][b]);
	
			}	}
			
			
				for (a=0; a<2; a++) {

		for (b=0; b<2; b++) {
	
		if(islem == 1 ) {
			sonuc[a][b] = dizi1[a][b] + dizi2[a][b];
		}
		else if (islem == 2) {
			sonuc[a][b] = dizi1[a][b] - dizi2[a][b];
		}
		else if (islem == 3) {
			sonuc[a][b] = dizi1[a][b] * dizi2[a][b];
		}
		
			}	}
		
					for (a=0; a<2; a++) {

		for (b=0; b<2; b++) {
	
		printf("%d ", sonuc[a][b]);
	
			} printf("\n");	
		}

	
	return 0 ;
	
}

