/*
3) Altere o exerc�cio anterior para receber os 3 valores no
mesmo scanf.
Exemplo:
Digite a conta a ser realizada: 5+8
O resultado �: 13
*/

#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main(){
setlocale(LC_ALL,"");

    float numero1,numero2,resposta;
    char operador;

    printf("-------------------------------------------\n");
    printf("               calculadora\n");
    printf("-------------------------------------------\n");
    printf("Digite a opra��o no seguinte formato: X + Y, X - Y, X * Y, X / Y\n");
    printf("Digite a opra��o:\n");
    scanf("%f %c %f",&numero1, &operador, &numero2);

    switch (operador){

        case '+'://soma
        resposta = numero1 + numero2;
        printf("O resultado da opera��o %.2f %c %.2f = %.2f",numero1,operador,numero2,resposta);
        break;

        case'-'://subtra��o
        resposta = numero1 - numero2;
        printf("O resultado da opera��o %.2f %c %.2f = %.2f",numero1,operador,numero2,resposta);
        break; 

        case'*'://multiplica��o
        resposta = numero1 * numero2;
        printf("O resultado da opera��o %.2f %c %.2f = %.2f",numero1,operador,numero2,resposta);
        break;

        case'/'://divis�o
        resposta = numero1 / numero2;
        printf("O resultado da opera��o %.2f %c %.2f = %.2f",numero1,operador,numero2,resposta);
        break;

        default:
        printf("Opera��o invalida!");
        break;
    
    }//switch

return 0;
}//main