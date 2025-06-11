#include<stdio.h>
#include<stdlib.h>
/*
Tendo a Altura da pessoa definida como uma constante,
calcule seu peso ideal utilizando a seguinte fórmula:
 peso ideal = 72.7 x altura – 58
*/

#define h 1.68//altura da pessoa 


int main(){

   float altura = h;
   int peso;

   peso = 72.2 * h - 58;
   printf ("Peso ideal para uma pessoa de 1.68 de altura e de: %i\n", peso);

return 0;
}