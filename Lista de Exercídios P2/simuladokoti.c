#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*
Na tarde de ontem, 06 de dezembro, alguns pokemon da Amazon (AWS) pararam de funcionar. 
Com isso, diversos serviÃ§os ficaram indisponÃ­veis. Dentre eles, os pokemon da Riot responsÃ¡veis pelos jogos League of Legends, 
Valorant e Wild Rift.
VocÃª foi convocado em uma missÃ£o de emergÃªncia para ajudar 
a identificar os locais das falhas e gerar os relatÃ³rios para os tÃ©cnicos responsÃ¡veis por reestabelecer os serviÃ§os.

Para isso, a central da Amazon estÃ¡ recebendo as notificaÃ§Ãµes de falhas ao redor do mundo. VocÃª devera implementar um sistema para salvar e processar essas notificaÃ§Ãµes. Para isso:

a) (5 pontos) Aloque dinamicamente um vetor de NotificaÃ§Ãµes de tamanho 5. Cada NotificaÃ§Ã£o Ã© uma estrutura que contÃ©m:
* nome (string tam: 20):
* Cidade(string tam: 20):
* Quantidade de pokemon UP - ativos (inteiro)
* Quantidade de pokemon Down - com problemas (inteiro)

Os paÃ­ses possÃ­veis sÃ£o: Brasil, EUA, FranÃ§a, Inglaterra, China e JapÃ£o

b) (10 pontos) Receba os dados de diversas notificaÃ§Ãµes de falhas e vÃ¡ armazenando neste vetor de NotificaÃ§Ãµes. A cada vez que o tamanho do vetor se tornar insuficiente, realoque seu tamanho aumentando o vetor em 5 unidades.
Ao receber o valor "fim" como entrada de um nome, o sistema de entradas deverÃ¡ parar e o vetor tamanho do vetor ajustado ao tamanho exato da quantidade de relatÃ³rios.

c) (5 pontos) Salve os dados em um aquivo BINÃRIO chamado "notifications.dat". Feche o arquivo e libere a memÃ³ria utilizada pelo vetor;

d) (5 pontos) Abra o arquivo gerado anteriormente, carregue os dados em um vetor de RelatÃ³rios alocado dinamicamente.

e) (5 pontos) Calcule o total de pokemon ativos e com problemas em cada paÃ­s. Exiba os dados na tela e gere um arquivo MODO TEXTO chamado "report.txt" no seguinte formato:
nome       |  UP |DOWN |  RATE|
Brasil     |   80|   30|   25%|
EUA        |  200|   50|   20%|
FranÃ§a     |   80|    5|    6%|
Inglaterra |  100|   12|   11%|
China      |  117|    3|    3%|
JapÃ£o      |   45|    5|   10%| 


Obs: Caso vocÃª tenha problemas com a alocaÃ§Ã£o dinÃ¢mica, faÃ§a um vetor estÃ¡tico de tamanho 10 e prossiga nos cÃ³digos, vocÃª perderÃ¡ os pontos dessa parte mas prosseguirÃ¡ normalmente com a nota da parte de arquivos.

Dados de exemplo:


nome       |CIDADE      |UP  |DOWN |
EUA        |New York    | 100|   30|
Brasil     |Sao Paulo   |  50|   20|
Inglaterra |Londres     |  70|    8|
Brasil     |Brasilia    |  20|    5|
Brasil     |Fortaleza   |  10|    5|
JapÃ£o      |Tokyo       |  45|    5|
EUA        |Boston      |  25|    5|
EUA        |Los Angeles |  50|   10|
FranÃ§a     |Paris       |  50|    4|
China      |Pequim      | 117|    3|
FranÃ§a     |Nice        |  30|    1|
Londres    |Manchester  |  30|    4|
EUA        |Orlando     |  25|    5|
*/

/*
a) (5 pontos) Aloque dinamicamente um vetor de NotificaÃ§Ãµes de tamanho 5. Cada NotificaÃ§Ã£o Ã© uma estrutura que contÃ©m:
* nome (string tam: 20):
* Cidade(string tam: 20):
* Quantidade de pokemon UP - ativos (inteiro)
* Quantidade de pokemon Down - com problemas (inteiro)

Os paÃ­ses possÃ­veis sÃ£o: Brasil, EUA, FranÃ§a, Inglaterra, China e JapÃ£o
*/

typedef struct
{
    char nome[20];
    int numero;
    int ataque;
    int defesa;
} Pokedex;

void LeString(char string[], int tamanho){
    fgets(string, tamanho, stdin);
    string[strcspn(string, "\n")] = '\0';
    setbuf(stdin, NULL);
}


