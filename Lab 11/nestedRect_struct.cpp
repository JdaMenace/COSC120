#include <iostream>
#include <iomanip>

using namespace std;

float findarea (float, float);
float findperimeter(float);

// This program uses a structure to hold data about a rectangle 
// It calculates the area and perimeter of a box 

// Justin DeMinnis

// Fill in code to define a structure named dimensions that
// contains 2 float members, length and width
struct dimensions
{
	float length;
	float width;
};

struct results
{
	float area;
	float perimeter;
};
// Fill in code to define a structure named rectangle that contains
// 3 members, area, perimeter, and sizes.  area and perimeter should be
// floats, whereas sizes should be a dimensions structure variable
struct rectangle
{
	dimensions sizes;
	results attributes;
};



int main()
{
   // Fill in code to declare a rectangle structure variable named box.
	rectangle box;
   cout << "Enter the length of a rectangle: ";
   cin >> box.sizes.length;
   // Fill in code to read in the length to the appropriate location

   cout << "Enter the width of a rectangle: ";
   cin >> box.sizes.width;
   // Fill in code to read in the width to the appropriate location 

   // Fill in code to compute the area and store it in the appropriate
   // location
   box.attributes.area = findarea(box.sizes.length, box.sizes.width);

   // Fill in code to compute the perimeter and store it in the 
   // appropriate location
   box.attributes.perimeter= findperimeter(box.attributes.area);

   cout << fixed << showpoint << setprecision(2);
   cout << "The area of the rectangle is " << box.attributes.area << endl; 
   cout << "The perimeter of the recangle is " <<  box.attributes.perimeter  << endl;

   return 0;
}

float findarea(float length, float width)
{
	float a1 = 0;
	a1 = length * width;
	return a1;

}

float findperimeter(float a)
{
	float p = 0;
	p = 2*a;
	return p;
}

//Exercise 1 Output
/*
Enter the length of a rectangle: 7
Enter the width of a rectangle: 9


The area of the rectangle is 63.00
The perimeter of the recangle is 126.00
Press any key to continue . . .
*/
//Exercise 2 Output
/*
Enter the length of a rectangle: 50
Enter the width of a rectangle: 60
The area of the rectangle is 3000.00
The perimeter of the recangle is 6000.00
Press any key to continue . . .
*/

//Exercise 3 Output
/*
Enter the length of a rectangle: 200
Enter the width of a rectangle: 1
The area of the rectangle is 200.00
The perimeter of the recangle is 400.00
Press any key to continue . . .
*/