// This program tests a password for the American Equities
// web page to see if the format is correct

// Justin DeMinnis

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std; 

//function prototypes 

bool testPassWord(char[]);  
int countLetters(char*);
int countDigits(char*);
bool Checkcase(char[]);

int main()
{
	char passWord[20];  
	
	cout << "Enter a password consisting of exactly 4 "
		 << "letters and 6 digits:" << endl;
	cin.getline(passWord,20);

	if (testPassWord(passWord))
		cout << "Please wait - your password is being verified" << endl;
	else
	{
		cout << "Invalid password. Please enter a password "
		     << "with exactly 4 letters and 6 digits" << endl;
	    cout << "For example, my37Ru9777 is valid" << endl;
	}

	cout << " Number of letters " << countLetters(passWord) << endl;
	cout <<" Number of Digits " << countDigits(passWord) << endl;
	// FILL IN THE CODE THAT WILL CALL countLetters and 
	// countDigits and will print to the screen both the number of
	// letters and digits contained in the password.  
	if(Checkcase(passWord)==true)
	{
	cout << " True all lower" <<endl;
	}
	else
		cout <<"False not all lower " <<endl;


	return 0;
}


//**************************************************************
//                       testPassWord
//
// task:			determines if the word contained in the
//				    character array passed to it, contains
//					exactly 5 letters and 3 digits.
// data in:			a word contained in a character array
// data returned:   true if the word contains 5 letters & 3
//					digits, false otherwise
//
//**************************************************************
bool testPassWord(char custPass[])
{
	int numLetters, numDigits, length;

	length = strlen(custPass);
    numLetters = countLetters(custPass);
	numDigits = countDigits(custPass);
	if (numLetters == 4 && numDigits == 6 && length == 10)
		return true;
	else
		return false;
}


// the next 2 functions are from Sample Program 10.5
//**************************************************************
//                       countLetters
//
// task:			counts the number of letters (both
//                  capital and lower case in the string
// data in:			a string 
// data returned:   the number of letters in the string
//
//**************************************************************
int countLetters(char *strPtr) 
{
	int occurs = 0;

	while(*strPtr != '\0')       

	{
		if (isalpha(*strPtr))  
			occurs++;
		strPtr++;
	}

	return occurs;
}

//**************************************************************
//                       countDigits
//
// task:			counts the number of digitts in the string
// data in:			a string 
// data returned:   the number of digits in the string
//
//**************************************************************
int countDigits(char *strPtr)  // this function counts the
                               // number of digits
{  
	int occurs = 0;

	while(*strPtr != '\0')
	{
		if (isdigit(*strPtr))  // isdigit determines if
			                   // the character is a digit
			occurs++;
		strPtr++;
	}

	return occurs;
}

bool Checkcase(char checkpass[])

{
int i = 0;
	while(checkpass[i] == tolower(checkpass[i]) && checkpass[i] != '\0')
	{
		i++;
	}
	if(checkpass[i] == '\0')
	{
		return true;
	}
	else
		return false;
}




/*
Exercise 1 output

Enter a password consisting of exactly 5 letters and 3 digits:
78765ooo
Invalid password. Please enter a password with exactly 5 letters and 3 digits
For example, my37RuN9 is valid
 Number of letters 3
 Number of Digits 5
Press any key to continue . . .

Enter a password consisting of exactly 5 letters and 3 digits:
Justi777
Please wait - your password is being verified
 Number of letters 5
 Number of Digits 3
Press any key to continue . . .

*/

/*
Exercise 2 Output
Enter a password consisting of exactly 4 letters and 6 digits:
Parkypark775656123
Invalid password. Please enter a password with exactly 4 letters and 6 digits
For example, my37Ru9777 is valid
 Number of letters 9
 Number of Digits 9
Press any key to continue . . .

Enter a password consisting of exactly 4 letters and 6 digits:
four123456
Please wait - your password is being verified
 Number of letters 4
 Number of Digits 6
Press any key to continue . . .
*/

/*
Exercise 3 Output
Enter a password consisting of exactly 4 letters and 6 digits:
123456hghg
Please wait - your password is being verified
 Number of letters 4
 Number of Digits 6
 True all lower
Press any key to continue . . .

Enter a password consisting of exactly 4 letters and 6 digits:
75seve75755
Invalid password. Please enter a password with exactly 4 letters and 6 digits
For example, my37Ru9777 is valid
 Number of letters 4
 Number of Digits 7
 True all lower
Press any key to continue . . .

Enter a password consisting of exactly 4 letters and 6 digits:
12HgHg3456
Please wait - your password is being verified
 Number of letters 4
 Number of Digits 6
False not all lower
Press any key to continue . . .


*/