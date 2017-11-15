//  This program prints "You Pass" if a student's average is 
//  60 or higher and prints "You Fail" otherwise

// Justin DeMinnis

#include <iostream>
using namespace std;

int main()
{

	float average;    // holds the grade average

	cout << "Input your average:" << endl;
	cin >> average;

	if (average >= 90 && average <= 100)
		cout << "A" << endl;
	else if (average >=80 && average <= 89)
		cout << "B " <<endl;
	else if (average >=60 && average <=79) 
		cout << "You Pass " <<endl;
	else if(average >= 0 && average <= 59) 
		cout << " You Fail " <<endl;
	else if (average > 100 )
		cout << "Invalid data" <<endl;


    return 0;	
}
//Exercise 1 Output
/*Input your average:
80
You Pass
Press any key to continue . . .
Input your average:
55
You Fail
Press any key to continue . . .
Input your average:
60
Press any key to continue . . .

When we enter 60 the program does not compute anything because we do not have a conditional statement for if the average is 60.
Input your average:
60
You Pass
Press any key to continue . . .

*/

//Exercise 2 Output
/*
Input your average:
70
You Pass
Press any key to continue . . .
Input your average:
50
You Fail
Press any key to continue . . .
*/

//Exercise 3 Output
/*
Input your average:
95
A
Press any key to continue . . .
Input your average:
85
B
Press any key to continue . . .
Input your average:
75
You Pass
Press any key to continue . . .
Input your average:
55
 You Fail
Press any key to continue . . .
Input your average:
200
Invalid data
Press any key to continue . . .

The program won't run because -12 is not within our condtional statements



