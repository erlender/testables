/*
 * 3dfunctions.h
 *
 *  Created on: Jun 28, 2015
 *      Author: erl
 */

#ifndef HELPERFUNCTIONS_H_
#define HELPERFUNCTIONS_H_

class Helperfunctions {
public:
	Helperfunctions();
	double CommElevationAngleXYZ(double x1, double y1, double z1, double x2, double y2, double z2);
	double CommDistanceXYZ(double x1, double y1, double z1, double x2, double y2, double z2);
	bool ConnectedEstimation(double x1, double y1, double z1, double x2, double y2, double z2);
	double DistanceXY(double x1,double y1, double x2,double y2);
	double Mean(double x1, double x2);

	void TestAllFunctions();
};
#endif /* HELPERFUNCTIONS_H_ */
