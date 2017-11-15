#include <iostream>
#include <iomanip>

using namespace std;


// This program demonstrates how to use an array of structures
// PLACE YOUR NAME HERE

// FILL IN CODE to define a structure called taxPayer that has three 
// members:  taxRate, income, and taxes -- each of type float


int main()
{
   // FILL IN CODE to declare an array named citizen which holds
   // 5 taxPayers structures

	cout << fixed << showpoint << setprecision(2);

	cout << "Please enter the annual income and tax rate for 5 tax payers: ";
	cout << endl << endl << endl;

	for(int count = 0;count < 5;count++)
	{

		cout << "Enter this year's income for tax payer " << (count + 1);
		cout << ": ";
		
		// FILL IN CODE to read in the income to the appropriate place

		cout << "Enter the tax rate for tax payer # " << (count + 1);
		cout << ": ";
		
		// FILL IN CODE to read in the tax rate to the appropriate place

		// FILL IN CODE to compute the taxes for the citizen and store it
		// in the appropriate place

	   
		cout << endl;
	}

	cout << "Taxes due for this year: " << endl << endl;

	// FILL IN CODE for the first line of a loop that will output the 
	// tax information
	{
		cout << "Tax Payer # " << (index + 1) << ": " << "$ "
			 << citizen[index].taxes << endl;
	}

	return 0;
}
