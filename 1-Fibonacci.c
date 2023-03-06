#include <stdio.h>
#include<stdlib.h>


int fibonacci(int n);

void main () 
{
int sayi;
int sonuc;


printf("fibonacci dizisinin kacinci elamanı hesaplancak.");
scanf("%d",&sayi);

sonuc=fibonacci(sayi);

printf("fibonacci dizisinin %d elemanı %d dir.",sayi,sonuc);

}

int fibonacci(int n) 

{
    
if (n==0) 
return 0;

else if (n==1) 

return 1;

else return 
fibonacci(n-1)+fibonacci(n-2);

}
 

   





