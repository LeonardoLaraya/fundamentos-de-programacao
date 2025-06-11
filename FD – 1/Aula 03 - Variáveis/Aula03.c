/* tipo nome_variavel (int= valor inteiro nome-variavel = nome que eu vou definir para variavel)
char = caracter 
int - numero inteiro 
float = numeros reais (com , ) com precição de até 6 casas decimais 
long double = dobro do float
*/

#include<stdio.h>
#include<stdlib.h>

#define PI 3.1316//define um valor para uma constante(um valor qeu sempre vai ser o mesmo)

int main(){
   int idade = 18;
   float salario = 1412.00; 
   char bloco = 'n'; 
   double preco = 315.59; 
   double notacao = 6.66E-34; //E-34 = elevado a -34


   printf("voce tem %d anos\n", idade); 
   printf("seu salario: %.2f\n", salario); //&.2f = o (.2) é para mostras apenas 2 casas decimais depois da virgula
   printf("voce tem aula no bloco %c\n", bloco); 
   printf("sua faculdade custa %.2f milhoes de reais\n",preco);
   printf("uma notação: %e\n", notacao); 

/*
para exibir as variaveis:
%i ou %d para numeros inteiros 
%f para numeros ponto-flutuante 
%c para um caractere 
%e para mostras notação
*/

   salario = 50.000; //redefine o valor da variavel salario para o novo valor apartir daqui (daqui para baixo)
   printf("seu novo salario é %.2f\n", salario);
   printf("idade %d, salario %.2f, bloco %c\n", idade ,salario, bloco);
   printf("O valor de pi:%.4f\n",PI);

   return 0;
   printf("O valor de pi:%.4f\n",PI);// o(return 0) finaliza a main por isso o printf não funciona

}//main