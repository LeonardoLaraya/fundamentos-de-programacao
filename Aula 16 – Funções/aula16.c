#include <stdio.h>
#include <stdlib.h>

void exibeMensagemInterna(){
    printf("dentro da fução interna\n");
}//exibeMensagemInterna


void exibeMensagem(){
    printf("antes da fuçãointerna\n");
    exibeMensagemInterna();
    printf("depois da fuçãointerna\n");
}//exibeMensagem

int main(){

    printf("antes da fução\n");
    exibeMensagem();
    printf("depois da fução\n");






    return 0;
}//main