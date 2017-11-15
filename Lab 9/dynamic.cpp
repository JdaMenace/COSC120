// This program demonstrates the use of dynamic variables
// Justin DeMinnis

#include <iostream>
using namespace std;

const int MAXNAME = 10;

int main()

{
   int pos;
   char * name;
   int * one;
   int * two;
   int * three;
   int result;

   //  Fill in code to allocate the integer variable one here
   one = new int;
   //  Fill in code to allocate the integer variable two here
   two = new int;
   //  Fill in code to allocate the integer variable three here
   three = new int;
   //  Fill in code to allocate the character array pointed by name
   name= new char[MAXNAME];
   cout << "Enter your last name with exactly 10 characters." << endl;
   cout << "If your name has < 10 characters, repeat last letter. " << endl
		<< "Blanks at the end do not count." << endl;
   
   for ( pos = 0;  pos < MAXNAME;   pos++)

	  cin >> name[pos]; // Fill in code to read a character into the name array
             // WITHOUT USING a bracketed subscript

   cout << "Hi ";
   for ( pos = 0;  pos < MAXNAME;  pos++)

      cout << name[pos] ;// Fill in code to a print a character from the name array
              // WITHOUT USING a bracketed subscript
  
   cout << endl << "Enter three integer numbers separated by blanks" << endl;
   cin >> *one >> *two >> *three;
   // Fill in code to input three numbers and store them in the
   // dynamic variables pointed to by pointers one, two, and three.
   // You are working only with pointer variables

   //echo print
   cout << "The three numbers are " << endl;
   cout << *one << *two <<*three << endl;
   // Fill in code to output those numbers

   result = *one + *two + *three; // Fill in code to calculate the sum of the three numbers
   cout << "The sum of the three values is " << result << endl;

  // Fill in code to deallocate one, two, three and name
   delete one, two, three, name;


  return 0;
}
//Exercise 1 Output
/*
Enter your last name with exactly 10 characters.
If your name has < 10 characters, repeat last letter.
Blanks at the end do not count.
DeFinooooo
Hi DeFinooooo
Enter three integer numbers separated by blanks
5 6 7
The three numbers are
567
The sum of the three values is 18
Press any key to continue . . .
*/

//Exercise 2
/*
A bracketed subscript is unecessary because we allocated the name to a pointer which can individually read in the values by adding the position to the variable
Using name[pos] for cin would work because it still checks each position of the array
Using name[pos] for cout would work too since it checks each positon of the array.
Enter your last name with exactly 10 characters.
If your name has < 10 characters, repeat last letter.
Blanks at the end do not count.
DeMinnisss
Hi DeMinnisss
Enter three integer numbers separated by blanks
7 8 9
The three numbers are
789
The sum of the three values is 24
Press any key to continue . . .


*/