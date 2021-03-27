// objdump -dM intel loop | grep -A 20 '<main>:'
// gcc -std=c11 -o loop loop.c


#include <stdio.h>

int main(void) {
  //unsigned int i = 0;
  //unsigned int i;
  
  for (unsigned i=0; i < 3; i++) {
    printf("O valor de i eh: %u\n", i);
  }
  
/*  
imprimir:
  printf("O valor de i eh: %u\n", i);
  i++;
  if (i < 3) 
    goto imprimir;
*/
  
  return 0;
}
