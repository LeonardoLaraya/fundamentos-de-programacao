/*
Ao iniciar sua jornada Pokémon, um treinador pode escolher entre três tipos de Pokémon iniciais. 
Crie um programa que utilize uma enumeração chamada TipoPokemon, com as opções: Fogo, Água e Grama

O programa deve pedir ao usuário para escolher um número (1 para Fogo, 2 para Água e 3 para Grama) 
e exibir uma mensagem motivadora baseada na escolha, por exemplo:

Fogo: "Você escolheu o caminho ardente da vitória!"
Água: "A correnteza te levará ao topo!"
Grama: "O crescimento e a estratégia são suas armas!"
Caso o usuário escolha um número inválido, o programa deve alertá-lo.
*/

#include <stdio.h>
#include <stdlib.h>

typedef enum {Fogo = 1 ,Agua,Grama}TipoPokemon;

int main(){

    TipoPokemon pokemon;
    
    printf("escolha seu pokemon:\n1 = fogo\n2 = agua\n3 = grama\n");
    scanf("%i",&pokemon);

    switch (pokemon){
    case Fogo:
        printf("Você escolheu o caminho ardente da vitória\n");
        break;

    case Agua:
        printf("A correnteza te levará ao topo!\n");
        break;

    case Grama:
        printf("O crescimento e a estratégia são suas armas!\n");
        break;

    default:
        break;

    }//switch





    return 0;
}//main