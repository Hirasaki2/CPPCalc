#include <iostream>
#include "../headers/calc.h"

using namespace std;
double doubleCout(string lol) {
	double var;
	cout << lol;
	cin >> var;
	return var;
}
void menuMagnitude() {
	double x, y;
	x = doubleCout("x: ");
	y = doubleCout("y: ");
	cout << endl;
	cout << calcMagnitude(x, y) << endl;
}
void menuVector() {
	double x, y;
	x = doubleCout("x: ");
	y = doubleCout("y: ");
	cout << endl;
	cout << calcVector(x, y) << endl;
}
void menuBoth() {
	double x, y;
	x = doubleCout("x: ");
	y = doubleCout("y: ");
	cout << endl;
	cout << "Magnitude: " << calcMagnitude(x, y) << endl;
	cout << "Vector: " << calcVector(x, y) << endl;
}
