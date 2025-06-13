
#include <stdio.h>
#include <stdlib.h>

int main(){

   int *p = malloc(5*sizeof(int));
for (int i = 0; i < 5; i++){
 p[i] = i+1;
 printf("%d ", p[i]);
}// for

printf("\n");
//Diminui o tamanho do array
p = realloc(p, 3*sizeof(int));
for (int i = 0; i < 3; i++){
 printf("%d ", p[i]);
}// for

printf("\n");
//Aumenta o tamanho do array
p = realloc(p, 10*sizeof(int));
for (int i = 0; i < 10; i++){
 printf("%d ", p[i]);
}// for

printf("\n");

    return 0;
}//main