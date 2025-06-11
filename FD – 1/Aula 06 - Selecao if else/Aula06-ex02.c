/*
2) Faça um programa que receba um número e determine
se ele é um número par ou ímpar.
-Obs.: Utilize o operador % que retorna o resto da divisão)
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int numero;

    printf("vamos descobrir se o valor e par ou impar\ndigite um valor:");
    scanf("%d",&numero);

    if(numero % 2 != 0){
        printf("esse numero e IMPAR\n");
    
    }else{
        printf("esse numero e PAR\n");

    }   

return 0;
}//main
