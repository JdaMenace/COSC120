//Justin DeMinnis
//OPTION 1

#include <iostream>
#include <cmath>

using namespace std;
float ConvertMilestoKilometers(float);
float ConvertKilometerstoMiles(float);
int  main()
{
 float choice, miles, kilometers;

do{
cout << "Please input" <<endl;
cout << "1 Conver miles to kilometers" <<endl;
cout << "2 Convert kilometers to miles" <<endl;
cout << "3 Quit" <<endl;
cin >> choice; 

if(choice == 1)
{
	cout <<"Please input the miles to be converted" << endl;
	cin >> miles;
	cout << miles << " miles = " << ConvertMilestoKilometers(miles) << " kilometers " <<endl;

}
else if (choice == 2)
{
	cout <<"Please input the kilometers to be converted" <<endl;
	cin >> kilometers;
	cout << kilometers << " kilometers = " <<ConvertKilometerstoMiles(kilometers)<< " miles " <<endl;
}
else
	cout <<"GOODBYE"<<endl;
}while(choice != 3);

return 0 ;


}

float ConvertMilestoKilometers(float distance)
{

float km = distance*1.61;
return km;

}

float ConvertKilometerstoMiles (float distance)
{
	float m = distance*.621;
	return m;
}

/*
Please input
1 Conver miles to kilometers
2 Convert kilometers to miles
3 Quit
1
Please input the miles to be converted
57
57 miles = 91.77 kilometers
Please input
1 Conver miles to kilometers
2 Convert kilometers to miles
3 Quit
2
Please input the kilometers to be converted
420
420 kilometers = 260.82 miles
Please input
1 Conver miles to kilometers
2 Convert kilometers to miles
3 Quit
1
Please input the miles to be converted
120
120 miles = 193.2 kilometers
Please input
1 Conver miles to kilometers
2 Convert kilometers to miles
3 Quit
2
Please input the kilometers to be converted
235
235 kilometers = 145.935 miles
Please input
1 Conver miles to kilometers
2 Convert kilometers to miles
3 Quit
3
GOODBYE
Press any key to continue . . .
*/
