//Obliczanie wartoœci wyra¿eñ

#include <stdio.h>

void main() {
	int a, b, c;
	
	a = 2 % 3 + 1 / 2;
	c = a / 2;
	b = c += a++;
	printf("1: a = %d, b = %d, c = %d\n", a, b, c);

	c *= (++a % 2) ? (b--, a = 8, a - b++) : (a--, b = 8, b - a++);
	printf("2: a = %d, b = %d, c = %d\n", a, b, c);

	a <<= 3;
	printf("3: a = %d, b = %d, c = %d\n", a, b, c);

	b |= 0x14 & 0xf0;
	printf("4: a = %d, b = %d, c = %d\n", a, b, c);

	c ^= 2;
	printf("5: a = %d, b = %d, c = %d\n", a, b, c);

	c = (((a > 0) || (++b < 3)) && (a++)) + 3;
	printf("6: a = %d, b = %d, c = %d\n", a, b, c);
}