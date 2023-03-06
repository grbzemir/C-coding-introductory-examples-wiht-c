#include <stdio.h>

void main(){
     int i, j;

     for (i=1; i <= 5; i++){
          for (j=1; j <= 5; j++){
               printf("%d x %d : %d\t",i, j, i*j);
          }
          printf("\n");
     }
}



#include <stdio.h>

void main(){
     int i=1;

     while(i <= 5){
          int j=1;
          while(j <= 5){
               printf("%d x %d : %d\t",i, j, i*j);
               j++;
          }
          printf("\n");
          i++;
     }
}



#include <stdio.h>
void carpimTablosu(){
     for (int i=1; i <= 5; i++){
         for (int j=1; j <= 5; j++){
             printf("%d x %d : %d\t",i, j, i*j);
         }
         printf("\n");
     }
 }

 int main(){    
     carpimTablosu();
 }