// This program displays a hot beverage menu and prompts the user to
// make a selection. A switch statement determines which item the user
// has chosen. A do-while loop repeats until the user selects item E
// from the menu.

// Justin DeMinnis

#include <iostream>
#include <iomanip>
using namespace std;



int main()
{
	// Fill in the code to define an integer variable called number, 
	// a floating point variable called cost,
	// and a character variable called beverage
	int number;
	float cost; 
	char beverage; 
	bool validBeverage;

	cout << fixed << showpoint << setprecision(2);
	

	do
	{
		cout << endl << endl;
		cout << "Hot Beverage Menu" << endl << endl;
		cout << "A: Coffee         $1.00" << endl;
		cout << "B: Tea            $ .75" << endl;
		cout << "C: Hot Chocolate  $1.25" << endl;
		cout << "D: Cappuccino     $2.50" << endl <<endl << endl;
		
		cout << "Enter the beverage A,B,C, or D you desire" << endl;
		cout << "Enter E to exit the program" << endl << endl;
		// Fill in the code to read in beverage
		cin >> beverage;

		switch(beverage)
		{
		case 'a':
		case 'A':
		case 'b':
		case 'B':
		case 'c':
		case 'C':
		case 'd':
		case 'D':  validBeverage = true;
				   break;
		default:   validBeverage = false;
		}

		if (validBeverage)
		{
			cout << "How many cups would you like?" << endl;
			// Fill in the code to read in number
			cin >> number;
		}
		// Fill in the code to begin a switch statement 
		switch(beverage)
		// that is controlled by beverage
		{
		case 'a':
		case 'A': cost = number * 1.0;
			    cout << "The total cost is $ " << cost << endl;
				break;
		// Fill in the code to give the case for tea ( $0.75 a cup)
		case 'b':
		case 'B': cost = number *.75;
				cout << "The total cost is $ " << cost << endl;
				break;
		// Fill in the code to give the case for hot chocolate ($1.25 a cup)
		case 'c':
		case 'C': cost = number *1.25;
				cout << "The total cost is $ " << cost << endl;
				break;
		// Fill in the code to give the case for cappuccino ($2.50 a cup)		
		case 'd':
		case 'D': cost = number *2.50;
				cout << "The total cost is $ " << cost << endl;
				break;
		case 'e':		
		case 'E': cout << " Please come again" << endl;
			    break;
		default:cout << // Fill in the code to write a message 
					    // indicating an invalid selection.
				cout << " Try again please" << endl;
		}



	}while(validBeverage == true ); // Fill in the code to finish the do-while statement with the 
	  // condition that beverage does not equal E or e.

	// Fill in the appropriate return statement
	return 0;
}
//Exercise 1 Output 
/*


Hot Beverage Menu

A: Coffee         $1.00
B: Tea            $ .75
C: Hot Chocolate  $1.25
D: Cappuccino     $2.50


Enter the beverage A,B,C, or D you desire
Enter E to exit the program

A
How many cups would you like?
100
The total cost is $ 100.00


Hot Beverage Menu

A: Coffee         $1.00
B: Tea            $ .75
C: Hot Chocolate  $1.25
D: Cappuccino     $2.50


Enter the beverage A,B,C, or D you desire
Enter E to exit the program

B
How many cups would you like?
0
The total cost is $ 0.00


Hot Beverage Menu

A: Coffee         $1.00
B: Tea            $ .75
C: Hot Chocolate  $1.25
D: Cappuccino     $2.50


Enter the beverage A,B,C, or D you desire
Enter E to exit the program

C
How many cups would you like?
15
The total cost is $ 18.75


Hot Beverage Menu

A: Coffee         $1.00
B: Tea            $ .75
C: Hot Chocolate  $1.25
D: Cappuccino     $2.50


Enter the beverage A,B,C, or D you desire
Enter E to exit the program

E
 Please come again
Press any key to continue . . .
*/

//Exercise 2 Output
//If I enter in a non valid letter like Z, the program will not compute.
/*

Hot Beverage Menu

A: Coffee         $1.00
B: Tea            $ .75
C: Hot Chocolate  $1.25
D: Cappuccino     $2.50


Enter the beverage A,B,C, or D you desire
Enter E to exit the program

Z
6B5FC3E8 Try again please
Press any key to continue . . .

*/

//Exercise 3 Output 
/*
There are no differences in the execution of the program because we are still declaring that as long as validBeverage is true, then the program will run through the statement. A false occurence wouldn't process 
the if statement properly. 
*/



