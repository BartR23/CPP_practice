//Rozwi¹zywanie równañ liniowych - Program oblicza kolejne przybli¿enia miejsc zerowych funkcji x^3+x^2-3x-3 oraz x^3-x-4,5
//wykorzystuj¹c numeryczne metody: bisekcji, regula falsi, iteracji prostej Banaha

#include <iostream>
#include <math.h>
using namespace std;

double funkcja1(double x);
double funkcja2(double x);

void bisekcja(double a, double b);
void regulafalsi(double a, double b);
void iteracja(double x1);
void bisekcja2(double a, double b);
void regulafalsi2(double a, double b);
void iteracja2(double x1);


void main() {
	
	//bisekcja(1, 2);
	//regulafalsi(1, 2);
	//iteracja(2);
	//bisekcja2(1, 2);
	//regulafalsi2(1, 2);
	iteracja2(2);
	
}

double funkcja1(double x) {
	double wynik = x * x * x + x * x - 3 * x - 3;
	return wynik;
}

double funkcja2(double x) {
	double wynik = x * x * x - x - 4.5;
	return wynik;
}

void bisekcja(double a, double b) {
	double x, fx, fa, fb;
	for (int i = 0; i < 17; i++) {
		fa = funkcja1(a);
		fb = funkcja1(b);
		x = (a + b) / 2;
		fx = funkcja1(x);
		cout << "krok " << i << endl;
		cout << "a=" << a << " f(a)=" << fa << " b=" << b << " f(b)=" << fb << " x=" << x << " f(x)=" << fx << endl;
		
		if (fx * fa > 0) {
			a = x;
		}
		else { b = x; }
	}
}

void bisekcja2(double a, double b) {
	double x, fx, fa, fb;
	for (int i = 0; i < 17; i++) {
		fa = funkcja2(a);
		fb = funkcja2(b);
		x = (a + b) / 2;
		fx = funkcja2(x);
		cout << "krok " << i << endl;
		cout << "a=" << a << " f(a)=" << fa << " b=" << b << " f(b)=" << fb << " x=" << x << " f(x)=" << fx << endl;

		if (fx * fa > 0) {
			a = x;
		}
		else { b = x; }
	}
}

void regulafalsi(double a, double b) {
	double x, fx, fa, fb;
	for (int i = 0; i < 7; i++) {
		fa = funkcja1(a);
		fb = funkcja1(b);
		x = b - (b-a)*fb/(fb-fa);
		fx = funkcja1(x);
		cout << "krok " << i << endl;
		cout << "a=" << a << " f(a)=" << fa << " b=" << b << " f(b)=" << fb << " x=" << x << " f(x)=" << fx << endl;

		if (fx * fa > 0) {
			a = x;
		}
		else { b = x; }
	}
}

void regulafalsi2(double a, double b) {
	double x, fx, fa, fb;
	for (int i = 0; i < 5; i++) {
		fa = funkcja2(a);
		fb = funkcja2(b);
		x = b - (b - a) * fb / (fb - fa);
		fx = funkcja2(x);
		cout << "krok " << i << endl;
		cout << "a=" << a << " f(a)=" << fa << " b=" << b << " f(b)=" << fb << " x=" << x << " f(x)=" << fx << endl;

		if (fx * fa > 0) {
			a = x;
		}
		else { b = x; }
	}
}

void iteracja(double x1) {
	double x2;
	for (int i = 0; i < 7; i++) {
		
		x2 = x1 - (1.0/12)*(x1*x1*x1 + x1*x1 - 3*x1 - 3);
	
		cout << "krok " << i << endl;
		cout << "x1=" << x1 << " x2=" << x2 << endl;

		x1 = x2;
	}
}

void iteracja2(double x1) {
	double x2;
	for (int i = 0; i < 5; i++) {

		//x2 = sqrt((x1+4.5)/x1);    //10 iteracji
		//x2 = 4.5/(x1*x1 - 1);    // zle
		x2 = cbrt(x1 + 4.5);   //5 iteracji

		cout << "krok " << i << endl;
		cout << "x1=" << x1 << " x2=" << x2 << endl;

		x1 = x2;
	}
}