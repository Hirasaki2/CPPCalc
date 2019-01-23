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
	cout << calcMagnitude(x, y) << endl;
	return;
}
void menuVector() {
	double x, y;
	x = doubleCout("x: ");
	y = doubleCout("y: ");
	cout << calcVector(x, y) << endl;
	return;
}
