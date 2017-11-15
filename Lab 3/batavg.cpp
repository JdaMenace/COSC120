// This program will determine the batting average of a player. 
// The number of hits and at bats are set internally in the program.

// Justin DeMinnis

#include <iostream>
using namespace std;


const int AT_BAT = 421;
const int HITS = 123;

int main()
{
	float batAvg;
	
	//In order to get a decimal number we must type cast using static_cast<float> on both variables

	batAvg =static_cast<float>(HITS) /static_cast<float>(AT_BAT);  //an assignment statement

	cout << "The batting average is " << batAvg << endl;   //output the result

	return 0;
}
/*
The batting average is 0
Press any key to continue . . .
*/

/*
The batting average is 0
Press any key to continue . . .
*/

/*
The batting average is 0.292162
Press any key to continue . . .
*/