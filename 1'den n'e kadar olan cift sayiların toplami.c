#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main () {
    int adet;
    int sayac=0;
    int toplam=0;
    int i;
    
    system("color 0a");
    printf("lütfen kontrol edilecek n sayisini giriniz:");
    scanf("%d", &adet);

    if(adet<=1)
    {
        printf("lütfen 1'den büyük bir sayi giriniz:");
        scanf("%d", &adet);
        getch();
        return 0;
    }
    
    for(i=1;i<=adet;i++)
    {
        if(i%2==0)
    {
        toplam=toplam+i;
        sayac++;
    }
    }
    printf("1'den %d 'e kadar olan cift sayilarin toplami: %d",  toplam);
    printf("ortalama= %d", toplam/sayac);

    getch();
    return 0;
}