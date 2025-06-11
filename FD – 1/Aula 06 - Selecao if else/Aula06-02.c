#include<stdio.h>
#include<stdlib.h>


int main(){

    int idade;

    printf("digite sua idade:");
    scanf("%i",&idade);





   if(idade < 12){
        printf("vc é criança\n");
    }else{
        if( idade < 18){
            printf("vc é adolescente\n");
        }else{
            if(idade < 65){
                printf("vc é adulto\n");
            }else{
                printf("vc é idoso\n");

            }//else
        }//else
   }//else

   
// OU


        if(idade < 12){
            printf("vc é criança\n");
        }else if( idade < 18){
            printf("vc é adolescente\n");
        }else if(idade < 65){
            printf("vc é adulto\n");
        }else{
            printf("vc é idoso\n");
        }//else



return 0;
}//mian
