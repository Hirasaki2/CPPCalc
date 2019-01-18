#include <math.h>
#include <iostream>
#define PI 3.14159265
using namespace std;

//Declare Functions
double calcVector();
double calcMagnitude();
void menuMagnitude();
void menuVector();
void menu();

int main() {
	bool restart = true;
	while (restart == true) {
		int answer;
		cout << "Choose a option!\n0. Exit\n1. Magnitude\n2. Vector";
		cout << endl << "Choice: ";
		if (cin >> answer) {
			if (answer == 0) {
				restart = false;
			}
			else if (answer == 1) {
				menuMagnitude();
			}
			else if (answer == 2) {
				menuVector();
			}
		}
		else {
			return 1;
		}
	}
	return 0;
}
double calcMagnitude(double x1, double y1, double x2, double y2) {
	double xPower = pow (x2 - x1, 2);
	double yPower = pow (y2 - y1, 2);
	
	return (double) sqrt (xPower + yPower);
}
double calcVector(double x1, double y1, double x2, double y2) {
	double diffX = x1 + x2;
	double diffY = y1 + y2;
	
	return (double) atan (diffY / diffX) * 180 / PI;
}
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
