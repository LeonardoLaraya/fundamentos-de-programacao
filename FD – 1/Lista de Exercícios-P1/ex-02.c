/*
2) Fazer um programa para ler as coordenadas x e y de dois pontos e
 calcular a distância entre os dois pontos no plano, através da seguinte fórmula:
      ----------------
 d= √(x2−x1)^2+(y2−y1)^2
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int Xponto1;
    int Yponto1;
    int Xponto2;
    int Yponto2;
    float distancia;

    printf("Digite as cordenadas de dois pontos para calcular a distancia\n");
    printf("Digite primeiro o x depois o y separados por virgula ex: x,y\n");
    printf("Ponto 1:");
    scanf("%i,%i",&Xponto1,&Yponto1);
    printf("Ponto 2:");
    scanf("%i,%i",&Xponto2,&Yponto2);
    //recebe pontos 
    distancia = sqrt(pow((Xponto1-Xponto2),2)+pow((Yponto1-Yponto2),2));
    //aplicana formula
    printf("A distandia do ponto 1 para o ponto 2 e:%.2f",distancia);

return 0;
}//main