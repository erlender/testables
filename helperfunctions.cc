/*
 * helperfunctions.cc
 *
 *  Created on: Jun 28, 2015
 *      Author: erl
 */

#include "helperfunctions.h"

#define _USE_MATH_DEFINES // Ensures the definition of PI is included with cmath.
#include <cmath>
#include <assert.h>

/**
 * Calculates the Elevation angle for object 1 towards object 2.
 */


double Helperfunctions::CommElevationAngleXYZ(double x1, double y1, double z1, double x2, double y2, double z2) {
// Calculate vector from object 1 to object 2
	double xv = x2 - x1;
	double yv = y2 - y1;
	double zv = z2 - z1;

	//=degrees(asin(abs(R4)/(sqrt(P4*P4+Q4*Q4+R4*R4))))

	double degrees = asin(std::abs(zv) / sqrt(xv * xv + yv * yv + zv * zv)) * 180.0 / M_PI;

	return degrees;
}

/**
 * Calculates the Elevation angle for object 1 towards object 2.
 */

double Helperfunctions::CommDistanceXYZ(double x1, double y1, double z1, double x2, double y2, double z2) {
// Calculate vector from object 1 to object 2
	double xv = x2 - x1;
	double yv = y2 - y1;
	double zv = z2 - z1;

	//=degrees(asin(abs(R4)/(sqrt(P4*P4+Q4*Q4+R4*R4))))

	double meters = sqrt(xv * xv + yv * yv + zv * zv);

	return meters;
}

double Helperfunctions::DistanceXY(double x1, double y1, double x2, double y2) {
	double dx = x1 - x2;
	double dy = y1 - y2;

	return sqrt(dx * dx + dy * dy);
}


/**
 * Function to estimate whether two nodes will have connectivity. Should be improved.
 */
bool Helperfunctions::ConnectedEstimation(double x1, double y1, double z1, double x2, double y2, double z2) {
	if (std::abs(z1 - z2) >= 500 && DistanceXY(x1, y1, x2, y2) < 3000)
		return true;
	if (std::abs(z1 - z2) < 500 && z1 > 500 && DistanceXY(x1, y1, x2, y2) < 3000)
		return true;
	if (std::abs(z1 - z2) < 500 && z1 <= 500 && DistanceXY(x1, y1, x2, y2) < 500)
		return true;
	return false;
}

/**
 * Simple function to calculate an average value from two numbers.
 */
double Helperfunctions::Mean(double x1, double x2) {
	return (x1 + x2) / 2.0;
}
