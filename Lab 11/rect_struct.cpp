#include <iostream>
#include <iomanip>
using namespace std;


// This program uses a structure to hold data about a rectangle 
// Justin DeMinnis


// FILL IN CODE TO define a structure named rectangle which has 
// members length, width, area, and perimeter all of which are floats
struct Rectangle 
{
	float length;
	float 	width;
	float	area;
	float	perimeter;
};

int main()
{
    // Fill IN CODE to declare a rectangle variable named box
	Rectangle box;

    cout << "Enter the length of a rectangle: ";
	cin >> box.length;

	// FILL IN CODE to read in the length member of box

	cout << "Enter the width of a rectangle: ";
	cin >> box.width;
	// FILL IN CODE to read in the width member of box


	cout << endl << endl;

	// FILL IN CODE to compute the area member of box
	box.area = box.width * box.length;
	// FILL IN CODE to compute the perimeter member of box
	box.perimeter = 2* (box.area);
	cout << fixed << showpoint << setprecision(2);
	

    // FILL IN CODE to output the area with an appropriate message
	cout << "The area of the rectangle is: "<< box.area <<endl;
	// FILL IN CODE to output the perimeter with an appropriate message
	cout <<"The perimeter of the rectangle is: " << box.perimeter <<endl;
	if (box.length == box.width)
	{
		cout <<"The rectangle is a square" <<endl;
	}
	else
		cout <<"The rectangle is not a square" <<endl;
	return 0;
}


//Exercise 1 Output
/*
Enter the length of a rectangle: 10
Enter the width of a rectangle: 10


The area of the rectangle is: 100.00
The perimeter of the rectangle is: 200.00

Press any key to continue . . .
*/
//Exercise 2 Output
/*
Enter the length of a rectangle: 10
Enter the width of a rectangle: 10


The area of the rectangle is: 100.00
The perimeter of the rectangle is: 200.00
The rectangle is a square
Press any key to continue . . .


Enter the length of a rectangle: 8
Enter the width of a rectangle: 7


The area of the rectangle is: 56.00
The perimeter of the rectangle is: 112.00
The rectangle is not a square
Press any key to continue . . .
*/