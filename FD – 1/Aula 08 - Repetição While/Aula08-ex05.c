/*
5) Faça um programa que receba um número real, calcule e
exiba o quadrado dele. O programa deverá repetir esse
procedimento para 10 números, um de cada vez.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    float numero;
    float resultado;
    int i = 1;

    while(i <= 10){

        printf("digite um numero para calcular ele ao quadrado:\n");
        scanf("%f",&numero);
        resultado = pow(numero, 2);
        printf("(%i)resultado:%.2f \n",i,resultado);
        i++;
    }
return 0;  
}//main