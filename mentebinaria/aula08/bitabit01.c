#include <stdio.h>

/*
&
|
^ xor
~
*/


int main(void) {

    int a = 2; // 10
    int b = 3; // 11
    int c = 0;
    int d = 0b00000000000000000000000000000000;
    int e = 0b11111111111111111111111111111111;
    int f = 0b10000000000000000000000000000000;

    printf("O resultado eh %d\n", a & b); // 2
    printf("O resultado eh %d\n", a | b); // 3
    printf("O resultado eh %d\n", a ^ b); // 1
    printf("O resultado eh %d\n", !c); // negacao logica, 1
    printf("O resultado eh %d\n", ~c); // negacao bit a bit, -1
    printf("O resultado eh %d\n", ~e);
    printf("O resultado eh %d\n", ~f); 

}