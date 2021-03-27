#include <stdio.h>
#include <stdlib.h>

struct tp_endereco
{
    char rua[40];
    int numero;
    char bairro[40];
    char cidade[40];
    char estado[3];
    int cep;
};

struct tp_data_nascimento
{
    int dia;
    int mes;
    int ano;
};

struct cadastro_cliente
{
    char nome_cliente[40];
    int telefone;

    struct tp_endereco endereco; // variavel endereco do tipo struct
    struct tp_data_nascimento data_nascimento;
}
cad_cliente[2];

int main(void)
{

    int i;

    printf("\n\n ------------- CADASTRO DE CLIENTES -------------- \n\n");

    // Armazenando os dados do cadastro dentro da struct cad_cliente
    for(i=0; i<2; i++)
    {
        printf("\n\nNome do cliente.: ");
        fflush(stdin);
        gets(cad_cliente[i].nome_cliente);

        printf("\n Digite o telefone do cliente.: ");
        scanf("%d", &cad_cliente[i].telefone);

        printf("\n Digite a rua.: ");
        fflush(stdin);
        gets(cad_cliente[i].endereco.rua);

        printf("\n Digite o numero.: ");
        fflush(stdin);
        gets(cad_cliente[i].endereco.numero);

        printf("\n Digite o bairro.: ");
        fflush(stdin);
        gets(cad_cliente[i].endereco.bairro);

        printf("\n Digite a cidade.: ");
        fflush(stdin);
        gets(cad_cliente[i].endereco.cidade);

        printf("\n Digite o estado ex:(SP).: ");
        fflush(stdin);
        gets(cad_cliente[i].endereco.estado);

        printf("\n Digite o ceps.: ");
        fflush(stdin);
        gets(cad_cliente[i].endereco.cep);

        printf("\n Digite o dia de nascimento.: ");
        fflush(stdin);
        gets(cad_cliente[i].data_nascimento.dia);

        printf("\n Digite o mes de nascimento.: ");
        fflush(stdin);
        gets(cad_cliente[i].data_nascimento.mes);

        printf("\n Digite o ano de nascimento.: ");
        fflush(stdin);
        gets(cad_cliente[i].data_nascimento.ano);

    } // fim da coleta


    // Percorrendo o vetor de struct cad_cliente
    for (i=0; i<2; i++)
    {
        printf("\n Nome.: %s", cad_cliente[i].nome_cliente);
    }


    return 0;

}