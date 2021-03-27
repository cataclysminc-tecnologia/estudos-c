#include <stdio.h>

void imprime_cabec(void)
{
    printf("*************************************************\n");
    printf("***            ESTUDANDO LINGUAGEM C          ***\n");
    printf("*************************************************\n");

    return; // retorno vazio, de uma funcao void
}

// Criando um prototipo
int multiplica(int v1, int v2);
/*
int multiplica(int v1, int v2)
{
    return v1 * v2;
}
*/

int main(void)
{

    imprime_cabec();

    int v1, v2, resultado;

    printf("Digite o primeiro valor: ");
    scanf("%d", &v1);
    printf("Digite o segundo valor: ");
    scanf("%d", &v2);
    //resultado = v1 * v2;
    
    resultado = multiplica(v1, v2);
    
    printf("Resultado = %d\n", resultado);


    return 0;
}


int multiplica(int v1, int v2)
{
    return v1 * v2;
}