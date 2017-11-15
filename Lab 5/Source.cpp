//Justin DeMinnis
//Option 2

#include <iostream>
#include <iomanip>
using namespace std;

int falltime;
int height;
const double g = 9.8;
double TOTAL;

int main ()
{

cout << "Please input the time of fall in seconds:" <<endl;
cin >> falltime;
cout << "Please input the height of the bridge in meters : " <<endl;
cin >> height ;

	cout << "Time Falling (seconds) " <<setprecision(5) << "Distance Fallen (meters) " <<setprecision(10) <<endl;
	cout << "**********************************************" <<endl;

for(int number= 0; number <= falltime ; number++)
{
	TOTAL = 0.5*(number*number)*g ;

	cout << number << setprecision(5) << TOTAL << setprecision(10) <<endl;

}
if(TOTAL > height ) {
	cout << " invalid BAD DATA ERROR distance fallen exceeds the height of the bridge " <<endl;
}
return 0;
}

//Exercise Output
/*
Please input the time of fall in seconds:
4
Please input the height of the bridge in meters :
50
Time Falling (seconds) Distance Fallen (meters)
**********************************************
00
1		4.9
2		19.6
3		44.1
4		78.4
 invalid BAD DATA ERROR distance fallen exceeds the height of the bridge
Press any key to continue . . .
*/
