/*
1) Faça um programa que calcule a média para 5 alunos, sendo que
cada aluno tem 2 notas (reais). O programa somente deverá aceitar
notas no intervalo fechado de 0 a 10, solicitando nova digitação
quando necessário.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float nota1 ;
    float nota2 ;
    float media ;
    int contadoraluno = 1;

    while (contadoraluno <=5){//limita a quantidade em 5 repeticoes
        
        printf("digite as duas notas do aluno %d entre (0 e 10)\n",contadoraluno); 
        //avisa qual aluno esta sendo calculado a media

        do{
            printf("nota 1:");
            scanf("%f",&nota1);
        }while(nota1 > 10 || nota1 <0);
        //recebe a primeira nota

        do{
            printf("nota 2:");
            scanf("%f",&nota2);
        }while(nota2 > 10 || nota2 <0);
        //recebe a segunda nota
        
        media = (nota1 + nota2)/ 2;
        printf("A media é %.2f\n", media);
        //faz a media das duas notas

        contadoraluno++;
        //soma um pra limitar a quantidade e avisar qual aluno é 

    }//while

return 0;
}//main