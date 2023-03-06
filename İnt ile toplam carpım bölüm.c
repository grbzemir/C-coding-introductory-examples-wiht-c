#include<stdio.h>
#include<stdlib.h>
    int main () {
        int sayi1,sayi2,toplam,cikarma,carpma;
        printf("sayi1:");
        scanf("%d",&sayi1);
        printf("sayi2:");
        scanf("%d",&sayi2);
        toplam=sayi1+sayi2;
        cikarma=sayi1-sayi2;
        carpma=sayi1*sayi2;
        printf("toplam: %d",toplam);
        printf("cikarma: %d",cikarma);
        printf("carpma: %d",carpma);
        return 0;
    }