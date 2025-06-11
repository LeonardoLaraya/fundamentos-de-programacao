#include<stdio.h>
#include<stdlib.h>

/*
Faça um programa que calcule e mostre a idade de uma
pessoa a partir do ano em que a pessoa nasceu e do ano atual.
Os valores serão digitados pelo usuário.
Obs.:Considere que ela já fez aniversário neste ano.
*/


int main(){

   int ano_nascimento;
   int ano_atual;
   int idade;
   
  printf("qual seu ano de nascimento?");
  scanf("%i",&ano_nascimento);
  printf("qual o ano atual?");
  scanf("%i",&ano_atual);

  idade = ano_atual - ano_nascimento;
  printf("sua idade atualmente é de %i\n" ,idade);  

return 0;
}//main