#include <stdio.h>

int main()
{

    float notas[4];
    int i;

    for(i=0; i<=3; i++)
    {
        printf("Digite a nota do aluno: ");
        scanf("%f", &notas[i]);  
    }

    for(i=0; i<=3; i++)
    {
        printf("Valor da nota: %.2f\n", notas[i]);    
    }

    /*
    printf("Digite a nota do aluno: ");
    scanf("%f", &notas[0]);

    printf("Valor da nota: %f\n", notas[0]);*/


    return 0;
}