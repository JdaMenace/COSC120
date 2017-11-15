#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Justin DeMinnis
//This is OPTION 1 


float quarter_1, quarter_2 , quarter_3 , quarter_4 ; //quarters
float average; //average monthly bill
int main ()
{


cout << "Please input your water bill for quarter 1:" << endl;
cin >> quarter_1;
cout << "Please input your water bill for quarter 2:" << endl;
cin >> quarter_2;
cout << "Please input your water bill for quarter 3:" << endl;
cin >> quarter_3;
cout << "Please input your water bill for quarter 4:" << endl;
cin >> quarter_4;

average = (quarter_1 + quarter_2 + quarter_3 + quarter_4) / 12;

cout << "Your average monthly bill is $"  <<setprecision(2)<< fixed <<showpoint << average << ".";

if(average > 75 ) 
	cout << "Too much water is being used. "  << endl;
else if (average >= 25 && average < 75 )
	cout << "Typical amount of water is being used. " << endl;
else if (average < 25 )
	cout << "Thank you for not using a lot of water. " << endl;


}

/*
Please input your water bill for quarter 1:
500
Please input your water bill for quarter 2:
600
Please input your water bill for quarter 3:
700
Please input your water bill for quarter 4:
200
Your average monthly bill is $166.67.Too much water is being used.
Press any key to continue . . .
*/
/*
Please input your water bill for quarter 1:
50
Please input your water bill for quarter 2:
70
Please input your water bill for quarter 3:
20
Please input your water bill for quarter 4:
30
Your average monthly bill is $14.17.Thank you for not using a lot of water.
Press any key to continue . . .
*/
