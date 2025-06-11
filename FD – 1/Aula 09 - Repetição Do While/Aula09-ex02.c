/*
2) Faça um programa que receba valores enquanto eles estiverem no
intervalo de 500 a 1000. Ao receber um valor fora da faixa, o
programa deverá parar de solicitar valores, exibir quantos valores
válidos foram digitados e finalizar.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int valor;
    int i = -1 ;

     printf("digite valores de 500 a 1000\n");

    do{
        printf("digite:\n");
        scanf("%i",&valor);
        i++;
        //laço

    }while (valor >= 500 && valor <= 1000); 

       printf("foi digitado %i numeros validos\n",i);
    
}//main