/*

== igual (comparação se é igual a tal)
!= diferente (negação)
> maior que
< menor que
>= maior ou igual a 
>= menor ou igual a

*/

#include<stdio.h>
#include<stdlib.h>


int main(){

    int idade;
    float peso;

    printf("digite sua idade:");
    scanf("%i",&idade);
    printf("digite seu peso:");
    scanf("%f",&peso);

    if(idade >= 18 && idade <= 65 && peso >= 50){ 
        //se for maior ou igual a 18 E menor ou igual a 65 e maior ou igual a 50 vai ser VERDADEIRO // aceita () para fazer primeiro
        //caso verdadeiro
        printf("vc pode doar sangue\n");
    }else{
        //caso falso
        //podemos fazer um if sem um else assim se verdade faz tal se falso não faz nada
        printf("vc não pode doar sangue\n");
    }//else


    return 0;
}//main


