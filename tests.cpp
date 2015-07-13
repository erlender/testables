#include "helperfunctions.h"

#include <iostream>
#include <string>
#include <cmath> 
#include <gtest/gtest.h>
using namespace std; 



TEST(SQTest, PositiveNos){
	ASSERT_EQ(6,sqrt(36.0));
}

TEST(DistanceXY, RationalCheck){
	ASSERT_EQ(sqrt(8),h.DistanceXY(1,2,3,4)){
}

int main (int argc, char **argv) 
{
	Helperfunctions h;
//	h.TestAllFunctions();
        string s="Erlend";


        cout << "Hello, " << s << '\n' ;

testing::InitGoogleTest(&argc, argv);




return RUN_ALL_TESTS();
        //return 0; // this return statement isn't necessary 
}

