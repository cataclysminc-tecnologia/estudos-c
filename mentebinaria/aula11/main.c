// objdump -dM intel loop | grep -A 20 '<main>:'
// gcc -std=c11 -o loop loop.c
/*
Um ponteiro em c nada mais eh que uma variavel que contem um
ENDERECO para algum lugar da memoria
*/


#include <stdio.h>
#include <stdbool.h>

//int main(int argc, char *argv[]) {
int main(int argc, char *argv[], char *envp[]) {
  
  int i; // 4 bytes alocados para um int32
  //int *p = &i; // 
  
  printf("endereco de i eh: %p\ntamanho de i: %zu\n\n", &i, sizeof i);
  
  
  int *p = NULL;
  printf("endereco de p eh: %p\ntamanho de p: %zu\n\n", &p, sizeof p);
  
  printf("conteudo de p: %p\n\n", p);
  printf("p = &i;\n\n");
  p = &i; // recebendo o endereco da variavel i
  
  printf("endereco de p eh: %p\ntamanho de p: %zu\n", &p, sizeof p);
  printf("conteudo de p: %p\n\n", p);
  
  
  *p = 9; // conteudo de eh 9
  
  printf("%d\n", i);
  //printf("%d\n", sizeof(int *));
  
  
  //printf("numero de argumentos: %d\n", argc);
  
  /*
  int i;
  
  for (i=0; i < argc; i++)
  {
    puts(argv[i]);
  }
  
  puts(envp[0]);*/
  
  
  /*
  if(argc < 2)
    printf("Digite um IP\n");
  else if (argc > 2)
    printf("Somente 1 IP eh suportado!\n");
  
  //puts(argv[1]);*/
  return 0;
}
