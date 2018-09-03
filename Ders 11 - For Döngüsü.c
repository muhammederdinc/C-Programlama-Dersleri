#include <stdio.h>
/*
Hazýrlayan : Muhammed Erdinç - muhammederdinc.com
*/
int main () {
	
	// Faktöriyel Hesaplama 
	
	int Sayi,i,Sonuc=1;
	
	printf("Sayi Giriniz : ");
	scanf("%d",&Sayi);
	
	for(i=1; 1<=Sayi; Sayi--) {
		
		Sonuc *= Sayi;
		
		
	}
	
	printf("Sonuc : %d",Sonuc);
	
	return 0;
	
}
