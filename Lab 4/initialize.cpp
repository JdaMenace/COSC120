// This program tests whether or not an initialized value
// is equal to a value input by the user 

// Justin DeMinnis

#include <iostream>
using namespace std;

int main( )
{
 	int num1, num2 ;				// Both variables are int
	          

    cout << "Please enter an integer" << endl;
	cin >> num1;
	cout << "Please enter a second integer" <<endl;
	cin >>num2;


	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

    if (num1 == num2)
	{
		cout << "The values are the same. "  <<endl;
		cout << "Hey, that's  a coincidence!" << endl; 
	}
	else 
	
		cout << "The values are not the same" << endl;

    return 0;	
}

//Exercise 1 Output
/*
Please enter an integer
1
num1 = 1 and num2 = 5
Hey, that's  a coincidence!
Press any key to continue . . .
*/
/*
Please enter an integer
10
num1 = 10 and num2 = 5
Hey, that's  a coincidence!
Press any key to continue . . .
*/
//The program does not do what I expect because the input I enter in does not equal number 2, but the program says it does due to the fact our first if statement
// is an assignment statement and not a relational expression.

//Exercise 2 Output
/*
Please enter an integer
1
Please enter a second integer
1
num1 = 1 and num2 = 1
Hey, that's  a coincidence!
Press any key to continue . . .
*/
/*
Please enter an integer
1
Please enter a second integer
2
num1 = 1 and num2 = 2
The values are not the same
Press any key to continue . . .
*/
//Exercise 3 Output
/*
Please enter an integer
7
Please enter a second integer
7
num1 = 7 and num2 = 7
The values are the same.
Hey, that's  a coincidence!
Press any key to continue . . .
*/
//Exercise 4
/*
Please enter an integer
7
Please enter a second integer
8
num1 = 7 and num2 = 8
The values are not the same
Press any key to continue . . .

Please enter an integer
8
Please enter a second integer
8
num1 = 8 and num2 = 8
The values are the same.
Hey, that's  a coincidence!
Press any key to continue . . .

*/

