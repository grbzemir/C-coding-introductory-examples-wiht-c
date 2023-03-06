#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stddef.h>
#include<conio.h>
#include<string.h>

int main () 
{
 int adet;

 int sayac=0;

 int toplam=0;

 int i;
 
 system("color 0a");

 printf("lütfen kontrol edilecek n sayisini giriniz:");

 scanf("%d", &adet);

if(adet <=0)  //1'den küçük sayi ise eger islem sonlanır

{

{
    printf("lütfen 0 dan büyük bir sayi giriniz:");
    scanf("%d", &adet);
}

   getch();  // girilen karakteri ekrana yazdırmaz
   return 0;

}


{

for(i=1;i<=adet;i++) 
{

{


if(i%2==1)
{

    toplam=toplam+i;
    sayac++;
}

}


printf("1'den %d 'e kadar olan tek sayilarin toplami: %d",  toplam);
printf("ortalama= %d", toplam/sayac);

getch();

return 0;

}

}

}
