/*
Crie uma função que retorne o fatorial de um número passado por parâmetro.

fatorial(n):

=1 se n=0

= n x fatorial (n-1) se n>0
*/

int recursividade(numero){
    int fatorial;

    if (numero == 0){
        return 1;
    }else{

        return numero * fatorial * recursividade(numero - 1);
    }
    


}//recursividade



int main(){

    int numero;

    printf("digite um numero para achar o fatorial dele:");
    scanf("%d",&numero);

    int resposta = recursividade(numero);

    pritf("%d",resposta);

    return 0;
}//main