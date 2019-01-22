#include <math.h>

double calcMagnitude(double x1, double y1, double x2, double y2) {
	double xPower = pow (x2 - x1, 2);
	double yPower = pow (y2 - y1, 2);
	
	return (double) sqrt (xPower + yPower);
}
double calcVector(double x1, double y1, double x2, double y2) {
	double diffX = x1 + x2;
	double diffY = y1 + y2;
	
	return (double) atan (diffY / diffX) * 180 / M_PI;
}
