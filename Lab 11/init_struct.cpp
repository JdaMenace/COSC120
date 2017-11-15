#include <iostream>
#include <iomanip>
using namespace std;


// This program demonstrates partially initialized strucure variables

// Justin DeMinnis

struct taxPayer
{
	char name[25];
	long int socialSecNum;
	float taxRate;
	float income;
	float taxes;
};

int main()
{
	// Fill in code to initialize a structure variable named citizen1 so that
	// the first three members are initilized.  Assume the name is Tim 
	// McGuiness,the social security number is 255871234, and the tax rate is .35
	taxPayer citizen1 = {"Tim McGuiness", 255871234, .35};

	// Fill in code to initialize a structure variable named citizen2 so that 
	// the first three members are initialized.  Assume the name is John Kane,
	// the social security number is 278990582, and the tax rate is .29
	taxPayer citizen2 = {"John Kane",278990582,.29   };

	cout << fixed << showpoint << setprecision(2);

	// calculate taxes due for citizen1

	// Fill in code to prompt the user to enter this year's income for the citizen1
	// Fill in code to read in this income to the appropriate structure member
	cout << "Please input the yearly income for "<<citizen1.name<<": ";
	cin >> citizen1.income;
	// Fill in code to determine this year's taxes for citizen1
	citizen1.taxes = (citizen1.income)*(citizen1.taxRate);
	
	cout << "Name: " << citizen1.name << endl;
	cout << "Social Security Number: " << citizen1.socialSecNum << endl;
	
	cout << "Taxes due for this year: $" << citizen1.taxes << endl << endl;

	// calculate taxes due for citizen2

	cout << "Please input the yearly income for "<<citizen2.name<<": ";
	cin >> citizen2.income;

	citizen2.taxes = (citizen2.income)*(citizen2.taxRate);


	cout << "Name: " << citizen2.name << endl;
	cout << "Social Security Number: " << citizen2.socialSecNum << endl;

	cout << "Taxes due for this year: $" << citizen2.taxes << endl << endl;

	return 0;
}

//Exercise 1 Output
/*
Please input the yearly income for Tim McGuiness: 80000
Name: Tim McGuiness
Social Security Number: 255871234
Taxes due for this year: $28000.00

Please input the yearly income for John Kane: 50000
Name: John Kane
Social Security Number: 278990582
Taxes due for this year: $14500.00

Press any key to continue . . .
*/
