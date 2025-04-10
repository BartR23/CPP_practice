//Program wczytuje lancuchy znakow i zapisuje do pliku - v2 proceduralna
//Nastepnie wczytuje lancuch z pliku znak po znaku i zlicza liczbe liter malych i duzych

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void zapisLancuchow(FILE *plik);
void zliczanieLiter(FILE* plik);

//void main() {
//	FILE* plik;
//
//	plik = fopen("plik11_2.txt", "w+");
//	zapisLancuchow(plik);
//	zliczanieLiter(plik);
//	fclose(plik);
//}

void zapisLancuchow(FILE* plik) {
	char lancuch[80];
	int last = 0;

	do
	{
		cout << "Podaj lancuch: " << endl;
		cin.getline(lancuch, 80);

		if (lancuch[0] == '\0')
			break;

		for (int i = 0; ; i++) {
			if (lancuch[i] == '\0') {
				last = i - 1;
				if (lancuch[last] == '.') {
					fputs(lancuch, plik);
				}
				else {
					cout << "Brak kropki!" << endl;
				}
				break;
			}
		}
	} while (lancuch[0] != '\0');
}

void zliczanieLiter(FILE* plik) {
	char odczyt[80];
	int d = 0, m = 0, x;

	rewind(plik);
	fgets(odczyt, 80, plik);
	cout << "Odczytany z pliku tekst: " << odczyt << endl;
	cout << endl;

	rewind(plik);
	while ((x = fgetc(plik)) != EOF) {
		if (x >= 65 && x <= 90) {
			d += 1;
		}
		else if (x >= 97 && x <= 122) {
			m += 1;
		}
	}

	cout << "Liczba duzych liter: " << d << endl;
	cout << "Liczba malych liter: " << m << endl;
}