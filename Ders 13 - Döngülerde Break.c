#include <stdio.h>
/*
Haz�rlayan : Muhammed Erdin� - muhammederdinc.com
*/
int main () {
	
	int sayi,i,toplam=0;
	
	for(i=0; true; i++){
		
		printf("Sayi Giriniz (Cikmak icin -1 basin) : ");
		scanf("%d",&sayi);
		
		if(sayi == -1){
			
			break; // Break Komutu D�ng�n�n D���na ��kmak ��in Kulan�l�r.
			
		}
		
		toplam += sayi;
		
		
	}
	printf("\nGirilen Sayilarin Toplami : %d" , toplam );
	
	
}
