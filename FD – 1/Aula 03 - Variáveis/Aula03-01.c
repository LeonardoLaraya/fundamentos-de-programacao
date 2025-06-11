#include <stdio.h>
#include <stdlib.h>

/*
1) Elabore um programa que exiba o seu nome na primeira
linha e o seu e-mail segunda. Em seguida, exiba uma
mensagem solicitando para o usuário pressionar uma tecla.
Quando o usuário pressionar, exiba em uma nova linha o nome
do seu amigo e, em outra, o e-mail dele.
Dica: Pesquise a função getchar para capturar uma tecla do usuário
*/

int main(){
 
   printf("Leonardo S Laraya\n");
   printf("leleo05.br@gmail.com\n");
   printf("pressione uma tecla para continuar\n");
   getchar();
   printf("jose henrique\n");
   printf("jhgcompos@gmail.com\n");

return 0;
}