# include <stdio.h>
/*
Hazýrlayan : Muhammed Erdinç - muhammederdinc.com
*/
int main () {
	
	int a,b,c,d,e;
	
	float aritmetik;
	
	printf("5 Sayi Giriniz :"); // 5 Sayýnýn ortalamasýný hesaplayan program.Sayýlar arasýnda her boþluk farklý sayýyý temsil eder.
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	aritmetik = (a+b+c+d+e)/5;
	
	printf("Aritmetik Ortalama : %.2f" , aritmetik);
	
	return 0;	
	
	
}
