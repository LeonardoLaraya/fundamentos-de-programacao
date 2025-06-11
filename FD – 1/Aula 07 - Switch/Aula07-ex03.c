/*
3) Altere o exercício anterior para receber os 3 valores no
mesmo scanf.
Exemplo:
Digite a conta a ser realizada: 5+8
O resultado é: 13
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
    printf("Digite a opração no seguinte formato: X + Y, X - Y, X * Y, X / Y\n");
    printf("Digite a opração:\n");
    scanf("%f %c %f",&numero1, &operador, &numero2);

    switch (operador){

        case '+'://soma
        resposta = numero1 + numero2;
        printf("O resultado da operação %.2f %c %.2f = %.2f",numero1,operador,numero2,resposta);
        break;

        case'-'://subtração
        resposta = numero1 - numero2;
        printf("O resultado da operação %.2f %c %.2f = %.2f",numero1,operador,numero2,resposta);
        break; 

        case'*'://multiplicação
        resposta = numero1 * numero2;
        printf("O resultado da operação %.2f %c %.2f = %.2f",numero1,operador,numero2,resposta);
        break;

        case'/'://divisão
        resposta = numero1 / numero2;
        printf("O resultado da operação %.2f %c %.2f = %.2f",numero1,operador,numero2,resposta);
        break;

        default:
        printf("Operação invalida!");
        break;
    
    }//switch

return 0;
}//main