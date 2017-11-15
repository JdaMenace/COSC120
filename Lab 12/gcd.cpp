#include <iostream>
using namespace std;

// This program uses a recursive function to calculate the 
// greatest common divisor (gcd) of two integers using Euclid's
// algorithm

// Function prototype
int gcd(int,int);

int main()
{
	int firstNumber, secondNumber;
	cout << "This program will find the greatest common divisor of two numbers"<<endl;
	cout <<"Please input the first positive number now" << endl;
	cin >> firstNumber;
	cout << "Please input the second postivie number now" << endl;
	cin >> secondNumber;
	cout <<"The greates common divisor of " << firstNumber << " and "
		<< secondNumber << " is ";
	cout << gcd(firstNumber, secondNumber) << endl;

	return 0;
}

//**************************************************************
//                           gcd
//  This function finds the greatest common divisor of two
//  numbers by using Euclid's algorithm recursively
//
//  data in:  num1  num2   two integers
//  data out:  the greatest common divisor of the two numbers
//
//***************************************************************

int gcd(int num1, int num2)
{
	//  Fill in the if else condition and instructions that will
	//  find the greatest common divisor through the use of 
	//  recursion

}