/*
1) Crie uma função que retorne x*y através de (operação de soma)recursividade. A função recebe x e y por parâmetro
*/

#include <stdio.h>
#include <stdlib.h>

int recursividade(int x, int y){

    if (y == 0){
      return 0;
    }else{
    return x + recursividade(x,y -1);
    }    
    
}//recursividade

int main(){

    int x,y;

    printf("digite dois numeros para ser multiplicado:\n");
    printf("numero 1:");
    scanf("%d" ,&x);

    printf("numero 2:");
    scanf("%d",&y);

    int valor = recursividade(x,y);
    printf("o valor da multiplicação: %d\n",valor);

    return 0;
}//main