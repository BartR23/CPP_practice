//Obliczanie prostych wyra¿eñ

#include <stdio.h>

void main() {

	double a = 12.0, b = 1.5;
	int c = 3, d = 5, e = 2, f = 4, g = 10, h = -9, i = -3, j = -2, k = 9;

	float x = a / c - d % e;
	printf("w1 = %.2f\n", x);
	int y = f + g / f + h % e;
	printf("w2 = %d\n", y);
	float z = i * j + b * d - k % d;
	printf("w3 = %.2f\n", z);
	float r = k/f+j<<e;
	printf("w4 = %.3f\n", r);
}