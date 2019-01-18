#include <math.h>
#include <iostream>
#include <limits>

using namespace std;
double calcVector();
double calcMagnitude();
void menuMagnitude();
void menuVector();
void menu();
void PressEnterToContinue();

int main() {
	int restart = 1;
	while (restart == 1) {
		int answer;
		cout << endl << "Choose a option!\n0. Exit\n1. Magnitude";
		cout << endl << "Choice: ";
		cin >> answer;
		if (answer == 0) {
			restart = 0;
		}
		else if (answer == 1) {
			menuMagnitude();
		}
	}
	return 0;
}
void PressEnterToContinue(){
	cout << endl << "Press ENTER to continue... ";
	system("read");    // On *Nix

}

double calcMagnitude(double x1, double y1, double x2, double y2) {
	double xPower = pow (x2 - x1, 2);
	double yPower = pow (y2 - y1, 2);
	
	double finalAnswer = sqrt (xPower + yPower);
	return finalAnswer;
}

double calcVector() {
	return 0;
}
void menuMagnitude(){
	double x1, x2, y1, y2;
	cout << "X1: ";	cin >> x1;
	cout << "X2: ";	cin >> x2;
	cout << "Y1: ";	cin >> y1;
	cout << "Y2: ";	cin >> y2;
	cout << calcMagnitude(x1, x2, y1, y2);
	PressEnterToContinue();
	return;
}
