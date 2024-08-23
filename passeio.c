#include <stdio.h>

int main()
{
    char  clima, compromisso, cidade, dinheiro, distancia;
    printf("Vou para o passeio\n?");
    printf("Tenho compromisso? [S/N]");
    scanf(" %c", &compromisso);
    printf("Vou estar na cidade?[S/N]");
    scanf(" %c", &cidade);
    printf("Tenho dinheiro? [S/N]");
    scanf(" %c", &dinheiro);
    printf("O passeio e perto? [S/N]");
    scanf(" %c", &distancia);
    printf("EstA chovendo? [S/N]");
    scanf(" %c", &clima);

    if(clima == 'N' && compromisso == 'N' && cidade == 'S' && dinheiro == 'S' && distancia == 'S'){
        printf("Já que está tudo bem EU VOU!\n");

    }else if(compromisso == 'S' || cidade == 'S' || dinheiro !='S' || clima!= 'N' || distancia == 'N'){
        printf("Nao VOU!\n");
    }
    return 0;
}
