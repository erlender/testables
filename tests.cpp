#include "helperfunctions.h"

#include <iostream>
#include <string>
#include <cmath> 
#include <gtest/gtest.h>
using namespace std;

TEST(CommElevationAngleXYZ, RationalCheck) {
	Helperfunctions h;
	////=degrees(asin(abs(R4)/(sqrt(P4*P4+Q4*Q4+R4*R4))))
	ASSERT_EQ(35, round(h.CommElevationAngleXYZ(1,2,3,4,5,6)));
}

TEST(CommDistanceXYZ, RationalCheck) {
	Helperfunctions h;
	ASSERT_EQ(5, round(h.CommDistanceXYZ(1,2,3,4,5,6)));
}

TEST(DistanceXY, RationalCheck) {
	Helperfunctions h;
	ASSERT_EQ(sqrt(8), h.DistanceXY(1,2,3,4));
}

TEST(ConnectedEstimation, RationalCheck) {
	Helperfunctions h;
	ASSERT_TRUE(h.ConnectedEstimation(1,2,3,4,5,6));
}

TEST(Mean, PositiveNos) {
	Helperfunctions h;
	ASSERT_EQ(10, h.Mean(9,11));
	ASSERT_EQ(10.5, h.Mean(10,11));
}

TEST(Mean, Zero) {
	Helperfunctions h;
	ASSERT_EQ(0, h.Mean(-2,2));

}

TEST(Mean, NegativeNos) {
	Helperfunctions h;
	ASSERT_EQ(-5, h.Mean(-10,0));
}

int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

