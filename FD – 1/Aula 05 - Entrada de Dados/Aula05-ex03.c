#include<stdio.h>
#include<stdlib.h>


/*
Tendo como entrada de dados o total vendido por um
funcionário no mês, calcule a sua comissão e o salário bruto no
mês. Para isso, considere um salário base de R$1.200,00 e
comissão de 10% sobre o total vendido
*/



int main(){

   float valor_vendido =0;
   int salario_base =1200;
   float comissao;
   float salario_total;

   printf("valor total vendido no mês?");
   scanf("%f" ,&valor_vendido);

   comissao = valor_vendido/ 100 * 10;
   salario_total = comissao + salario_base;

   printf("salario total recebido pelo funcionario no mês é de %.2f reais\n", salario_total);
   



return 0;
}//main