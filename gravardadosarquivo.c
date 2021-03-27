#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    FILE *pont_arq; // cria variavel ponteiro para o arquivo
    char palavra[20]; // variavel do tipo string

    // abrindo o arquivo com tipo de abertura w - ele sera criado caso nao exista
    pont_arq = fopen("arquivo_palavra.txt", "a"); // com w sobrescreve o conteudo existente no arquivo

    // testando se o arquivo foi realmente criado
    if( pont_arq == NULL )
    {
        printf("Erro na abertura do arquivo!");
        return 1;
    } else {
        printf("Escreva uma palavra para testar gravacao de arquivo: ");
        scanf("%s", palavra);

        // usando fprintf para armazenar a string no arquivo
        fprintf(pont_arq, "%s \n", palavra);

        // usando fclose para fechar o arquivo
        fclose(pont_arq);

        printf("Dados gravados com sucesso! \n");
    }

    return 0;
}