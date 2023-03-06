#include<stdio.h>
#include<stdlib.h>

int main() {

    int s1,s2,s3;
    float ortalama;
    printf("1.sınav notu:");
    scanf("%d",&s1);
    printf("2.sınav notu:");
    scanf("%d",&s2);5
    printf("3.sınav notu:");
    scanf("%d",&s3);
    ortalama=(s1+s2+s3)/3;
    printf("ortlama: %f",ortalama);
    return 0;
}