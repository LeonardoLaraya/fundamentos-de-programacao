/*
1) Sabendo-se que 200 quilowatts de energia custa um quarto do salário mínimo,
 faça um programa que receba o valor do salário mínimo e a quantidade de quilowatts gasta por uma residência e mostre:
a) O valor em reais de cada quilowatt;
b) O valor em reais a ser pago pelos quilowatts gasto;
c) O novo valor a ser pago por essa residência com um desconto de 12%;

200 wuilowatts = 1/4 do salario minimo
salario minimo 2024 = 1412
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float valor_por_quilowatts;
    float valor_gasto_em_quilowatts;
    int quilowatts_gastos;
    float salario_minimo;
    float valor_com_desconto;

    printf("digite o valor do salario minimo:\n");
    scanf("%f",&salario_minimo);
    printf("digite a quantidade de quilowatts gastos:\n");
    scanf("%i",&quilowatts_gastos);

    //a) O valor em reais de cada quilowatt;

    valor_por_quilowatts = (salario_minimo * 0.25) / 200;
    printf("a) O valor em reais de cada quilowatt e de: %.2f\n",valor_por_quilowatts);

    //b) O valor em reais a ser pago pelos quilowatts gasto;

    valor_gasto_em_quilowatts = quilowatts_gastos * valor_por_quilowatts;
    printf("b) O valor em reais a ser pago pelos quilowatts gasto e de: %.2f\n",valor_gasto_em_quilowatts);

    //c) O novo valor a ser pago por essa residência com um desconto de 12%;

    valor_com_desconto = (valor_gasto_em_quilowatts / 100) * 88;
    printf("c) O novo valor a ser pago por essa residencia com um desconto de 12 por cento e de %.2f", valor_com_desconto); 
    








return 0;
}//main