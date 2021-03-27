#include <stdio.h>

void funcao(void)
{
  int i = 0;
  //static int i=0;
  // auto int i;

  printf("%d\n", i++);

}

int main(void)
{
  funcao();
  funcao();
  funcao();
  funcao();
  return 0;
}
