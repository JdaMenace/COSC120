// This program finds the average time spent programming by a student
// each day over a three day period.

//Justin DeMinnis

#include <iostream>
using namespace std;

int main()
{
	int numStudents;
	float numHours, total, average, Baverage, Paverage;
    int student,day = 0,howmany, prohours, biohours;     // these are the counters for the loops

	cout << "This program will find the average number of hours a day" 
         << " that a student spent programming over time\n\n";
    cout << "How many students are there ?" << endl << endl;
    cin >> numStudents; 
	cout << "How many days in the long weekend" <<endl;
	cin >>howmany;
       
    for( student = 1; student <= numStudents; student++)
    {
		total = 0;
		for(day = 1; day <= howmany; day++)
		{
			cout << "Please enter the number of hours worked by student " 
				 << student <<" on day " << day << "." << endl;
            cin >> numHours;

			cout << endl;

			cout << "Please enter the number of hours per day spent programming by student "
		     << student  << "on day " << day << "." <<endl;
			cin >> prohours;
			cout << "Please enter the number of hours per day spent doing biology by student "
		     << student << "on day " << day << "." <<endl;
			cin >> biohours;

            total = total + numHours;
		}
		Paverage = prohours /howmany;
		Baverage = biohours /howmany;
        average = total / howmany;
		if(Paverage > Baverage){
			cout << "You spent the most time on Programming with an average of " <<Paverage << " hours a day " <<endl;
		} else 
			cout << "You spent the most time on Biology with an average of " <<Baverage << " hours a day " <<endl;
	
	}
    return 0;	
}
//Exercise 1 Output
/*
This program will find the average number of hours a day that a student spent pr
ogramming over time

How many students are there ?

2
How many days in the long weekend
3
Please enter the number of hours worked by student 1 on day 1.
2
Please enter the number of hours worked by student 1 on day 2.
4
Please enter the number of hours worked by student 1 on day 3.
6

The average number of hours per day spent programming by student 1 is 4


Please enter the number of hours worked by student 2 on day 1.
2
Please enter the number of hours worked by student 2 on day 2.
4
Please enter the number of hours worked by student 2 on day 3.
6

The average number of hours per day spent programming by student 2 is 4


Press any key to continue . . .
*/

//Exercise 2 Output
/*
This program will find the average number of hours a day that a student spent pr
ogramming over time

How many students are there ?

2
How many days in the long weekend
2
Please enter the number of hours worked by student 1 on day 1.
10

Please enter the number of hours per day spent programming by student 1on day 1.

5
Please enter the number of hours per day spent doing biology by student 1on day
1.
3
Please enter the number of hours worked by student 1 on day 2.
15

Please enter the number of hours per day spent programming by student 1on day 2.

5
Please enter the number of hours per day spent doing biology by student 1on day
2.
2
You spent the most time on Programming with an average of 2 hours a day
Please enter the number of hours worked by student 2 on day 1.
10

Please enter the number of hours per day spent programming by student 2on day 1.

8
Please enter the number of hours per day spent doing biology by student 2on day
1.
20
Please enter the number of hours worked by student 2 on day 2.
15

Please enter the number of hours per day spent programming by student 2on day 2.

20
Please enter the number of hours per day spent doing biology by student 2on day
2.
50
You spent the most time on Biology with an average of 25 hours a day
Press any key to continue . . .
*/
