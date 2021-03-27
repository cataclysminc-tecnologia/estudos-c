#include <stdio.h>
#include <ncurses.h>

int main(void)
{

    // valor eh a variavel que
    // sera apontada pelo ponteiro
    int valor = 27;
    
    // declaracao de variavel ponteiro
    int *ptr;

    // atribuindo o endereco da variavel valor ao ponteiro
    ptr = &valor;

    printf("Utilizando Ponteiros\n\n");
    printf("Conteudo da variavel valor: %d\n", valor);
    printf("Endereco da variavel valor: %p \n", &valor); // %x hexadecimal
    printf("Conteudo d variavel ponteiro ptr: %p\n", ptr);

    //getch();

    return 0;

}