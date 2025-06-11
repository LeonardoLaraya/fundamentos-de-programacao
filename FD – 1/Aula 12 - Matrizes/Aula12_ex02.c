/*
2) Faça um algoritmo que leia uma matriz 3 por 3 (3x3) e
retorna a soma dos elementos da sua diagonal principal e
da sua diagonal secundária;
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[3][3];
    int somaMatriz =0;

    printf("digite uma matriz(3x3)para somar as diagonais\n");

    for(int l = 0;l < 3;l++){
        for(int c =0;c < 3;c++){
            printf("digite a posiçao %ix%i:\n",l,c);
            scanf("%i",& matriz[l][c]);
        }//for C
    }//for L


       for(int l = 0;l < 3;l++){
        for(int c =0;c < 3;c++){
          
          if(l == c){
            somaMatriz = somaMatriz + matriz[l][c];

          }//if


        }//for C
    }//for L

    printf("soma: %i\n",somaMatriz);





/*

    somaMatriz = (matriz[0][0] + matriz[1][1] + matriz[2][2]) + (matriz[0][2] + matriz[1][1] + matriz[2][0]);
    printf("soma: %i\n",somaMatriz);



    for (int l = 0; l < 3; l++){
        for (int c = 0; c < 3; c++){
            printf("%4d",matriz[l][c]);
        }
        printf("\n");
    }
*/

return 0;
}//main