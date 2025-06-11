/*
4) Faça um programa que calcule o imposto de renda a ser
pago tendo como entrada o salário de um empregado. O
imposto deve ser calculado da seguinte maneira:

imposto = salário x alíquota – parcela da dedução
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

float salario;
float liquota;
float parcela;
float imposto;

printf("para calcular seu imposto de renta digite sua renda:");
scanf("%f",&salario);
//entrada com valor do salario 

if(salario < 1903.98){
    printf("isento de imposto");

}else if(salario > 1903.99 && salario < 2826.65){
    liquota = 0.075;
    parcela = 142.80;
    imposto = salario * liquota - parcela;
    printf("Imposto a ser pago: %.2f", imposto);

}else if(salario >2826.66 && salario < 3751.05){
    liquota = 0.15;
    parcela = 354.80;
    imposto = salario * liquota - parcela;
    printf("Imposto a ser pago: %.2f", imposto);

}else if(salario >3751.06 && salario < 4664.68){
    liquota = 0.225;
    parcela = 636.13;
    imposto = salario * liquota - parcela;
    printf("Imposto a ser pago: %.2f", imposto);

}else if(salario > 4664.68){
    liquota = 0.275;
    parcela = 869.36;
    imposto = salario * liquota - parcela;
    printf("Imposto a ser pago: %.2f", imposto);

}//else if

return 0;
}//main