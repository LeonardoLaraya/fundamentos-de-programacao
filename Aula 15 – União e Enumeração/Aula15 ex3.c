/*
3) Construa uma estrutura aluno com nome, curso e 4 notas,
média e situação. Leia as informações nome, curso e notas do
teclado, calcule a média e armazene a situação do aluno.
- media ≥ 7 → Aprovado;
- 3 ≤ media < 7 → Exame;
- media < 3 → Reprovado;
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    char nome[31]; 
    char curso[31];
    float notas[4];
    float media;
    char situacao[10];
}Aluno;

int main(){

    Aluno aluno;
    float soma = 0;

    printf ("Digite seu nome: ");
    fgets (aluno.nome, 31, stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = '\0';

    printf ("Digite seu curso: ");
    fgets (aluno.curso, 31, stdin);
    aluno.curso[strcspn(aluno.curso, "\n")] = '\0';

    for (int i = 0; i < 4; i++){
        printf("Digite a nota %i: ", i+1);
        scanf ("%f", &aluno.notas[i]);
        soma = soma + aluno.notas[i];
    }
    
    aluno.media = soma / 4;

    if (aluno.media >= 7){
        strcpy(aluno.situacao, "Aprovado");
    } else if (aluno.media >= 3){
        strcpy(aluno.situacao, "Exame");
    } else {
        strcpy(aluno.situacao, "Reprovado");
    }//if
    
    printf("\nDados do Aluno:\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Curso: %s\n", aluno.curso);
    printf("Notas: %.2f, %.2f, %.2f, %.2f\n", aluno.notas[0], aluno.notas[1], aluno.notas[2], aluno.notas[3]);
    printf("Media: %.2f\n", aluno.media);
    printf("Situacao: %s\n", aluno.situacao);

    return 0;
}//main