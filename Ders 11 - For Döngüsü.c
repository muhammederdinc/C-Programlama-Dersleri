#include <stdio.h>
/*
Haz�rlayan : Muhammed Erdin� - muhammederdinc.com
*/
int main () {
	
	// Fakt�riyel Hesaplama 
	
	int Sayi,i,Sonuc=1;
	
	printf("Sayi Giriniz : ");
	scanf("%d",&Sayi);
	
	for(i=1; 1<=Sayi; Sayi--) {
		
		Sonuc *= Sayi;
		
		
	}
	
	printf("Sonuc : %d",Sonuc);
	
	return 0;
	
}
