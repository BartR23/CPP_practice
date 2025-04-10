//Obliczanie œredniej arytmetycznej zadanego ci¹gu liczb (zakoñczonego '0')

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void main() {
	float liczba, suma=0, srednia;
	int licznik=0, spr=0;

	do
	{
		printf("Podaj liczbe: ");
		spr = scanf("%f", &liczba);
		while (getchar() != '\n')
			continue;

		/*int ch;
		while ((ch = getchar()) != '\n' && ch != EOF)
			continue;*/
		
		if (spr == 1) {
			if (liczba != 0) {
				suma += liczba;
				licznik++;
			}
		}
		else {
			printf("Bledna wartosc!\n");
		}
	} while (liczba!=0);

	/*do
	{
		printf("Podaj liczbe: ");
		scanf("%f", &liczba);
		if (liczba != 0) {
			suma += liczba;
			licznik++;
		}
	} while (liczba != 0);*/

	if (licznik > 0) {
		srednia = suma / licznik;
		printf("Srednia podanych liczb: %f", srednia);
	}
	else {
		printf("Brak liczb do policzenia sredniej.");
	}
	
}