/*
Você foi contratado para desenvolver um sistema de cadastro de pessoas que permitirá armazenar e
exibir informações essenciais de 5 indivíduos. Seu programa deve solicitar os seguintes dados para cada pessoa:

Nome, Idade, Peso, Data de nascimento (dia, mês e ano), Nacionalidade (Brasileiro ou Estrangeiro), 
Documento de identificação: Se for brasileiro, deve armazenar o CPF ou se for estrangeiro, deve armazenar o Passaporte

Regras obrigatórias:
Utilize structs para estruturar os dados da pessoa;
Utilize typedef para facilitar a definição de tipos personalizados;
Utilize union para armazenar CPF ou Passaporte, garantindo eficiência na memória;
Utilize enum para representar a nacionalidade da pessoa (Brasileiro ou Estrangeiro).
Após o cadastro, o programa deve exibir todas as informações cadastradas de maneira clara e organizada.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}Nascimento;

typedef struct{
    char nome [31];
    int idade;
    Nascimento nascimento;
    int nacionalidade;
}Dados;

union cpf_passaporte{
    int numero;
    char letra;
};//union
   

int main(){

    Dados dados[5];
    union cpf_passaporte;

    for (int i = 0; i < 5; i++){
        
    }
    



    return 0;
}//main