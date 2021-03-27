#include <stdio.h>

/* 
Para passar um vetor para uma funcao usando linguagem C utiliza-se um ponteiro como parametro da funcao.
Ao usarmos o ponteiro como parametro, na realidade estamos passando o endereco inicial do vetor
e nao os seus elementos.
*/

// prototipo da funcao media
float media (int n, float *vnotas);

int main(void)
{

    float vnotas[10];
    float media_notas;
    int i;

    // Leitura das notas
    for(i=0; i<10; i++)
    {
        printf("Digite os valores das notas: ");
        scanf("%f", &vnotas[i]);
    }

    // chamada da funcao
    media_notas = media(10,vnotas);

    printf( "\nMedia = %.1f \n", media_notas);
    
    return 0;
}


/*
Funcao para calculo da media
Parametros:
    Recebe a quantidade de elementos n
    Recebe o endereco inicial do vetor notas em *vnotas
Retorno:
    Retorna a media na variavel m
*/

float media (int n, float *vnotas)
{
    int i;
    float m=0, soma=0;

    // fazendo a somatoria das notas
    for (i=0; i<n; i++)
        soma = soma + vnotas[i];

    // dividindo pela quantidade de elementos n
    m = soma / n;

    return m;
}