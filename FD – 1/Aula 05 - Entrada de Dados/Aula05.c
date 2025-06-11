#include<stdio.h>
#include<stdlib.h>
#include<locale.h> //para poder utilizar caracteres especiais(È)


int main(){


  setlocate(LC_ALL,"");// para definir a lingua que estiver usando com os caracteres inclusos (É)




  int idade;
  float salario;
  char bloco;




  int dia;
  int mes;
  int ano;






  printf("digite sua idade:");
  scanf("%d",&idade);
  printf("Você tem %d anos de idade\n", idade);
  //%d ou %i para numeros inteiros




  printf("digite seu salario:");
  scanf("%f",&salario);
  printf("seu salario é %f\n",salario);


  setbuf(stdin,NULL);// IMPORTANTE limpa o buffer do teclado
  //stdin é o telado "standard in"
 
  printf("digite seu bloco atual:");
  scanf("%c",&bloco);
  printf("sua aula esta sendo no bloco %c\n",bloco);






 


  printf("digite a data atual (dd/mm/aaaa):");
  scanf("%d/%d/%d", &dia, &mes, &ano);
  printf("Hoje é %02i/%02i/%04i\n",dia,mes,ano);
   //O numero "02" depois do (%) e antes do (i) tem a funçao de exibir um numero especifico de casas no caso 2 por conta do (2) antes de i
  //e o (0)antes do 2 é para preencher as casas vazias com o numero 0


  //%i para numeros inteiros
  //%d numeros inteiros "decimal" de diferentes bases




return 0;
}//main

