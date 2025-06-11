/*
6) Faça um programa que receba um número real, calcule e
exiba o quadrado dele. O programa deverá calcular o quadrado
de vários números e finalizar quando for digitado um número
negativo ou zero.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    setbuf(stdin,NULL);

    float numero = 1;
    float resultado;

    while(numero > 0 ){

        printf("digite um numero para calcular ele ao quadrado:\n");
        scanf("%f",&numero);
        resultado = pow(numero, 2);
        printf("resultado :%.2f\n",resultado);
        printf("para sair digite 0 ou um numero menor\n");
        
    }//while
return 0;  
}//main

