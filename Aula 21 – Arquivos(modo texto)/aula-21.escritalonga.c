#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
 
    char texto[50] = "meu nome é eduardinho "; 

    FILE *arquivo = fopen("../teste.txt","w");    // usa o (../) para voltar uma pasta "uma pasta a cima, para encontrar o arquivo" e "w" para escrita
    if(arquivo == NULL){
        perror("erro ao abrir o arquivo\n"); //da o printf e depois fala qual foi o erro 
        exit(1);
    }//if

    fputs(texto, arquivo); // escreve a stg texto em arquivo
    
    fclose(arquivo); //fecha o arquivo e salva tudo 

    return 0;
}//main