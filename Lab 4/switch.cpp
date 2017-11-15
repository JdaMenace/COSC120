// This program illustrates the use of the Switch statement.

// Justin DeMinnis

#include <iostream>
using namespace std;


int main()
{
	char grade;

	cout << "What grade did you earn in Programming I ?" << endl;
	cin >> grade;

	if (grade == 'A')
	{
	cout << "YOU PASSED" << endl;
	cout << "an A - excellent work !" << endl;
	}
	else if(grade == 'B')
	{
	cout << "YOU PASSED" << endl;
	cout << "you got a B - good job" << endl;
	}
	else if(grade == 'C')
	{
	cout << "YOU PASSED" << endl;
	cout << "earning a C is satisfactory" << endl;
	}
	else if(grade == 'D')
	{
	cout << "YOU PASSED" << endl;
	cout << "while  D is passing, there is a problem" << endl;
	}
	else if(grade == 'F')
	{
	cout << "you failed - better luck next time" << endl;
	}
	else
           cout << "You did not enter an A, B, C, D, or F" << endl;
	

 return 0;
}

//Exercise 1 Output
/*
What grade did you earn in Programming I ?
B
you got a B - good job
earning a C is satisfactory
while  D is passing, there is a problem
you failed - better luck next time
You did not enter an A, B, C, D, or F
Press any key to continue . . .

It considers all cases as true if we remove the break 

*/

//Exercise 2 Output 
/*
What grade did you earn in Programming I ?
D
 YOU PASSED !
while  D is passing, there is a problem
Press any key to continue . . .
*/


//Exercise 3 Output
/*
What grade did you earn in Programming I ?
E
You did not enter an A, B, C, D, or F
Press any key to continue . . .

The trailing else corresponded to my default statement 
*/

