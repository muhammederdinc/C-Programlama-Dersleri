#include <stdio.h>
/*
Hazýrlayan : Muhammed Erdinç - muhammederdinc.com
*/
int main() {
int not1,not2,not3,sonuc;

printf("Birinci Notunuz : ");
scanf("%d",&not1);
printf("Ikinci Notunuz :");
scanf("%d",&not2);
printf("Ucuncu Notunuz :");
scanf("%d",&not3);

sonuc = ((not1*0.30) + (not2*0.30) + (not3*0.40));

if(not1>=0 && not1<=100 && not2>=0 && not2<=100 && not3>=0 && not3<=100) {

if (sonuc>=35) { 
	
	printf("Tebrikler Sinifi Gectiniz Ortalamaniz: %d",sonuc);
	
	
}

else {
	
	printf("Ne Yazikki Kaldiniz Ortalamaniz : %d",sonuc);
	
}
}

else {
	
	printf("Girilen Not Araligi 0-100 Olmalidir");
	
}









return 0;
}
 
