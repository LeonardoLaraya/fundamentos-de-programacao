#include<stdio.h>
#include<stdlib.h>

/*
4) Calcule a média aritmética de 4 números reais que o usuário
digitar. Imprima a média na tela apenas com 2 casas decimais.
*/


int main(){
 
    float n1 =0;
    float n2 =0;
    float n3 =0;
    float n4 =0;
    float media =0;

    printf (" digite 4 números para fazer a media aritmética deles\n");
    printf("número 1:");
    scanf("%f" ,&n1);
    printf("número 2:");
    scanf("%f" ,&n2);
    printf("número 3:");
    scanf("%f" ,&n3);
    printf("número 4:");
    scanf("%f" ,&n4);

    media = (n1 + n2 + n3 + n4) / 4;
   
    printf("a media aritmética desses numeros é :%.2f", media);


    

return 0;
}//main