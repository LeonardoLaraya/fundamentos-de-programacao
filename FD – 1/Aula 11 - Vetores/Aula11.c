#include <stdio.h>
#include <stdlib.h>


int main(){

int notas [12]; //vetor com 5 espaços 

    for (int x = 0; x < 12; x++){
        printf("digite a nota %x :\n",x);
        scanf("%x",&notas[x]);
    }//for
    
    printf("As notas digitadas foram:\n");
    for (int x = 0; x < 12; x++){
        printf("a nota %x e igual a : %x\n",x,notas[x]);
    }//for

return 0;
}//main
