#include <stdio.h>
#include <stdlib.h>


int main() {
	 
	 int bagaj,el,fark1,fark2,girilen1,girilen2,para;
	 bagaj=20;
	 el=15;
	 girilen1=45;
	 girilen2=40;
	 fark1=girilen1-bagaj;
	 fark2=girilen2-el;
	 para=5*(fark1+fark2);
	 
	 printf("ucret: %d",para);
	 
	return 0;
}
