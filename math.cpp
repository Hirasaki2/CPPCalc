#include <iostream>
#include "headers/calc.h"
#include "headers/menu.h"
using namespace std;

//Declare Functions
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
