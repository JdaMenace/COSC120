// This program will allow the user to input from the keyboard
// whether the last word to the following proverb should be party or country:
// "Now is the time for all good men to come to the aid of their _______"
// Inputting a 1 will use the word party. Any other number will use the word country.

// Justin DeMinnis

#include <iostream>
#include <string>
using namespace std;





// Fill in the prototype of the function writeProverb.
void writeProverb(string);

int main ()
{
	
	string wordCode;

	cout << "Given the phrase:" << endl;
	cout << "Now is the time for all good men to come to the aid of their ___" << endl;
	cout << "Please input the word you would like to have finish the proverb" <<endl;
	cin  >> wordCode;
	cout << endl;
    writeProverb(wordCode);

	return 0;
}

//  ******************************************************************************
//                            writeProverb
//   
//   task:      This function prints a proverb. The function takes a number
//              from the call. If that number is a 1 it prints "Now is the time 
//              for all good men to come to the aid of their party."
//              Otherwise, it prints "Now is the time for all good men
//              to come to the aid of their country"
//   data in:   code for ending word of proverb (integer)
//   data out:  none
//
//   *****************************************************************************

void writeProverb(string word)
{
	cout << "Now is the time for all good men to come to the aid of their "<<word <<endl;


	
}


//Exercise 1 Output
/*
Given the phrase:
Now is the time for all good men to come to the aid of their ___
Input a 1 if you want the sentence to be finished with party
Input any other number for the word country
Please input your choice now
5

Now is the time for all good men to come to the aid of their country.
Press any key to continue . . .

Given the phrase:
Now is the time for all good men to come to the aid of their ___
Input a 1 if you want the sentence to be finished with party
Input any other number for the word country
Please input your choice now
100

Now is the time for all good men to come to the aid of their country.
Press any key to continue . . .

Given the phrase:
Now is the time for all good men to come to the aid of their ___
Input a 1 if you want the sentence to be finished with party
Input any other number for the word country
Please input your choice now
1

Now is the time for all good men to come to the aid of their party.
Press any key to continue . . .


If we enter in -3.97, the if else statement chooses our else and prints out country. 


Given the phrase:
Now is the time for all good men to come to the aid of their ___
Input a 1 if you want the sentence to be finished with party
Input any other number for the word country
Please input your choice now
-3.97

Now is the time for all good men to come to the aid of their country.
Press any key to continue . . .

*/

//Exercise 2 Output
/*
Given the phrase:
Now is the time for all good men to come to the aid of their ___
Input a 1 if you want the sentence to be finished with party
Input any other number for the word country
Please input your choice now
5

Invalid. Please enter in a new choice.
7
Invalid. Please enter in a new choice.
3
Invalid. Please enter in a new choice.
2
Now is the time for all good men to come to the aid of their country.
Press any key to continue . . .
*/

//Exercise 3 Output 
/*
Given the phrase:
Now is the time for all good men to come to the aid of their ___
Please input the word you would like to have finish the proverb
puppies

Now is the time for all good men to come to the aid of their puppies
Press any key to continue . . .
*/
