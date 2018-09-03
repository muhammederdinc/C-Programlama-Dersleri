#include <stdio.h>
/*
Hazýrlayan : Muhammed Erdinç - muhammederdinc.com
*/
int main () {
	
    int a = 5 , b=8 , a1=5 , b1=8; double c=8 , d =5;
	
	printf("%d \n",a+b);
	printf("%d \n",5+3);
	printf("%f \n" ,c/d);
	printf("%d \n" ,b%a);
	
	printf("A = %d\n",++a); // A yý önce arttýr sonra ekrana yazdýr.
	printf("B = %d\n",b++); // B yi önce ekrana yazdýr sonra arttýr.
	printf("C = %d\n",a1=b1); // B1 i A1 in içine aktar.
     a = 5 , b=8;
	printf("A += B = %d\n",a+=b); // B yi Anýn içine at ve topla. A = 13 Olur.
	printf("%d",a);
	
	return 0;
	
	
}
