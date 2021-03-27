/*
Ex:
prompt> put 3
3
prompt> put 7
3 7
prompt> put 2
3 7 2
prompt> get 3
2
prompt> put 8
3 7 2 8
prompt> get 2
7
prompt> first
3
prompt> last
8
prompt> remove 2
7
3 2 8
prompt> list
3 2 8
prompt> clear
prompt> exit
*/


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


// Prototipos das funcoes
void get(Lista *lista, int pos); // pega os valores
void list(Lista *lista); // lista valores
void first(Lista *lista); // lista o primeiro valor
void last(Lista *lista); // lista o ultimo valor



// Funcao principal
int main(int argc, char *argv[]) {
  char valor, pos;
  char input[N];
  char * destino;
  Lista *lista = NULL;

  while(1) {
        printf("prompt> ");
        if (fgets(input, N-1, stdin) == NULL) {
            printf("An error ocurred.\n");
            break;
        }

        if (strncmp(input, "put", 3) == 0) {
            valor = input[4];
            lista = put(valor,lista);
        }

        if (strncmp(input, "list", 4) == 0) {
            list(lista);
        }

        if (strncmp(input, "first", 5) == 0) {
            first(lista);
        }

        if (strncmp(input, "last", 4) == 0) {
            last(lista);
        }

        if (strncmp(input, "get", 3) == 0) {
            pos = input[4];
            get(lista,pos);
        }
       
        if (strncmp(input, "exit", 4) == 0) {
            break;
        }
    }

    return EXIT_SUCCESS;
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


void first(Lista *lista){
    if(lista != NULL){
        printf("%c\n",lista->dado);
    }
}

void list(Lista *lista){
    if(lista != NULL){
        Lista *aux = lista;
        printf("\n");
        while(aux->prox != NULL){
                printf("%c",aux->dado);
                aux = aux->prox;
        }
        printf("%c\n",aux->dado);
    }
}


void get(Lista *lista, int pos){
      if(lista != NULL){
            int cont = 0;
            Lista *aux = lista;
            printf("\n");
            printf("\n%dpost: ",pos);
            printf("\n%dcont: ",cont);
            while(aux->prox != NULL){
                    if(cont >= pos){
                        printf("\n%c\n",aux->dado);
                        break;
                    }
                    aux = aux->prox;
                    cont++;
            }
    }
}