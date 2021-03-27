#include <stdio.h>

int main(void) {

	int a = 8;
	int b = 9;
	
	//b--;
	
	//printf("%d\n", a == b && b > 40); // Resultado sera 1 (verdadeiro)
	//printf("%d\n", a == b || b > a);
	
	if (a != b)
	   printf("O resultado eh %d\n", !(a != b)); // 0 (falso)

	return 0;
}
