
#include <stdio.h>
#include <stdlib.h>

/*Declare duas variáveis inteiras A e B e atribua valores
diferentes. Em seguida, efetue a troca dos valores de forma
que, a variável A passe a possuir o valor da variável B, e que a
variável B passe a possuir o valor da variável A. Apresente os
valores iniciais e finais de A e B.*/

int main(){

   int a = 20;
   int b = 30;
   int troca;

   printf("o valor de a é %d\n", a);
   printf("o valor de b é %d\n", b);
   
   troca = a;
   a = b;
   b = troca;
   printf("aperte uma tecla para modificar os valores");
   getchar();
   printf("o novo valor de a é %d\n", a);
   printf("o novo valor de b é %d\n", b);

      
}