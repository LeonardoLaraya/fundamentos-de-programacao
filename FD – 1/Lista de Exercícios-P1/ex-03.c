/*
3) Faça um programa que tenha como entrada: o número de horas, minutos e segundos atuais,
 informe quantos segundos faltam para chegar terminar o dia.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int dia = 86400;
    int horas;
    int minutos;
    int segundos;
    int segundos_totais;
    int segundos_restantes;
    int minutos_restantes;
    int horas_restantes;
    int segundo_sobrou;

    printf("digite a hora atual: (hh:mm:ss)\n");
    scanf("%i:%i:%i",&horas,&minutos,&segundos);
    //recebe as horas

    segundos_totais =(horas*3600)+(minutos*60)+segundos;
    //converte para segundos

    segundos_restantes = dia - segundos_totais;
    //calcula quantos segundos faltam para acabar o dia 

    horas_restantes = segundos_restantes / 3600;
    minutos_restantes = (segundos_restantes % 3600)/60;
    segundo_sobrou = (segundos_restantes % 3600) % 60;
    //converte de volta as horas os minutos e os segundos 

    printf("faltam %i horas %i minutos %i segundos para acabar o dia\n",horas_restantes,minutos_restantes,segundo_sobrou);

return 0;
}//main