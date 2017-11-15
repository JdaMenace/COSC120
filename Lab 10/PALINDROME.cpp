//10.5 This program will do a Palindrome

#include <iostream>
using namespace std;

bool checkPalindrome(char[]);


int main ()
{

	char word [50];


	cout << "Please enter in word " << endl;
	cin.getline(word,50);

	checkPalindrome(word);
	if(checkPalindrome(word) == true)
		cout << word << " is a Palindrome" <<endl;
	else
		cout << word << " is not a Palindrome" <<endl;

}

bool checkPalindrome(char pword[])
{

	int start = 0;
	int length = strlen(pword)-1;

	while (length > start )
	{
		if(pword[start]  != pword[length])
		{
			return false;
		}
		else 
		{
			start++;
			length--;
		}
	}
	return true;
}

/*
Please enter in word
Justin
Justin is not a Palindrome
Press any key to continue . . .

Please enter in word
madam
madam is a Palindrome
Press any key to continue . . .


*/

