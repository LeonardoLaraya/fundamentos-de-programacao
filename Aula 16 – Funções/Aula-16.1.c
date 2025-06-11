#include <stdio.h>
#include <stdlib.h>


void exibeIdade(int idade){ // (int idade) resebe o valor dado no chamado dela 
    printf("voce tem %i anos\n", idade);
}


int main(){

    int minhaidade = 18;
    exibeIdade(minhaidade);//o valor dentro do () é passdo para dentro da funçao para outra variavel definida na outras ()  

    return 0;
}//main