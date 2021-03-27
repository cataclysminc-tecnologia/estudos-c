#include <stdlib.h>
//#include "f.h"

#define MSG "Mensagem padrao"
#define SIZ 512
#define QUAD(x) (x * x)
#define MAX(x,y) (x > y ? x : y)
#define MAX3(x,y,z) \ 
  (MAX(MAX(x,y), MAX(y,z)))

#define DEBUG 
//#undef DEBUG

#define VAR(x) printf("A variavel "#x" tem valor: %d\n", x);

int main(void) {

  int contador = 90;

  printf("%d\n", QUAD(8)); // 8 * 8 = 64
  printf("%d\n", MAX(3, 9));
  printf("%d\n", MAX3(90,500,3));
  
#ifdef DEBUG
  printf("%s  %s: Estou na linha %d\n", __TIME__, __DATE__, __LINE__);
  VAR(contador);
//#else
#endif
  //printf("%d\n", __LINE__);

  //const char *msg = "Mensagem padrao 2";

  //imprime("fala mano");
  
  /*
  char buff[SIZ] = { '\0' };
  
  printf("Digite: ");
  scanf("%s", &buff);
  
  printf("Voce digitou:\n%s\n", buff);*/
  
  return 0;

}
