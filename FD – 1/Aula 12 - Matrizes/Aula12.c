#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[3][4];//maitriz de 3 linhas por 4 colunas

    for ( int l = 0; l < 3; l++){
        for (int c = 0; c < 4; c++){
            printf("Digite matriz %d %d:",l,c);
            scanf("%d",&matriz[l][c]);

        }//for C
    }//for L


    for ( int l = 0; l < 3; l++){
        for (int c = 0; c < 4; c++){
            printf("%4d  ",matriz[l][c]); // esse (%4) é para separar 4 espaços para alinhar os numeros na matriz
           
        }//for C
        printf("\n");
    }//for L









return 0;
}//main