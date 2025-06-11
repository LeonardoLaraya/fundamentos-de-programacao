/*
1) Crie um programa para armazenar 10 nomes em um vetor
e imprimir uma lista numerada
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char nomes[10][31];

    printf("digite 10 nomes\n");

    for(int i = 0; i < 10; i++){

        printf("nome %i:",(i+1));
        setbuf(stdin,NULL);
        fgets(nomes[i],31,stdin);
        nomes[i][strcspn(nomes[i],"\n")] = '\0';
    }

    for (int i = 0; i < 10; i++){
        printf("nome %i:%s\n",(i+1),nomes[i]);
    }
    







return 0;
}//main