//Justin DeMinnis
//OPTION 2

#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

float percentageofwins(int, int );
int numberofwins();
int numberoflosses();

int W, L , wins,losses;

int main ()
{
	wins = numberofwins();
	losses = numberoflosses();

	cout <<"The percentage of wins is " <<showpoint <<setprecision(4) <<percentageofwins(wins,losses) << "%" <<endl;

}



int numberofwins()
{

	cout <<"Please input the number of wins" <<endl;
	cin >> W;

return W;
}

int numberoflosses()
{

	cout <<"Please input the number of losses" <<endl;
	cin >> L;

	return L;
}





float percentageofwins(int w, int l)
{
float total =	w+l;
float percentage = (w / total)*100;
return percentage;
}


/*
Please input the number of wins
70
Please input the number of losses
60
The percentage of wins is 53.85%
Press any key to continue . . .


Please input the number of wins
100
Please input the number of losses
1
The percentage of wins is 99.01%
Press any key to continue . . .




*/

