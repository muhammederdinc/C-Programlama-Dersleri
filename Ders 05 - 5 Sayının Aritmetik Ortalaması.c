# include <stdio.h>
/*
Haz�rlayan : Muhammed Erdin� - muhammederdinc.com
*/
int main () {
	
	int a,b,c,d,e;
	
	float aritmetik;
	
	printf("5 Sayi Giriniz :"); // 5 Say�n�n ortalamas�n� hesaplayan program.Say�lar aras�nda her bo�luk farkl� say�y� temsil eder.
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	aritmetik = (a+b+c+d+e)/5;
	
	printf("Aritmetik Ortalama : %.2f" , aritmetik);
	
	return 0;	
	
	
}