int main(){
    
    /*
    b) (10 pontos) Receba os dados de diversas notificaÃ§Ãµes de falhas e vÃ¡ armazenando neste vetor de NotificaÃ§Ãµes. 
    A cada vez que o tamanho do vetor se tornar insuficiente, realoque seu tamanho aumentando o vetor em 5 unidades.
    Ao receber o valor "fim" como entrada de um nome, o sistema de entradas deverÃ¡ parar e o vetor tamanho do vetor 
    ajustado ao tamanho exato da quantidade de relatÃ³rios.
    */

    int tamanho = 5;
    int i = 0;
    Pokedex* pokemon = (Pokedex*) malloc (tamanho * (sizeof(Pokedex)));
    if(pokemon == NULL){
        perror("Erro ao alocar memÃ³ria!\n");
        exit(1);
    }
    
    do{
        printf("Digite o nome do Pokemon('fim' para finalizar): ");
        LeString(pokemon[i].nome, 20);
        if((i == 0) && (strcmp(pokemon[i].nome, "fim") == 0)){
            printf("VocÃª nÃ£o cadastrou nenhum nome!\n");
            printf("Encerrando o programa!\n");
            free(pokemon);
            return 0;
        }
        if((strcmp(pokemon[i].nome, "fim") == 0) && (i > 0)){
            printf("Fim do cadastro!\n");
            pokemon = (Pokedex*) realloc (pokemon, i * sizeof(Pokedex));
            if(pokemon == NULL){
                perror("Erro ao alocar memÃ³ria !\n");
                exit(1);
            }
            printf("Tamanho do vetor realocado para %i!\n", i);
            break;
        }
        printf("Digite o numero do %s: ", pokemon[i].nome);
        scanf("%i", &pokemon[i].numero);
        printf("Digite o ataque do pokemon: ");
        scanf("%i", &pokemon[i].ataque);
        printf("Digite a defesa do pokemon: ");
        scanf("%i", &pokemon[i].defesa);
        setbuf(stdin, NULL);
        i++;
        if(i % 3 == 0){
            tamanho += 3;
            pokemon = (Pokedex*) realloc (pokemon, tamanho * sizeof(Pokedex));
            printf("Vetor alocado para %i\n", tamanho);
            if(pokemon == NULL){
                perror("Erro ao alocar memÃ³ria !\n");
                exit(1);
            }    
        }
    }while(1);

    /*
    c) (5 pontos) Salve os dados em um aquivo BINÃRIO chamado "notifications.dat". 
    Feche o arquivo e libere a memÃ³ria utilizada pelo vetor;
    */

    FILE* arquivo1 = fopen("notificacoes.dat", "wb");
    if(arquivo1 == NULL){
        perror("Erro ao criar arquivo!\n");
        exit(1);
    }

    fwrite(pokemon, sizeof(Pokedex), i, arquivo1);
    fclose(arquivo1);
    free(pokemon);

    /*
    d) (5 pontos) Abra o arquivo gerado anteriormente, carregue os dados em um vetor de RelatÃ³rios alocado dinamicamente.
    */

    FILE* arquivo2 = fopen("notificacoes.dat", "rb");
    if(arquivo2 == NULL){
        perror("Erro ao abrir arquivo!\n");
        exit(1);
    }
    
    Pokedex* relatorios = (Pokedex*) malloc (i * sizeof(Pokedex));
    if(relatorios == NULL){
        perror("Erro ao ler arquivo binÃ¡rio!\n");
        exit(1);
    }

    fread(relatorios, sizeof(Pokedex), i, arquivo2);
    fclose(arquivo2);

    /*
    e) (5 pontos) Calcule o total de pokemon ativos e com problemas em cada paÃ­s. 
    Exiba os dados na tela e gere um arquivo MODO TEXTO chamado "report.txt" no seguinte formato:
    nome       |  UP |DOWN |  RATE|
    Brasil     |   80|   30|   25%|
    EUA        |  200|   50|   20%|
    FranÃ§a     |   80|    5|    6%|
    Inglaterra |  100|   12|   11%|
    China      |  117|    3|    3%|
    JapÃ£o      |   45|    5|   10%| 
    */

    FILE* arquivo3 = fopen("pokedex.csv", "w");
    if(arquivo3 == NULL){
        perror("Erro ao abrir arquivo!\n");
        exit(1);
    }

    fprintf(arquivo3, "%-4s | %-19s | %-4s | %-4s\n", "Numero", "Nome", "Ataque", "Defesa");
    for(int j = 0; j < i; j++){
        fprintf(arquivo3, "%i, %s, %i, %i\n", relatorios[j].numero, relatorios[j].nome, relatorios[j].ataque, relatorios[j].defesa);
    }

    free(relatorios);
    fclose(arquivo3);
    return 0;
}