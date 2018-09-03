#include <stdio.h>
#define PI 3.14
/*
Hazýrlayan : Muhammed Erdinç - muhammederdinc.com 
*/
int main (){
	
	int yaricap;
    float hacim ;
	
	printf("Kurenin Yaricapini Giriniz : ");
	scanf("%d",&yaricap); // Kullanýcýdan veri giriþi almak için scanf kullanýlýr.
	
	hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap);
	printf ("Kurenin Hacmi : %f" ,hacim);
	
	return 0;

	

	
}

