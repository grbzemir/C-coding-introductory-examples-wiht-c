#include<stdio.h>
#include<stdlib.h>


int main ()
{
    float sayi;
    float toplam;
    system("color 74");
    printf("Bir sayi giriniz: ");
    scanf("%f",&sayi);

    int i;

    for (i=1;i<=sayi; i++)
    {
        toplam=(2.0/i)+toplam;
    }

    printf("Toplam: %f",toplam);

    return 0;
}