# include <stdio.h>
# include <math.h>
/*
Haz�rlayan : Muhammed Erdin� - muhammederdinc.com
*/
int main () {
	// Girilen denklemin k�klerini bulan c program�.
	int a,b,c;
	float delta, x1 ,x2;
	
	printf("a Sayisini Giriniz :");
	scanf("%d",&a);
	printf("b Sayisini Giriniz :");
	scanf("%d",&b);
	printf("c Sayisini Giriniz :");
	scanf("%d",&c);
	
	delta = b*b-4*a*c;
	
	x1 = (-b + (sqrt(delta)) )/ 2*a;
	
	x2 = (-b - (sqrt(delta)) )/ 2*a;
	
	printf ("Birinci Kok : %.2f  Ikinci Kok : %.2f",x1,x2);
	
	return 0;
	
}
