#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int i;
    
    int sayi;

    int faktoryel=1;

    printf("faktoryeli alıncak sayıyı giriniz:");
    scanf("%d",&sayi);

    for(i=1;i<=sayi;i++)

    {

        faktoryel=faktoryel*i;

    }

    printf("sonuc: %d",faktoryel);


    return 0;

}
