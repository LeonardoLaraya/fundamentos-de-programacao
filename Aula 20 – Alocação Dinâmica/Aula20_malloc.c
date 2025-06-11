#include <stdio.h>
#include <stdlib.h>

int main () {


    //Malloc nao limpa o lixo e calloc limpa o lixo
    int *vetor = (int*) malloc(5 * sizeof(int)); //alocaçao dinamica  SIZEOF pergunta para o sistema operacional quantos butes aquele tipo ocupa
    int *vetor = (int*) calloc(5, sizeof(int));

    if(vetor == NULL){

        printf("Erro ao alocar memoria");
    }//if para testar se a alocaçao esta funcionando e nao dar erro de segmentaçao


    for (int i = 0; i < 5; i++){
        vetor[i] = i;
    }//for

    for(int i = 0; i < 5; i++){
        printf("%d ", i);
    }//for

    printf("\n");
return 0;
}//main