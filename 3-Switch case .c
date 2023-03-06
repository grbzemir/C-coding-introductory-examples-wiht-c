#include<stdio.h>
#include<stdlib.h>
int main() {
    int sayi1,sayi2,sonuc,tercih;
    sayi1=5;
    sayi2=10;
    printf ("matematik islemleri \n");
    print("1-Karede alan ve cevre hesabı yapan \n");
    printf("2-konsoldan girilen sayının kupunu bulan \n");
    printf("3-cemberde alana ve cevre hesabı yapan \n");
    printf("4-iki sayının toplamını bulan \n");
    printf("5-5x2+7x+9 x e gore islemin sonucu \n");
    printf("tercihinizi secin: ");
    scanf("%d",&tercih);

    switch(tercih)
{
    case 1:printf("karenin alanı: %d",(sayi1*sayi2));
    printf("karenin cevresi: %d",(sayi1*4));
    break;
    case 2:printf("kupunun alanı: %d",(sayi1*sayi1*sayi1));
    break;
}
     return 0;
}