// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from a data file and the output will go to
// an output file.

// PLACE YOUR NAME HERE

#include <fstream>
#include <iomanip>
using namespace std;


int main()
{
   	ifstream dataIn;		// defines an input stream for a data file
	ofstream dataOut;		// defines an output stream for an output file
	int quantity;			// contains the amount of items purchased
	float itemPrice;		// contains the price of each item
	float  totalBill;		// contains the total bill.  The price of all items

	// Fill in the code to create a char variable type called ch to be used to hold the result of the file peek function


	dataIn.open("transaction.dat");  // This opens the file.
	dataOut.open("bill.out");

	// Fill in the appropriate code in the blank below
	_________<< setprecision(2) << fixed << showpoint;  // formatted output


	// Fill in the code to check that the file exists.  If not display a message and end the main function
	// by returning a 1





	// Fill in the code to read through the file as long as it is not at EOF (End Of the File)
	// You should use a while loop and the peek file function
	// If you are not at EOF, read in the quantity and itemPrice






	// Fill in the assignment statement that determines the totalbill.



	// Fill in the output statement that prints the total bill, with a label,
	// to an output.


	return 0;
}