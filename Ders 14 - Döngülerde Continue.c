#include <stdio.h>
/*
Haz�rlayan : Muhammed Erdin� - muhammederdinc.com
*/
int main () {
	
	int i,toplam=0,toplam2=0,a=0;
	
	for(i=0; i<=10; i++) {
		
		if(i%2 == 1) {
			
			continue; // Continue Komutu , d�ng�de kendisinin alt�ndalki sat�r� �al��t�rmadan d�ng�n�n ba��na d�ner. For d�ng�s�nde continue �al��t���nda i++ �al���r.  
			
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
