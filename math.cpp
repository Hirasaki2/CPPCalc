#include <iostream>
#include "headers/calc.h"
#include "headers/menu.h"

//Declare Functions
int main(int argc, char *argv[]) {
	bool restart = true;
	while (restart == true) {
		int answer;
		std::cout << "Choose a option!\n 0. Exit\n 1. Magnitude + Vector\n 2. X + Y";
		std::cout << std::endl << "Choice: ";
		if (std::cin >> answer) {
			if (answer == 0) {
				restart = false;
			}
			else {
				std::cout << std::endl;
				if (answer == 1) {
					menuBoth();
				}
				else if (answer == 2) {
					menuXY();
				}
				else {
					
				}
				std::cout << std::endl;
			}
		}
		else {
			return 1;
		}
	}
	return 0;
}
