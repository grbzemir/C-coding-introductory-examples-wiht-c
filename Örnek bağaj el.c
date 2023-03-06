#include<stdio.h>
#include<stdlib.h>
int main () {
    int bagaj,el,fark1,fark2,ucret;
    printf("bagaj:");
    scanf("%d",bagaj);
    printf("el:");
    scanf("%d",el);
    if(bagaj>20 && el>8)
    {
        fark1=bagaj-20;
        fark2=el-8;
        ucret=fark1*10+fark2*5;
        printf("ucret: %d",ucret);
    }
    else
    {
        printf("iyi yolculuklar");
    }
    return 0;
}