// This program illustrates the use of a sentinel in a while loop.
// The user is asked for monthly rainfall totals until a sentinel
// value of -1 is entered. Then the total rainfall is displayed

// Justin Deminnis

#include <iostream>
using namespace std;

int main()
{
	// Fill in the code to define and initialize to 1 the variable month 
	float total = 0, rain;
	int month = 1;

	cout << "Enter the total rainfall for month " << month << endl;
	cout << "Enter -1 when you are finished" << endl;

	// Fill in the code to read in the value for rain
	cin >> rain;
	
	// Fill in the code to start a while loop that iterates 
	// while rain does not equal -1
	while (rain != -1)
	{
		// Fill in the code to update total by adding it to rain
		total = rain + total;
		// Fill in the code to increment month by one
		
	    cout << "Enter the total rainfall in inches for month "
	         << ++month << endl;
		cout << "Enter -1 when you are finished" << endl;
		// Fill in the code to read in the value for rain
		cin >> rain;
	}

	if (month == 1)
		cout << "No data has been entered" << endl;

	else
		cout << "The total rainfall for the " << month-1 
		     << " months is "<< total << " inches." << endl;

	
   return 0;	
}
/*
Enter the total rainfall for month 1
Enter -1 when you are finished
22
Enter the total rainfall in inches for month 2
Enter -1 when you are finished
14
Enter the total rainfall in inches for month 3
Enter -1 when you are finished
15
Enter the total rainfall in inches for month 4
Enter -1 when you are finished
77
Enter the total rainfall in inches for month 5
Enter -1 when you are finished
88
Enter the total rainfall in inches for month 6
Enter -1 when you are finished
100
Enter the total rainfall in inches for month 7
Enter -1 when you are finished
50
Enter the total rainfall in inches for month 8
Enter -1 when you are finished
60
Enter the total rainfall in inches for month 9
Enter -1 when you are finished
70
Enter the total rainfall in inches for month 10
Enter -1 when you are finished
80
Enter the total rainfall in inches for month 11
Enter -1 when you are finished
90
Enter the total rainfall in inches for month 12
Enter -1 when you are finished
3
Enter the total rainfall in inches for month 13
Enter -1 when you are finished
-1
The total rainfall for the 12 months is 669 inches.
Press any key to continue . . .

The results are correct . If I enter in -1 first, the system tells me no data has been entered for that month. If I enter in 0 for one or more months the system continues on to the following month.
The only nuermical data that I cannot enter in are negative numbers or decimal numbers because I do not think it would total up properly. 

Exercise 6 Question:
The purpose of the following code is for the begginning of the program if we enter in for month 1 a -1 rainfall, then the program will tell me we havent enterd in any data and there is nothing to calculate from.

*/
