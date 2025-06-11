#include<stdio.h>
#include<stdlib.h>



int main(){

    int opcao;

    printf("menu de cores:\n");
    printf("1- branco\n");
    printf("2- verde\n");
    printf("3- amarelo\n");
    printf("4- preto\n");
    printf("5- cinza\n");

    printf("digite sua opção:");
    scanf("%i",&opcao);


    switch (opcao)
    {
    case 1:
        printf("voce escolheu branco\n"); 
        break;
    case 2:
        printf("voce escolheu verde\n");
        break;
    case 3:
        printf("voce escolheu amarelo\n");
        break;
    case 4:
        printf("voce escolheu preto\n");
        break;
    case 5:
        printf("voce escolheu cinza\n");
        break;
    default:
        printf("opção de cor invalida\n");
        break;


    }//switch



return 0;
}//main