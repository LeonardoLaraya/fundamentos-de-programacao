/*
1) Escreva um programa que receba um número inteiro
representando a quantidade total de segundos e, usando
passagem de parâmetros por referência, converta a
quantidade informada de segundos em Horas, Minutos e
Segundos. Imprima o resultado da conversão no formato
HH:MM:SS. Utilize o seguinte protótipo da função:

void converteHora(int total_segundos, int* hora, int* min, int* seg)
*/

#include <stdio.h>
#include <stdlib.h>



void converteHora(int total_segundos, int* hora, int* min, int* seg){





}//void



int main(){

    int total_segundos;
    int hora;
    int min;
    int seg;
    
    printf("escreva os segundos:");
    scanf("%d",&total_segundos);

    converteHora(&total_segundos);




    return 0;
}//main