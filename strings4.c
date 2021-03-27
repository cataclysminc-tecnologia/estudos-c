#include <stdio.h>
#include <string.h> // necessaria para strlen

int main(void)
{

    char str[6] = "Curso";
    char str2[] = "Curso de Programacao C";
    int tamanho, tamanho2;

    tamanho = strlen(str); // Calcula o tamanho de str
    tamanho2 = strlen(str2);

    printf("O tamanho da string: %s, vale: %d\n", str, tamanho);
    printf("O tamanho da string: %s, vale: %d\n", str2, tamanho2);

    return 0;


}