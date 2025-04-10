//Rysowanie "piramidy" o zadanej wysokoœci (liczbie poziomów), z wczytanego znaku

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

void piramida(int wysokosc, char znak);

void main() {

	int n, x;
	char znak;

	do
	{
		printf("Podaj wysokosc piramidy (maks. 25 wierszy): ");
		x = scanf("%d", &n);
		while (getchar() != '\n')
			continue;
		if (x != 1) {
			printf("Bledna wartosc!\n");
		}
		else {
			if (n < 1 || n>25) {
				printf("Bledna wartosc!\n");
			}
		}
	} while (x!=1 || (n<1 || n>25));
	
	printf("Podaj znak rysujacy piramide: ");
	znak = _getche();

	printf("\nLiczba wierszy: %d, znak: %c\n", n, znak);

	piramida(n, znak);

}

void piramida(int wysokosc, char znak) {
	int i,j,k;

	for (i = 0; i < wysokosc; i++) {
		for (j = wysokosc - i; j > 1; j--) {
			printf(" ");
		}
		for (k = 0; k<=2*i; k++) {
			printf("%c", znak);
		}
		printf("\n");
	}
}