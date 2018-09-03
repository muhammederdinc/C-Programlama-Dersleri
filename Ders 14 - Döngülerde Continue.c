#include <stdio.h>
/*
Hazýrlayan : Muhammed Erdinç - muhammederdinc.com
*/
int main () {
	
	int i,toplam=0,toplam2=0,a=0;
	
	for(i=0; i<=10; i++) {
		
		if(i%2 == 1) {
			
			continue; // Continue Komutu , döngüde kendisinin altýndalki satýrý çalýþtýrmadan döngünün baþýna döner. For döngüsünde continue çalýþtýðýnda i++ çalýþýr.  
			
		}
		
		toplam += i;
		
	}
	
	printf("Sonuc : %d" , toplam );
	
		while (a<=10) {
			
			if(a%2 ==1){
				a++;
				continue;
				
			}
			
			toplam2 += a;
			a++;
			
			
			
		
		
	}
	printf("\nSonuc : %d",toplam2);
	return 0;
}
