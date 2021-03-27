#include <stdio.h>
#include <string.h>

int main(void)
{

    //char nome[15] = "Fulano de Tal";
    //char nome[15];
    //char nome1[15] = "Pedro";
    //char nome2[15] = "Marcio";
    char nome1[15];
    char nome2[15];

    printf("Digite seu nome: ");
    scanf("%s", nome1);

    printf("Nome1 = %s \n", nome1);


    //nome = "Fulano de Tal";
    //strcpy(nome, "Fulano de Tal"); // string destino e string de origem
    //strcpy(nome2, nome1);
    strncpy(nome2,nome1,3);

    //printf("Nome: %s \n", nome);
    printf("Nome2: %s \n", nome2);


    return 0;

}