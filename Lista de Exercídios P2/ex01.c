/*
1) Crie uma função que receba uma string e retorne um ponteiro para uma outra string que foi alocada dinâmicamente contendo a mesma string mas agora com
o conteúdo invertido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int RecebeString(){

    char string[20];

    printf("digite uma string:");
    fgets(string,20,stdin);
    string[strcspn(string,"\n")] = '\0';




}//RecebeString



int main(){

    RecebeString();

    return 0;
}//main