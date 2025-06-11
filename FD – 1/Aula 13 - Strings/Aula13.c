#include <stdio.h>
#include <stdlib.h>
#include <string.h>//biblioteca para operar com strings
#include <stdio_ext.h>// para incluir a biblioteca que limpa o buf
//__fpurge(stdin);//para linux
//fflush(stdin);// para win


int main(){

    char nome[11]; // 10 espaços utilizaveis, tendo o ultimo como "\0" para finalizar 
    char nomes[5][21];//parasalvar varios nomes (matriz) 5 nomes de 20 caracteres
    int tamanho;//para receber o tamanho de uma string
    char nomeCopia[11];
    char senha[21];
    char senhaDigitada[21];


    printf("digite seu nome:");
    
    fgets(nome, 11, stdin); //recebe os valores digitados (apenas textos)
    nome[strcspn(nome,"\n")] = '\0'; // trocar o "\n" por "\0"

    //nome[3]= '\0'; // troca o valor da terceira casa pelo finalizador "\0"
    
    setbuf(stdin,NULL);


    printf("seu nome e: %s\n",nome); //"%s" para mostrar uma string

    //========================================================================================================//

    

    for(int i = 0; i < 5; i++){  //for para receber varios nomes em uma matriz
        printf("digite seu nome:\n");
        setbuf(stdin,NULL);                        //limpa o buf para não receber lixo
        fgets(nomes[i], 21, stdin);                //recebe os nomes
        nomes[i][strcspn(nomes[i],"\n")] = '\0';   //troca o "\n" do enter para o fnalizador "\0"
    }//for



    for(int i = 0; i < 5; i++){ // para mostras os nomes 
        printf("o nome:%s\n",nomes[i]);
    }//for


    

    //=============================funcoes ==========================================================================//


    //~~~tamanho~~~

    
    tamanho = strlen (nome); //conta quantos caracteres estao sendo usados tirando o "\o" e salva a quantidade em "tamanho"

    printf("o tamanho:%i \n",tamanho);
    


    //~~~copia~~~

    strcpy(nomeCopia, nome);// copia o "nome" para "nome copia" apaga oq tinha em "nomeCopia"

    printf("o tamanho:%s \n",nomeCopia);


    //~~~concatena~~~(soma)

    strcat(nomeCopia, nome);// soma "nome" para "nome copia" mantendo oq tinha em "nomeCopia"


    //~~~comparação~~~

    strcmp(senha,senhaDigitada); // se for igual vai retornar 0
    // tem diferença entre letras maiusculas e minusculas (D) e (d)

    strcasecmp(senha,senhaDigitada);
    //nao tem diferença entre maiusculo e minusculo (pode nao funcionar em todo lugar)
    
    
    -//ex


        if(strcmp(senha,senhaDigitada) == 0){
            printf("senha Correta!");
        }else{
            printf("senha Incorreta!");
        }//if    



return 0;
}//main