#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
 
    char texto[50] = "meu nome é jose"; 

    FILE *arquivo = fopen("teste.txt","w");    // usa o (../) para voltar uma pasta "uma pasta a cima, para encontrar o arquivo" e "w" para escrita
    if(arquivo == NULL){
        perror("erro ao abrir o arquivo\n"); //da o printf e depois fala qual foi o erro 
        exit(1);
    }//if

    for (int i = 0; i < strlen(texto); i++){ // strlen para saber o tamanho da stg texto 
        fputc(texto[i],arquivo);        
    }//for para percorrer letra por letra e escrever no meu arquivo 
    
    fclose(arquivo); //fecha o arquivo e salva tudo 

    return 0;
}//main