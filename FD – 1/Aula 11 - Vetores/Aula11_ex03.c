/*
3) Leia um vetor A com 10 elementos inteiros correspondentes
as idades de um grupo de pessoas. Escreva um programa que
conte e exiba a quantidade de pessoas que possuem idade
superior a 35 anos.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int idades[10];
    int quantidade_maior35 =0;

    for (int i = 0; i < 10; i++){
        printf("digite a idade %i:",i);
        scanf("%i",&idades[i]);

        if (idades[i] >35){
            quantidade_maior35++;
        }//if        

    }//for
    
    printf("a quantidade de pessoas mais velhas que 35 e:%i\n",quantidade_maior35);

return 0;
}//main