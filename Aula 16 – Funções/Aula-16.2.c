
#include <stdio.h>
#include <stdlib.h>



int somaNumeros(int valor1, int valor2){   //ela resebe dois numeros (valor1,2 que tem que ser declarads separadamentes)
    int soma = valor1 + valor2;    //e retoma um outro valor int = soma ( int soma)Numeros
    return soma;// retorna o valor dado em soma
}


int main(){

    int recebeSoma = somaNumeros(5,3);
    printf("A soma é %d\n",recebeSoma);

    return 0;
}//main