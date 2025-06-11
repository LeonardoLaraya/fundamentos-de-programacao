#include <stdio.h>
#include <stdlib.h>

int main(){
    setbuf(stdout,NULL);
    
    int idade;
    int i = 1;
    int contaMaiores = 0;
    int somaMaiores = 0;
    int mediaidades;

    while (i <= 10){
        printf("digite sua idade:");
        scanf("%d",&idade);
        if(idade >= 18){
            printf("A idade %d e maior de idade\n",idade);
            contaMaiores++;
            somaMaiores = somaMaiores + idade;
            //ou contaMaiores = contaMaiores + 1;
        }//if
        i++;
    }//while
    printf("Foram encontradas %d pessoas maiores de idade\n",contaMaiores);
    printf("A soma das idades maiores e %d\n",somaMaiores);


    if(contaMaiores > 0){
        mediaidades = somaMaiores / contaMaiores;
        printf("A media e %d anos\n",mediaidades);

    }else{
         printf("Não foi encontrado nenhuma pessoa maior de idade\n");
         printf("Não é possivel calcular a media\n");
    }//else
  
return 0;
}//main