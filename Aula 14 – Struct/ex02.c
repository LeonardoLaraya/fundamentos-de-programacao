/*
2) Escreva um trecho de código para fazer a criação dos
novos tipos de dados conforme solicitado abaixo:

a) Horário: composto de hora, minutos e segundos.
b) Data: composto de dia, mês e ano.
c) Compromisso: local, horário e data e texto que descreve o
compromisso.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//a) Horário: composto de hora, minutos e segundos.
typedef struct {
   int hora;
   int minutos;
   int segundos;
}Horario;

//b) Data: composto de dia, mês e ano.
typedef struct {
    int dia;
    int mes;
    int ano;
}Data;

//c) Compromisso: local, horário e texto que descreve o compromisso.
typedef struct {
    char rua[31];
    int numero;
    char cidade[31];
    Horario horario;
    Data data;
    char descricao[91];
}Compromisso;

int main(){

    Compromisso compromisso;

    printf("Digite o local do compromisso\n");
    printf("cidade:");
    setbuf(stdin,NULL);
    fgets(compromisso.cidade,31,stdin);
    compromisso.cidade[strcspn(compromisso.cidade,"\n")] = '\0';

    printf("o seu evento vai acontecer na cidade:%s",compromisso.cidade);







    return 0;
}//main
