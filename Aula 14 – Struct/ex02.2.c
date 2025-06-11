/*
2) Escreva um trecho de código para fazer a criação dos
novos tipos de dados conforme solicitado abaixo:
₢ Horário: composto de hora, minutos e segundos.
₢ Data: composto de dia, mês e ano.
₢ Compromisso: local, horário e texto que descreve o
compromisso.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int hora;
    int minutos;
    int segundos;
}Horario;

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct {
    char rua[31];
    int numero;
    char cidade[31];
    Horario horario;
    Data data;
    char descricao[50];
}Compromisso;

int main(){

    Compromisso compromisso;

    printf("preencha os dados do compromisso:\n");
    //data
    printf("data(dd/mm/aaaa): ");
    scanf("%d/%d/%d",&compromisso.data.dia,&compromisso.data.mes,&compromisso.data.ano);
    //horario
    printf("horario(hh:mm:ss): ");
    scanf("%d:%d:%d",&compromisso.horario.hora,&compromisso.horario.minutos,&compromisso.horario.segundos);
    //local
    setbuf(stdin,NULL);
    printf("cidade:");
    fgets(compromisso.cidade,31,stdin);
    compromisso.cidade[strcspn(compromisso.cidade,"\n")] = '\0';
    setbuf(stdin,NULL);
    printf("rua:");
    fgets(compromisso.rua,31,stdin);
    compromisso.rua[strcspn(compromisso.rua,"\n")] = '\0';
    setbuf(stdin,NULL);
    printf("numero;");
    scanf("%d",&compromisso.numero);
    //descriçao
    setbuf(stdin,NULL);
    printf("descricao");
    fgets(compromisso.descricao,50,stdin);
    compromisso.descricao[strcspn(compromisso.descricao,"\n")] = '\0';
    setbuf(stdin,NULL);

    printf("SEU COMPROMISSO VAI SER:\n");

    printf("%s,%s,%d\n",compromisso.cidade,compromisso.rua,compromisso.numero);
    printf("%d/%d/%d\n",compromisso.data.dia,compromisso.data.mes,compromisso.data.ano);
    printf("%d:%d:%d\n",compromisso.horario.hora,compromisso.horario.minutos,compromisso.horario.segundos);
    printf("%s\n",compromisso.descricao);












    return 0;
}//main