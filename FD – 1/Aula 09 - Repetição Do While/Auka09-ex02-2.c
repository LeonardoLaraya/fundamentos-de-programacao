/*
2) Faça um programa que receba valores enquanto eles estiverem no
intervalo de 500 a 1000. Ao receber um valor fora da faixa, o
programa deverá parar de solicitar valores, exibir quantos valores
válidos foram digitados e finalizar.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor;
    int contador_valores = -1 ;// menos um para não contar com o ultimo valor que é invalido e finaliza o laço

    do{
        printf("digite valores entre 500 e 1000:\n");
        scanf("%i",&valor);
        //recebe os valores 
        contador_valores++;

    }while(valor >= 500 && valor <= 1000);
    // se o valor for maior que 500 e menor que 1000 roda o laço se não sai 
    
    printf ("foram digitados %i valores validos\n",contador_valores);

return 0;
}//main