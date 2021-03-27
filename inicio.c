#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n = 10;
    float n2 = 6.79;
    char letra = 'a';
    char frase[10] = "Bom dia";
    double n3 = 1.23456;
    int valor1, valor2, soma, sub, mult, di;

    printf("Hello World!\n");
    printf("Exibindo o numero inteiro %d\n", n);
    printf("Exibindo um numero real %f\n", n2);
    printf("Exibindo um caracter %c\n", letra);
    printf("Exibindo a frase: %s\n", frase);
    printf("Exibindo variavel do tipo double %f\n", n3);
    printf("Valores: %d %f %c %s %f \n", n, n2, letra, frase, n3);

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor1);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &valor2);

    soma = valor1 + valor2;
    sub = valor1 - valor2;
    mult = valor1 * valor2;
    di = valor1 / valor2;

    printf("Valor da soma de %d + %d = %d\n", valor1, valor2, soma);
    printf("Valor da subtracao de %d - %d = %d\n", valor1, valor2, sub);
    printf("Valor da multiplicacao de %d * %d = %d\n", valor1, valor2, mult);
    printf("Valor da divisao de %d / %d = %d\n", valor1, valor2, di);



    //system("pause");
    return 0;
}