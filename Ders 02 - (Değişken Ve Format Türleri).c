#include <stdio.h>
 /*
Hazýrlayan : Muhammed Erdinç - muhammederdinc.com
*/
int main () {

int a1 = 47 ;   // Ýnteger deðer girmek için kullanýlýr. (%d)
char b1 = 'M' ;   // Char tek bir karakter girmek için kullanýlýr (%c)
char b2 = 66 ;   // Ascýý kodunda 66 ya denk gelen karakter ekrana yazýlýr.
float c1 = 4.2 ; // Ondalýklý sayýlarý yazmak için kullanýlýr. (%f)
double d1 = 0.02 ; // Ondalýklý sayýlarý yazmak için kullanýlýr. (%f)

printf("%d %d %c %.1f %.2f\n", a1 , b1 , b2 , c1 , d1); // ekrana yazdýrma komutu.


printf("%d Byte \n",sizeof(int));   // Ýnt deðerinin kaç byte yer tuttuðunu ekrana yazdýrýr.
printf("%d Byte \n",sizeof(double));  //Double deðerinin kaç byte yer tuttuðunu ekrana yazdýrýr. 



return 0;
}
