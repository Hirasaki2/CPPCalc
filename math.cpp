#include <iostream>
#include "headers/calc.h"
#include "headers/menu.h"
using namespace std;

//Declare Functions
int main() {
	bool restart = true;
	while (restart == true) {
		int answer;
		cout << "Choose a option!\n 0. Exit\n 1. Magnitude + Vector\n 2. X + Y";
		cout << endl << "Choice: ";
		if (cin >> answer) {
			if (answer == 0) {
				restart = false;
			}
			else {
				cout << endl;
				if (answer == 1) {
					menuBoth();
				}
				else if (answer == 2) {
					menuXY();
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
