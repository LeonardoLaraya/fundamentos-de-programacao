/*
7) Faça um programa que calcule o fatorial de um número a ser
digitado
*/

#include <stdio.h>
#include <stdlib.h>

int main (){

    int numero;
    int fatorial = 1;
    int i = 1;

    printf ("Digite um numero para calcular o fatorial: ");
    scanf ("%i", &numero);

        if (numero < 0){
        printf ("Nao existe fatorial de numero negativo.\n");
        }//if


           
            while (i <= numero){
            fatorial = fatorial * i;
            i++;
            }//while

    printf ("O fatorial de %i e: %i\n", numero, fatorial);

    return 0;
}