/*
1) Crie um programa que forneça um menu com duas
opções. Caso o usuário digite 1, o programa solicitará um
número e verificará se o valor é par ou impar. Caso o
usuário digite 2, o programa solicitará uma idade e
verificará se pessoa é maior ou menor de idade.
Veja o exemplo de menu abaixo:

Menu de programa:
1 – Verifica par/impar
2 – Verifica maior/menor de idade
Digite sua opção:
*/

#include <stdio.h>
#include <stdlib.h>

int main (){

    int opcao;
    int par_impar;
    int idade;

    printf("Menu de programa:\n");
    printf("1 - Verifica par/impar\n");
    printf("2 - Verifica maior/menor de idade\n");
    printf("Digite sua opcao:\n");
    scanf("%i",&opcao);
    // menu para escolher acao 
    switch(opcao){
       
        case 1://verificar par/impar
        printf("Voce escolheu verificar par/impar:\n");
        printf("Digite o numero para ser verificado:\n");
        scanf("%i",&par_impar);

            if(par_impar % 2 !=0){
                printf("O numero e IMPAR\n");
            }else{
                printf("O numero e PAR\n");
            }//else
        break;//case 1

        case 2://verificar idade
        printf("Voce escolheu Verifica maior/menor de idade\n");
        printf("Digite a idade para verificar:\n");
        scanf("%i",&idade);

            if(idade < 18){
                printf("Menor de idade\n");
            }else{
                printf("Maior de idade\n");
            }//else
        break;//case 2

        default:
        printf("opcao invalida\n");
        break;//default

    }//switch

return 0;
}//main