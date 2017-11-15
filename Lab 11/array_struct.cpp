#include <iostream>
#include <iomanip>

using namespace std;


// This program demonstrates how to use an array of structures
//Justin DeMinnis

// FILL IN CODE to define a structure called taxPayer that has three 
// members:  taxRate, income, and taxes -- each of type float
struct taxPayer
{
	float taxRate;
	float income;
	float taxes;
};

int main()
{
   // FILL IN CODE to declare an array named citizen which holds
   // 5 taxPayers structures
	taxPayer citizen[5];
	cout << fixed << showpoint << setprecision(2);

	cout << "Please enter the annual income and tax rate for 5 tax payers: ";
	cout << endl << endl << endl;

	for(int count = 0;count < 5;count++)
	{

		cout << "Enter this year's income for tax payer " << (count + 1);
		cout << ": ";
		cin >> citizen[count].income;

		cout << "Enter the tax rate for tax payer # " << (count + 1);
		cout << ": ";
		cin >> citizen[count].taxRate;
		// FILL IN CODE to read in the tax rate to the appropriate place

		// FILL IN CODE to compute the taxes for the citizen and store it
		// in the appropriate place
		citizen[count].taxes = (citizen[count].income)*(citizen[count].taxRate);
	   
		cout << endl;
	}

	cout << "Taxes due for this year: " << endl << endl;

	// FILL IN CODE for the first line of a loop that will output the 
	// tax information
for(int index = 0; index < 5; index++)
{

cout << "Tax Payer # " << (index + 1) << ": " << "$ "<< citizen[index].taxes << endl;

}

return 0;
}


//Exercise Output
/*
Please enter the annual income and tax rate for 5 tax payers:


Enter this year's income for tax payer 1: 200
Enter the tax rate for tax payer # 1: 300

Enter this year's income for tax payer 2: 550
Enter the tax rate for tax payer # 2: 20

Enter this year's income for tax payer 3: 1110
Enter the tax rate for tax payer # 3: 20

Enter this year's income for tax payer 4: 4445
Enter the tax rate for tax payer # 4: 2

Enter this year's income for tax payer 5: 32321
Enter the tax rate for tax payer # 5: 21

Taxes due for this year:

Tax Payer # 1: $ 60000.00
Tax Payer # 2: $ 11000.00
Tax Payer # 3: $ 22200.00
Tax Payer # 4: $ 8890.00
Tax Payer # 5: $ 678741.00
Press any key to continue . . .
*/

//We need index +1 in the first line since the index is starting at 0 in our for loop and if we didnt then it would say TaxPayer #0 !!! 


