// This program takes two values from the user and then swaps them
// before printing the values.  The user will be prompted to enter
// both numbers.

// Justin DeMinnis

#include <iostream>
using namespace std;

int main()

{
	
	float firstNumber;
	float secondNumber;
	
	// Prompt user to enter the first number.
	
	cout << "Enter the first number" << endl;
	cout << "Then hit enter" << endl;
	cin  >> firstNumber;
	
	// Promt user to enter the second number.
	
	cout << "Enter the second number" << endl;
	cout << "Then hit enter" << endl;
	cin  >> secondNumber;
	
	// Echo print the input.
	
	cout << endl << "You input the numbers as " << firstNumber
		 << " and " << secondNumber << endl;
	
    	// Now we will swap the values.
	
	firstNumber = secondNumber;
    	secondNumber = firstNumber;
    
	// Output the values.
	
	cout << "After swapping, the values of the two numbers are "
	     << firstNumber << " and " << secondNumber << endl;
	
	return 0;
	
}

/*
Enter the first number
Then hit enter
3
Enter the second number
Then hit enter
4

You input the numbers as 3 and 4
After swapping, the values of the two numbers are 4 and 4
Press any key to continue . . .
*/
