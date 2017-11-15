#include <fstream>
#include <iostream>
using namespace std;

// Justin DeMinnis

const int MAXNAME = 20;

int main()
{
	ifstream inData;
	inData.open("grades.txt");

	char name[MAXNAME + 1];  // holds student name
	float average;  // holds student average


	inData.get(name,MAXNAME+1);
	while (inData)
	{
		inData >> average;
		cout << "Name: " << name << "has an average: " << average <<endl;

		// FILL IN THE CODE to print out name and 
		// student average

		// FILL IN THE CODE to complete the while 
		// loop so that the rest of the student
		// names and average are read in properly
		inData.ignore(80, '\n');
		inData.get(name,MAXNAME+1);
	}

	inData.close();

	return 0;
}
/*
Name: Adara Starr         has an average: 94
Name: David Starr         has an average: 91
Name: Sophia Starr        has an average: 94
Name: Maria Starr         has an average: 91
Name: Danielle DeFino     has an average: 94
Name: Dominic DeFino      has an average: 98
Name: McKenna DeFino      has an average: 92
Name: Taylor McIntire     has an average: 99
Name: Torrie McIntire     has an average: 91
Name: Emily Garrett       has an average: 97
Name: Lauren Garrett      has an average: 92
Name: Marlene Starr       has an average: 83
Name: Donald DeFino       has an average: 73
Press any key to continue . . .
*/
