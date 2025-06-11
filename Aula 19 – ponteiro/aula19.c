#include <stdio.h>
#include <stdlib.h>

int main(){

    int *ptr , valor = 15;//ptr é um ponteiro e valor é inteio
//    int *ptr, *ptr2, *ptr3;//os 3 são ponteiros 

    ptr = &valor; // aponta o local na memoria de valor( endereço de valor)

    printf("valor = %d\n",valor);
    printf("valor = %p\n",ptr);
    printf("valor = %d\n",*ptr);// o (*) mostra o valor apartir do endereço 



    return 0;
}//main