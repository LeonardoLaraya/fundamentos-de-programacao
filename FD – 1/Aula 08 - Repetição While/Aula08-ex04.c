/*
4) Crie um algoritmo que exiba todos os números pares
entre 240 e 730 inclusive.
*/


#include <stdio.h>
#include <stdlib.h>

int main(){

    int i = 240;

    while(i <=730){
        if(i % 2 == 0){
            printf("%i\n",i);
        }//if
    i++;

    }//while
return 0;  
}//main