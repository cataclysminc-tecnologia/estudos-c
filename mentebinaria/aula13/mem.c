// objdump -dM intel loop | grep -A 20 '<main>:'
// gcc -std=c11 -o loop loop.c
/*
Um ponteiro em c nada mais eh que uma variavel que contem um
ENDERECO para algum lugar da memoria
*/


// Alocacao dinamica de memoria

#include <stdio.h>
#include <stdlib.h>

void *malloc_s(size_t size) {
  void *p;
  p = malloc(size);
  if (p == NULL)
  {
   fprintf(stderr, "memoria insuficiente\n");
   exit(1);
  }
  
  return p;
}

int main( int argc, char *argv[])
{

  int *p;
  
  //p = malloc(4);
  /*
  p = malloc(sizeof(int));
  if ( p == NULL ) {
    return 1;
  }
  *p = 9;
  */
  
  p = malloc_s(sizeof(int));
  
  *p = 9;
  printf("%d\n", *p);
  free(p);


  /*
  int *p;
  
  printf("%d\n", *p); // segmentation fault
  */
  
  return 0;

}
