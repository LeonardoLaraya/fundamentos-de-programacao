/*
2) Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne
o ponteiro para um vetor de tamanho N alocado dinamicamente. Se N for negativo ou
igual a zero, um ponteiro nulo deverá ser retornado.
*/

#include <stdio.h>
#include <stdlib.h>

int* alocaVetor(int tamanho){    
    int* vetor;
    if (tamanho <= 0){
        return NULL;
    }else{
        vetor = (int*) malloc(tamanho * sizeof(int));
        if(vetor == NULL){
            printf("erro ao alocar o vetor!\n");
            exit(1);
        }//if
        return vetor;
    }//else
}//aocaVetor



int main(){

    int tamanho;
    printf("qual o tamanho do vetor:");
    scanf("%d",&tamanho);

    int* vetor = alocaVetor(tamanho); 

    free(vetor);
    return 0;
}//main