#include <stdio.h>
/*
Hazýrlayan : Muhammed Erdinç - muhammederdinc.com
*/
int main () {
	
		int deger,faktoriyel=1;
		
		printf("------------ Faktoriyel Hesaplama ------------\n");
		printf("Sayi Giriniz : ") ; 
		scanf("%d" , &deger);
		
		while(deger != 0) {
			
			
			faktoriyel *= deger;
			
			deger--;
			
		}
		
		printf("Sonuc : %d", faktoriyel);
	
	return 0;
}
