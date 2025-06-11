#include<stdio.h>
#include<stdlib.h>

/*
Faça um programa com 2 variáveis, A e B, onde A terá
o valor 40 e B terá o valor -1. Imprima o valor de A+B, A-B,
AxB e A/B. Em seguida, faça B incrementar de uma
unidade e repita as 4 operações. 
*/

int main(){
  
   int A = 40;
   int B = -1;

   printf("valor de A+B = %i\n",(A+B));
   printf("valor de A-B = %i\n",(A-B));
   printf("valor de AxB = %i\n",(A*B));
   printf("valor de A/B = %i\n",(A/B));

   B++;// incremento adiciona 1 para a variavel B
   
   printf("valores apos incremento de B\n");
   printf("valor de A+B = %i\n",(A+B));
   printf("valor de A-B = %i\n",(A-B));
   printf("valor de AxB = %i\n",(A*B));
   printf("valor de A/B = %i\n",(A/B));


return 0;
}//main