#include <stdio.h>

int main(void) {

	int a;
	int b;

	// Testando prioridades
	a = 4 + 2 * 3;
	b = (4 + 2) * 3; // Aqui a prioridade eh o que esta em parentesis
	
	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}
