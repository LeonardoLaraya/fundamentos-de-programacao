// Jogo do Milhão - Versão Ainda Mais Simplificada
// Código em um único arquivo, sem ctype.h, time.h, stdbool.h.
// Sem gerenciamento de perguntas, sem arquivos e sem ajudas.

#include <stdio.h>
#include <stdlib.h> // Para system, rand, srand (srand será usado sem time)
#include <string.h> // Para strcmp


// --- Constantes ---
#define MAX_ALTERNATIVAS 4
#define NUM_PERGUNTAS_TOTAL 15
#define PRIMEIRO_MARCO_SEGURANCA 5
#define SEGUNDO_MARCO_SEGURANCA 10

// Valores de premiação (simplificado)
static const int PREMIOS[NUM_PERGUNTAS_TOTAL] = {
    1000, 2000, 3000, 4000, 5000,      // Nível 1-5
    10000, 20000, 30000, 40000, 50000, // Nível 6-10
    100000, 200000, 300000, 500000, 1000000 // Nível 11-15
};

// --- Estrutura da Pergunta ---
typedef enum {
    MUITO_FACIL = 1,
    FACIL,
    MEDIO,
    DIFICIL,
    MUITO_DIFICIL
} NivelDificuldade;

typedef struct {
    const char *enunciado;
    const char *alternativas[MAX_ALTERNATIVAS];
    char alternativa_correta; // A, B, C ou D (MAIÚSCULA)
    NivelDificuldade nivel_dificuldade;
} Pergunta;

// --- Perguntas Fixas (Definidas Diretamente no Código) ---
static const Pergunta perguntas_fixas[] = {
    // Muito Fácil (Perguntas 1-2)
    {"Qual a capital do Brasil?", {"Rio de Janeiro", "São Paulo", "Brasília", "Belo Horizonte"}, 'C', MUITO_FACIL},
    {"Quanto é 2+2?", {"3", "4", "5", "6"}, 'B', MUITO_FACIL},
    {"Qual a cor do cavalo branco de Napoleão?", {"Marrom", "Branco", "Preto", "Malhado"}, 'B', MUITO_FACIL},
    {"Qual o coletivo de cães?", {"Manada", "Rebanho", "Alcateia", "Matilha"}, 'D', MUITO_FACIL},

    // Fácil (Perguntas 3-4)
    {"Qual a cor do céu em um dia limpo?", {"Verde", "Azul", "Amarelo", "Vermelho"}, 'B', FACIL},
    {"Qual animal mia?", {"Cachorro", "Gato", "Pato", "Leão"}, 'B', FACIL},
    {"Quantos lados tem um triângulo?", {"2", "3", "4", "5"}, 'B', FACIL},
    {"Qual o maior osso do corpo humano?", {"Fêmur", "Tíbia", "Úmero", "Costela"}, 'A', FACIL},

    // Médio (Perguntas 5-8)
    {"Qual o maior planeta do sistema solar?", {"Terra", "Marte", "Júpiter", "Saturno"}, 'C', MEDIO},
    {"Quem escreveu Dom Quixote?", {"Machado de Assis", "Miguel de Cervantes", "José de Alencar", "Fernando Pessoa"}, 'B', MEDIO},
    {"Qual a fórmula química da água?", {"CO2", "H2O", "O2", "NaCl"}, 'B', MEDIO},
    {"Em que ano o homem pisou na Lua?", {"1965", "1969", "1971", "1975"}, 'B', MEDIO},
    {"Qual o plural de 'cidadão'?", {"Cidadãos", "Cidadões", "Cidades", "Cidadães"}, 'A', MEDIO},
    {"Qual a capital da França?", {"Londres", "Berlim", "Madri", "Paris"}, 'D', MEDIO},

    // Difícil (Perguntas 9-12)
    {"Qual o metal mais abundante na crosta terrestre?", {"Ferro", "Ouro", "Alumínio", "Cobre"}, 'C', DIFICIL},
    {"Quem pintou a Mona Lisa?", {"Michelangelo", "Leonardo da Vinci", "Rafael", "Donatello"}, 'B', DIFICIL},
    {"Qual a montanha mais alta do mundo?", {"K2", "Monte Branco", "Everest", "Aconcágua"}, 'C', DIFICIL},
    {"Qual o rio mais longo do mundo?", {"Nilo", "Amazonas", "Mississipi", "Yangtzé"}, 'B', DIFICIL},
    {"Qual o nome do processo de conversão de sólido para gás?", {"Fusão", "Vaporização", "Sublimação", "Condensação"}, 'C', DIFICIL},
    {"Em que país nasceu Albert Einstein?", {"Estados Unidos", "Áustria", "Suíça", "Alemanha"}, 'D', DIFICIL},

    // Muito Difícil (Perguntas 13-15)
    {"Qual a velocidade da luz no vácuo (aprox.)?", {"300 km/s", "300.000 km/s", "150.000 km/s", "1.000.000 km/s"}, 'B', MUITO_DIFICIL},
    {"Qual o elemento químico de símbolo 'Au'?", {"Prata", "Oxigênio", "Ouro", "Hélio"}, 'C', MUITO_DIFICIL},
    {"Em que país ficam as pirâmides de Gizé?", {"Grécia", "Egito", "México", "Peru"}, 'B', MUITO_DIFICIL},
    {"Qual filósofo disse 'Penso, logo existo'?", {"Platão", "Sócrates", "Aristóteles", "Descartes"}, 'D', MUITO_DIFICIL},
    {"Qual o livro mais vendido no mundo depois da Bíblia?", {"Dom Quixote", "O Pequeno Príncipe", "Harry Potter e a Pedra Filosofal", "Um Conto de Duas Cidades"}, 'A', MUITO_DIFICIL}
};
static const int NUM_PERGUNTAS_FIXAS = sizeof(perguntas_fixas) / sizeof(perguntas_fixas[0]);

