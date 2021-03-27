#include <stdio.h>
#include <string.h> // necess'ario para strcmp

int main(void)
{
    char str1[4] = "abc";
    char str2[4] = "abc";
    char str3[15] = "Curso de C";
    char str4[15] = "Curso de Java";
    int retorno;
    int retorno2;
    
    retorno = strcmp(str1, str2); // gera um valor inteiro, 0, valor positivo ou valor negativo
    retorno2 = strncmp(str3,str4,10);


    printf("Retorno = %d \n", retorno);
    printf("Retorno2 = %d \n", retorno2);

    return 0;
}