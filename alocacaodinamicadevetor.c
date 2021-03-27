#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p; // criando um ponteiro para o vetor
    int i, quant_elementos;

    // recebendo a quantidade de elementos
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &quant_elementos);

    // Alocando a memoria para o vetor de acordo com a quantidade de elemtnos do vetor
    p = (int *)(malloc(quant_elementos * sizeof(int)));

    // Caso nao seja possivelalocar memoria suficiente enviar mensagem e sair do programa com exit(1)
    if( p == NULL )
    {
        printf("\n Erro de alocacao de memoria");
        exit(1);
    }
    printf("\n");

    // Recebendo os dados para o vetor
    for( i=0; i<quant_elementos; i++)
    {
        printf("Digite o numero para o indice [%d] : ", i);
        scanf("%d", &p[i]);
    }
    printf("\n");
    
    // Percorre o vetor mostrando os valores armazenados
    for( i=0; i<quant_elementos; i++)
    {
        printf("Valor armazenado no elemento de indice [%d] = %d \n", i, p[i]);
    }
    printf("\n");

    // Liberando a memoria que foi alocada
    free(p);

    return 0;   

}