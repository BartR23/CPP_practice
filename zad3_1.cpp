//Obliczanie pola i obwodu prostok¹ta dla podanych d³ugoœci boków

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void pole(double x, double y);
void obwod(double x, double y);

void main() {
	 
	double a, b;

	do
	{
		printf("Podaj dlugosc pierwszego boku prostokata: ");
		scanf("%lf", &a);
		printf("Podaj dlugosc drugiego boku prostokata: ");
		scanf("%lf", &b);

		if (a <= 0 || b <= 0)
			printf("Nieprawidlowe wartosci - powinny byc to liczby dodatnie!\n");

	} while (a<=0 || b<=0);
	
	printf("\nDlugosci bokow: a= %lf, b= %lf", a, b);

	pole(a, b);
	obwod(a, b);
}

void pole(double x, double y) {
	double pole;
	pole = x * y;
	printf("\nPole prostokata wynosi: %lf", pole);
}

void obwod(double x, double y) {
	double obwod;
	obwod = 2*x + 2*y;
	printf("\nObwod prostokata wynosi: %lf", obwod);
}