/*
1) Faça um programa que leia e armazene dois vetores de
tamanho 5. Ao final o programa deve calcular e exibir o vetor
soma; 
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int valores1 [5];
    int valores2 [5];
    int resultados [5];
    int i;

    printf("vamos fazer a some de duas colunas de numemos\n");
    
    printf("coluna 1:\n");

    for ( i = 1; i < 6; i++){//salva os valores do vetor 1
        printf("valor %i:\n",i);
        scanf("%i" ,&valores1[i]);
    }//for

    printf("coluna 2:\n");

    for ( i = 1; i < 6; i++){//salva os valores do vetor 2
        printf("valor %i:\n",i);
        scanf("%i" ,&valores2[i]);
    }//for

    printf("a soma das duas colunas e:\n");

    for ( i = 1; i < 6; i++){//soma cada linha dos dois vetores e mostra o resultado
         resultados[i] = valores1[i] + valores2[i];
        printf("resultado da soma dos valores %i e igual a %i\n",i,resultados[i]);
    }//for
    
return 0;
}//main