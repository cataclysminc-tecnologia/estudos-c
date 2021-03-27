#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // criando a variavel ponteiro para o arquivo
    FILE *pont_arq;
    char texto_str[20];

    // abrindo o arquivo_palavra em modo "somente leitura"
    pont_arq = fopen("arquivo_palavra.txt", "r");

    // enquanto nao for fim de arquivo o looping sera executado
    // e sera impresso o texto
    while(fgets(texto_str, 20, pont_arq) != NULL)
        printf("%s", texto_str);

    // fechando o arquivo
    fclose(pont_arq);



    return 0;
}