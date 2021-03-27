#include <stdio.h>

int main(void) {

	//int a;
	float a;
	int b;
	
	a = 10;
	b = 3;
	b = b + 1;
	b += 1;
	b++; // incremento
	b--; // decremento
	b *= 2; // b = b * 2
	b /= 2; // b = b / 2
	b = b%3; // resto da divisao
	
	//printf("%d\n", a);
	//printf("%d\n", a / 3);
	printf("%f\n", a / 3.0F);
	printf("%d\n", b);

	return 0;
}
