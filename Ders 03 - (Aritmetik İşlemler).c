#include <stdio.h>
/*
Haz�rlayan : Muhammed Erdin� - muhammederdinc.com
*/
int main () {
	
    int a = 5 , b=8 , a1=5 , b1=8; double c=8 , d =5;
	
	printf("%d \n",a+b);
	printf("%d \n",5+3);
	printf("%f \n" ,c/d);
	printf("%d \n" ,b%a);
	
	printf("A = %d\n",++a); // A y� �nce artt�r sonra ekrana yazd�r.
	printf("B = %d\n",b++); // B yi �nce ekrana yazd�r sonra artt�r.
	printf("C = %d\n",a1=b1); // B1 i A1 in i�ine aktar.
     a = 5 , b=8;
	printf("A += B = %d\n",a+=b); // B yi An�n i�ine at ve topla. A = 13 Olur.
	printf("%d",a);
	
	return 0;
	
	
}
