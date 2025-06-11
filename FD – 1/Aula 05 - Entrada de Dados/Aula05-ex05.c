#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int main(){

    int valor;
    float raiz;

    printf("digite um numero inteiro para calcular a raiz:");
    scanf("%i",&valor);

   raiz = sqrt(valor);
   printf("A raiz de %i e: %.2f",valor,raiz);
 

return 0;
}//main