// --- Funções Utilitárias Simples ---

void limpar_tela() {
    printf("\n\n\n\n\n\n\n\n\n\n\n");
}

void pausar_tela() {
    printf("\nPressione Enter para continuar...");
    // Limpa o buffer de entrada antes de esperar pelo Enter
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    // Espera pelo Enter
    getchar();
}

// Lê um caractere e limpa o buffer. Não converte para maiúsculo.
char ler_char_simples() {
    int c = getchar();
    int temp;
    if (c != '\n' && c != EOF) {
        while ((temp = getchar()) != '\n' && temp != EOF);
    }
    return (char)c;
}

const char* nivel_para_string(NivelDificuldade nivel) {
    switch (nivel) {
        case MUITO_FACIL: return "Muito Fácil";
        case FACIL:       return "Fácil";
        case MEDIO:       return "Médio";
        case DIFICIL:     return "Difícil";
        case MUITO_DIFICIL: return "Muito Difícil";
        default:          return "Desconhecido";
    }
}

NivelDificuldade obter_nivel_por_numero(int numero_pergunta) {
    if (numero_pergunta <= 2) return MUITO_FACIL;
    if (numero_pergunta <= 4) return FACIL;
    if (numero_pergunta <= 8) return MEDIO;
    if (numero_pergunta <= 12) return DIFICIL;
    return MUITO_DIFICIL;
}

// --- Funções da Lógica do Jogo Simples ---

/**
 * @brief Seleciona aleatoriamente uma pergunta do nível de dificuldade apropriado.
 *
 * Garante que a mesma pergunta não seja selecionada duas vezes na mesma partida.
 *
 * @param nivel O nível de dificuldade desejado.
 * @param indices_usados Vetor de inteiros marcando os índices das perguntas já usadas nesta partida.
 * @param tamanho_indices_usados Tamanho do vetor indices_usados.
 * @return int O índice da pergunta selecionada na coleção `perguntas_fixas`, ou -1 se não houver perguntas disponíveis/adequadas.
 */
int selecionar_pergunta_simples(NivelDificuldade nivel, int *indices_usados, int tamanho_indices_usados) {
    int indices_disponiveis[NUM_PERGUNTAS_FIXAS];
    int count_disponiveis = 0;

    // 1. Encontra todos os índices de perguntas do nível correto
    for (int i = 0; i < NUM_PERGUNTAS_FIXAS; ++i) {
        if (perguntas_fixas[i].nivel_dificuldade == nivel) {
            // 2. Verifica se este índice já foi usado nesta partida
            int usado = 0; // Substituindo bool por int
            for (int j = 0; j < tamanho_indices_usados; ++j) {
                if (indices_usados[j] == i) {
                    usado = 1;
                    break;
                }
            }
            // 3. Se não foi usado, adiciona à lista de disponíveis
            if (!usado) {
                indices_disponiveis[count_disponiveis++] = i;
            }
        }
    }

    // 4. Se não há perguntas disponíveis desse nível
    if (count_disponiveis == 0) {
        return -1;
    }

    // 5. Sorteia um índice aleatório da lista de disponíveis
    int indice_sorteado_na_lista = rand() % count_disponiveis;
    return indices_disponiveis[indice_sorteado_na_lista];
}

/**
 * @brief Exibe a pergunta atual para o jogador, incluindo as alternativas.
 *
 * @param pergunta Ponteiro para a pergunta a ser exibida.
 * @param numero_pergunta O número da pergunta atual (1 a 15).
 * @param valor_premio O valor que o jogador ganhará se acertar esta pergunta.
 */
void exibir_pergunta_simples(const Pergunta *pergunta, int numero_pergunta, int valor_premio) {
    limpar_tela();
    printf("================= PERGUNTA %d =================\n", numero_pergunta);
    printf("Valendo: R$ %d\n", valor_premio);
    printf("Nível: %s\n", nivel_para_string(pergunta->nivel_dificuldade));
    printf("-----------------------------------------------\n");
    printf("Enunciado: %s\n", pergunta->enunciado);
    printf("-----------------------------------------------\n");
    for (int i = 0; i < MAX_ALTERNATIVAS; ++i) {
        printf(" %c) %s\n", 'A' + i, pergunta->alternativas[i]);
    }
    printf("-----------------------------------------------\n");
    printf("P) Parar e levar o prêmio atual\n");
    printf("===============================================\n");
}

