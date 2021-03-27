#include <stdio.h>

int main(void)
{
    char nome[21];

    printf("Digite seu nome: ");
    //scanf("%s", nome);

    fgets(nome,11,stdin);

    printf("O nome armazenado foi: %s\n", nome);

    return 0;
}