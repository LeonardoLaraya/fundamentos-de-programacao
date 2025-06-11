/*
Considere a função X abaixo:

int X(int a){
  if(a <=0) return0;
  else return a + X(a-1);
}//X

O que essa função faz? Escreva uma função não-recursiva que resolve o mesmo problema.
*/

#include <stdio.h>
#include <stdlib.h>

int X(int a){

    if (a <= 0) return 0;  
    return a * (a + 1) / 2; 
}//x

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    int resultado = X(numero);
    printf("A soma dos primeiros %d números é: %d\n", numero, resultado);

    return 0;
}//main
