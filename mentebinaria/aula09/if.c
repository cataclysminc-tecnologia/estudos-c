#include <stdio.h>

int main(void)
{

	int a = 359;
	
	if(-1 == a || a < 400)
	{
	  int chave = 3;
	  printf("chave: %d\n", chave);
	}
	
	printf("a: %d\n", a);
	
	return 0;
}
