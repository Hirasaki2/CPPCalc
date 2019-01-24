#include <iostream>
#include "../headers/calc.h"

using namespace std;

const string magnitude = "Magnitude: ";
const string vector = "Vector: ";

double doubleCout(string lol) {
	double var;
	cout << lol;
	cin >> var;
	return var;
}
void menuBoth() {
	double x, y;
	x = doubleCout("x: ");
	y = doubleCout("y: ");
	cout << endl;
	cout << magnitude << calcMagnitude(x, y) << endl;
	cout << vector << calcVector(x, y) << endl;
}
void menuXY() {
	double magnitudeVar, vectorVar;
	magnitudeVar = doubleCout(magnitude);
	vectorVar = doubleCout(vector);
	cout << endl;
	cout << "x: " << calcX(magnitudeVar, vectorVar) << endl;
	cout << "y: " << calcY(magnitudeVar, vectorVar) << endl;

}
