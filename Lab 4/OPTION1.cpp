#include <iostream>
#include <cmath>
using namespace std;

//Justin DeMinnis
//This is OPTION 1


int shirt_number; 
int shirt_cost = 12;
float total,discount_shirt;


int main()
{

cout << " How many shirts would you like?" <<endl;
cin >> shirt_number;

switch (shirt_number) 
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
		discount_shirt = (shirt_cost) - (shirt_cost)*(.10);
		total = (discount_shirt)*(shirt_number);

		cout << " The cost per shirt is $" << discount_shirt << " abd the total cost is $" << total;
		break;
