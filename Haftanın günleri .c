#include<stdio.h>
#include<stdlib.h>


int main ()
{

int gun;

system("color 0a");
printf("haftanin gunlerini yazdirma\n");
printf("1-7 araliginda bir deger giriniz: \n");
scanf("%d",&gun);


switch(gun)
{

case 1:
printf("Pazartesi");
break;

case 2:
printf("Sali");
break;

case 3:
printf("Carsamba");
break;

case 4:
printf("Persembe");
break;

case 5:
printf("Cuma");
break;

case 6:
printf("Cumartesi");
break;

case 7:
printf("Pazar");
break;

default:
printf("1-7 aralıgında bir deger giriniz");
}



    return 0;
}