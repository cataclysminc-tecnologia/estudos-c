// Ponteiro de ponteiro

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int x, *ptrx, **pptrx;

    // inicializando a variavel com zero
    x = 666;
    printf("\nvalor de x = %d\n", x);
    printf("Endereco de x: %p\n\n", &x);

    // Atribuindo os enderecos para os ponteiros
    ptrx = &x; // ptrx aponta para x
    pptrx = &ptrx; // pptrx aponta para ptrx

    *ptrx = *ptrx + 10; // 676

    printf("\nvalor de x: %d", x);
    printf("\nEndereco apontado por ptrx: %p", ptrx);
    printf("\nValor da variavel X que esta sendo apontada por ptrx: %d", *ptrx);
    printf("\nEndereco de memoria da variavel ptrx: %p\n\n\n", &ptrx);


    **pptrx = **pptrx - 10;
    printf("\nvalor de x: %d", x);
    printf("\nEndereco apontado por **pptrx: %p", pptrx);
    printf("\nValor da variavel para a qual pptrx faz referencia: %d", **pptrx);
    printf("\nEndereco de memoria da variavel pptrx: %p\n", &pptrx);


    return 0;

}