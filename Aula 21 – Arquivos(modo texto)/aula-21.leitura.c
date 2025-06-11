#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
 
    char texto[50];
    char c;
    int i;

    FILE *arquivo = fopen("../teste.txt","r");    // usa o (../) para voltar uma pasta "uma pasta a cima, para encontrar o arquivo" 
                                                //e "r" para para leitura
    if(arquivo == NULL){
        perror("erro ao abrir o arquivo\n"); //da o printf e depois fala qual foi o erro 
        exit(1);
    }//if

    while ((c = fgetc(arquivo)) != EOF){  // usa o fgetc para pegar o arquivo e salvar em c, enquanto for diferente (!=) de EOF que é o final do arquivo 
        texto[i++]=c;
        //salva letra por letra em (texto)
    }
    printf("%s",texto);
    

    fclose(arquivo); //fecha o arquivo e salva tudo 

    return 0;
}//main