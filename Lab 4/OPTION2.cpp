#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;

//Justin DeMinnis
//This is OPTION 2


int shirt_number; 
int shirt_cost = 12;
float total,discount_shirt;


int main()
{

cout << " How many shirts would you like?" <<endl;
cin >> shirt_number;

switch (shirt_number) 
{
case 0:
case 1:
case 2:
case 3:
case 4:
		discount_shirt = (shirt_cost);
		total = (discount_shirt)*(shirt_number);

		cout << " The cost per shirt is $" <<setprecision(2) <<fixed <<showpoint << discount_shirt << " abd the total cost is $" << total <<endl;
		break;

	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
		discount_shirt = (shirt_cost) - (shirt_cost)*(.10);
		total = (discount_shirt)*(shirt_number);

		cout << " The cost per shirt is $"<<setprecision(2) <<fixed <<showpoint << discount_shirt << " abd the total cost is $" << total << endl;
		break;

	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 19:
	case 20:
		discount_shirt = (shirt_cost) - (shirt_cost)*(.15);
		total = (discount_shirt)*(shirt_number);

		cout << " The cost per shirt is $"<<setprecision(2) <<fixed <<showpoint << discount_shirt << " abd the total cost is $" << total << endl;
		break;

	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
	case 30:
			discount_shirt = (shirt_cost) - (shirt_cost)*(.20);
		total = (discount_shirt)*(shirt_number);

		cout << " The cost per shirt is $"<<setprecision(2) <<fixed <<showpoint << discount_shirt << " abd the total cost is $" << total<< endl;
		break;

	default:
			discount_shirt = (shirt_cost) - (shirt_cost)*(.25);
		total = (discount_shirt)*(shirt_number);

		cout << " The cost per shirt is $" <<setprecision(2) <<fixed <<showpoint<< discount_shirt << " abd the total cost is $" << total << endl;

}
}

/*
 How many shirts would you like?
0
 The cost per shirt is $12 abd the total cost is $0
Press any key to continue . . .

 How many shirts would you like?
33
 The cost per shirt is $9 abd the total cost is $297
Press any key to continue . . .


 How many shirts would you like?
25
 The cost per shirt is $9.60 abd the total cost is $240.00
Press any key to continue . . .


*/