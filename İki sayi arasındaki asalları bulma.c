#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {

int sayi1;
int sayi2;

printf("lütfen ilk sayiyi girini:\n");
scanf("%d", &sayi1);
printf("lütfen ikinci sayiyi girini:\n");
scanf("%d", &sayi2);

int i;
int j;

for(i=sayi1; i<=sayi2; i++)
{
    if(i==1)
    {
        continue;
    }
    for(j=2; j<i; j++)
    {
        if(i%j==0)
        {
            break;
        }
    }
    if(i==j)
    {
        printf("%d", i);
    }
}

return 0;
}