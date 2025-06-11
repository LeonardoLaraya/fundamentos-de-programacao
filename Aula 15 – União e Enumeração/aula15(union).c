#include <stdio.h>
#include <stdlib.h>

typedef union{
    int inteiro;
    float real;
} Numero;


int main(){
    
    Numero numero;
    
    numero.inteiro = 15;
    printf("O numero inteiro é %i\n", numero.inteiro);
    printf("O numero inteiro é %f\n",numero.real);
    
    numero.real = 5.89;
    printf("O numero inteiro é %i\n", numero.inteiro);
    printf("O numero inteiro é %f\n",numero.real);
    
    return 0;
}//main