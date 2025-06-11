/*
2)Crie uma função que retorne x elevado a y através de operação de multiplicação. A função recebe x e y por parâmetro
*/

#include <stdio.h>
#include <stdlib.h>


int recursividade (int x , int y){

    if(y == 0){
        return 1;// qualquer numero elevado a 0 e 1 
    }else{
        return x * recursividade(x,y -1);

    }//else

}//recursividade


int main(){

    int x,y;

    printf("digite x para elevado por Y\n");
    printf("X:");
    scanf("%d",&x);
    printf("Y:");
    scanf("%d",&y);

    int retorno = recursividade(x,y);

    printf("o valor:%d",retorno);


    return 0;
}//main