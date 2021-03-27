#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 201


struct Lista{
    char dado;
    struct Lista * prox;
};
typedef struct Lista Lista;


Lista * put(char valor, Lista * inicio){
  Lista  *novo = (Lista*) malloc(sizeof(Lista));
  if (novo==NULL)
    return inicio;
  novo->dado = valor;
  novo->prox = NULL;

  if (inicio==NULL)
    return novo;

  Lista *atual = inicio;
  while (atual->prox!=NULL)
    atual = atual->prox;
  atual->prox= novo;

  return inicio;
}

void list(Lista *lista);
void clear();
void first(Lista *lista);
void last(Lista *lista);



int main(int argc, char *argv[]) {
  char valor;
  char input[N];
  char * destino;
  Lista *lista = NULL;
  while(1) {
        printf("prompt> ");
        if (fgets(input, N-1, stdin) == NULL) {
            printf("An error ocurred.\n");
            break;
        }

        if(strncmp(input, "exit\n", 5) == 0) {
            printf("Leaving. Goodbye.\n");
            exit(0);
        }

        if (strncmp(input, "put", 3) == 0) {
            valor = input[4];
            lista = put(valor,lista);
        }

        if (strncmp(input, "list", 4) == 0) {
            list(lista);
        }

        if (strncmp(input, "first", 5) == 0) {
            list(lista);
        }

        if (strncmp(input, "last", 4) == 0) {
            list(lista);
        }

        if (strncmp(input, "get", 3) == 0) {
            list(lista);
        }
    }

    return EXIT_SUCCESS;
}





// Metodos

// Funcao list, onde lista todos os valores inseridos
void list(Lista *lista){
    if(lista != NULL){
        Lista *aux = lista;
        printf("\n");
        while(aux->prox != NULL){
                printf("%c ",aux->dado);
                aux = aux->prox;
        }
        printf("%c\n",aux->dado);
    } else {
        printf("Empty list! Please enter some integer values.\n");
    }
}



void first(Lista *lista){
    if(lista != NULL){
        printf("%c\n",lista->dado);
    }
}

void last(Lista *lista){
    if(lista != NULL){
        Lista *aux = lista;
        printf("\n");
        while(aux->prox != NULL){
                aux = aux->prox;
        }
        printf("%c\n",aux->dado);
    }
}

void clear(){

}