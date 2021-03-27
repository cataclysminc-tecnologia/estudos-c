#include <stdio.h>

int main(void)
{

    char nome[20];

    printf("Digite seu nome: ");
    //scanf("%s", nome); // %s sequencia de caracteres
    fgets(nome,20,stdin); // variavel, qtde de caracteres, stdin

    printf("O nome armazenado foi: %s \n", nome);

    return 0;
}