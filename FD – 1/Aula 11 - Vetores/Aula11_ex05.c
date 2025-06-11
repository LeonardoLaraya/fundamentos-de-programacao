/*
5)Dado dois vetores, A (4) e B (5), faça
um programa em C que imprima todos os comuns
aos dois vetores.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int A[4];
    int B[5];
    int x = 0;

    printf("digite 4 numeros:\n");
    for(int i =0;i < 4;i++){
        printf("numeros %i:",(i+1));
        scanf("%i",&A[i]);
    }//for


    printf("digite 5 numeros:\n");
    for(int i =0;i < 5;i++){
        printf("numeros %i:",(i+1));
        scanf("%i",&B[i]);
    }//for

    for(int i = 0; i < 5;i++){
        for(x = 0; x < 4; x++){

            if(A[x] == B[i])
                printf("o valor %i esta presente em A e B\n",A[x]);
        
        }//for x

    }//for i

return 0;
}//main