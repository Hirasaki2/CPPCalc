#include <iostream>
#include "../include/calc.h"
#include "../include/menu.h"

const std::string one = "1";
const std::string two = "2";

//Declare Functions
int main(int argc, char *argv[]) {
	bool restart = true;
	if (argc == 1) {
		while (restart == true) {
			int answer;
			std::cout << "Choose a option!\n 0. Exit\n 1. Magnitude + Vector\n 2. X + Y\n";
			std::cout << "Choice: ";
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
	}
	else if (argv[1] == one) {
		while (true) {
			menuBoth();
		}
	}
	else if (argv[1] == two) {
		while (true) {
			menuXY();
		}
	}
	else {
		return 1;
	}
	return 0;
}
