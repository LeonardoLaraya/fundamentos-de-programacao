/*
1) Crie uma estrutura para representar as coordenadas de
um ponto no plano (posições X e Y). Em seguida, declare
e leia do teclado dois pontos e exiba a distância entre
eles. 
*/

#include <stdio.h>
#include <stdlib.h>
    

typedef struct{
    float x;
    float y;
} Ponto;


int main(){

    Ponto ponto1;
    Ponto ponto2;

    float Distancia;

    printf("Digite o valor de X do ponto:");
    scanf("%f",&ponto1.x);
    printf("Digite o valor de Y do porto:");
    scanf("%f",&ponto1.y);

    printf("Digite o valor de X do ponto:");
    scanf("%f",&ponto2.x);
    printf("Digite o valor de Y do porto:");
    scanf("%f",&ponto2.y);

    Distancia = sqrt(pow(ponto2.x-ponto1.x,2)+pow(ponto2.y-ponto1.y,2));

    printf("Adistancia entre os pontos é %.2f\n",Distancia);

    return 0;
}//main