#include <stdio.h>

int main(void)
{

    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // condicao ? comando para condicao vrdadeira : comando para condicao falsa
    numero >= 0 ? numero++ : numero--;
    numero >= 0 ? printf("numero positivo\n") : printf("numero negativo\n");

    printf("O novo valor de numero e: %d\n", numero);

    return 0;
}