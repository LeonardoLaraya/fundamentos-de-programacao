/*
Faça uma função recursiva que retorne o n-ésimo termo da sequência de Fibonacci,
sendo que n é recebido por parâmetro. Utilize essa função para desenvolver um programa que mostre no main()
os n termos dessa sequência na tela, a partir do valor de n recebido pelo teclado.
Sabe-se que o 1º termo é 0 e o 2º termo é 1.
*/

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int numero){
    if (numero == 1) {
        return 0;  
    } else if (numero == 2) {
        return 1; 
    } else {
        return fibonacci(numero - 1) + fibonacci(numero - 2);
    }//if
}//fibonacci


int main(){
    int numero;

    printf("Digite um número para calcular a sequência de Fibonacci: ");
    scanf("%d", &numero);

    printf("Sequência de Fibonacci com %d termos:\n", numero);
    for (int i = 1; i <= numero; i++) {
        printf("%d \n ", fibonacci(i));
    }//for

    return 0;
}//main