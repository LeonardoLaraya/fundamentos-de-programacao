/*
2) Crie um algoritmo que receba 10 números e os armazene em
um vetor A. Em seguida, gere o vetor B onde cada elemento é o
quadrado do valor da mesma posição no vetor A
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetorA [10];
    float vetorB [10];//resultado do quadrado de A

    printf("digite uma lista com 10 numeros para calcular o quadrado deles:\n");
    for(int i = 0; i < 10; i++){
        printf("valor %i:",i);
        scanf("%i",&vetorA[i]);
    }//for

    for(int i = 0; i < 10; i++){

        vetorB[i] = vetorA[i] * vetorA[i];

        printf("o valor %i ao quadrado e:%.2f\n",vetorA[i],vetorB[i]);
    }//for
    
return 0;
}//main