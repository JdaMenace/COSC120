// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.

//  Justin DeMinnis

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;




int main()

{
	string itemName;        // contains the name of the item
	int   quantity;			// contains the amount of items purchased
	float itemPrice;		// contains the price of each item
	float totalBill;		// contains the total bill.  


	cout << setprecision(2)<<fixed << showpoint;  //formatted output

	//Asking for the name of the item

	cout << "Please input the name of the item "<<endl;
	getline(cin,itemName);

	// Asks for the number of items bought
	cout << "Please input the number of items bought" <<endl;   

	// Fill in the input statement to bring in the quantity. 
	cin >> quantity;

	// Fill in the prompt to ask for the price.
	cout << "How much is the item? " <<endl;

	// Fill in the input statement to bring in the price of each item.
	cin >> itemPrice;

	// Fill in the assignment statement to determine the total bill.
	totalBill = quantity*itemPrice;
	cout << "The item you bought is " <<itemName <<endl;

	// Fill in the output statement to print total bill, with a label to the screen
	cout << "The total bill is $" <<totalBill <<endl;


	return 0;
}

/* Exercise 1 Output 
Please input the number of items bought
22
How much is the item?
10.98
The total bill is $241.56
Press any key to continue . . .
*/

/*Exercise 2 Output
Please input the number of items bought
22
How much is the item?
10.98
The total bill is $2.4e+002
Press any key to continue . . .
The fixed attribute allows the total price to be written as a decimal number and not as a scientific notation.

*/

/* Exercise 3 Output
Please input the number of items bought
22
How much is the item?
10.98
The total bill is $241.5600
Press any key to continue . . .
The set precisior allows for the total price to be written to 4 decimal places instead of 2 decimal places like in the previous example.
*/

/*Exercise 4 Output
Please input the name of the item
Milk
Please input the number of items bought
7
How much is the item?
1.97
The item you bought is Milk
The total bill is $13.79
Press any key to continue . . .

Please input the name of the item
Chocolate Milk
Please input the number of items bought
7
How much is the item?
1.97
The item you bought is Chocolate Milk
The total bill is $13.79
Press any key to continue . . .
*/

