#include <stdio.h>
#define ICMS 0.18; // declaracao da constante como diretiva, muito utilizado em microcontroladores


int main(void)
{

    float preco_produto, valor_icms, valor_total;
    const float frete = 10.50; // definindo uma constante. const tipo nome = valor

    printf("Informe o valor do produto: ");
    scanf("%f", &preco_produto);

    valor_icms = preco_produto * ICMS;

    printf("Valor de imposto a ser pago: R$ %.2f\n", valor_icms);

    valor_total = preco_produto + valor_icms + frete;

    printf("Valor total a pagar: R$ %.2f \n", valor_total);


    return 0;
}