/**
 * @brief Obtém a resposta do jogador (A, B, C, D ou P, case-insensitive).
 *
 * @return char A letra da resposta escolhida pelo jogador (em maiúsculo) ou 'P'.
 */
char obter_resposta_jogador_simples() {
    char resposta;
    printf("Sua resposta (A, B, C, D ou P para parar): ");
    resposta = ler_char_simples();

    // Converte manualmente para maiúsculo se for minúsculo
    if (resposta >= 'a' && resposta <= 'z') {
        resposta = resposta - 'a' + 'A';
    }

    while (resposta != 'A' && resposta != 'B' && resposta != 'C' && resposta != 'D' && resposta != 'P') {
        printf("Opção inválida. Digite A, B, C, D ou P: ");
        resposta = ler_char_simples();
        if (resposta >= 'a' && resposta <= 'z') {
            resposta = resposta - 'a' + 'A';
        }
    }
    return resposta;
}

/**
 * @brief Inicia e gerencia uma partida completa do Jogo do Milhão Simplificado.
 */
void iniciar_partida_simples() {
    int indices_perguntas_usadas[NUM_PERGUNTAS_TOTAL];
    int count_usadas = 0;
    int pontuacao_atual = 0;
    int pontuacao_seguranca = 0;
    int num_pergunta = 1;

    while (num_pergunta <= NUM_PERGUNTAS_TOTAL) {
        NivelDificuldade nivel_atual = obter_nivel_por_numero(num_pergunta);

        // Seleciona uma pergunta
        int indice_pergunta_selecionada = selecionar_pergunta_simples(nivel_atual, indices_perguntas_usadas, count_usadas);

        // Verifica se há perguntas disponíveis para o nível
        if (indice_pergunta_selecionada == -1) {
            limpar_tela();
            printf("!!! PROBLEMA !!!\n");
            printf("Não foram encontradas perguntas disponíveis para o nível '%s'.\n", nivel_para_string(nivel_atual));
            printf("Isso não deveria acontecer com perguntas fixas. Verifique o array 'perguntas_fixas'.\n");
            printf("Encerrando a partida prematuramente.\n");
            printf("\nVocê sai com o prêmio de segurança: R$ %d\n", pontuacao_seguranca);
            return;
        }

        // Marca a pergunta como usada
        indices_perguntas_usadas[count_usadas++] = indice_pergunta_selecionada;
        const Pergunta *pergunta_atual = &perguntas_fixas[indice_pergunta_selecionada];

        // Exibe a pergunta
        int premio_pergunta = PREMIOS[num_pergunta - 1];
        exibir_pergunta_simples(pergunta_atual, num_pergunta, premio_pergunta);

        // Obtém a resposta do jogador
        char resposta = obter_resposta_jogador_simples();

        // Processa a resposta
        if (resposta == 'P') { // Jogador decidiu parar
            printf("\nVocê decidiu parar.\n");
            printf("Seu prêmio final é: R$ %d\n", pontuacao_atual);
            return;
        }

        if (resposta == pergunta_atual->alternativa_correta) { // Resposta Correta
            pontuacao_atual = premio_pergunta;
            printf("\nResposta Correta! Você ganhou R$ %d\n", pontuacao_atual);

            // Atualiza pontuação de segurança se atingiu um marco
            if (num_pergunta == PRIMEIRO_MARCO_SEGURANCA || num_pergunta == SEGUNDO_MARCO_SEGURANCA) {
                pontuacao_seguranca = pontuacao_atual;
                printf("Parabéns! Você atingiu um marco de segurança de R$ %d!\n", pontuacao_seguranca);
            }

            // Verifica se é a última pergunta (ganhou o milhão)
            if (num_pergunta == NUM_PERGUNTAS_TOTAL) {
                printf("\n*********************************************\n");
                printf("*** PARABÉNS! VOCÊ GANHOU 1 MILHÃO!!! ***");
                printf("\n*********************************************\n");
                return;
            }

            num_pergunta++; // Avança para a próxima pergunta
            pausar_tela(); // Pausa antes da próxima pergunta

        } else { // Resposta Errada
            printf("\nResposta Errada! A resposta correta era: %c\n", pergunta_atual->alternativa_correta);
            printf("Que pena! Você perdeu tudo, mas sai com o prêmio de segurança.\n");
            printf("Seu prêmio final é: R$ %d\n", pontuacao_seguranca);
            return;
        }
    } // Fim do loop while (perguntas)
}

// --- Função Principal ---
int main() {
   
    printf("Bem-vindo ao Jogo do Milhão Mais Simplificado!\n");
    pausar_tela();

    iniciar_partida_simples(); // Chamada da função principal do jogo

    printf("\nObrigado por jogar!\n");
    return 0;
}

