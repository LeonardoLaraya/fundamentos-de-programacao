/*
2) Crie uma calculadora usando a instrução switch, que
pergunte qual das operações básicas quer fazer (+, -, *
e /), em seguida peça os dois números e mostre o
resultado da operação matemática entre eles.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
setlocale(LC_ALL,"");

    int operacao;
    float numero1;
    float numero2;
    float resposta;

    printf("-------------------------------------------\n");
    printf("               calculadora\n");
    printf("-------------------------------------------\n");

    printf("Digite o número da operação desejada:\n");
    printf("1 - soma\n");
    printf("2 - subtração\n");
    printf("3 - multiplicação\n");
    printf("4 - divisão\n");
    scanf("%i",&operacao);

    switch(operacao){

        case 1://soma
        printf("digite os valores a serem somados:\n");
        printf("valor1:\n");
        scanf("%f",&numero1);
        printf("valor2:\n");
        scanf("%f",&numero2);
        resposta = numero1 + numero2;
        printf("o valor de  %.2f + %.2f = %.2f", numero1, numero2, resposta);
        break;

        case 2://subtração
        printf("digite os valores a seram subtraidos:\n");
        printf("valor1:\n");
        scanf("%f",&numero1);
        printf("valor2:\n");
        scanf("%f",&numero2);
        resposta = numero1 - numero2;
        printf("o valor de  %.2f - %.2f = %.2f",numero1, numero2, resposta);
        break;

        case 3://multiplicação
        printf("digite os valores a seram multiplicados:\n");
        printf("valor1:\n");
        scanf("%f",&numero1);
        printf("valor2:\n");
        scanf("%f",&numero2);
        resposta = numero1 * numero2;
        printf("o valor de  %.2f * %.2f = %.2f",numero1, numero2, resposta);
        break;

        case 4://divisão
        printf("digite os valores a seram divididos:\n");
        printf("valor1:\n");
        scanf("%f",&numero1);
        printf("valor2:\n");
        scanf("%f",&numero2);
        resposta = numero1 / numero2;
        printf("o valor de  %.2f / %.2f = %.2f",numero1, numero2, resposta);
        break;

        default:
            printf("opção invalida!");
        break;

    }//switch.2
     
return 0;
}//main