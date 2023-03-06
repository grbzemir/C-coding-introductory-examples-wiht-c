#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main () {
    // decimal sayiyi binary sayiya cevirme;

    int sayi;
    int i;
    int ikilik;

    printf("lütfen bir sayi giriniz: \n");
    scanf("%d", &sayi);

    for(i=0; sayi>0; i++)
    {
        ikilik = sayi%2;
        sayi = sayi/2;
        printf("%d", ikilik);
    }

    return 0;
}