#include <stdio.h>
#include <stdlib.h>

int main(){

    int i = 1;

    while (i <= 10){
        i++;
        if(i == 5)
            break;//sai do bloco de repeticao
        printf("%d ",i);
    }//while
    
/*
  int i = 1;

    while (i <= 10){
        i++;
        if(i == 5)
            continue;//volta direto para a condição 
        printf("%d ",i);
    }//while
*/  



return 0;
}//main