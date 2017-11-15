












//Justin DeMinnis
//Option 1

#include <iostream>
using namespace std;

float first, second;
void swap(float,float);

int main()
{
	cout << " Enter the first number " <<endl;
	cout << " Then hit enter" <<endl; 
	cin >> first;

	cout <<"Enter the second number" <<endl;
	cout << "Then hit enter" <<endl;
	cin >> second;


	cout <<"You input the numbers as" << first << " and " << second <<endl;

	swap(first, second);

	
}
void swap(float number1, float number2)
{
	float temp,temp1;
	temp = number1;
	temp1 = number2;
	number2 = temp;
	number1 = temp1;
	

	cout << "After swapping, the first number has the value of " <<number1 <<" which was the value of the second number." <<endl;
	cout <<"The second number has the value of " <<number2<<" which was the value of the first number" <<endl;
	

}
//Exercise 2 output 
/*
 Enter the first number
 Then hit enter
80
Enter the second number
Then hit enter
70
You input the numbers as80 and 70
After swapping, the first number has the value of 70 which was the value of the
second number.
The second number has the value of 80 which was the value of the first number
Press any key to continue . . .
*/

//Excercise 3 
//The swap parameters must be passed by value because we are retrieving two values and changing them within the function.