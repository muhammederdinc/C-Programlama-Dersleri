#include <stdio.h>
#define PI 3.14
/*
Haz�rlayan : Muhammed Erdin� - muhammederdinc.com 
*/
int main (){
	
	int yaricap;
    float hacim ;
	
	printf("Kurenin Yaricapini Giriniz : ");
	scanf("%d",&yaricap); // Kullan�c�dan veri giri�i almak i�in scanf kullan�l�r.
	
	hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap);
	printf ("Kurenin Hacmi : %f" ,hacim);
	
	return 0;

	

	
}

