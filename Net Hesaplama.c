#include <stdio.h>
#include <stdlib.h>



int main() {
	
	
	float Turkce,matematik,fen,sosyal,taban,toplam;
	taban=150.67;
	
	printf("Turkce netiniz: ");
	scanf("%f",&Turkce);
	
	printf("matematik netiniz: ");
	scanf("%f",&matematik);
	
	printf("fen netiniz: ");
	scanf("%f",&fen);
	
	printf("sosyal netiniz: ");
	scanf("%f",&sosyal);
	
	toplam=Turkce*1.999+matematik*3.998+fen*2.999+sosyal*1+taban;
	printf("yks s�nav sonucu turunde puan: %f",toplam);
	
	return 0;
}
