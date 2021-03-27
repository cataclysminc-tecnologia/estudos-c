#include <stdio.h>

int main()
{

    // Declarano e atribuindo valores ao vetor
    int vetor[50], i;
    int vet[] = {19, 19, 19, 19, 19, 19}; // int vet[6]
    int vet2[6] = {0}; // todas as posicoes terao valor 0
    int vet3[6] = {}; // todos os elementos serao 0

    for (i=0; i<=5; i++)
    {
        printf("vet[%d] = %d\n", i, vet3[i]);
    }


    /*
    // Inicializando o vetor com zeros
    for(i=0; i<=49; i++)
    {
        vetor[i] = 0;
        //printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    for(i=0; i<=49; i++)
    {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }*/


    /*
    for (i=0; i<=5; i++)
    {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }*/


    return 0;
}