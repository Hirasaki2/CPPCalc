#include <math.h>

//Option One
double calcMagnitude(double x1, double y1) {
	double xPower = pow (x1, 2);
	double yPower = pow (y1, 2);
	
	return (double) sqrt (xPower + yPower);
}
double calcVector(double x, double y) {
	double done = ( atan (y / x) * 180 ) / M_PI;
	if (x<0 && y>=0) {done = 90 + done;}
	else if (x<0 && y<0) {done = 180 + done;}
	else if (x>=0 && y<0) {done = 270 + done;}
	return done;
}
//Option Two
double calcX(double magnitude, double vector) {
	double cosed = cos((vector * M_PI) / 180);
	//if (vector<90 && vector>=270) {cosed = -cosed;}
	return cosed * magnitude;
}
double calcY(double magnitude, double vector) {
	double sined = sin((vector * M_PI) / 180);
	//if (vector>180 && vector<=0) {sined = -sined;}
	return sined * magnitude;
}
