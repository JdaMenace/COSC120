//Justin DeMinnis
//OPTION3

#include <iostream>
#include <cmath>

using namespace std;

void calculateDentalBill(float service,float test ,float& total);
void calculateDentalBill(float service, float test, float medicine ,float& total);
int plan;

int main()
{
	float service,test,total,medicine;

	cout <<"Please inout a one if you area member of the dental plan" <<endl;
	cout <<"Input any other number if you are not" <<endl;
	cin >> plan;

	switch (plan)
	{
	case 1:
		cout << "Please input the service charge" <<endl;
		cin >> service;
		cout <<"Please input the test charges" <<endl;
		cin >> test;
		calculateDentalBill(service, test, total);
		cout << "The total bill is $" << total << endl;
		break;
	case 2:
		cout << "Please input the service charge" <<endl;
		cin >> service;
		cout <<"Please input the test charges" <<endl;
		cin >> test;
		cout <<"Please input the medicine charges" <<endl;
		cin >> medicine;
		calculateDentalBill(service, test, medicine, total);
		cout << "The total bill is $" << total << endl;
		break;
	default:
		cout<<"Invalid choice " <<endl;
		break;
	}

	return 0;
}

void calculateDentalBill(float s, float t, float& total)
{
	total = s + t;

}

void calculateDentalBill( float s, float t, float m , float &total)
{
	total = s + t + m ;
}




/*
Please inout a one if you area member of the dental plan
Input any other number if you are not
1
Please input the service charge
8.89
Please input the test charges
89.55
The total bill is $98.44
Press any key to continue . . .

Please inout a one if you area member of the dental plan
Input any other number if you are not
2
Please input the service charge
55.55
Please input the test charges
66.66
Please input the medicine charges
77.77
The total bill is $199.98
Press any key to continue . . .


Please inout a one if you area member of the dental plan
Input any other number if you are not
18
Invalid choice
Press any key to continue . . .


*/