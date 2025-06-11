#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade = 0;

    do{
        printf("digite uma idade:");
        scanf("%i",&idade);
        //o meu laço é feito antes do while
    }while(idade < 18 || idade > 65);//~(A^B)
    //while(!(idade >= 18 && idade <=65));

    printf("A idade positiva é: %d\n" ,idade);







return 0;
}//main