#include <stdio.h>

int main()
{

    // Matrix 3x3
    int matriz[3][3], i, j; // i-linha, j-coluna

    printf("Digite valor para os elementos da matrix\n\n");


    for(i=0; i<3; i++) // linha
        for(j=0; j<3; j++) // coluna
        {
            printf("\nElemento[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }

    
    printf("\n\n********************* Saida de Dados ************************ \n\n");
    
    for(i=0; i<3; i++) // linha
        for(j=0; j<3; j++) // coluna
        {
            printf("\nElemento[%d][%d] = %d", i, j, matriz[i][j]);
        }

    printf("\n");

    return 0;
}