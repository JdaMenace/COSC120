// This program takes two numbers (pay rate & hours)
// and multiplies them to get grosspay    
// it then calculates net pay by subtracting 15%

//Justin DeMinnis

#include <iostream>
#include <iomanip>
using namespace std;




//Function prototypes
void printDescription(); 
void computePaycheck(float, int); 

int main()
{
	float payRate;
	float grossPay;
	float netPay;
	int hours;
	
	cout << setprecision(2) << fixed;
	
	cout << "Welcome to the Pay Roll Program" << endl; 
	
	printDescription(); //Call to Description function
	
	cout << "Please input the pay per hour" << endl;
	cin >> payRate;
	
	cout << endl << "Please input the number of hours worked" << endl;
	cin >> hours;
	cout << endl << endl;
	
	computePaycheck(payRate,hours);
	
	cout << "We hoped you enjoyed this program" << endl;
	
	return 0;
}




//   ********************************************************************
//                         printDescription
//   
//   task:     This function prints a program description
//   data in:  none
//   data out: none
//
//   ********************************************************************



void printDescription() //The function heading
{
    cout << "************************************************"  << endl << endl;
    cout << "This program takes two numbers (pay rate & hours)" << endl;
	cout << "and  multiplies them to get gross pay "            << endl;   
    cout << "it then calculates net pay by subtracting 15%"     << endl;
	cout << "************************************************"  << endl << endl;
}




//  *********************************************************************
//                        computePaycheck
//   
//   task:     This function takes rate and time and multiples them to
//             get gross pay and then finds net pay by subtracting 15%.
//   data in:  pay rate and time in hours worked
//   data out: the gross and net pay
//
//   ********************************************************************




void computePaycheck(float rate, int time)
{		 
float gross, net;
gross = rate * time; 
net = gross - (gross *.15);
cout << "The gross pay is $" <<gross <<endl;
	
cout << "The net pay is $" << net << endl;
	 
}

//Exercise 2 Output 
/*
Welcome to the Pay Roll Program
************************************************

This program takes two numbers (pay rate & hours)
and  multiplies them to get gross pay
it then calculates net pay by subtracting 15%
************************************************

Please input the pay per hour
9.50

Please input the number of hours worked
40


The gross pay is $380.00
The net pay is $323.00
We hoped you enjoyed this program
Press any key to continue . . .
*/

//Exercise 3 
//The parameters gross and net are pass by reference because the values have an & after its data type and the values are changed when called back to the main.

//Exercise 5 Output 
/*
Welcome to the Pay Roll Program
************************************************

This program takes two numbers (pay rate & hours)
and  multiplies them to get gross pay
it then calculates net pay by subtracting 15%
************************************************

Please input the pay per hour
9.50

Please input the number of hours worked
40


The gross pay is $380.00
The net pay is $323.00
We hoped you enjoyed this program
Press any key to continue . . .
*/