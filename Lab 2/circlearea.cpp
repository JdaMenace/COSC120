// This program will output the area and perimeter of a rectangle 



//  Justin DeMinnis

#include <iostream>
using namespace std;

const  int LENGTH =8;
const  int WIDTH =3;
int PERIMETER;
int area;
int main()

{
	area = LENGTH * WIDTH ; // definition of area of a rectangle


	PERIMETER =  (2*LENGTH) + (2*WIDTH); // definition of perimeter of a rectangle

	
	//Code to output the Area of a rectangle
    cout << "The area of the rectangle is " <<area <<endl;

	
	//Code to output the Perimeter of a rectangle
    cout << "The perimeter of a rectangle is " << PERIMETER <<endl;
	
	return 0;
}

/*
The area of the rectangle is 24
The perimeter of a rectangle is 22
Press any key to continue . . .
*/