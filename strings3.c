#include <stdio.h>
#include <string.h> // necessario para strcmp

int main(void)
{

    char str1[] = "abc";
    char str2[] = "abd";
    char str3[] = "abc";
    char str4[15] = "Curso de C";
    char str5[15] = "Curso de Java";
    int retorno, retorno2, retorno3, retorno4;

    retorno = strcmp(str1, str2); //compara duas strings. 0-iguais, positivo-str1>str2, negativo str1<str2 
    retorno2 = strcmp(str2, str1);
    retorno3 = strcmp(str1, str3);
    retorno4 = strncmp(str4, str5, 5);

    printf("%d \n", retorno);  // -1
    printf("%d \n", retorno2); // 1
    printf("%d \n", retorno3); // 0
    printf("%d \n", retorno4); // 0

    return 0;

}