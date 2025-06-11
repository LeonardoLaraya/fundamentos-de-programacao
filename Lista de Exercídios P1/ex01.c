/*
1) Crie uma estrutura representando um atleta. 
Essa estrutura deve conter: o nome do atleta, seu esporte, idade e altura. 
Agora, escreva um programa que leia os dados de cinco atletas. 
Calcule e exiba os nomes do atleta mais alto e do mais velho.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[31];
    char esporte[31];
    int idade;
    float altura;
} Atleta;

int main(){

    int numeroAtletas = 2; // define a quantidade de atletas 

    Atleta atleta[numeroAtletas];
    float alturaMaior;
    int idadeMaisVelha;
    int maisVELHOAtleta;
    int maiorAtleta;

    //for para receber dados dos atletas 
    for (int i = 0; i < numeroAtletas; i++){
        printf("ATLETA %i:\n",i+1);
        //recebe nome
        printf("nome:");
        fgets(atleta[i].nome,31,stdin);
        atleta[i].nome[strcspn(atleta[i].nome,"\n")] = '\0';
        setbuf(stdin,NULL);
        //recebe esporte 
        printf("esporte:");
        fgets(atleta[i].esporte,31,stdin);
        atleta[i].esporte[strcspn(atleta[i].esporte,"\n")] = '\0';
        //recebe idade
        printf("idade:");
        scanf("%d",&atleta[i].idade);
        //recebe altura 
        printf("altura:");
        scanf("%f",&atleta[i].altura);
        setbuf(stdin,NULL);
    }//for
    
    //calculo atleta mais alto
    maiorAtleta = 0;
    alturaMaior = atleta[0].altura;
    for (int i = 0; i < numeroAtletas; i++){
        if (alturaMaior < atleta[i].altura ){
            alturaMaior = atleta[i].altura;
            maiorAtleta = i;
        }//if
    }//for
    
    //calcula atleta mais velho
    maisVELHOAtleta = 0;
    idadeMaisVelha = atleta[0].idade;
    for (int i = 0; i < numeroAtletas; i++){
        if(idadeMaisVelha < atleta[i].idade){
            idadeMaisVelha = atleta[i].idade;
            maisVELHOAtleta = i;
        }//if
    }//for
    
    printf("o %s e o atleta mais alto com %.2f\n",atleta[maiorAtleta].nome,alturaMaior);
    printf("o %s e o atleta mais velho com %.2i\n",atleta[maisVELHOAtleta].nome,idadeMaisVelha);

    return 0;
}//main