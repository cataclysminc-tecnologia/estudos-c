// objdump -dM intel loop | grep -A 20 '<main>:'
// gcc -std=c11 -o loop loop.c
/*
Um ponteiro em c nada mais eh que uma variavel que contem um
ENDERECO para algum lugar da memoria
*/


// Alocacao dinamica de memoria

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Macro
#define MALLOC(ptr, size) { \
  ptr = malloc(size); \
  if (ptr == NULL) { \
    fprintf(stderr, "memoria insuficiente\n"); \
    exit(1); \
  } \
} 

void *malloc_s(size_t size) {
  void *ptr;
  ptr = malloc(size);
  if (ptr == NULL)
  {
   fprintf(stderr, "memoria insuficiente\n");
   exit(1);
  }
  
  return ptr;
}

int main( int argc, char *argv[])
{

  int *p, i;
  
  MALLOC(p, 5 * sizeof(int));
  
  memset(p, 0, 5 * sizeof(int)); // preenchendo os 20 bytes com zeros
  
  *(p+0) = 9;
  *(p+1) = 43;
  *(p+2) = 65;
  *(p+3) = 11;
  *(p+4) = 23;
  
  for (i=0; i<5; i++)
  {
    printf("%d\n", *(p+i));
  }
  
  p = realloc(p, sizeof(int) * 6);
  *(p+5) = 20;



  /*  
  *p = 9;
  *(p + 1) = 43;
  //free(p); // 0
  printf("%d\n", *p);
  printf("%d\n", *(p+1));
  free(p);
  */

  /*
  int *p;
  
  printf("%d\n", *p); // segmentation fault
  */
  
  free(p);
  
  return 0;

}
