/*
4) Crie e inicialize um vetor de inteiros de tamanho 8. Faça a
soma dos seus elementos, e apresente o resultado. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int valores[8];
    int soma = 0;

    for (int i = 0; i < 8; i++){
        printf("digite o valor %i:",(i+1));
        scanf("%i",&valores[i]);
    }//for

    for(int i = 0; i < 8; i++){
        soma = soma + valores[i];
    }//for
    printf("a soma dos 8 numeros e:%i\n",soma);

return 0;
}//main