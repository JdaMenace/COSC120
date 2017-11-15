// This program will read in a group of test scores( positive integers from 1 to 100)
// from the keyboard and then calculates and outputs  the average score
// as well as the highest and lowest score. There will be a maximum of 100 scores.

// Justin DeMinnis LAB 7.1

#include <iostream>
#include <fstream>

using namespace std;
typedef int GradeType[100];  // declares a new data type: 
                             // an integer array of 100 elements


float findAverage (const GradeType, int);  // finds average of all grades
int   findHighest (const GradeType, int);  // finds highest of all grades
int   findLowest  (const GradeType, int);  // finds lowest of all grades

int main()
































{
	ifstream DataIn;
	DataIn.open("gradfile.txt");
    GradeType  grades;					   // the array holding the grades.
    int  numberOfGrades;				   // the number of grades read.
    int pos;							   // index to the array.

	float avgOfGrades;					   // contains the average of the grades.
	int highestGrade;					   // contains the highest grade.
	int lowestGrade;					   // contains the lowest grade.

	// Read in the values into the array

	pos = 0;
	cout << "Processing grades" << endl;
	DataIn >> grades[pos]; 

	while (!DataIn.eof())
	{

		DataIn >> grades[pos];
		pos++;

	}
	DataIn.close();


	numberOfGrades = pos;  // Fill blank with appropriate identifier

	// call to the function to find average
	
	avgOfGrades = findAverage(grades, numberOfGrades);

	cout << endl << "The average of all the grades is " << avgOfGrades << endl;


	//  Fill in the call to the function that calculates highest grade


	cout << endl << "The highest grade is " << findHighest(grades,numberOfGrades) << endl;


	// Fill in the call to the function that calculates lowest grade

	cout << endl << "The Lowest grade is " << findLowest(grades,numberOfGrades) <<endl;

    // Fill in code to write the lowest to the screen
	DataIn.close();
	return 0;
}

//****************************************************************************
//                                 findAverage
//
// task:          This function receives an array of integers and its size.
//                It finds and returns the average of the numbers in the array
// data in:       array of floating point numbers
// data returned: avarage of the numbers in the array
//
//****************************************************************************

float findAverage (const GradeType  array, int size)

{  
	
	float sum = 0;   // holds the sum of all the numbers
	
    for (int pos = 0; pos < size; pos++)

		
	   sum = sum + array[pos];

    return (sum / size);  //returns the average
          
}

//****************************************************************************
//                                 findHighest
//
// task:          This function receives an array of integers and its size.
//                It finds and returns the highest value of the numbers in
//                the array
// data in:       array of floating point numbers
// data returned: highest value of the numbers in the array
//
//****************************************************************************

int   findHighest (const GradeType array, int size)
{
	int max; 
	max= array[0];


   for(int a = 1; a < size; a++)
   {
	   if (max < array[a] ) 
	   max = array[a];
   
   }


   return max;
}


//****************************************************************************
//                                 findLowest
//
// task:          This function receives an array of integers and its size.
//                It finds and returns the lowest value of the numbers in 
//                the array
// data in:       array of floating point numbers
// data returned: lowest value of the numbers in the array
//
//****************************************************************************

int   findLowest  (const GradeType array, int size)

{
   	int min; 
	min= array[0];


   for(int a = 1 ; a < size; a++)
   {
	   if (array[a] < min ) 
		   min = array[a];
   
   }


   return min;

}


/* 
Output Exercise 2

Please input a grade from 1 to 100, (or -99 to stop)
90
Please input a grade from 1 to 100, (or -99 to stop)
45
Please input a grade from 1 to 100, (or -99 to stop)
73
Please input a grade from 1 to 100, (or -99 to stop)
62
Please input a grade from 1 to 100, (or -99 to stop)
-99

The average of all the grades is 67.5

The highest grade is 90

The Lowest grade is 45
Press any key to continue . . .

*/


/*
Processing grades

The average of all the grades is 58.2

The highest grade is 90

The Lowest grade is 21
Press any key to continue . . .

*/