/*
1) Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em
seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o
imprima.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int tamanho;
    
    printf("qual o tamanho do vetor desejado:");
    scanf("%d",&tamanho);
    
    int *vetor = (int*) malloc(tamanho * sizeof(int));
    
    printf("digite o vetor desejado\n");
    
    for (int i = 0; i < tamanho; i++){
        printf("valor:");
        scanf("%d",&vetor[i]);
    }//for
    
    for (int i = 0; i < tamanho; i++){
        printf("vetor %d: %d\n",i+1,vetor[i]);
    }//for
    
    free(vetor);

    return 0;
}//main