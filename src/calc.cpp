#include <math.h>

double rounder(double input) {
	return round(input * 1000) / 1000;
}


//Option One
double calcMagnitude(double x1, double y1) {
	double xPower = pow (x1, 2);
	double yPower = pow (y1, 2);
	
	return (double) rounder(sqrt (xPower + yPower));
}
double calcVector(double x, double y) {
	double done = ( atan (y / x) * 180 ) / M_PI;
	if (x<0 && y>=0) {done = 90 + done;}
	else if (x<0 && y<0) {done = 180 + done;}
	else if (x>=0 && y<0) {done = 270 + done;}
	return rounder(done);
}
//Option Two
double calcX(double magnitude, double vector) {
	double cosed = cos((vector * M_PI) / 180);
	return rounder(cosed * magnitude);
}
double calcY(double magnitude, double vector) {
	double sined = sin((vector * M_PI) / 180);
	return rounder(sined * magnitude);
}
