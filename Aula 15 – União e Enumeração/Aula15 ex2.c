/*
2) Escreva um trecho de código para fazer a criação dos
novos tipos de dados conforme solicitado abaixo:
- Horário: composto de hora, minutos e segundos.
- Data: composto de dia, mês e ano.
- Compromisso: local, horário e texto que descreve o
compromisso.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int horas;
    int minutos;
    int segundos;
}Horario;

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct {
    char local[31];
    Horario horario;
    Data data;
    char descricao[61];
}Compromisso;

int main (){

    Compromisso compromisso;

    printf ("Digite o horario (hr:min:seg) ");
    scanf ("%i:%i:%i", &compromisso.horario.horas, &compromisso.horario.minutos, &compromisso.horario.segundos);
    setbuf(stdin,NULL);

    printf ("Digite a data (dia/mes/ano): ");
    scanf ("%i/%i/%i", &compromisso.data.dia, &compromisso.data.mes, &compromisso.data.ano);
    setbuf(stdin,NULL);

    printf ("Informe o local: ");
    fgets(compromisso.local, 31, stdin);
    compromisso.local[strcspn(compromisso.local, "\n")] = '\0';

    printf ("Informe a descricao do comrpomisso: ");
    fgets(compromisso.descricao, 61, stdin);
    compromisso.descricao[strcspn(compromisso.descricao, "\n")] = '\0';
    
    //Exibir os dados

    printf ("Compromisso agendado:\n");
    printf ("Data: %i/%i/%i\n", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano);
    printf ("Horario: %i:%i:%i\n", compromisso.horario.horas, compromisso.horario.minutos, compromisso.horario.segundos);
    printf ("Local: %s\n", compromisso.local);
    printf ("Descricao: %s\n", compromisso.descricao);

    return 0;
}//main 