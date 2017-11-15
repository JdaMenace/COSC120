#include <iostream>
#include <iomanip>
using namespace std;


// This program will demonstrate the scope rules.

// Justin DeMinnis


const double PI = 3.14;
const double RATE = 0.25;

void findArea(float, float&);
void findCircumference(float, float&);


int main()

{
	
	cout << fixed << showpoint << setprecision(2);
	float radius = 12;
	
	cout <<" Main function outer block" << endl;
    cout <<" area, radius and PI are active here" << endl << endl;
	{
		float area;
        cout << "Main function first inner block" << endl;	
		cout << "area, radius and PI are active here" << endl << endl;
		
	findArea(radius,area);
		
		cout << "The radius = " << radius << endl;
		cout << "The area = " << area << endl << endl;
	}
	
	{
        float radius = 10;
		float circumference;
		
		cout << "Main function second inner block" << endl;
		cout << "circumference, radius and PI are active here" << endl << endl;
		
		findCircumference(radius, circumference);
		
		cout << "The radius = " << radius << endl;
		cout << "The circumference = " << circumference << endl << endl;
		
	}
	
	cout << "Main function after all the calls" << endl;
	cout << "LIST THE IDENTIFIERS THAT are active here" << endl << endl;
	   
	return 0;
}

//  *********************************************************************
//                           findArea
//   
//   task:     This function finds the area of a circle given its radius
//   data in:  radius of a circle
//   data out: answer (which alters the corresponding actual parameter)
//
//   ********************************************************************


void findArea(float rad, float& answer)
{
	
    cout << "AREA FUNCTION" << endl << endl;
	cout << "LIST THE IDENTIFIERS THAT are active here"<< endl << endl;
	
	answer = (rad*rad)*PI;

	
}

//  ******************************************************************************
//                           findCircumference
//   
//   task:     This function finds the circumference of a circle given its radius
//   data in:  radius of a circle
//   data out: distance (which alters the corresponding actual parameter)
//
//   *****************************************************************************




void findCircumference(float length, float& distance)

{
	cout << "CIRCUMFERENCE FUNCTION" << endl << endl;
	cout << "LIST THE IDENTIFIERS THAT are active here" << endl << endl; 
	
	distance = 2*PI*length;
	
}


/*
 Main function outer block
 LIST THE IDENTIFIERS THAT are active here

Main function first inner block
LIST THE IDENTIFIERS THAT are active here

AREA FUNCTION

LIST THE IDENTIFIERS THAT are active here

The radius = 12.00
The area = 452.16

Main function second inner block
LIST THE IDENTIFIERS THAT are active here

CIRCUMFERENCE FUNCTION

LIST THE IDENTIFIERS THAT are active here

The radius = 10.00
The circumference = 62.80

Main function after all the calls
LIST THE IDENTIFIERS THAT are active here

Press any key to continue . . .
*/

/*
 Main function outer block
 area, radius and PI are active here

Main function first inner block
area, radius and PI are active here

AREA FUNCTION

LIST THE IDENTIFIERS THAT are active here

The radius = 12.00
The area = 452.16

Main function second inner block
circumference, radius and PI are active here

CIRCUMFERENCE FUNCTION

LIST THE IDENTIFIERS THAT are active here

The radius = 10.00
The circumference = 62.80

Main function after all the calls
LIST THE IDENTIFIERS THAT are active here

Press any key to continue . . .
*/
