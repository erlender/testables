#include "helperfunctions.h"

#include <iostream>
#include <string> 
using namespace std; 
int main () 
{
	Helperfunctions h;
	h.TestAllFunctions();
        string s;
        cout<<"Your Name \n";
        cin>>s;
        cout << "Hello, " << s << '\n' ;
        return 0; // this return statement isn't necessary 
}

