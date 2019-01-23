#include <iostream>
#include "headers/calc.h"
#include "headers/menu.h"
using namespace std;

//Declare Functions
int main() {
	bool restart = true;
	while (restart == true) {
		int answer;
		cout << "Choose a option!\n 0. Exit\n 1. Magnitude\n 2. Vector\n 3. Magnitude + Vector";
		cout << endl << "Choice: ";
		if (cin >> answer) {
			if (answer == 0) {
				restart = false;
			}
			else {
				cout << endl;
				if (answer == 1) {
					menuMagnitude();
				}
				else if (answer == 2) {
					menuVector();
				}
				else if (answer == 3) {
					menuBoth();
				}
				else {
					
				}
				cout << endl;
			}
		}
		else {
			return 1;
		}
	}
	return 0;
}
