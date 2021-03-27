// objdump -dM intel loop | grep -A 20 '<main>:'
// gcc -std=c11 -o loop loop.c
/*
Um ponteiro em c nada mais eh que uma variavel que contem um
ENDERECO para algum lugar da memoria
*/


#include <stdio.h>
#include <stdbool.h>

void imprime( char *s)
{
  while(*s != '\0')
  {
    putchar(*s++);
  }
}


int main(void) {

  char s[] = "franciny";
  char *t = "franciny";
  char u[] = { 0x66, 0x72, 0x61, 0x6e, 0x63, 0x69, 0x6e, 0x79, '\n', 0x00};
  char f[] = "franciny\n";
  
  imprime(f);
  
  //puts(s);
  //puts(t);
  //puts(u);


  /*
  char s[] = "texto";
  char *t = "texto2 como ponteiro";
  int a[2];
  
  a[0] = 2017;
  a[1] = 2018;
  
  puts(s);
  puts(t);
  
  printf("a[0] = %d\na[1] = %d\n", *a, *a+1);


  
  int i = 2017;
  int *p; // declarando um ponteiro
  
  p = &i;
  
  printf("O endereco da varivel i em memoria eh: %p\n", &i);
  printf("O endereco da varivel i em memoria eh: %p\n", p);
  printf("O valor da varivel i em memoria eh: %d\n", i);
  printf("O valor da varivel i em memoria eh: %d\n", *p);

  
  int a[] = { 2017, 2018, 2019 }; // array de 3 inteiros
  
  for (int i=0; i<3; i++)
  {
  	//printf("%d\n", a[i]);
  	//printf("%d\n", *a);
  	printf("%d\n", *a + i);
  }
  
  printf("O endereco de a em memoria eh: %p\n", a);
  printf("O valor de a em memoria eh: %d\n", *a);
  */

  return 0;
}
