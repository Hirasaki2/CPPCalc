#include <iostream>
#include "../include/calc.h"

const std::string magnitude = "Magnitude: ";
const std::string vector = "Vector: ";

double doubleCout(std::string lol) {
	double var;
	std::cout << lol;
	std::cin >> var;
	return var;
}
void menuBoth() {
	double x, y;
	x = doubleCout("x: ");
	y = doubleCout("y: ");
	std::cout << std::endl;
	std::cout << magnitude << calcMagnitude(x, y) << std::endl;
	std::cout << vector << calcVector(x, y) << std::endl;
}
void menuXY() {
	double magnitudeVar, vectorVar;
	magnitudeVar = doubleCout(magnitude);
	vectorVar = doubleCout(vector);
	std::cout << std::endl;
	std::cout << "x: " << calcX(magnitudeVar, vectorVar) << std::endl;
	std::cout << "y: " << calcY(magnitudeVar, vectorVar) << std::endl;

}
