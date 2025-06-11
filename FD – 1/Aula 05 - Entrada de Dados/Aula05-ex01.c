#include<stdio.h>
#include<stdlib.h>


/*
Faça um programa que receba a altura de uma pessoa e
calcule e exiba seu peso ideal utilizando a seguinte:
peso ideal = 72.7 x altura – 58
*/



int main(){

   float altura =0;
   float peso =0;
   


   printf("vamos calcular o seu peso ideal, qual a sua altura?");
   scanf("%f" ,&altura);

   peso = 72.7 * altura - 58;

   printf("seu peso ideal de acordo com a sua altura é: %.2f",peso);


return 0;
}//main