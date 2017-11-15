// Justin DeMinnis

#include <iostream>
using namespace std;

int main()
{
	char letter = 'a';

	do 
	{
           cout << "Please enter a letter other than 'x' " << endl;
           cin >> letter;
           cout << "The letter you entered is " << letter << endl;
		   if( letter == 'x'){
			   cout <<" goodbye " << endl;
		   }
    }while (letter != 'x');

    return 0;	
}

//Exercise 1 Output 
/*
Please enter a letter
6
The letter you entered is 6
Please enter a letter
h
The letter you entered is h
Please enter a letter
2
The letter you entered is 2
Please enter a letter

It is not user friendly because when I enter in a number or when I enter in x, the output says that number is a letter which is false or when it is x the program does not continue . 
*/

//Exercise 2 Output
/*
Please enter a letter other than 'x'
j
The letter you entered is j
Please enter a letter other than 'x'
k
The letter you entered is k
Please enter a letter other than 'x'
l
The letter you entered is l
Please enter a letter other than 'x'
x
The letter you entered is x
 goodbye
Press any key to continue . . .
*/

//Exercise 3 Output
/*
Please enter a letter other than 'x'
j
The letter you entered is j
Please enter a letter other than 'x'
k
The letter you entered is k
Please enter a letter other than 'x'
l
The letter you entered is l
Please enter a letter other than 'x'
x
The letter you entered is x
 goodbye
Press any key to continue . . .

Nothing is affected if we change it to a do-while loop from a while loop
*/



