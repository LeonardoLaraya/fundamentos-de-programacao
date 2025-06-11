#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL_PERGUNTAS 5
#define MAX_ALTERNATIVAS 4

typedef struct {
    const char *enunciado;
    const char *alternativas[MAX_ALTERNATIVAS];
    char correta;
} Pergunta;

Pergunta perguntas[TOTAL_PERGUNTAS] = {
    {"Qual a capital do Brasil?", {"Rio de Janeiro", "São Paulo", "Brasília", "Belo Horizonte"}, 'C'},
    {"Quanto é 2+2?", {"3", "4", "5", "6"}, 'B'},
    {"Qual o maior planeta do sistema solar?", {"Terra", "Marte", "Júpiter", "Saturno"}, 'C'},
    {"Quem escreveu Dom Quixote?", {"Machado de Assis", "Miguel de Cervantes", "José de Alencar", "Fernando Pessoa"}, 'B'},
    {"Qual o elemento químico de símbolo 'Au'?", {"Prata", "Oxigênio", "Ouro", "Hélio"}, 'C'}
};

void mostrar_pergunta(int indice) {
    printf("\nPergunta %d:\n", indice + 1);
    printf("%s\n", perguntas[indice].enunciado);
    for (int i = 0; i < MAX_ALTERNATIVAS; i++) {
        printf("%c) %s\n", 'A' + i, perguntas[indice].alternativas[i]);
    }
    printf("Digite sua resposta (A-D ou P para parar): ");
}

char ler_resposta() {
    char r;
    scanf(" %c", &r);
    if (r >= 'a' && r <= 'z') r -= 32;
    return r;
}

void jogar() {
    int premio = 0;
    int valores[] = {1000, 2000, 3000, 5000, 10000};

    for (int i = 0; i < TOTAL_PERGUNTAS; i++) {
        mostrar_pergunta(i);
        char resp = ler_resposta();

        if (resp == 'P') {
            printf("\nVocê parou com R$ %d\n", premio);
            return;
        }

        if (resp == perguntas[i].correta) {
            premio = valores[i];
            printf("Correto! Você ganhou R$ %d\n", premio);
        } else {
            printf("Errado! A resposta certa era: %c\n", perguntas[i].correta);
            printf("Você sai com R$ 0\n");
            return;
        }
    }

    printf("\nParabéns! Você ganhou R$ %d!\n", premio);
}

int main() {
    srand(time(NULL));
    printf("=== JOGO DO MILHÃO SIMPLES ===\n");
    jogar();
    return 0;
}
