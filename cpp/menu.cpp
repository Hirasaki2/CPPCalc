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
	double x1, x2, y1, y2;
	x1 = doubleCout("x1: ");
	y1 = doubleCout("y1: ");
	x2 = doubleCout("x2: ");
	y2 = doubleCout("y2: ");
	cout << calcMagnitude(x1, y1, x2, y2) << endl;
	return;
}
void menuVector() {
	double x1, x2, y1, y2;
	x1 = doubleCout("x1: ");
	x2 = doubleCout("y1: ");
	y1 = doubleCout("x2: ");
	y2 = doubleCout("y2: ");
	cout << calcVector(x1, y1, x2, y2) << endl;
	return;
}
