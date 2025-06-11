/*
Um problema típico em ciência da computação consiste em converter um número da sua forma decimal para binária.
 Crie um algoritmo recursivo para resolver esse problema.

●Solução trivial: x=0 quando o número inteiro já foi convertido para binário

●Passo da recursão: saber como x/2 é convertido. Depois, imprimir um dígito (0 ou 1) dado o sucesso da divisão.
*/

#include <stdio.h>
#include <stdlib.h>

int conversor(int x){
    if (x > 0) {
        conversor(x / 2);  
        printf("%d", x % 2);        
    }//if
}//conversor

int main(){
    int numero;

    printf("Digite um número decimal para converter em binário: ");
    scanf("%d", &numero);

    if (numero == 0) {
        printf("0");  // Caso especial para 0
    } else {
        conversor(numero);
    }//if

    
    return 0;
}//main
