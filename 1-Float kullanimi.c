#include <stdio.h>
#include <stdlib.h>



int main() {


//Turkce: 1.999
//Matematik: 3.998
//Sosyal Bilgiler: 1
//Fen Bilgisi: 2.999
//Taban: 100.160

float Turkce;
float matematik;
float fen;
float sosyal;
float taban;
float toplampuan;

taban=100.160;

printf("Turkce netiniz: ");
scanf("%f",&Turkce);

printf("Matematik netiniz: ");
scanf("%f",&matematik);

printf("fen bilgisi netiniz: ");
scanf("%f",&fen);

printf("sosyal bilgisi netiniz: ");
scanf("%f",&sosyal);

toplampuan=Turkce*1.999+matematik*3.998+fen*2.999+sosyal*1+taban;

printf("Ygs - 1 puan turunden sonucunuz: %f",toplampuan);


	
	return 0;
}
