#include <stdio.h>
#include <conio.h>
/*
Haz�rlayan : Muhammed Erdin� - muhammederdinc.com
*/
int main(){
	/* �rnek A��klamas� :
	Kullan�c�dan 9 adet say� istenmektedir.Kullan�c�n�n girdi�i say�lar do�rultusunda yatayda ve dikeyde tablo geni�li�i de�erinde girilen say� kadar tablolar olu�turulmaktad�r.
	for d�ng�s�n� anlamak i�in g�zel bir �rnek. Ba�ar�lar :)
	*/
	int j,i,a,satir,sutun,kackere,aralik;//i�e yarayacak de�i�kenler tan�m�
	int sayilar[9];//kulan�c�dan ald���m say�lar� diziye atmay� d���nd�m daha basit kulanabileyim diye
	int tut[9];//ilk dizimi kuland���m yerlerde bi ka� de�i�iklik olaca��ndan diziyi buraya yedekleyip kulanmaktay�m
	int tablogenislik;
	int dizimax;//dizinin en buyuk de�i�kenini atayaca��m
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
		
	}//dizimizin en b�y�k say�s�n� bulduk ileri kodlarda laz�m olacakt�r
	
	tablosec:
	printf("Tablo genisligini seciniz:(1,3,5 yada 7 seciniz):");
	scanf("%d",&tablogenislik);
	if(tablogenislik ==1 || tablogenislik ==3 || tablogenislik ==5 || tablogenislik ==7){
	
		
	}
	else{
		goto tablosec;//tablo de�erini yanl�� girerse tekrar istemekteyim onu 2-3 ust sat�ra d�nd�rmekteyim
	}
	for(a=0;a<9;a++){
		tut[a]=sayilar[a];
	}
	printf("\n\nYATAY TABLO\n");
	for(kackere=0;kackere<9;kackere++){//belli ko�ullarla tabloyu tasarlamaktay�m el ile tasarlamaktan ka��nd�m biraz karma��k oldu ama sonuc �al��t�
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


BELL� B�RKA� ��LEM� FONKS�YONLARLA YAPTIM �STED���M ZAMAN �STED���M YERDE �A�IRAB�LEY�M D�YE B�YLE B��� DENED�M


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







