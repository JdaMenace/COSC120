//Justin DeMinnis
//This program performs a survey tally on beverages

#include <iostream>
#include <iomanip> 
using namespace std; 

int choice, coffee, tea, coke, orange;
int	person =1;


int main()
{
	cout << "1.Coffee " <<setprecision(5) << "2.Tea " <<setprecision(5) << "3.Coke " <<setprecision(5) <<"4.Orange Juice " <<endl; 

	do 
	{

		cout << "Please input the favorite beverage of person #" <<person <<" : Choose 1, 2, 3, 4 from the above menu or -1 to exit the program " <<endl;
		cin >> choice;
		person++;
		switch (choice) {
		case 1 : 
			coffee++;
			break;
		case 2 :
			tea++;
			break;
		case 3 :
			coke++;
			break;
		case 4 :
			orange++;
			break;
		default:
			cout << " Invalid choice " <<endl;
		}
	}while(choice != -1);

	cout <<" The total number of people surveryed is " <<person-1  << ". The results are as follows :" <<endl;
	cout << "Beverage"<<setprecision(10) << " Number of Votes " <<setprecision(10) <<endl;
	cout << "*******************************" <<endl;
	cout << "Coffee" <<setprecision(10) << coffee <<endl;
	cout << "Tea" <<setprecision(10) << tea <<endl;
	cout << "Coke" <<setprecision(10) << coke <<endl;
	cout << "Orange Juice" << orange<<setprecision(10)  <<endl;

	
	}

//Exercise 1 Output 
/*
1.Coffee 2.Tea 3.Coke 4.Orange Juice
Please input the favorite beverage of person #1 : Choose 1, 2, 3, 4 from the abo
ve menu or -1 to exit the program
2
Please input the favorite beverage of person #2 : Choose 1, 2, 3, 4 from the abo
ve menu or -1 to exit the program
3
Please input the favorite beverage of person #3 : Choose 1, 2, 3, 4 from the abo
ve menu or -1 to exit the program
2
Please input the favorite beverage of person #4 : Choose 1, 2, 3, 4 from the abo
ve menu or -1 to exit the program
3
Please input the favorite beverage of person #5 : Choose 1, 2, 3, 4 from the abo
ve menu or -1 to exit the program
4
Please input the favorite beverage of person #6 : Choose 1, 2, 3, 4 from the abo
ve menu or -1 to exit the program
1
Please input the favorite beverage of person #7 : Choose 1, 2, 3, 4 from the abo
ve menu or -1 to exit the program
2
Please input the favorite beverage of person #8 : Choose 1, 2, 3, 4 from the abo
ve menu or -1 to exit the program
-1
 Invalid choice
 The total number of people surveryed is 8. The results are as follows :
Beverage Number of Votes
*************************
Coffee			1
Tea				3
Coke			2
Orange Juice	1
Press any key to continue . . .
*/