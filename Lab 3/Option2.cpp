//This program will add up all the number of chairs and print out the total.(Option 2)

//Justin DeMinnis

#include<iostream>
#include<iomanip>
using namespace std;

//constants for the prices of each chair
const float AMERICAN_COLONEL = 85.00;
const float MODERN_CHAIR = 57.50;
const float FRENCH_CLASSICAL = 127.75;


int main()
{
	int AC_Q, MC_Q, FC_Q;   //the number of each chair sold;
	float AC_TOTAL, MC_TOTAL, FC_TOTAL; //total price for chairs
	float FinalPrice;	//Total for all chairs bought

	//Asking for the quantity of each chair sold
	cout << "Please input the number of American colonel chairs sold" <<endl;
	cin >> AC_Q;
	cout << "Please input the number of Modern chairs sold" <<endl;
	cin >> MC_Q;
	cout <<"Please input the number of French Classical chairs sold" <<endl;
	cin >> FC_Q;
	
	//Totaling up the prices for each chair
	AC_TOTAL = AC_Q * AMERICAN_COLONEL;
	MC_TOTAL = MC_Q * MODERN_CHAIR;
	FC_TOTAL = FC_Q * FRENCH_CLASSICAL;

	//Display the total for each chair
	cout << "The total sales of American colonel chairs $"<< setprecision(2) <<fixed <<showpoint << AC_TOTAL <<endl;
	cout << "The total sales of Modern chairs $" <<setprecision(2) <<fixed <<showpoint <<MC_TOTAL  <<endl;
	cout << "The total sales of French Classical chairs $"  <<setprecision(2) <<fixed <<showpoint <<<<FC_TOTAL <<endl;
	
	//Calculate the total
	FinalPrice = AC_TOTAL + MC_TOTAL + FC_TOTAL;

	//Display Final Price
	cout << "The total sales of all chairs is $" <<setprecision(2) <<fixed <<showpoint <<FinalPrice <<endl;


}

/*
Please input the number of American colonel chairs sold
20
Please input the number of Modern chairs sold
15
Please input the number of French Classical chairs sold
5
The total sales of American colonel chairs $1700.00
The total sales of Modern chairs $862.50
The total sales of French Classical chairs $638.75
The total sales of all chairs is $3201.25
Press any key to continue . . .
*/


/*
Please input the number of American colonel chairs sold
60
Please input the number of Modern chairs sold
50
Please input the number of French Classical chairs sold
20
The total sales of American colonel chairs $5100.00
The total sales of Modern chairs $2875.00
The total sales of French Classical chairs $2555.00
The total sales of all chairs is $10530.00
Press any key to continue . . .
*/