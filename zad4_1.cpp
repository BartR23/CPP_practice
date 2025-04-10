//Obliczanie pierwiastków równania kwadratowego dla wczytanych wspó³czynników

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>

void pierwiastki(float a, float b, float c);


void main() {
	float a, b, c;
	//char delta = '\u00b6';
	do
	{
		printf("Podaj wspolczynniki rownania kwadratowego a, b, c: ");
		scanf("%f%f%f", &a, &b, &c);
		if (a == 0)
			printf("To nie jest rownanie kwadratowe!\n");

	} while (a==0);
	
	printf("Rownanie kwadratowe: %g*x^2 + %g*x + %g\n", a, b, c);
	
	pierwiastki(a, b, c);
}

void pierwiastki(float a, float b, float c) {
	float d = b * b - 4 * a * c;
	printf("Wyroznik rownania kwadratowego d = %g\n", d);

	if (d == 0) {
		printf("Rownanie posiada jedno rozwiazanie: x = %g\n", -b / (2 * a));
	}
	else if (d > 0) {
		float x1 = (-b - sqrt(d)) / (2 * a);
		float x2 = (-b + sqrt(d)) / (2 * a);
		printf("Rownanie posiada dwa rozwiazania rzeczywiste: x1 = %g, x2 = %g\n", x1, x2);
	}
	else {
		float w1 = (-b / 2*a);
		float w2 = (sqrt(-d) / (2 * a));
		
		printf("Rownanie posiada dwa rozwiazania zespolone: x1 = %g - %gi, x2 = %g + %gi\n", w1, w2, w1, w2);
	}
}
