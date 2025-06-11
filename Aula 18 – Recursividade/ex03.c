/*
Crie uma função que retorne o fatorial de um número passado por parâmetro.

fatorial(n):

=1 se n=0

= n x fatorial (n-1) se n>0
*/

#include<stdio.h>
#include<stdlib.h>

int recursividade(int numero){

    if (numero == 1){
        return 1;
    }else{
        return numero * recursividade(numero - 1);
    }//else
    
}//recursividade



int main(){

    int numero;

    printf("digite um numero para achar o fatorial dele:");
    scanf("%d",&numero);

    int resposta = recursividade(numero);

    printf("%d",resposta);

    return 0;
}//main