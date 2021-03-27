#include <stdio.h>
#include <string.h> // strlen

int main(void)
{

    //char nome_cliente[7] = "Fulano";
    char nome_cliente[50] = "Fulano de Tal";
    int i;
    int cont = 0;
    //nome_cliente[3] = '\0';

    for(i=0; nome_cliente[i] != '\0'; i++)
    {
        printf("Valor do elemnto %d da string = %c\n", i, nome_cliente[i]);
        cont++;
    }

    printf("Quantidade de caracteres da string: %d: \n", cont);
    printf("Quantidade de caracteres da string usando strlen: %d: \n", strlen(nome_cliente));

    /*
    for(i=0; i<6; i++)
    {
        //printf("Nome cliente: %c\n", nome_cliente[i]);
        printf("Valor do elemnto %d da string = %c\n", i, nome_cliente[i]);

    }*/


    //printf("Nome cliente: %s\n", nome_cliente);



}