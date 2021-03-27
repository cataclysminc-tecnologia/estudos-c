#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    /*
    int numero;
    float nota;
    char nome[40];

    float notas[20]; // vetor
    float mnotas[10][2]; // matriz*/

    // Usa-s struct quando precisa armazenar muitos dados sobre uma mesma coisa

    struct ficha_aluno // tipo de dado
    {
        char nome[40];
        int numero;
        float nota;
    }; // definicao da struct 

    struct ficha_aluno aluno;

    printf("\n------------ Cadastro de aluno --------------------\n\n\n");

    printf("Nome do aluno.....: ");
    fgets(aluno.nome, 40, stdin);

    printf("Digite o numero do aluno: ");
    scanf("%d", &aluno.numero);

    printf("Informe a nota do aluno: ");
    scanf("%f", &aluno.nota);


    printf("\n------------ Lendo os dados da struct --------------------\n\n\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Numero: %d\n", aluno.numero);
    printf("Nota: %.2f\n", aluno.nota);


    return 0;

}