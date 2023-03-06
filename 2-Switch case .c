#include <stdio.h>
#include<stdlib.h>

int main() {
    int sayi1,sayi2,sonuc;
    char islem;
    sayi1=85;
    sayi2=25;
    printf("islemi giriniz:");
    scanf("%s",&islem);
    switch(islem)
    {
       case '+' : sonuc=sayi1+sayi2;
       printf("sonuc: %d",sonuc);
       break;
       case '-' : sonuc=sayi1-sayi2;
       printf("sonuc: %d",sonuc);
       break;
       case '*' : sonuc=sayi1*sayi2;
       break;
       case '/' : sonuc=sayi1/sayi2;
       default: printf("hatalı giriş yaptınız");
    }
       return 0;

}