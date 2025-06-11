/*
Na tarde de ontem, 06 de dezembro, alguns servidores da Amazon (AWS) pararam de funcionar.
Com isso, diversos serviços ficaram indisponíveis. Dentre eles, os servidores da Riot responsáveis pelos jogos League of Legends, Valorant e Wild Rift.

Você foi convocado em uma missão de emergência para ajudar a identificar os locais das falhas e reestabelecer os serviços.

Para isso, faça um programa que armazene os dados de 5 cidades onde estão localizados os servidores com problemas, cada cidade possui: nome (20 caracteres), quantidade de servidores ativos(inteiro), quantidade de servidores com problemas (inteiro) e quantidade total de servidores(inteiro).

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>

int main(){

/*
a) Faça um programa que receba os dados das 5 cidades: nome(strings), a quantidade de servidores ativos
   a quantidade de servidores com falha (salvos nas duas primeiras colunas de uma matriz de inteiros 5x3).
*/


    char cidades[5][31];
    int servidores[5][3];
    char cidadePesquisa[31];

    for (int i = 0; i < 5; i++){
        setbuf(stdin,NULL);
        printf("digite o nome da cidade:\n");
        fgets(cidades[i],30,stdin);
        cidades[i][strcspn(cidades[i],"\n")]='\0';
        __fpurge(stdin);

        do{
        printf("Servidores Ativos:\n");
        scanf("%d",&servidores[i][0]);
        }while (servidores[i][0]<0); // se o valor recibido for menor que 0 ele não continua o codigo e roda dnv

        
        do{
        printf("Servidores Inativos:\n");
        scanf("%d",&servidores[i][1]);
        }while (servidores[i][1]<0);// se o valor recibido for menor que 0 ele não continua o codigo e roda dnv
    }//for
        



/*
b) Utilizando estruturas de repetição, calcule a quantidade total de servidores em cada cidade e salve na última coluna da matriz;
*/


    for (int i = 0; i < 5; i++){        
        servidores[i][2] = servidores[i][0] + servidores [i][0];

    }//for
    





/*
c) Exiba em formato de tabela (com colunas alinhadas e separadas por | ) os nomes,
  as 3 quantidades de servidores de todos as cidades.
*/


    for (int i = 0; i < 5; i++){
        printf("%-15s | %4d |%4d |%4d\n",cidades[i],servidores[i][0],servidores[i][1],servidores[i][2]);
    }//for






/*
d) Receba um nome de uma cidade e busque ela na lista, todos os dados de seus servidores (apenas 1 vez).
   Exiba uma mensagem informando também caso não encontre o nome buscado.
*/

    printf("digite o nome da cidade que deseja procurar:\n");
    setbuf(stdin,NULL);
    fgets(cidadePesquisa,30,stdin);
    cidadePesquisa[strcspn(cidadePesquisa,"\n")]='\0';


    for (int i = 0; i < 5; i++){

        if(strcmp(cidades[i],cidadePesquisa)==0){
            printf("%-15s | %4d |%4d |%4d\n",cidades[i],servidores[i][0],servidores[i][1],servidores[i][2]);
        }else{
            printf("A cidade não foi encontrada!");
        }//if

    }//for
    


return 0;
}//main
