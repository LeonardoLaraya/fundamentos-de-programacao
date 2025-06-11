#include <stdio.h>
#include <stdlib.h>

void mensagemInterna(){ //funcao momeada como (mensagemInterna)

    printf("dentro da funcaoINTERNA\n");

}//mensagemiNTERNA
//termina a funcao

void mensagem(){ //funcao momeada como (mensagem)

    printf("dentro da funcao\n");
    mensagemInterna();//podemos chamar uma funcão dentro da outra 
    mensagem();
}//mensagem
//termina a funcao

//  SEMPRE COMECA NA MAIN
int main(){ // sempre começa rodando e automaticamente


    printf("hello 2025\n");
    mensagem(); //chamado da funcao (ira fazer tudo que tiver dentro dela)
    printf("hello 2025\n");




return 0;
}//main 