#include <stdio.h>

int faktoriyel(int n);
void main() {
int sayi,sonuc;
printf("faktoriyeli hesaplancak olan sayiyi giriniz:");
scanf("%d",&sayi);
sonuc=faktoriyel(sayi);
printf("%d sayısının faktoriyeli %d dir.",sayi,sonuc);
}
int faktoriyel(int n){
if(n<=1)return 1;
else return n*faktoriyel(n-1);
}

