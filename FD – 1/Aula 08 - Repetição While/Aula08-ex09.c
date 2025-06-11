/*
9) Faça um programa que simule um jogo, onde o usuário
deverá descobrir um número aleatório escolhido pelo
computador (de 1 a 100).

- O usuário poderá realizar até 6 tentativas, o programa deverá
retornar as mensagens “muito alto”, “muito baixo” até o usuário
acertar o número ou esgotar o número máximo de tentativas

Pesquise sobre como gerar um numero aleatório
utilizando a função rand da biblioteca stdlib.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    srand(time(0));//inicializa o rand com o relogio do computador

    int numero_sorteado;
    int resposta;
    int contador_tentativas = 1;

    numero_sorteado = rand()%100;// vai ser ate onde vai sortear
    printf("sorteado %i\n",numero_sorteado);

    printf("Adivinhe o numero escolhido pelo computador de 0 a 100\n voce tem 6 tentativas\n");

    while (contador_tentativas <= 6){

        printf("tentativa numero (%i)",contador_tentativas);
        scanf("%i",&resposta);

            contador_tentativas++;

            //verifica acerto
            if(resposta == numero_sorteado){
            printf("voce acertou\n");
            break;
            }else if(resposta > numero_sorteado){
                     printf("muito alto\n");
            }else if(resposta < numero_sorteado){
                        printf("muito baixo\n");
            }//verifica se esta certo, caso não tiver fala se esta maior ou menor que o resultado

                //caso acabar as tentativas
                if(contador_tentativas >= 7){
                printf("acabou suas tentativas\n");
                }//if
            
    }//while
    
return 0;
}//main