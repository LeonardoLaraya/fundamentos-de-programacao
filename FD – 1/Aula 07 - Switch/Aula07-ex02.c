/*
2) Crie uma calculadora usando a instru��o switch, que
pergunte qual das opera��es b�sicas quer fazer (+, -, *
e /), em seguida pe�a os dois n�meros e mostre o
resultado da opera��o matem�tica entre eles.
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

    printf("Digite o n�mero da opera��o desejada:\n");
    printf("1 - soma\n");
    printf("2 - subtra��o\n");
    printf("3 - multiplica��o\n");
    printf("4 - divis�o\n");
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

        case 2://subtra��o
        printf("digite os valores a seram subtraidos:\n");
        printf("valor1:\n");
        scanf("%f",&numero1);
        printf("valor2:\n");
        scanf("%f",&numero2);
        resposta = numero1 - numero2;
        printf("o valor de  %.2f - %.2f = %.2f",numero1, numero2, resposta);
        break;

        case 3://multiplica��o
        printf("digite os valores a seram multiplicados:\n");
        printf("valor1:\n");
        scanf("%f",&numero1);
        printf("valor2:\n");
        scanf("%f",&numero2);
        resposta = numero1 * numero2;
        printf("o valor de  %.2f * %.2f = %.2f",numero1, numero2, resposta);
        break;

        case 4://divis�o
        printf("digite os valores a seram divididos:\n");
        printf("valor1:\n");
        scanf("%f",&numero1);
        printf("valor2:\n");
        scanf("%f",&numero2);
        resposta = numero1 / numero2;
        printf("o valor de  %.2f / %.2f = %.2f",numero1, numero2, resposta);
        break;

        default:
            printf("op��o invalida!");
        break;

    }//switch.2
     
return 0;
}//main