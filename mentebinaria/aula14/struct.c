#include <stdio.h>
#include <string.h>

struct st {  
  unsigned char id[5];  
  unsigned int numero;
};

int main(void) {

  struct st s;

  s.num = 2017;
  s.id[3] = 0x41;
  s.id[2] = 0x90;
  
  printf("s.num: %d\n", s.num);
  memset(&s, 0, sizeof(struct st));
  printf("s.num: %d\n", s.num);
  
  printf( "sizeof(struct st): %d\n", sizeof( struct st ) );


  return 0;

}
