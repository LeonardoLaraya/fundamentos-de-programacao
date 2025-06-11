/*
3) Faça um programa que receba os coeficientes a, b e c
de uma equação do segundo grau e retorne as raízes da
equação (se existirem).
-Para isso, lembre-se da fórmula de Báskara:

x = -b ± √(delta)/ 2a
delta = b² – 4ac

ax²+bx+c=0
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float a;
    float b;
    float c;
    float x1;
    float x2;
    float delta;

    printf("digite os coeficientes a, b e c para calcular as raizes da equacao de segundo grau\n");
    printf("coeficientes a:");
    scanf("%f",&a);
    printf("coeficientes b:");
    scanf("%f",&b);
    printf("coeficientes c:");
    scanf("%f",&c);
    // coleta dos coeficientes 

    delta = (b * b) - 4 * a * c ;// calculo do delta 

    x1 = (-b + sqrt(delta)) / (2 * a); //x1 como (+)
    x2 = (-b - sqrt(delta)) / (2 * a); //x2 como (-) 

    if(delta < 0){
        printf("O delta e negativo, essa equacao nao possui raizes reais.");

    }else{

        if( x1 == 0 ){//raiz 1 com (+)
            printf("A raiz 1 e nula\n");
            // caso resultado for = 0
        }else{
            printf("O valor da raiz 1 e %.2f\n", x1);
            //caso o resultado for > 0
        }//else

        if( x2 == 0){//raiz 2 com (-)
            printf("A raiz 2 e nula\n");
            //caso resultado for = 0
        }else{
            printf("O valor da raiz 2 e %.2f\n",x2);
            //caso resultado for > 0
        }//else

    }//else

return 0;
}//main