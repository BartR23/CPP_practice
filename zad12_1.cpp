//Funkcja przyjmuje jako parametr �a�cuch znak�w i tworzy nowy wybieraj�c z zadanego jedynie cyfry
//Zwracany jest wska�nik na utworzony �a�cuch, operacja wykonywana jest do momentu zwr�cenia NULL

#include <iostream>
using namespace std;

char* cyfry(char lancuch[80]);

void main() {
	char lancuch[80];
	//char nowyLancuch[80];
	//int i, j=0;
	char z;

	cout << "Podaj lancuch znakow: ";
	cin.getline(lancuch, 80);

	/*for (i = 0; ; i++) {
		if (lancuch[i] == '\0')
			break;
		if (lancuch[i] >= 48 && lancuch[i] <= 57) {
			nowyLancuch[j] = lancuch[i];
			j++;
		}
		nowyLancuch[j] = '\0';
	}*/

	z = *cyfry(lancuch); // to tak jakby dzia�a!
	cout << z ;
	cout << "\nNowy lancuch: " << cyfry(lancuch); //???? nie dziala

}

char* cyfry(char lancuch[80]) {
	char nowyLancuch[80];
	int i, j = 0;
	//p = &nowyLancuch;

	for (i = 0; ; i++) {
		if (lancuch[i] == '\0')
			break;
		if (lancuch[i] >= 48 && lancuch[i] <= 57) {
			nowyLancuch[j] = lancuch[i];
			j++;
		}
		nowyLancuch[j] = '\0';
	}
	return nowyLancuch;
}