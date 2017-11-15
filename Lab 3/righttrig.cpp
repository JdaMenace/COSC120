// This program will input the value of two sides of a right triangle and then 
// determine the size of the hypotenuse.

// Justin DeMinnis

#include <iostream>
#include <iomanip>
#include <cmath>         // needed for math functions like sqrt()
using namespace std;



int main()

{

	float a,b;		   // the smaller two sides of the triangle
	float hyp;		   // the hypotenuse calculated by the program
   
	cout << "Please input the value of the two sides" << endl;
	cin >> a >> b;


	// Fill in the assignment statement that determines the hypotenuse.
	
	cout << "The sides of the right triangle are " << a << " and " << b << endl;
	//Setting up the equation to find the hypotenuse

	hyp = sqrt(pow(a,2) + pow(b,2));

	cout << "The hypotenuse is "<<setprecision(2) <<fixed << hyp << endl;

	return 0;
}
/*Exercise 1 Output
We Will implement this by using square root and power functions inside one another
Please input the value of the two sides
9 3
The sides of the right triangle are 9 and 3
The hypotenuse is 9.48683
Press any key to continue . . .
*/

/*Exercise 2 Output
Please input the value of the two sides
9 3
The sides of the right triangle are 9 and 3
The hypotenuse is 9.49
Press any key to continue . . .
*/
