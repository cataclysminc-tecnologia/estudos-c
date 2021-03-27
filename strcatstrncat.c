// Concatenando strings

#include <stdio.h>
#include <string.h>

int main(void)
{

    char str[11] = "Curso";
    char str1[21] = "Curso";
    char str2[18] = " de programacao C";


    strncat(str1, str2, 15); //destino, origem, qtde.caracteres

    printf("str1 = %s\n", str1);

    //strcat(str, " de C"); // Concatena strings. destino

    //printf("str = %s\n", str);

    return 0;

}