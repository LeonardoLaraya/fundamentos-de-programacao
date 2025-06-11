#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *arquivo = fopen("../teste.txt","r");    // usa o (../) para voltar uma pasta "uma pasta a cima, para encontrar o arquivo"
    if(arquivo == NULL){
        perror("erro ao abrir o arquivo\n"); //da o printf e depois fala qual foi o erro 
        exit(1);
    }//if

    printf("arquivo aberto com sucesso\n");

    fclose(arquivo); //fecha o arquivo e salva tudo 

    return 0;
}//main