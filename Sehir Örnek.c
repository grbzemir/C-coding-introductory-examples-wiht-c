#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char sehir[3][15];
	int i;
	for(i=0;i<3;i++) {
		printf("sehri giriniz %d",i+1);
		scanf("%d",sehir[i]);
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		printf("%d sehir nedir %s",i+1,sehir[i]);
	}

	return 0;
}
