/*
1) Faça um programa que receba como entrada a nota de
um aluno. O programa deve exibir “aprovado” caso a nota
seja igual ou superior a 6, ou exibir “reprovado” caso
contrário.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    float nota;

    printf("digite sua nota:");
    scanf("%f",&nota);
    
    if(nota > 6){
        printf("voce foi aprovado!");

    }else{
        printf("voce foi reprovado!");

    }

return 0;
}//main