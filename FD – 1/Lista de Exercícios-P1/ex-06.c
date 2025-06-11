/*
6) Um professor maluco da UTFPR avalia seus alunos da seguinte maneira:

3 provas (com peso 20 cada)
1 conjunto de trabalhos menores durante o semestre (com peso 10)
1 projeto de um jogo com peso 30

A média regular do aluno será dada pela média ponderada das notas das 3 provas, nos projetos menores e do projeto do game.
O aluno que atingir a nota igual ou superior a 60 estará aprovado, caso contrário,
o aluno deverá realizar um exame onde a nota mínima necessária será dada pela fórmula:

NotaMinima = 120 – Média regular

O aluno aprovado via exame terá média final igual a 60 registrado no sistema.

Faça um programa que receba a nota das 3 provas, 1 nota dos projetos menores e 1 nota do projeto do game (todas as notas entre 0 e 100)
 e informe se o aluno está aprovado ou terá que realizar o exame.
Em caso de exame o sistema deverá solicitar a nota do exame e informar se o aluno está aprovado ou reprovado e qual sua nota final (com uma casa decimal).
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float p1,p2,p3,trabalho,projeto,media_regular;
    

    do{
        printf("digite a nota da P1:");
        scanf("%f",&p1);
    }while (p1 > 100);

    do{
        printf("digite a nota da P2:");
        scanf("%f",&p2);
    }while (p2 > 100);

    do{
        printf("digite a nota da P3:");
        scanf("%f",&p3);
    }while (p3 > 100);

    do{
        printf("digite a nota do trabalho:");
        scanf("%f",&trabalho);
    }while (trabalho > 100);

    do{
        printf("digite a nota do projeto:");
        scanf("%f",&projeto);
    }while (projeto > 100);

    media_regular = ((p1*20)+(p2*20)+(p3*20)+(trabalho*10)+(projeto*30))/100;
    printf("media geral %f",media_regular);
     





return 0;
}//main