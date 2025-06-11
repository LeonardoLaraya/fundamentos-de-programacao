#include <stdio.h>
#include <stdlib.h>

void exibeNumeros(int valor){
    if (valor == 1 ){
        printf("valor: %d\n",valor);
    }else {//caso recursico
        printf("valor: %d\n", valor);
        exibeNumeros(valor -1);//chamada recusiva
       printf("valor: %d\n", valor);
    }//else
    return;
}//exibeNumeros

int main(){

    setbuf(stdout,NULL);
    
    exibeNumeros(5);

    return 0;
}//main+