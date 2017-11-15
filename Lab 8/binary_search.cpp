// This program demonstrates a Binary Search

//Justin DeMinnis

#include<iostream>
using namespace std;

int binarySearch(int [], int, int);  // function prototype

const int SIZE = 16;

int main()
{
	int found, value; 
	int array[] = {0,2,2,3,5,9,11,12,12,12,13,17,18,19,19,34};
	cout << "Enter an integer to search for:" << endl;
	cin >> value;

	found = binarySearch(array, SIZE, value); //function call to perform the binary search
	                                          //on array looking for an occurrence of value
	if (found == -1)
		cout << "The value " << value << " is not in the list" << endl;
	else
	{
		cout << "The value " << value << " is in position number "
		     << found + 1 << " of the list" << endl; 
	}
	return 0;
}


//*******************************************************************
//                     binarySearch
//
// task:		  This searches an array for a particular value
// data in:       List of values in an orderd array, the number of 
//                elements in the array, and the value searched for
//                in the array
// data returned: Position in the array of the value or -1 if value
//                not found
//
//*******************************************************************
int binarySearch(int array[],int numElems,int value) //function heading
{
	int first = 0;				    // First element of list
	int last = numElems - 1;	    // last element of the list
	int middle;					    // variable containing the current 
	                                // middle value of the list
	
	while (first <= last)
	{
		middle = first + (last - first) / 2; 
		   
	if (array[middle] == value)
		return middle;		       // if value is in the middle, we are done
	                                 
	else if (array[middle]>value)
		last = middle - 1;		   // toss out the second remaining half of
								   // the array and search the first 
	else
		first = middle + 1;		   // toss out the first remaining half of
								   // the array and search the second
	}
	
	return -1;					   // indicates that value is not in the array
}

//Exercise 1
/*
The right side of this statement MUST be an integer because the variable provides us with a position in 
an array, and if that middle integer is not a whole number then we cannot find it in the array.
The middle value is determined by the computer by taking the last and subtracting it by the first, then dividing that result 
by 2, and finally adding that result to the first array position. The line of code affects the logic of the program by 
by allowing us to find the middle position in the array using other given data.  
*/

//Exercise 2 
/*
Enter an integer to search for:
19
The value 19 is in position number 2 of the list
Press any key to continue . . .
Enter an integer to search for:
12
The value 12 is in position number 8 of the list
Press any key to continue . . .

The occurence of 19 that the search found was the first occurence.
The occurence of 12 that the search found was the second occurence.
The difference of the occurences is because we were finding the middle of the array, and the first 12 was the middle so they used the second.
*/

//Exercise 3
/*
Enter an integer to search for:
9
The value 9 is in position number 6 of the list
Press any key to continue . . .
*/
