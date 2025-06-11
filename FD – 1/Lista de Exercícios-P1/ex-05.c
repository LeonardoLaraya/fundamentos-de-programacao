/*
5) Faça um programa que receba 2 números referentes ao numerador e denominador de uma fração
 e informe se é uma fração própria, imprópria, ou aparente

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numerador;
    int denominador;

    printf("digite uma fracao para classifica-la ex(1/2):"); 
    scanf("%i/%i",&numerador,&denominador);

    if(denominador == 0){
        printf("o denominador nao pode ser 0");
    }else{

        if(numerador % denominador == 0){
            printf("e uma fracao aparente");
        }else if(numerador >= denominador){
            printf("e uma fracao impropria\n");
        }else if(numerador < denominador){
            printf("e uma fracao propria\n");
        }
    }
return 0;
}//main
