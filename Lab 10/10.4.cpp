//10.4

#include <iostream>
using namespace std;

int main()
{


char string1[20] ="Total Eclipse ";
char string2[11] = "of the Sun";
cout << string1 << endl;
cout << string2 << endl;
strcat(string1,string2);
cout << string1 << endl;

}

/*
Total Eclipse
of the Sun
Total Eclipse of the Sun
Press any key to continue . . .
*/

/*
Total Eclipse
of the Sun
Total Eclipse of the Sun
Press any key to continue . . .

A runtime error occurs since the size of the string1 array is set to 20 and when we cancetenate it with string 2 it is not big enough to hold all of string2. 

*/



