include <iostream>
#include <iomanip>

using namespace std;


// This program demonstrates how to use an array of structures


// Fill in code to define a structure called taxPayer that has three
// members: taxRate, income, and taxes -- each of type float
struct taxPayer
{float taxRate;
float income;
float taxes;
};


int main()
{
// Fill in code to declare an array named citizen which holds
// 5 taxPayers structures
taxPayer citizen[5];
cout << fixed << showpoint << setprecision(2);

cout << "Please enter the annual income and tax rate for 5 tax payers: ";
cout << endl << endl << endl;

for(int count = 0;count < 5;count++)
{

cout << "Enter this year's income for tax payer " << (count + 1);
cout << ": ";

// Fill in code to read in the income to the appropriate place
cin>>citizen[count].income;
cout << "Enter the tax rate for tax payer # " << (count + 1);
cout << ": ";

// Fill in code to read in the tax rate to the appropriate place
cin>>citizen[count].taxRate;
// Fill in code to compute the taxes for the citizen and store it
// in the appropriate place

#include <iostream>
#include <iomanip>
// #include<conio.h>
using namespace std;


// This program uses a structure to hold data about a rectangle
// It calculates the area and perimeter of a box

// Sanjay Prasad Kuswhawa

// Fill in code to define a structure named dimensions that
// contains 2 float members, length and width
struct dimensions
{
float length;
float width;

};
// Fill in code to define a structure named rectangle that contains
// 3 members, area, perimeter, and sizes. area and perimeter should be
// floats, whereas sizes should be a dimensions structure variable

struct rectangle
{
float area;
float perimeter;
dimensions sizes;

} ;
int main()
{
// Fill in code to declare a rectangle structure variable named box.
rectangle box;

cout << "Enter the length of a rectangle: ";

// Fill in code to read in the length to the appropriate location
cin>>box.sizes.length;
cout << "Enter the width of a rectangle: ";

// Fill in code to read in the width to the appropriate location
cin>>box.sizes.width;
cout << endl << endl;

// Fill in code to compute the area and store it in the appropriate
// location
box.area=(box.sizes.width)*(box.sizes.length);
// Fill in code to compute the perimeter and store it in the
// appropriate location
box.perimeter= 2*((box.sizes.length)+(box.sizes.width));
cout << ios::fixed <<ios:: showpoint << setprecision(2);
cout << "The area of the rectangle is " << box.area << endl;
cout << "The perimeter of the recangle is " << box.perimeter
<< endl;

cout << endl;
}

cout << "Taxes due for this year: " << endl << endl;

// Fill in code for the first line of a loop that will output the
// tax information
{for(int index=0;index<5;index++)
cout << "Tax Payer # " << (index + 1) << ": " << "$ "
<< citizen[index].taxes << endl;
}
return 0;
}