//Por�wnanie dw�ch zadanych jako parametry �a�cuch�w znakowych 
//Funkcja sprawdza czy s� identyczne, czy 1 jest d�u�szy od 2, czy 2 jest d�u�szy od 1, czy maj� tak� sam� d�ugo��, lecz r�n� zawarto��
//Por�wnanie odbywa si� w p�tli do momentu, a� wczytane zostan� dwa identyczne �a�cuchy

#include <iostream>
using namespace std;

int porownaj(char lancuch1[], char lancuch2[]);

void main() {
	/*char string1[] = { "ABCDEF" };
	char string2[] = { "123456" };
	char string3[] = { "poiuytrewq" };
	char string4[] = { "mnbv" };
	char string5[] = { "ABCDEF" };*/
	char lancuchPierwszy[80];
	char lancuchDrugi[80];
	int r;

	do{
		cout << "Podaj pierwszy lancuch: ";
		//cin >> lancuchPierwszy;
		cin.getline(lancuchPierwszy, 80);
		cout << "Podaj drugi lancuch: ";
		//cin >> lancuchDrugi;
		cin.getline(lancuchDrugi, 80);

		r = porownaj(lancuchPierwszy, lancuchDrugi);
		cout << "Wynik: " << r << endl;
	} while (r != 0);
	
}

int porownaj(char lancuch1[], char lancuch2[]) {
	int rozm1 = 0, rozm2 = 0, wynik;

	for (int i = 0; ; i++) {
		if (lancuch1[i] != '\0') {
			rozm1 += 1;
		}
		else {
			break;
		}
	}

	for (int i = 0; ; i++) {
		if (lancuch2[i] != '\0') {
			rozm2 += 1;
		}
		else {
			break;
		}
	}

	if (rozm1 > rozm2) {
		wynik = 1;
	}
	else if (rozm1 < rozm2) {
		wynik = 2;
	}
	else if (rozm1 = rozm2) {
		for (int j = 0; j < rozm1; j++) {
			if (lancuch1[j] != lancuch2[j]) {
				wynik = 3;
				break;
			}
			else {
				wynik = 0;
			}
		}
	}
	return wynik;
}