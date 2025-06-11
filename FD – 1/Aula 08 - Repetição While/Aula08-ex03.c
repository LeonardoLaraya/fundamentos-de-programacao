/*
3) Crie um algoritmo que exiba todos os números múltiplos
de 3 no intervalo de 1 a 322
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i = 0;

    while(i <=322){

        if(i % 3 == 0){
            printf("%i\n",i);
        }//if
    i++;
    
    }//while
return 0;  
}//main