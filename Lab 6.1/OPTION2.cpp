#include <iostream>
#include <iomanip>

using namespace std;

//Justin DeMinnis Option 2

void milesperhour(float, float, float&);

int milestraveled, hourstraveled;
float mph;

int main ()
{
	cout <<"Please input the miles traveled"<<endl;
	cin >> milestraveled;
	cout <<"Please input the hours traveled" <<endl;
	cin >>hourstraveled;

	milesperhour(milestraveled, hourstraveled, mph);

	cout <<setprecision(2)<< showpoint << fixed <<"Your speed is "<< mph<< " miles per hour"  << endl;
	return 0;
}

void milesperhour(float distance,float time, float&milesperhour )
{
	milesperhour = distance/time;
}

//Exercise Output
/*
Please input the miles traveled
475
Please input the hours traveled
8
Your speed is 59.38 miles per hour
Press any key to continue . . .

Please input the miles traveled
500
Please input the hours traveled
10
Your speed is 50.00 miles per hour
Press any key to continue . . .

*/
