//10.3 Reads last name

#include <iostream>
#include <cctype>
using namespace std;

int main()
{

char last [10];

cout << " Please enter in your last name " << endl;
cin.getline(last,10);


if(strlen(last) > 9 )
{
	cout << "That is too long of a last name " <<endl;

}
else 

	cout <<"Your last name is "<< last << endl;

return 0;

}

/*
 Please enter in your last name
Newmanouskous
That is too long of a last name
Press any key to continue . . .
We get an runtime error 
*/

/*
 Please enter in your last name
Newmanouskous
Your last name is Newmanous
Press any key to continue . . .
*/




