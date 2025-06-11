#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa para determinar a quantidade de litros
de combustível gastos em uma viagem por um automóvel que
faz 12 km/litro. Para isso, sabe-se que o tempo gasto na viagem
é de 35 min e a velocidade média do automóvel é 80 km/h.
*/

int main (){


   float consumo = 12;// 12km/L
   int tempo_minutos = 35;// 35 min
   float velocidade = 80;//km/h velocidade media
   float hora = 60;// 1 hora = 60 min
   float distancia =0;// destancia percorrida
   float litros_gasto =0;// quantidade de conbustivel gasto


   /*Estilo de nomes de variaveis:
   -snake_case
   -camelCase
   -PascalCase
   -SCREAMING_CASE
   */

   distancia = velocidade * tempo_minutos/ hora;//regra de 3 para descobrir a distancia percorida em 35 min
   litros_gasto = distancia / consumo;// descobrir a quantidade de litros gastos na distancia  percorida
   printf("A quantidade de litros de conbustível gastos foi de: %.2f\n", litros_gasto);


 
   return 0;
}//main