/*
a) Defina um tipo enumerado (enum) para representar os níveis (tiers) dos jogadores. Os tiers são:
1 - Bronze, 2 - Prata, 3 - Ouro, 4 - Platina, 5 - Diamante, 6 - Desafiante.

Em seguida, declare uma estrutura para armazenar os dados de um jogador no ranking. Cada jogador deve possuir:

nome (string),

número de vitoria (inteiro),

número de derrotas (inteiro),

tier (enum definido),

pontos (inteiro).

b) Crie uma função que receba do teclado os dados de 6 jogadores e os armazene em um vetor.
Não devem ser aceitos valores negativos para vitoria, derrotas ou pontos. Solicite novos valores caso sejam inválidos.

c) Crie uma função que exiba uma tabela alinhada com o nome e a taxa de vitoria (winrate) de cada jogador.

A fórmula para calcular o winrate é:
    winrate=(vitoria/(vitoria+derrotas))∗100

Essa taxa deve ser calculada por uma função adicional, que recebe o número de vitoria e derrotas (por valor) e retorna o winrate.
Essa função deve ser chamada uma vez para cada jogador.

d) Crie uma função que receba um número de 1 a 6 (correspondente a um Tier)
e retorne a estrutura do jogador líder daquele tier (ou seja, o jogador com mais pontos naquele nível).
Solicite o tier desejado ao usuário via teclado e exiba os dados do líder retornado.

e) Implemente uma função que busque um jogador pelo nome digitado.
Essa função deve receber o nome do jogador e retornar, por referência, os seguintes dados: número de vitoria, número de derrotas, tier e pontos.
A exibição dos dados deve ser feita na função main, utilizando os valores retornados pela função de busca.

f) Crie uma função recursiva que calcule a soma total de partidas disputadas por todos os jogadores (ou seja, a soma de todas as vitoria e derrotas).
Essa função deve ser chamada na função main, e o valor retornado deve ser exibido.

Observações:

Cada item de b a f deve ser implementado em uma função separada.

Não é permitido o uso de variáveis globais.

Caso necessário, utilize parâmetros adicionais nas funções.

*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef enum {Bronze = 1,Prata,Ouro,Platina,Diamante,Desafiante} Tier;

typedef struct {
    char nome [31];
    int vitoria;
    int derrotas;
    Tier tier;
    int pontos;
}Jogador;

void recebeJogadores(Jogador jogadores[], int quantidade){

    for(int i = 0; i < quantidade; i++){
        printf("Jogador %d:\n", i + 1);
        //recebe nome 
        printf("nome:");
        fgets(jogadores[i].nome,31,stdin);
        jogadores[i].nome[strcspn(jogadores[i].nome,"\n")] = '\0';
        setbuf(stdin,NULL);

        //recebe vitoria < 0 
        do{
            printf("vitorias:");
            scanf("%i",&jogadores[i].vitoria);
            if (jogadores[i].vitoria < 0){
                printf("Valor inválido. Digite um número não negativo.\n");
            }//if
        }while (jogadores[i].vitoria < 0);

                
        //recebe derrotas < 0 
        do{
            printf("derrotas:");
            scanf("%i",&jogadores[i].derrotas);
            if (jogadores[i].derrotas < 0){
                printf("Valor inválido. Digite um número não negativo.\n");
            }//if
        }while (jogadores[i].derrotas < 0);

        //recebe pontos < 0 
        do{
            printf("pontos:");
            scanf("%i",&jogadores[i].pontos);
            if (jogadores[i].pontos < 0){
                printf("Valor inválido. Digite um número não negativo.\n");
            }//if
        }while (jogadores[i].pontos < 0);

       //recebe tier
        do{
            printf("Tier:\n 1 - Bronze\n 2 - Prata\n 3 - Ouro\n 4 - Platina\n 5 - Diamante\n 6 - Desafiante\n");
            scanf("%i",&jogadores[i].tier);
            setbuf(stdin,NULL);

            if (jogadores[i].tier < 1 || jogadores[i].tier > 6){
                printf("Valor inválido. Digite um número não negativo.\n");
            }//if
        }while (jogadores[i].tier < 1 || jogadores[i].tier > 6);
    }//for
    return 0;
}//recebeJogadores


/*
A fórmula para calcular o winrate é:
    winrate=(vitoria/(vitoria+derrotas))∗100
*/
float CalculoWinrate(Jogador jogadores[],int qualjogador){

    float winrate;
    
    winrate = ((float)jogadores[qualjogador].vitoria/(jogadores[qualjogador].vitoria+jogadores[qualjogador].derrotas))*100;

    return winrate;
}//CalculoWinrate

/*
d) Crie uma função que receba um número de 1 a 6 (correspondente a um Tier)
e retorne a estrutura do jogador líder daquele tier (ou seja, o jogador com mais pontos naquele nível).
Solicite o tier desejado ao usuário via teclado e exiba os dados do líder retornado.
*/

int liderTier(Jogador jogadores[],int tier, int quantidade){

    int maxPontos = jogadores[0].pontos;;
    int jogadorLiderTier = 0;

    for (int i = 0; i < quantidade; i++){

        if(jogadores[i].tier == tier){
            if (jogadores[i].pontos < maxPontos){
                maxPontos = jogadores[i].pontos;
                jogadorLiderTier = i;
           }//if
        }//if
    }//for
    
  printf ("%i",jogadorLiderTier);
    return jogadorLiderTier;
}//liderTier



int main(){
    float winrate[6];
    int buscaTier;
    int jogadorLiderTier;
    Jogador jogadores[6];
    recebeJogadores(jogadores, 6); 

    printf("jogador:       || winrate:\n");   
    for (int i = 0; i < 6; i++){
       winrate[i] = CalculoWinrate(jogadores,i);
      
       printf("%-15s || %-15.2f\n",jogadores[i].nome,winrate[i]);

    }//for
    
    printf("digite um numero de tier para saber o lider:\n");
    scanf("%i",&buscaTier);

    jogadorLiderTier = liderTier(jogadores,buscaTier,6);

    printf("Nome: %s\nVitórias: %d\nDerrotas: %d\nPontos: %d\nTier: %i\n",
        jogadores[jogadorLiderTier].nome,
        jogadores[jogadorLiderTier].vitoria,
        jogadores[jogadorLiderTier].derrotas,
        jogadores[jogadorLiderTier].pontos,
        jogadores[jogadorLiderTier].tier);
    return 0;
}//main