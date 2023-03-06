#include<stdio.h>
#include<stdlib.h>

int main () {
    int i;
    int sayi;
    int sonuc;
    printf("asal sayi olup olmadigini bulmak istediginiz sayiyi giriniz: ");
    scanf("%d",&sayi);
    for(i=2;i<sayi;i++)
    {
        if(sayi%i==0)
        {
            sonuc=1;
        }
    }
    if(sonuc==1)
    {
        printf("asal sayi degildir.");
    }
    else
    {
        printf("asal sayidir.");
    }
    return 0;
}
