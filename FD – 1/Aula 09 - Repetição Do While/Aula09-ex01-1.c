/*
1) Faça um programa que calcule a média para 5 alunos, sendo que
cada aluno tem 2 notas (reais). O programa somente deverá aceitar
notas no intervalo fechado de 0 a 10, solicitando nova digitação
quando necessário.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int nota1;
    int nota2;
    int media;// media das notas 
    int contador_Aluno =1;

    while (contador_Aluno <=5){//limita a quantidade em 5 rep.
     
        printf("digite as duas notas do aluno %i entre (0 e 10)\n",contador_Aluno);
       //avisa qual aluno esta sendo calculado a media
        
        do{
            printf("nota 1:\n");
            scanf("%i",&nota1);
        }while(nota1 <= 0 || nota1 >= 10);
        //recebe primeira nota
        
        do{
            printf("nota 2:\n");
            scanf("%i",&nota2);
        }while(nota2 <= 0 || nota2 >= 10);
        //recebe segunda nota

        media = (nota1 + nota2) / 2;
        printf("a media do aluno %i e : %i\n",contador_Aluno, media);
        //calcula media

        contador_Aluno++;
        //quanta quantidade de alunos 

    }//while

return 0;
}//main
