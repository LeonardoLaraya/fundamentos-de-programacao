#include <stdio.h>
#include <stdlib.h>



int main(){

    char texto[30]="Escrevedo em binario";
    float numero = 5.23;
    int vetor[5] = {10, 20, 30, 40, 50};
    
    FILE *arq = fopen("arquivo.dat","wb");
    if (arq == NULL){
        perror("erro ao abrir o arquivo!!!\n");
        exit(1);
    }//if
    
    fwrite(texto,sizeof(char),30,arq);
    fwrite(&numero,sizeof(float),1,arq);
    fwrite(vetor,sizeof(float),5,arq);

    
    fclose(arq);

    return 0;
}//main
