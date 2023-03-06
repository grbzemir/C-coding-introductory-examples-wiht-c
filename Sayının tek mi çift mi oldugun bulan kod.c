#include<stdio.h>
#include<stdlib.h>
void main() {
    int a;
    printf("sayi giriniz:");
    scanf("%d",&a);

    if(a%2==0)
    printf("sayi cifttir");
    else
    {
        printf("sayi tektir");

    }
}
    
    int main() {
        int sayi1,sayi2,sayi3;
        printf("sayi1:");
        scanf("%d",&sayi1);
        printf("sayi2:");
        scanf("%d",&sayi2);
        printf("sayi3:");
        scanf("%d",&sayi3);
        if(sayi1>sayi2 && sayi1>sayi3)
        
            printf("sayi1 en buyuktur");
        else if (sayi2>sayi1 && sayi2>sayi3)
        
        
            printf("sayi2 en buyuktur");

        
        else
        
            printf("sayi3 en buyuktur");

        
         return 0;
    }