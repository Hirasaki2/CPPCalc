#include <math.h>

double calcMagnitude(double x1, double y1) {
	double xPower = pow (x1, 2);
	double yPower = pow (y1, 2);
	
	return (double) sqrt (xPower + yPower);
}
double calcVector(double x, double y) {
	return (double) ( atan (y / x) * 180 ) / M_PI;
}
