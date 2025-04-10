//Funkcja, która w zadanej tablicy znakowej zamienia wszystkie wyst¹pienia jednego znaku na inny oraz zwraca liczbê zmian 

#include <stdio.h>

int zmiana(char tab[], char zn1, char zn2);

int main() {
	char tablicaZnakow[80];
	char a, b,c;

	printf("Podaj lancuch znakow: ");
	fgets(tablicaZnakow, 80, stdin);
	printf("\nPodany lancuch: %s\n", tablicaZnakow);
	printf("Podaj znak do zamiany: ");
	a = getchar();
	printf("\nPodaj znak zastepujacy: ");
	while (getchar() != '\n')
		continue;
	b = getchar();
	printf("\nPodane znaki: a=%c, b=%c\n", a, b);
	c=zmiana(tablicaZnakow, a, b);
	//zmiana(tablicaZnakow, a, b);
	printf("\nLiczba dokonanych podmian: %d\n", c);
	printf("Lancuch koncowy: %s\a", tablicaZnakow);
}

int zmiana(char tab[], char zn1, char zn2) {
	int liczba_zmian = 0,i=0,rozmiar=0;

	while (tab[i] != '\n') {
		rozmiar += 1;
		i += 1;
	}
	i = 0;

	for (i = 0; i <= rozmiar; i++) {
		if (tab[i] == zn1) {
			tab[i] = zn2;
			liczba_zmian += 1;
		}
		else continue;
	}
	//printf("\nLancuch po podmianie: %s", tab);
	//printf("Liczba zmian = %d\n", liczba_zmian);
	return liczba_zmian;
}