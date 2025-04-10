//Zliczanie liczby liter w zadanym ³añcuchu znaków

#include <stdio.h>

void main() {
	char lancuch[50];
	int liczba = 0;
	printf("Podaj dowolny lancuch maksymalnie 50 znakow: ");
	fgets(lancuch, 50, stdin);
	printf("Podany lancuch: %s", lancuch);

	for (int i = 0; i <= 50; i++) {
		if ((lancuch[i]>=65 && lancuch[i] <= 90) || (lancuch[i] >= 97 && lancuch[i] <= 122))
			liczba++;
			//printf("sukces!\n");
		//printf("%c\n", lancuch[i]);
	}

	printf("Liczba liter w podanym lancuchu: %d", liczba);
}