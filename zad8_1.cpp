//Wszystkie mo¿liwe z³o¿enia zadanej kwoty z wartoœci 2, 5 i 10 z³

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void wypiszMozliweZlozenia(int kwota);
void wypiszMozliweZlozenia_1(int kwota);
void wypiszMozliweZlozenia_2(int kwota);
void wypiszMozliweZlozenia_3(int kwota);

void main() {
	int b=0;
	float a;

	do
	{
		printf("Podaj kwote do rozlozenia na czesci: ");
		b = scanf("%f", &a);
		while (getchar() != '\n')
			continue;
		if (b != 1) {
			printf("Bledna wartosc!\n");
		}
		else if (a <= 0) {
			printf("Podaj wartosc dodatnia!\n");
		}
		else if (a - (int)a != 0) {
			printf("Podaj wartosc calkowita!\n");
		}

	} while (b!=1 || a<=0 || (a - (int)a != 0));
	
	printf("Podana wartosc: %d\n", (int)a);
	//wypiszMozliweZlozenia(a);
	wypiszMozliweZlozenia_1(a);
	wypiszMozliweZlozenia_2(a);
	wypiszMozliweZlozenia_3(a);

}

void wypiszMozliweZlozenia(int kwota) {
	int i, j, k;

	for (i = 0; i <= kwota / 10; i++) {
		for (j = 0; j <= kwota / 5; j++) {
			for (k = 0; k <= kwota / 2; k++) {
				if (10 * i + 5 * j + 2 * k == kwota) {
					if (i == 0 && j == 0 && k != 0) {
						printf("%d zl = %d * 2 zl\n", kwota, k);
					} 
					else if (i == 0 && j != 0 && k == 0) {
						printf("%d zl = %d * 5 zl\n", kwota, j);
					} 
					else if (i != 0 && j == 0 && k == 0) {
						printf("%d zl = %d * 10 zl\n", kwota, i);
					}
					else if (i == 0 && j != 0 && k != 0) {
						printf("%d zl = %d * 5 zl + %d * 2 zl\n", kwota, j, k);
					}
					else if (i != 0 && j == 0 && k != 0) {
						printf("%d zl = %d * 10 zl + %d * 2 zl\n", kwota, i, k);
					}
					else if (i != 0 && j != 0 && k == 0) {
						printf("%d zl = %d * 10 zl + %d * 5 zl\n", kwota, i, j);
					}
					else {
						printf("%d zl = %d * 10 zl + %d * 5 zl + %d * 2 zl\n", kwota, i, j, k);
					}
				}
			}
		}
	}
}

void wypiszMozliweZlozenia_1(int kwota) {
	int i, j, k;

	for (i = 0; i <= kwota / 10; i++) {
		for (j = 0; j <= kwota / 5; j++) {
			for (k = 0; k <= kwota / 2; k++) {
				if (10 * i + 5 * j + 2 * k == kwota) {
					if (i == 0 && j == 0 && k != 0) {
						printf("%d zl = %2d *  2 zl\n", kwota, k);
					}
					else if (i == 0 && j != 0 && k == 0) {
						printf("%d zl = %2d *  5 zl\n", kwota, j);
					}
					else if (i != 0 && j == 0 && k == 0) {
						printf("%d zl = %2d * 10 zl\n", kwota, i);
					}
				}
			}
		}
	}
}

void wypiszMozliweZlozenia_2(int kwota) {
	int i, j, k;

	for (i = 0; i <= kwota / 10; i++) {
		for (j = 0; j <= kwota / 5; j++) {
			for (k = 0; k <= kwota / 2; k++) {
				if (10 * i + 5 * j + 2 * k == kwota) {
					if (i == 0 && j != 0 && k != 0) {
						printf("%d zl = %2d *  5 zl + %2d *  2 zl\n", kwota, j, k);
					}
					else if (i != 0 && j == 0 && k != 0) {
						printf("%d zl = %2d * 10 zl + %2d *  2 zl\n", kwota, i, k);
					}
					else if (i != 0 && j != 0 && k == 0) {
						printf("%d zl = %2d * 10 zl + %2d *  5 zl\n", kwota, i, j);
					}
				}
			}
		}
	}
}

void wypiszMozliweZlozenia_3(int kwota) {
	int i, j, k;

	for (i = 1; i <= kwota / 10; i++) {
		for (j = 1; j <= kwota / 5; j++) {
			for (k = 1; k <= kwota / 2; k++) {
				if (10 * i+ 5 * j + 2 * k == kwota) {
						printf("%d zl = %2d * 10 zl + %2d *  5 zl + %2d *  2 zl\n", kwota, i, j, k);
				}
			}
		}
	}
}