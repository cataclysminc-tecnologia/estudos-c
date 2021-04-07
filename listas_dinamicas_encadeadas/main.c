#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct dadoNo {
    int id;

} DadoNo;

typedef struct no {
    DadoNo dado;
    struct no* proximo;
} No;

typedef struct lista {
    int tamanho;
    No* cabeza;
} Lista;


Lista* criarLista();
Lista* criarLista() {
    Lista* lista = (Lista*) malloc(sizeof(Lista));

    lista->tamanho = 0; // inicilizando o tamanho da lista
    lista->cabeza = NULL;

    return lista;
}


void inserir(Lista* lista, DadoNo dado);
void inserir(Lista* lista, DadoNo dado) {
    No* no = (No*) malloc(sizeof(No)); // alocando uma variavel

    no->dado = dado;
    no->proximo = lista->cabeza;
    lista->cabeza = no;
    lista->tamanho++;
}



bool listaVazia(Lista* lista);
bool listaVazia(Lista* lista) {
    return (lista->tamanho == 0); // retorna true ou falses
}




void imprimir(Lista* lista);
void imprimir(Lista* lista) {

    // Verificando se a lista esta vazia
    if( listaVazia(lista) ) {
        printf("Lista Vazia!\n");
        return;
    }

    //if( ponteiro == NULL )
        //printf("Lista vazia \n");

    No* ponteiro = lista->cabeza; // referencia para a cabeca da lista

    while( ponteiro != NULL ) {
        printf( "%d ", ponteiro->dado.id );
        ponteiro = ponteiro->proximo;
    }

    printf("\n");
}







void remover(Lista* lista);
void remover(Lista* lista) {

    if (!listaVazia(lista)) {
        No* ponteiro = lista->cabeza;
        
        lista->cabeza = ponteiro->proximo;
        free(ponteiro);
        lista->tamanho--;
    }
    
}


No* atPos(Lista* lista, int indice);
No* atPos(Lista* lista, int indice) {

    if( indice >= 0 && indice < lista->tamanho ) {
        No* no = lista->cabeza;

        int i;
        for( i=0; i<indice; i++ )
            no = no->proximo;

        return no;
    }

    printf("Indice invalido!\n");
    return NULL;

}


int indiceOf(Lista* lista, No* no);
int indiceOf(Lista* lista, No* no) {
    if( no != NULL ) {
        No* ponteiro = lista->cabeza;

        int indice = 0;

        while( ponteiro != no && ponteiro != NULL ) {
            ponteiro = ponteiro->proximo;
            indice++;
        }

        if( ponteiro != NULL)
            return indice;
    }

    printf("No nao pertencente a lista!\n");
    return -1;
}



void apagar(Lista* lista, int indice);
void apagar(Lista* lista, int indice) {
    if(indice == 0)
        remover(lista);
    else {
        No* atual = atPos(lista, indice);
        
        if (atual != NULL) {
            No* anterior = atPos(lista, indice - 1);
            anterior->proximo = atual->proximo;

            free(atual);
            lista->tamanho--;
        }
    }
}



void inserirEspecifico(Lista* lista, DadoNo dado, int indice);
void inserirEspecifico(Lista* lista, DadoNo dado, int indice) {
    if( indice == 0 )
        inserir(lista, dado);
    else {
        No* atual = atPos(lista, indice);
        
        if( atual != NULL) {
            No* anterior = atPos(lista, indice - 1);
            
            No* novoNo   = (No*) malloc(sizeof(No));
            novoNo->dado = dado;

            anterior->proximo = novoNo;
            novoNo->proximo   = atual;
            lista->tamanho++;
        }
    }
}



void xchgNo(Lista* lista, No* noA, No* noB);
void xchgNo(Lista* lista, No* noA, No* noB) {
    
    if( noA == noB )
        return;
    
    int indiceA = indiceOf(lista, noA);
    int indiceB = indiceOf(lista, noB);

    if( indiceA == -1 || indiceB == -1 )
        return;

    if( indiceA > indiceB ) {
        noA = noB;
        noB = atPos( lista, indiceA );

        indiceA = indiceB;
        indiceB = indiceOf( lista, noB );
    }

    No* pb = atPos(lista, indiceB - 1 );

    if( noA == lista->cabeza ) {
        lista->cabeza = noB;
    } else {
        No* pa = atPos( lista, indiceA - 1 );
        pa->proximo = noB;
    }

    pb->proximo = noA;

    No* ponteiro = noA->proximo;
    noA->proximo = noB->proximo;
    noB->proximo = ponteiro;
}



No* min(Lista* lista, int indice);
No* min(Lista* lista, int indice) {
    No* ponteiro = atPos( lista, indice );

    if( ponteiro != NULL ) {
        No* minNo = ponteiro;

        while( ponteiro != NULL ) {
            if( ponteiro->dado.id < minNo->dado.id )
                minNo = ponteiro;

            ponteiro = ponteiro->proximo;
        }

        return minNo;

    }

    return NULL;
}



No* max(Lista* lista, int indice);
No* max(Lista* lista, int indice) {
    No* ponteiro = atPos( lista, indice );

    if ( ponteiro != NULL ) {
        No* maxNo = ponteiro;

        while( ponteiro != NULL ) {
            if( ponteiro->dado.id > maxNo->dado.id )
                maxNo = ponteiro;

            ponteiro = ponteiro->proximo;
        }

        return maxNo;

    }
}



void ordemCrescente(Lista* lista);
void ordemCrescente(Lista* lista) {
    int i = 0;

    for( i = 0; i < lista->tamanho - 1; i++ ) {
        xchgNo(lista, atPos( lista, i ), min( lista, i ));
    }
}



void ordemDecrescente(Lista* lista);
void ordemDecrescente(Lista* lista) {
    int i = 0;

    for( i = 0; i < lista->tamanho - 1; i++ ) {
        xchgNo(lista, atPos( lista, i ), max( lista, i ));
    }
}



int main() {
    Lista* lista = criarLista();
    //printf("Tamanho da lista: %d \n", lista->tamanho);

    DadoNo dado;
    
    dado.id = 5;
    inserir(lista, dado);

    dado.id = 9;
    inserir(lista, dado);

    dado.id = 10;
    inserir(lista, dado);

    dado.id = 2;
    inserir(lista, dado);

    imprimir(lista);

    dado.id = 11;
    inserirEspecifico(lista, dado, 3);

    imprimir(lista);

    xchgNo(lista, lista->cabeza, lista->cabeza);
    imprimir(lista);

    printf("Menor elemento: %d \n", min(lista, 2)->dado.id);
    
    if( max(lista, 0 ) != NULL )
        printf("Maior elemento: %d \n", max(lista, 0)->dado.id);


    ordemCrescente(lista);
    imprimir(lista);

    ordemDecrescente(lista);
    imprimir(lista);



    //apagar(lista, 5);
    //imprimir(lista);



    //No* no = (No*) malloc(sizeof(No)); 
    //printf("%d \n", indiceOf(lista, no));
    //printf("%d \n", indiceOf(lista, lista->cabeza));
    //printf("%d \n", indiceOf(lista, lista->cabeza->proximo->proximo));

    //if( atPos(lista, 2) != NULL )
        //printf("%d \n", atPos(lista, 2)->dado.id); // 0->6, 1->5


    

    //remover(lista);
    //remover(lista);
    //imprimir(lista);

    //printf("Valor da cabeca da lista: %d \n", lista->cabeza->dado.id);
    //printf("Valores dos nos: %d, %d \n", lista->cabeza->dado.id, lista->cabeza->proximo->dado.id);
}