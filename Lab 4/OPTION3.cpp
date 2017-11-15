#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;

//Justin DeMinnis
//This is OPTION 3


char state, room;
int instate = 3000;
int outstate = 4500;
int oncampus = 2500;
int oncampusoutofstate = 3500;
int total;




int main ()
{
	cout << " Pleae input 'I' if you are in state or 'O' if you are out of state:"<< endl;
	cin >> state;

	cout << "Please input 'Y' if you are require room and board and 'N' if you do not" <<endl;
	cin >> room;

if ( state == 'I' && room == 'Y' ){

		total = instate + oncampus;\
		cout << "Your total bill for this semester is $" << total <<endl;
}
else if ( state == 'I' && room == 'N' ){

		total = instate;
		cout << "Your total bill for this semester is $" << total <<endl;
}
else if (state == 'O' && room == 'Y' )
{

		total = outstate + oncampusoutofstate;
		cout << "Your total bill for this semester is $" << total <<endl;
}
else if( state == 'O' && room == 'N'){

		total = outstate;
		cout << "Your total bill for this semester is $" << total <<endl;
}
		return 0;

}



/*
 Pleae input 'I' if you are in state or 'O' if you are out of state:
I
Please input 'Y' if you are require room and board and 'N' if you do not
N
Your total bill for this semester is $3000
Press any key to continue . . .
*/

/*
 Pleae input 'I' if you are in state or 'O' if you are out of state:
O
Please input 'Y' if you are require room and board and 'N' if you do not
Y
Your total bill for this semester is $8000
Press any key to continue . . .
*/

/*
 Pleae input 'I' if you are in state or 'O' if you are out of state:
O
Please input 'Y' if you are require room and board and 'N' if you do not
N
Your total bill for this semester is $4500
Press any key to continue . . .
*/


