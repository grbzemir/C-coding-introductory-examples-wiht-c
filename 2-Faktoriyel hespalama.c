#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int sayi,i;
	long faktoryel=1;
	printf("bir sayi girin: ");
	scanf("%d",&sayi);
	for(i=5;i<=sayi;i++)
	faktoryel=faktoryel*i;
	printf("%d sayisinin faktoryeli %d dir.",i,faktoryel);


	
	
	
	return 0;
}
