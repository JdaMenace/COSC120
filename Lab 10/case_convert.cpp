// This program shows how the toupper and tolower functions can be
// applied in a C++ program

//Justin DeMinnis

#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

int main()
{
	int week, total, dollars;
	float average;
	char choice;

	cout << showpoint << fixed << setprecision(2);

	do
	{
		total = 0;
		for(week = 1;week <= 4;week++)
		{
			cout << "How much (to the nearest dollar) did you"
				 <<" spend on food during week " << week << " ?:" << endl;
			cin >> dollars;

			total = total + dollars;
		}
		average = total / 4.0;

		cout << "Your weekly food bill over the chosen month is $"
			 << average << endl << endl;
	
		   cout << "Would you like to find the average for another month?";
		   cout << endl << "Enter Y or N" << endl;
		   cin >> choice;

	} while (tolower(choice) == 'y');
	
	
	return 0;
}


/*
Exercise 1 Output
How much (to the nearest dollar) did you spend on food during week 1 ?:
20
How much (to the nearest dollar) did you spend on food during week 2 ?:
21
How much (to the nearest dollar) did you spend on food during week 3 ?:
15
How much (to the nearest dollar) did you spend on food during week 4 ?:
10
Your weekly food bill over the chosen month is $16.50

Would you like to find the average for another month?
Enter Y or N
y
How much (to the nearest dollar) did you spend on food during week 1 ?:
1
How much (to the nearest dollar) did you spend on food during week 2 ?:
2
How much (to the nearest dollar) did you spend on food during week 3 ?:
3
How much (to the nearest dollar) did you spend on food during week 4 ?:
4
Your weekly food bill over the chosen month is $2.50

Would you like to find the average for another month?
Enter Y or N
n
Press any key to continue . . .
*/

/*
Exercise 2 Output
How much (to the nearest dollar) did you spend on food during week 1 ?:
5
How much (to the nearest dollar) did you spend on food during week 2 ?:
6
How much (to the nearest dollar) did you spend on food during week 3 ?:
88
How much (to the nearest dollar) did you spend on food during week 4 ?:
100
Your weekly food bill over the chosen month is $49.75

Would you like to find the average for another month?
Enter Y or N
y
How much (to the nearest dollar) did you spend on food during week 1 ?:
51
How much (to the nearest dollar) did you spend on food during week 2 ?:
33
How much (to the nearest dollar) did you spend on food during week 3 ?:
20
How much (to the nearest dollar) did you spend on food during week 4 ?:
14
Your weekly food bill over the chosen month is $29.50

Would you like to find the average for another month?
Enter Y or N
n
Press any key to continue . . .

Removing the do while does nothing to change the entity of the program, it still works the same because it is still within another do while loop.	

*/

/*
Exercise 3 Output
How much (to the nearest dollar) did you spend on food during week 1 ?:
5
How much (to the nearest dollar) did you spend on food during week 2 ?:
10
How much (to the nearest dollar) did you spend on food during week 3 ?:
12
How much (to the nearest dollar) did you spend on food during week 4 ?:
33
Your weekly food bill over the chosen month is $15.00

Would you like to find the average for another month?
Enter Y or N
Y

How much (to the nearest dollar) did you spend on food during week 1 ?:
5
How much (to the nearest dollar) did you spend on food during week 2 ?:
6
How much (to the nearest dollar) did you spend on food during week 3 ?:
7
How much (to the nearest dollar) did you spend on food during week 4 ?:
8
Your weekly food bill over the chosen month is $6.50

Would you like to find the average for another month?
Enter Y or N
N
Press any key to continue . . .

*/
