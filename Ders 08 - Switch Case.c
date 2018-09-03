#include <stdio.h>
/*
Hazýrlayan : Muhammed Erdinç - muhammederdinc.com
*/
int main () {
	// Switch Case Örneði :
	int Bakiye = 1000,Tutar,Tercih;
	
	printf("Yapmak Istediginiz Islemi Seciniz :\n1.Para Cekme\n2.Para Yatirma\n3.Havale\n4.Bakiye Sorgulama\n5.Kart Iade\nSeciminiz : ");
	scanf("%d",&Tercih);
	
	switch(Tercih) {
		
		case 1 :
			
			printf("Bakiyeniz : %d TL" ,Bakiye );
			printf("\nCekilecek Tutar : ");
			scanf("%d",&Tutar);
			
			if(Tutar > Bakiye) {
				
				printf("Yetersiz Bakiye");
				
				}
				else {
			
				Bakiye -= Tutar;
				printf("Cekilen Tutar : %d TL \nKalan Bakiye : %d TL" ,Tutar,Bakiye);
					}
			    break;
		
		case 2 :
			
				printf("Bakiyeniz : %d TL" ,Bakiye );
				printf("\nYatirilacak Tutar : ");
				scanf("%d",&Tutar);
				Bakiye += Tutar;
				printf("Yatýrýlan Tutar : %d TL \nBakiye : %d TL" ,Tutar,Bakiye);
			    break;
			    
		case 3 :
			
				printf("Bakiyeniz : %d TL" ,Bakiye );
				printf("\nHavale Miktari : ");
				scanf("%d",&Tutar);
			
				if(Tutar > Bakiye) {
				
				printf("Yetersiz Bakiye");
				
				}
				else {
			
				Bakiye -= Tutar;
				printf("Havale Miktari : %d TL \nKalan Bakiye : %d TL" ,Tutar,Bakiye);
					}
					
			    break;
		case 4 :
			
				printf("Bakiyeniz : %d TL" , Bakiye);
				break;   
		 
		case 5 :
			printf("Bizi Tercih Ettiginiz Icin Tesekkur Ederiz...");
			break;
			
	default: 
	
	printf("Gecersiz Islem");
			
	}
	 
	
	
}
