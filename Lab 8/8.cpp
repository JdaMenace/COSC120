
//Justin DeMinnis
//Wang COSC 120
//Option 6.4 

#include<iostream>
using namespace std;

int BinarySearch(int [], int, int);  
void SelectionSortArray(int [], int);   
int meancalc(int [], int);


int main ()
{
	int arr[50];
	int	elements;
	int snumber;
	int size; 
	int result;


	cout << "Please enter in the number of elements:"  << endl; //ask users for number of elements
	cin >> elements;
	

	for (int s = 0; s < elements ; s++) //for loop to enter in values into array
	{
		cout << "Please enter in a single value:" << endl;
		cin >> arr[s];
		size = s;
	}
	
	cout << "The array as entered by the user: ";

	for (int i = 0; i < elements; i++) //print the array onto screen
	{
		cout << arr[i] << "  ";
	}

	cout <<endl; //space

	
	cout <<"The mean is: " <<  meancalc(arr, elements) << endl; //find mean of the numbers

	cout <<"The size of you're array is " << size+1 << endl;

	SelectionSortArray(arr, elements); //sort

	cout << "The array reordered: "; //print new ordered array

	for (int c = 0; c < elements; c++){
		cout << arr[c] << "  ";
	}
	cout << endl;

	cout << "What number do you want to search for ?" << endl; //check value is in array

	cin >> snumber;

	result = BinarySearch(arr,elements,snumber); //search 


	if(result == -1)
	{
		cout << "The number " << result << " is not in the list" << endl;
	}
	else
	
		cout << "The number " << result << " is in position number "<< result+1  << " of the list" << endl; 
	
	return 0;
	
}
	
int BinarySearch(int array[],int numelements,int value) 
{
	int first = 0;				    // First element of list
	int last = numelements - 1;	    // last element of the list
	int middle;					    // variable containing the current 
	                                // middle value of the list
	
	while (first <= last)
	{
		middle = first + (last - first) / 2; 
		   
	if (array[middle] == value)
		return middle;		       // if value is in the middle, we are done
	                                 
	else if (array[middle]<value)
		last = middle - 1;		   // toss out the second remaining half of
								   // the array and search the first 
	else
		first = middle + 1;		   // toss out the first remaining half of
								   // the array and search the second
	}
	
	return -1;					  
}


void SelectionSortArray(int array[], int numelements)
{
	int min , minvalue; 
	int value;
	
	for (value = 0; value < (numelements-1); value++)  
	{

		min = value;
		minvalue = array[value];
		for(int i = value + 1; i < numelements; i++) 
        {
			if(array[i] > minvalue)
			{
				minvalue = array[i];                                                     
				min = i;       
		    }
        } //exit 2nd for loop

		array[min] = array[value];  
		array[value] = minvalue;


	}//exit for loop
}

int meancalc( int array[] , int numelements)
{
	int total = 0;
	int mean,wow;

	for(int m = 0; m < numelements; m++)
	{
		total += array[m];
	}

	mean = (total/numelements);

	return mean;
}

/*

Please enter in the number of elements
7
Please enter in a single value:
2
Please enter in a single value:
9
Please enter in a single value:
7
Please enter in a single value:
5
Please enter in a single value:
22
Please enter in a single value:
100
Please enter in a single value:
1
The array as entered by the user: 2  9  7  5  22  100  1
The mean is:20
The size of you're array is 7
The array reordered: 100  22  9  7  5  2  1
What number do you want to search for ?
5
The number 5 is in position number 5 of the list
Press any key to continue . . .


Please enter in the number of elements
7
Please enter in a single value:
1
Please enter in a single value:
2
Please enter in a single value:
3
Please enter in a single value:
4
Please enter in a single value:
5
Please enter in a single value:
6
Please enter in a single value:
7
The array as entered by the user: 1  2  3  4  5  6  7
The mean is:4
The size of you're array is 7
The array reordered: 7  6  5  4  3  2  1
What number do you want to search for ?
100
The number 100 is not in the list
Press any key to continue . . .
*/