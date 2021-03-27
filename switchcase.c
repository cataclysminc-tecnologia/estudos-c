#include <stdio.h>

int main(void)
{
    int valor;
    printf("Digite um valor de 1 a 7: ");
    scanf("%d", &valor);

    switch(valor)
    {
        case 1:
            printf("Domingo\n");
        break;
        case 2:
            printf("Segunda\n");
        break;

        default:
            printf("Erro: valor invalido\n");
    }


    return 0;

}