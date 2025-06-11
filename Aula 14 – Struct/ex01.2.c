/*
1) Crie uma estrutura para representar as coordenadas de
um ponto no plano (posições X e Y). Em seguida, declare
e leia do teclado dois pontos e exiba a distância entre
eles. 


*/
 #include <stdio.h>
 #include <stdlib.h>
#include <math.h>

 typedef struct {
    float X;
    float Y;
 }Ponto;
 
 int main(){

    Ponto pontos[2];
    float distancia;

    printf("digite a conrdenada de dois pontos para calcular a distancia\n");
    for(int i = 0; i < 2;i++){
        printf("ponto %d\n",i+1);
        printf("x:");
        scanf("%f",&pontos[i].X);
        printf("Y:");
        scanf("%f",&pontos[i].Y);
    }//for

    distancia = sqrt(pow( pontos[1].X - pontos[0].X,2 ) + pow(pontos[1].Y-pontos[0].Y,2));
    printf("a distancia entre os pontos: %f",distancia);
    return 0;
 }//main