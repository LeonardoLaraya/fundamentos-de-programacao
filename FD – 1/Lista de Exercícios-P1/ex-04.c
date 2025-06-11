/*
4)Faça um programa que receba 3 idades distintas e mostre:
a idade da pessoa mais velha;
a idade da pessoa mais nova e
 a média das 3 idades 
. O programa deve considerar e informar o caso de 2 ou 3 pessoas terem a mesma idade.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade1;
    int idade2;
    int idade3;
    int media;

    printf("digite 3 idades\n");
    printf("idade 1:\n");
    scanf("%i",&idade1);
    printf("idade 2:\n");
    scanf("%i",&idade2);
    printf("idade 3:\n");
    scanf("%i",&idade3);
    
    //posição idade 1
    if(idade1 > idade2 && idade1 > idade3){
        printf("A idade 1 e a mais velha\n");
    }else if (idade1 < idade2 && idade1 < idade3){
        printf("A idade 1 e a mais nova\n");
    }

    //posição idade 2
    if(idade2 > idade1 && idade2 > idade3){
        printf("A idade 2 e a mais velha\n");
    }else if (idade2 < idade1 && idade2 < idade3){
        printf("A idade 2 e a mais nova\n");
    }

    //posição idade 3
    if(idade3 > idade2 && idade3 > idade1){
        printf("A idade 3 e a mais velha\n");
    }else if (idade3 < idade2 && idade3 < idade1){
        printf("A idade 3 e a mais nova\n");
    }

    //mostra qual idade é igual
    if(idade1 == idade2 && idade1 != idade3){
        printf("As idades 1 e 2 sao iguais a %i\n",idade1);

    }else if (idade2 == idade3 && idade2 != idade1){
        printf("As idades 2 e 3 sao iguais a %i\n",idade2);

    }else if (idade1 == idade3 && idade1 != idade2){
        printf("As idades 1 e 3 sao iguais a %i\n",idade3);

    }else if(idade1 == idade2 && idade1 == idade3){
        printf("As idades 1, 2 e 3 sao iguais a %i\n",idade1);
    }
    
    media = (idade1 + idade2 + idade3) / 3;
    printf("A media das idades e:%i",media);

return 0;
}//main