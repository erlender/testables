#include "helperfunctions.h"

#include <iostream>
#include <string>
#include <cmath> 
#include <gtest/gtest.h>
using namespace std; 



TEST(SQTest, PositiveNos){
ASSERT_EQ(6,sqrt(36.0));
}

TEST(SQTest, NegativeNos){
ASSERT_EQ(-1.0,sqrt(-15.0));
}

int main (int argc, char **argv) 
{
	Helperfunctions h;
	h.TestAllFunctions();
        string s="Erlend";


        cout << "Hello, " << s << '\n' ;

testing::InitGoogleTest(&argc, argv);




return RUN_ALL_TESTS();
        //return 0; // this return statement isn't necessary 
}

