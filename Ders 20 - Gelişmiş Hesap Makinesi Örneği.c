#include <stdio.h>
/*
Hazýrlayan : Muhammed Erdinç - muhammederdinc.com
*/
int main () {
	// Geliþmiþ Hesap Makinesi Örneði :)

	int islem,sayi1,sayi2,i,sayac=0;
	float sonuc,fak=1;
	gonder:
	printf("Yapilmak istene islem\ntoplama=1\ncikarma=2\ncarpma=3\nbolme=4\nFaktoriyel=5\nAsal=6\nSecim : ");
	scanf("%d",&islem);
	
	switch (islem) {
		
		case 1:
			printf("Sayi Gir : "); scanf("%d",&sayi1);
			printf("Sayi Gir : "); scanf("%d",&sayi2);
			sonuc = sayi1+sayi2;
			printf("Sonuc : %f",sonuc);
			break;
			
			case 2:
			printf("Sayi Gir : "); scanf("%d",&sayi1);
			printf("Sayi Gir : "); scanf("%d",&sayi2);
			sonuc = sayi1-sayi2;
			printf("Sonuc : %f",sonuc);
			break;
			
			case 3:
			printf("Sayi Gir : "); scanf("%d",&sayi1);
			printf("Sayi Gir : "); scanf("%d",&sayi2);
			sonuc = sayi1*sayi2;
			printf("Sonuc : %f",sonuc);
			break;
			
			case 4:
			printf("Sayi Gir : "); scanf("%d",&sayi1);
			printf("Sayi Gir : "); scanf("%d",&sayi2);
			sonuc = sayi1/sayi2;
			printf("Sonuc : %f",sonuc);
			break;
			
			case 5:
			printf("Sayi Gir : "); scanf("%d",&sayi1);
			
			for(i=1; i<=sayi1; i++) {
				
				fak *= i;
				
			}
		
			printf("Sonuc : %f",fak);
			break;
			
			case 6:
				printf("Sayi Gir : "); scanf("%d",&sayi1);
				
				for (i=2; i<sayi1; i++) {
					
					if(sayi1 % i == 0) {
						sayac++;
					}
					
					
				}
				
				if(sayac == 0) {
					
					printf("Sayi Asaldir");
					
				}
				else {
					
					printf("Sayi Asal Degildir");
					
				}
				
				break;
		
		    default:
		    	
		    	printf("Girilen Islem gecersizdirn");
		    	goto gonder;
		
	}


	
	return 0;
	
	
}
