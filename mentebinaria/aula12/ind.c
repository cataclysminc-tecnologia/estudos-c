// objdump -dM intel loop | grep -A 20 '<main>:'
// gcc -std=c11 -o loop loop.c
/*
Um ponteiro em c nada mais eh que uma variavel que contem um
ENDERECO para algum lugar da memoria
*/


#include <stdio.h>

int main( int argc, char *argv[])
{

  char s[10] = "franciny"; // 0 - 29

  printf("%c\n", s[7]);
  printf("%c\n", *(s+7));
   
  printf("%c\n", 7[s]); 
  printf("%c\n", *(7+s));


  /*
  printf("%x\n", s[7]);
  printf("%x\n", *(s+7));
   
  printf("%x\n", 7[s]); 
  printf("%x\n", *(7+s)); 

  /*
  for (int i=0; i<40; i++)
  {
    printf("%x\n", s[29]);
    //putchar(s[i]);
    //printf("%x ", s[i]); // imprimindo os caracteres hexadecimais
  }
  
  putchar('\n');*/

  return 0;

}
