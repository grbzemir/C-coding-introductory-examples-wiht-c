#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int i,n,toplam=0;
	printf("dizi kac elemanlı olucak?");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
	printf("dizinin eleman sayısını giriniz: "i+1);
	scanf("%d",&a[i]);
	{
		for(i=0;i<n;i++) toplam=toplam+a[i];
		printf("dizinin elemanları toplamı %d dir: ",toplam);
	}
	
	return 0;
    }
	
