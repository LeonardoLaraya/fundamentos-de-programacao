/*
8) Faça um menu que mostre 3 opções
Menu do programa:
1 - Teste 1
2 - Teste 2
3 – Sair do programa
Digite sua opção:

- A primeira opção imprime o texto “Teste1” e mostra o menu novamente.
- A segunda opção imprime “Teste2” e mostra o menu novamente.
- A terceira opção finaliza o programa.
-Caso digite uma opção diferente, deve mostrar uma mensagem de erro e
mostrar o menu novamente.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int opcao = 0;

    while (1){

        printf("Menu do programa:\n");
        printf("1 - Teste 1\n");
        printf("2 - Teste 2\n");
        printf("3 - Sair do programa\n");
        scanf("%i",&opcao);

            if(opcao == 1 ){
                printf("teste 1\n");
            }else if(opcao == 2){
                printf("teste 2\n");
            }else if(opcao == 3){
                break;
            }else if(opcao >= 4){
                printf("opcao invalida!\n");
            }//else if

    }//while

return 0;
}//main