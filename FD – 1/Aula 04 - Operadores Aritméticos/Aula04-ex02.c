#include <stdio.h>
#include <stdlib.h>
#include <math.h>//para sen, cos, log, raiz, elevado 

/*Uma conta de caderneta de poupança foi aberta com um
depósito de R$ 500,00. Imagine que esta conta é remunerada
em 1% de juros ao mês. Qual será o valor da conta após três
meses?

montante - capital * (1 + taxa) elevado tempo

*/

int main(){

   float capital = 500;//500 reais depositados 
   float taxa = 0.01;//taxa de juros 
   int meses = 3;//3 meses após deposito (int ja que a o dividendo só é valido apos 1 mês inteiro e não para 0,5 mês)
   float montante = 0;// valor total

   montante = capital * pow(1+taxa,meses);
   printf("O montante total é %.2f\n", montante);

   return 0;
}//main