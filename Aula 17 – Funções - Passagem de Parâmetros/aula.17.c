#include <stdio.h>
#include <stdlib.h>

void incrementa(int valor){
    valor++;
    printf("o valor da funcao vale %d\n",valor);
    return;
}//incrementa

int main(){

    int meuValor = 12;

    incrementa(meuValor);

    printf("o valor da funcao vale %d\n",meuValor);



    return 0;
}//main