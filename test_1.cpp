#include <iostream>
using namespace std;

void main() {
	/*int x = 27;
	int y;
	y = x << 3;
	cout << "27<<3=" << y;*/

	int x;
	cout << "Podaj liczbe dodatnia: ";
	cin >> x;

	if (x > 0) {
		cout << "Podana liczba: " << x;
	}
	else {
		cout << "Podano bledna wartosc!";
	}
}