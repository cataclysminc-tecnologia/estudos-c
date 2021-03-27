#include <stdio.h>

int main(void) {

	/*
	* &
	* | (ou)
	* ^ (ou exclusivo - XOR)
	* ~ (negacao bit a bit)
	*/

	int a = 2; // 10
	int b = 3; // 11
		   // 10
		   // 01
	int c = 0;
	int d = 0b10000000000000000000000000000000;
	int e = 0b01111111111111111111111111111111;
	int f = 0b1010; // 10
	int g = 0b1000; // 8, 10000
	int h = 8;
	int chave = 3;
	int i = 359;

	
	
	//printf("O resultado eh %d\n", a & b); // 2
	//printf("O resultado eh %d\n", a ^ b); // 1 
	//printf("O resultado eh %d\n", ~c);
	//printf("O resultado de d eh %d\n", ~d);
	//printf("O resultado de e eh %d\n", e);
	//printf("O resultado de f eh %d\n", ~f);
	//printf("O resultado de g eh %d\n", g >> 1); // 16
	//printf("%d\n", g ^ h);
	printf("%d\n", i ^ chave);
	
	return 0;

}
