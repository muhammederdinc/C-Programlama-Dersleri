#include <stdio.h>
#include <conio.h>
/*
Hazýrlayan : Muhammed Erdinç - muhammederdinc.com
*/
int main(){
	/* Örnek Açýklamasý :
	Kullanýcýdan 9 adet sayý istenmektedir.Kullanýcýnýn girdiði sayýlar doðrultusunda yatayda ve dikeyde tablo geniþliði deðerinde girilen sayý kadar tablolar oluþturulmaktadýr.
	for döngüsünü anlamak için güzel bir örnek. Baþarýlar :)
	*/
	int j,i,a,satir,sutun,kackere,aralik;//iþe yarayacak deðiþkenler tanýmý
	int sayilar[9];//kulanýcýdan aldýðým sayýlarý diziye atmayý düþündüm daha basit kulanabileyim diye
	int tut[9];//ilk dizimi kulandýðým yerlerde bi kaç deðiþiklik olacaðýndan diziyi buraya yedekleyip kulanmaktayým
	int tablogenislik;
	int dizimax;//dizinin en buyuk deðiþkenini atayacaðým
	tekr:
	printf("50 den kucuk 9 tane sayi gir (aralarina bosluk koyarak):");
	scanf("%d %d %d %d %d %d %d %d %d",&sayilar[0],&sayilar[1],&sayilar[2],&sayilar[3],&sayilar[4],&sayilar[5],&sayilar[6],&sayilar[7],&sayilar[8],&sayilar[9]);
	
	for(i=0;i<9;i++){
		if(sayilar[i]>=50 || sayilar[i]<=0){
			printf("Girdigin degerlerden biri hatali\n");
			goto tekr;
		
		}
			
		
	}
	dizimax=sayilar[0];
	for(a=1;a<10;a++){
		if(sayilar[a]>dizimax){
		
		dizimax=sayilar[a];
		}
		
	}//dizimizin en büyük sayýsýný bulduk ileri kodlarda lazým olacaktýr
	
	tablosec:
	printf("Tablo genisligini seciniz:(1,3,5 yada 7 seciniz):");
	scanf("%d",&tablogenislik);
	if(tablogenislik ==1 || tablogenislik ==3 || tablogenislik ==5 || tablogenislik ==7){
	
		
	}
	else{
		goto tablosec;//tablo deðerini yanlýþ girerse tekrar istemekteyim onu 2-3 ust satýra döndürmekteyim
	}
	for(a=0;a<9;a++){
		tut[a]=sayilar[a];
	}
	printf("\n\nYATAY TABLO\n");
	for(kackere=0;kackere<9;kackere++){//belli koþullarla tabloyu tasarlamaktayým el ile tasarlamaktan kaçýndým biraz karmaþýk oldu ama sonuc çalýþtý
		eksi(dizimax);
		aralik=dizimax-sayilar[kackere];
		for(satir=0;satir<tablogenislik;satir++){
			
			if(tablogenislik==1){
				if(sayilar[kackere]<10)
				printf(" %d|",sayilar[kackere]);
				else
				printf("%d|",sayilar[kackere]);	
			}
			
			else if(tablogenislik==3 && satir==1){
				if(sayilar[kackere]<10)
				printf(" %d|",sayilar[kackere]);
				else
				printf("%d|",sayilar[kackere]);	
			}
			
			else if(tablogenislik==5 && satir==2){
				if(sayilar[kackere]<10)
				printf(" %d|",sayilar[kackere]);
				else
				printf("%d|",sayilar[kackere]);
			}
			
			else if(tablogenislik==7 && satir==3){
				if(sayilar[kackere]<10)
				printf(" %d|",sayilar[kackere]);
				else
				printf("%d|",sayilar[kackere]);
			}
			else{
				printf("  |");
			}
			
			for(sutun=0;sutun<sayilar[kackere];sutun++){
			
				printf("*");
			}
			bosluk(aralik);
			printf("\n");
		}
	}
	eksi(dizimax);
	printf("\n\nDIKEY TABLO\n");
	int sayac=1;
	eksi2(tablogenislik);
		for(satir=0;satir<dizimax;satir++){
			
			for(i=0;i<9;i++){
			
				if(sayilar[i]<dizimax){
				bosluk2(tablogenislik);	
				sayilar[i]++;
				sayac++;
					
				}
				else{
					printf("|");
					for(a=0;a<tablogenislik;a++){
					
					printf("*");
					}
				}
			}
			printf("|\n");	
			
		}
		eksi2(tablogenislik);
			if(tablogenislik==1){
				
			for(j=0;j<9;j++){
				if(tut[j]>=10){
					printf(" %d",tut[j]/10);
					
				}
				else{
					printf(" %d",tut[j]);
				}
			}
			printf("\n");
				for(j=0;j<9;j++){
				if(tut[j]>=10){
					printf(" %d",tut[j]%10);
					
				}
				else{
					printf("  ");
				}
			}
				
			}
		
			else if(tablogenislik==3){
			
				if(tut[0]>=10){
					printf("  %d",tut[0]/10);	
						
					}
					else{
						printf("  %d",tut[0]);
					}
				for(j=1;j<9;j++){
					
					if(tut[j]>=10){
						printf("   %d",tut[j]/10);	
						
					}
					else{
						printf("   %d",tut[j]);
					}
					
				}
				printf("\n");
				
				if(tut[0]>=10){
					printf("  %d",tut[0]%10);	
						
					}
					else{
						printf("   ");
					}
				for(j=1;j<9;j++){
					
					if(tut[j]>=10){
						printf("   %d",tut[j]%10);	
						
					}
					else{
						printf("    ");
					}
					
				}
			}
			else if(tablogenislik==5){
					if(tut[0]>=10){
					printf("   %d",tut[0]/10);	
						
					}
					else{
						printf("   %d",tut[0]);
					}
				for(j=1;j<9;j++){
					
					if(tut[j]>=10){
						printf("     %d",tut[j]/10);	
						
					}
					else{
						printf("     %d",tut[j]);
					}
					
				}
				printf("\n");
				
				if(tut[0]>=10){
					printf("   %d",tut[0]%10);	
						
					}
					else{
						printf("    ");
					}
				for(j=1;j<9;j++){
					
					if(tut[j]>=10){
						printf("     %d",tut[j]%10);	
						
					}
					else{
						printf("      ");
					}
					
				}
				
				
			}
			
			else if(tablogenislik==7){
					if(tut[0]>=10){
					printf("    %d",tut[0]/10);	
						
					}
					else{
						printf("    %d",tut[0]);
					}
				for(j=1;j<9;j++){
					
					if(tut[j]>=10){
						printf("       %d",tut[j]/10);	
						
					}
					else{
						printf("       %d",tut[j]);
					}
					
				}
				printf("\n");
				
				if(tut[0]>=10){
					printf("    %d",tut[0]%10);	
						
					}
					else{
						printf("     ");
					}
				for(j=1;j<9;j++){
					
					if(tut[j]>=10){
						printf("       %d",tut[j]%10);	
						
					}
					else{
						printf("        ");
					}
					
				}
				
				
			}
}
/*


BELLÝ BÝRKAÇ ÝÞLEMÝ FONKSÝYONLARLA YAPTIM ÝSTEDÝÐÝM ZAMAN ÝSTEDÝÐÝM YERDE ÇAÐIRABÝLEYÝM DÝYE BÖYLE BÝÞÝ DENEDÝM


*/
int eksi(int  gelen){
	int s;
	printf("  +");
	for(s=0;s<gelen;s++){
		printf("-");
	}
	printf("+\n");
	
}
int bosluk(int  gelen){
	int s;
	for(s=0;s<gelen;s++){
		printf(" ");
	}
	printf("|");
	
}

int eksi2(int gelen){
	int s,a;
	for(a=0;a<9;a++){
	
		printf("+");
		for(s=0;s<gelen;s++){
			printf("-");
		}
		
	}
	printf("+\n");
}

int bosluk2(int  gelen2){
	int s;
	printf("|");
		
		for(s=0;s<gelen2;s++){
			printf(" ");
		}
	
}







