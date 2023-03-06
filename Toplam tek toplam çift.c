#include <stdio.h>
#include <stdlib.h>

void main() {
int n,i,toplamcift,toplamtek=0;
printf("dizi kac elemanlı olacak?:");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++) {
printf("dizinin %d. elemanini giriniz:",i+1);
scanf("%d",&a[i]);
}
for (i=0;i<n;i++) if (i%2==0) toplamcift=toplamcift+a[i]; else toplamtek=toplamtek+a[i];
printf("dizinin tek ve cift elemanlarinin farkı %d dir.",toplamcift-toplamtek);
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
