//  This program has the user input a number n and then finds the
//  mean of the first n positive integers

// Justin DeMinnis

#include <iostream>
using namespace std;


int main()
{
	int value, value2;       // value is some positive number n
 	int total = 0;   // total holds the sum of the first n positive numbers
   	int number = 0;      // the amount of numbers
  	float mean;      // the average of the first n positive numbers

  	cout << "Please enter a positive integers" << endl;
   	cin >> value;
	cout <<"Please enter another positive integer" <<endl;
	cin >> value2;

  	if (value2 > value)
  	{
      	do{
         	  	    total = (float)total + value;
			number++;
			value++;
		}while(value <= value2);  // curly braces are optional since there is only one statement 
		
        mean = (total) / number;         // note the use of the typecast 
		                                     // operator here
		cout << "The mean average is " <<mean <<endl;
            
    }
    else if(value > value2)
	{
		do
        {
 	  	    total = (float)total + value2; 
			number++;
			value2++;

		}while(value2 <=value);  // curly braces are optional since there is only one statement 
		
        mean = (total) / number;         // note the use of the typecast 
		                                     // operator here
		cout << "The mean average of is " <<mean <<endl;
	}
	else{

        cout << "Invalid input - integer must be positive" << endl;
	}
   return 0;	
}

//Exercise 1 Output 
/*
The typecase operator is needed to compute the mean in order to retrieve all data from the calculation done, without it our mean would be not as precise as we would want it.
Below is the code without the typecast
Please enter a positive integer
8
The mean average of the first 8 positive integers is 4
Press any key to continue . . .

Please enter a positive integer
9
The mean average of the first 9 positive integers is 5
Press any key to continue . . .

Below is the code with typecast
Please enter a positive integer
8
The mean average of the first 8 positive integers is 4.5
Press any key to continue . . .

Please enter a positive integer
9
The mean average of the first 9 positive integers is 5
Press any key to continue . . .
*/

//Exercise 2 Output
/*
If we use a float such as 2.99 the value will be rouneded down to 2.
Please enter a positive integer
2.99
The mean average of the first 2 positive integers is 1
Press any key to continue . . .
*/

//Exercise 3 Output
/*
Please enter a positive integers
10
Please enter another positive integer
100
The mean average is 55
Press any key to continue . . .
*/

