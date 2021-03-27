#include <stdio.h>

int multiplica(int v1, int v2)
{
    return v1 * v2;
}


int main(void)
{
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