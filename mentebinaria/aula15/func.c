#include <stdio.h>

// tipo_retorno nome(tipo_do_argumento nome_arg, tipo_arg2 nome_arg2)

void error(void) {
  printf("Erro\n");
  exit(1);
}

int soma(int n1, int n2, int n3) 
{

  int res;
  res = n1 + n2 + n3;
  
  return res;

}


int main(void) {

  //int num1, num2, num3;
  int num1;
  
  printf("Digite o num1: ");
  scanf("%d", &num1);
  
  if (num1 < 1 || num1 < 1900) {
    printf("Erro: o num1 eh menor que 1\n");
    exit(1);
  }
  
  printf("Voce nasceu em: %d\n", num1);
  
  /*
  printf("Digite o num2: ");
  scanf("%d", &num2);
  printf("Digite o num3: ");
  scanf("%d", &num3);
  
  printf("soma: %d\n", soma(num1, num2, num3));
  printf("o endereco de soma eh: %p\n", soma);

  //printf("soma eh %d\n", 3 + 5 + 5 );
*/
  return 0;

}
