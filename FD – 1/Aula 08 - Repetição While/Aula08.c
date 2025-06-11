#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main (){

    setbuf(stdout,NULL);// para limpar o buf de saida
    setbuf(stdin,NULL);//para limpar o buf de entrada 

    int i = 1; // define como inicial i = 1 
    int contadorMultiplos = 0;//define como 0 para limpar o lixo
    int somamultiplo = 0;

    while (i <= 100){

        if(i % 7 == 0){// testa se i é multiplo de 7
        contadorMultiplos++;//caso i for multiplo de 7 vai somar 1 em contadormultiplos
        somamultiplo = somamultiplo + i;
        printf("valor %i | acululado %i\n",i,somamultiplo);

        }//if
        
      //  printf("Valor i =%i\n",i);
        i++;

    }//while

    printf("Existem %d multiplos de 7\n",contadorMultiplos);
    printf("A soma dos multiplos de 7 ate 100 é %d\n",somamultiplo);

return 0;
}//main