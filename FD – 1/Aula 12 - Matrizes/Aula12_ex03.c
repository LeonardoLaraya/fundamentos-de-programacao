/*
3) Construa um programa que leia uma matriz de tamanho
5 x 5 e escreva:
+ O valor e a localização (linha, coluna) do maior valor encontrado
na matriz.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){

    int matriz[5][5];
    int maior;
    int posicaoL;
    int posicaoC;

    //recebe a matriz
    for(int l =0;l < 5;l++){
        for(int c=0;c < 5;c++){
            printf("valor (%ix%i)",l,c);
            scanf("%i",&matriz[l][c]);

        }//for C
    }//for L

    // exibe a matriz
    for(int l =0;l < 5;l++){
        for(int c=0;c < 5;c++){
            printf("%4d",matriz[l][c]);

        }//for C
        printf("\n");
    }//for L

    //acha o maior numero 
    maior = matriz[0][0];
    for(int l =0;l < 5;l++){
        for(int c=0;c < 5;c++){

            if(matriz[l][c] > maior){
                maior = matriz[l][c];
                posicaoL = l;
                posicaoC = c;
            }//if   


            
        }//for C
    }//for L

    printf("o maior numero da matriz %i e a sua posicao e %ix%i\n", maior,posicaoL,posicaoC);

return 0;
}//main
