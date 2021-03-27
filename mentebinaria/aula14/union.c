#include <stdio.h>
#include <string.h>

union st {  
  unsigned char id;  
  unsigned int num;
};

int main(void) {

  union st s;

  s.num = 2017;
  s.id = 0xe0;
  printf("s.num: %d\n", s.num);
  printf("s.id: %d\n", s.id);

  return 0;

}
