/*
1) Crie uma estrutura para representar as coordenadas de
um ponto no plano (posições X e Y). Em seguida, declare
e leia do teclado dois pontos e exiba a distância entre
eles. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    float x;
    float y;
} Ponto;


int main(){

    Ponto pontos[2];

    float Distancia;


    for (int i = 0; i < 2; i++){
    
        printf("Digite o valor de X do ponto %d:",i+1);
        scanf("%f",&pontos[i].x);
        printf("Digite o valor de Y do porto %d:",i+1);
        scanf("%f",&pontos[i].y);
        
    }//for
        


    Distancia = sqrt(pow(pontos[1].x-pontos[0].x,2)+pow(pontos[1].y-pontos[0].y,2));
    
    printf("Adistancia entre os pontos é %.2f\n",Distancia);
    
    return 0;

    
}//main