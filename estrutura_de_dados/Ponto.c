/*

compilacao: gcc Ponto.c -o Ponto -lm

*/



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Ponto.h"

struct ponto {
    float x;
    float y;
};

int main()
{
    float d;
    Ponto *p, *q;

    // Ponto r; //ERRO
    p = pto_cria(10,21);
    q = pto_cria( 7,25);

    //q->x = 2; //ERRO
    d = pto_distancia(p,q);
    printf("Distancia entre pontos: %f\n", d);
    pto_libera(q);
    pto_libera(p);

    return 0;
}

// Aloca e retorna um ponto com coordenadas "x" e "y"
Ponto* pto_cria(float x, float y)
{
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    if(p != NULL)
    {
        p->x = x;
        p->y = y;
    }
}


// Libera a memoria alocada para um ponto
void pto_libera(Ponto* p)
{
    free(p);
}


// Recupera, por referencia, o valor de um ponto
void pt_acessa(Ponto* p, float* x, float* y)
{
    *x = p->x;
    *y = p->y;
}


// Atribui a um ponto as coordenadas "x" e "y"
void pto_atribui(Ponto* p, float x, float y)
{
    p->x = x;
    p->y = y;
}


// Calcula a distancia entre dois pontos
float pto_distancia(Ponto* p1, Ponto* p2)
{
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx*dx + dy*dy);
}