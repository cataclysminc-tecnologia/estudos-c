#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // criando a variavel ponteiro para o arquivo
    FILE *pont_arq;

    // abrindo o arquivo
    pont_arq = fopen("arquivo2.txt", "a");

    // fechando o arquivo
    fclose(pont_arq);

    // mensagem para o usuario
    printf("O arquivo foi criado com sucesso!\n");


    return 0;
}