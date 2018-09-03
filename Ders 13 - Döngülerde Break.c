#include <stdio.h>
/*
Hazýrlayan : Muhammed Erdinç - muhammederdinc.com
*/
int main () {
	
	int sayi,i,toplam=0;
	
	for(i=0; true; i++){
		
		printf("Sayi Giriniz (Cikmak icin -1 basin) : ");
		scanf("%d",&sayi);
		
		if(sayi == -1){
			
			break; // Break Komutu Döngünün Dýþýna Çýkmak Ýçin Kulanýlýr.
			
		}
		
		toplam += sayi;
		
		
	}
	printf("\nGirilen Sayilarin Toplami : %d" , toplam );
	
	
}
