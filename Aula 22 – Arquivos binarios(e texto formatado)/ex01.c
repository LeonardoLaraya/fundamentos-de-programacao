/*
1) Faça um programa que gere 100 números aleatórios. Esse
programa deverá, em seguida,armazenar esses números em um
arquivo binário.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(){
    
    int NumeroAleatorio[100];


    //inicia o gerador de números aleatórios com o tempo atual
    srand(time(NULL));

    //gera os numeros 
    for (int i = 0; i < 100; i++){

        NumeroAleatorio[i] = (rand() % 100) + 1;

        printf("%i\n",NumeroAleatorio[i]);
        
    }//for


    //cria o arquivo
      FILE *arq = fopen("arquivo_ex01.dat","wb");
    if (arq == NULL){
        perror("erro ao abrir o arquivo!!!\n");
        exit(1);
    }//if

    //escreve os numeros no arquivo binario 
        fwrite(NumeroAleatorio,sizeof(int),100,arq);
    fclose(arq);

    return 0;
}//main