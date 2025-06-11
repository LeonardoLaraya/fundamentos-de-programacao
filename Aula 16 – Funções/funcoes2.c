#include <stdio.h>
#include <stdlib.h>

void duplica(int numero){ // recebe valores pela funcao "duplica" e salva em numero(uma nova variavel criada dentro de duplica) 

    printf("a idade é %d\n",numero);
    int dobro = numero * 2;

return dobro;
}//duplica


//  SEMPRE COMECA NA MAIN
int main(){ // sempre começa rodando e automaticamente


    int idade = 30;
    int dobroMain;


    dobroMain = duplica(idade); // manda o valor de idade para duncao diplica
    printf("o dobro e %d\n",dobroMain);


return 0;
}//main 