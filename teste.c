
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
a) (5 pontos) Aloque dinamicamente um vetor de Notificações de tamanho 5. Cada Notificação é uma estrutura que contém:
* Pais (string tam: 20):
* Cidade(string tam: 20):
* Quantidade de Servidores UP - ativos (inteiro)
* Quantidade de Servidores Down - com problemas (inteiro)
*/

typedef struct {
    char pais[20];
    char cidade[20];
    int serverUP;
    int serverDOWN;
    float servidorAtivos;
}Notificacao;


int main(){
    int tamanho =5;

    Notificacao *ptrNotificacoes = (Notificacao*) malloc(sizeof(Notificacao)*tamanho);

/*
b) (10 pontos) Receba os dados de diversas notificações de falhas e vá armazenando neste vetor de Notificações. A cada vez que o tamanho do vetor se
 tornar insuficiente, realoque seu tamanho aumentando o vetor em 5 unidades.
Ao receber o valor "fim" como entrada de um pais, o sistema de entradas deverá parar e o vetor tamanho do vetor ajustado ao tamanho exato da quantidade 
de relatórios.
*/

for (int i = 0; i < (tamanho+1); i++){
       
       if (i == tamanho){
           tamanho += 5 ;
           ptrNotificacoes =  realloc(ptrNotificacoes,sizeof(Notificacao)*tamanho);
        }//if

        printf("digite o pais:");
        setbuf(stdin,NULL);
        fgets(ptrNotificacoes[i].pais,20,stdin);
        ptrNotificacoes[i].pais[strcspn(ptrNotificacoes[i].pais,"\n")] = '\0';
        
        if(strcmp(ptrNotificacoes[i].pais,"fim")==0){
            if (tamanho != i){
                tamanho = i;
                ptrNotificacoes =  realloc(ptrNotificacoes,sizeof(Notificacao)*tamanho);
                break;
            }//if
        }//if
   }//for
   
    return 0;
}//main