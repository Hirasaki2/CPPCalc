#include <iostream>
#include "../include/calc.h"

const std::string magnitudeString = "Magnitude: ";
const std::string vectorString = "Vector: ";
const std::string xString = "X: ";
const std::string yString = "Y: ";

double doubleCout(std::string lol) {
	double var;
	std::cout << lol;
	std::cin >> var;
	return var;
}
void menuBoth() {
	double x, y;
	x = doubleCout(xString);
	y = doubleCout(yString);
	std::cout << std::endl;
	std::cout << magnitudeString << calcMagnitude(x, y) << std::endl;
	std::cout << vectorString << calcVector(x, y) << std::endl;
}
void menuXY() {
	double magnitudeVar, vectorVar;
	magnitudeVar = doubleCout(magnitudeString);
	vectorVar = doubleCout(vectorString);
	std::cout << std::endl;
	std::cout << xString << calcX(magnitudeVar, vectorVar) << std::endl;
	std::cout << yString << calcY(magnitudeVar, vectorVar) << std::endl;

}
