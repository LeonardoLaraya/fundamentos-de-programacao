#include <stdio.h>
#include <stdlib.h>

int main () {

    int tamanho = 10;
    //Malloc nao limpa o lixo e calloc limpa o lixo
    int *vetor = (int*) malloc(10 * sizeof(int)); //alocaçao dinamica  SIZEOF pergunta para o sistema operacional quantos bytes aquele tipo ocupa


    if(vetor == NULL){
        printf("Erro ao alocar memoria");
        exit(1);
    }//if para testar se a alocaçao esta funcionando e nao dar erro de segmentaçao


    for (int i = 0; i < tamanho; i++){
        vetor[i] = i;
    }//for

    for(int i = 0; i < tamanho; i++){
        printf("%d ", i);
    }//for

    printf("\n");

    
    //Utilizando realloc
    printf("Aumenta o vetor para 20\n");

    tamanho = 20;

    vetor = (int*) realloc(vetor, tamanho * sizeof(int));// realoca a mamoria para 20 

    if(vetor == NULL){
        printf("Erro ao alocar memoria");
        exit(1);
    }//if para testar se a memoria foi realocada

    for (int i = 0; i < tamanho; i++){
        vetor[i] = i;
    }//for

    for(int i = 0; i < tamanho; i++){
        printf("%d ", i);
    }//for

    free(vetor); //libera a memoria alocada e evita memory leak 

return 0;
}//main