// This program performs a linear search on a character array

//Justin DeMinnis

#include<iostream>
using namespace std;

int searchList( int[], int, int); // function prototype
const int SIZE = 8;
int main()
{
	int nums[SIZE] = {3,-6,-19,5,5,0,-2,99};
	int found;
	int num1;
	do{
	cout << "Enter a number to search for:" << endl;
	cin >> num1;

	found = searchList(nums, SIZE, num1);
	if (found == -1)
		cout << "The number" << num1
             << " was not found in the list" << endl;
	else
		cout << "The number " << num1 <<" is in the " << found + 1
		     << " position of the list" << endl;
	}while(num1 != -99);

	return 0;

}


//*******************************************************************
//                      searchList
//
// task:	      This searches an array for a particular value
// data in:       List of values in an array, the number of 
//                elements in the array, and the value searched for
//                in the array
// data returned: Position in the array of the value or -1 if value
//                not found
//
//*******************************************************************

int searchList( int List[], int numElems, int value)
{
	for (int count = 0;count < numElems; count++)  
	{
		if (List[count] == value)
                      // each array entry is checked to see if it contains
	                  // the desired value.
		 return count; 
                     // if the desired value is found, the array subscript
			         // count is returned to indicate the location in the array
	}
	return -1;	     // if the value is not found, -1 is returned
}



//Exercise 1 Output
/*Enter a number to search for:
-2
The number -2 is in the 7 position of the list
Press any key to continue . . .

Enter a number to search for:
100
The number100 was not found in the list
Press any key to continue . . .


Enter a number to search for:
5
The number 5 is in the 4 position of the list
Press any key to continue . . .
If I search for 5 it tells me the first position it is in, not both.


*/

//Exercise 2 Output
/*
Enter a number to search for:
4
The number4 was not found in the list
Enter a number to search for:
5
The number 5 is in the 4 position of the list
Enter a number to search for:
6
The number6 was not found in the list
Enter a number to search for:
7
The number7 was not found in the list
Enter a number to search for:
99
The number 99 is in the 8 position of the list
Enter a number to search for:
-99
The number-99 was not found in the list
Press any key to continue . . .
*/



