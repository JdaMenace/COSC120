// This program demonstrates a compile error.

// Justin DeMinnis

#include <iostream>
using namespace std;

int main()

{
	int number;
	int total;
	
	
	cout << "Today is a great day for Lab";
	cout << endl << "Let's start off by typing a number of your choice" << endl;
	cin  >> number;
	
	total = number * 2;
	cout << total << " is twice the number you typed" << endl;
	
	return 0;
	
}


/*
Today is a great day for Lab
Let's start off by typing a number of your choice
9
18 is twice the number you typed
Press any key to continue . . .
*/
/*
Today is a great day for Lab
Let's start off by typing a number of your choice
7
14 is twice the number you typed
Press any key to continue . . .
*/
/*
Today is a great day for Lab
Let's start off by typing a number of your choice
99
198 is twice the number you typed
Press any key to continue . . .
*/