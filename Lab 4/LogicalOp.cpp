// This program illustrates the use of logical operators

// Justin DeMinnis

#include <iostream>
using namespace std;


int main()
{
 	char year;
    float gpa;

    cout << "What year student are you ?" << endl;
    cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)" 
		 << endl << endl;
	cin >> year;

    cout << "Now enter your GPA" << endl;
    cin >> gpa;

	if (gpa >= 2.0 && year == '4')
		cout << "It is time to graduate soon" << endl;
           
    else
        cout << "You need more schooling" << endl;

    return 0;	
}

//Exercise 1 
/*
We can rewrite the gpa >=2.0 using the not operator by making it less than or equal to 2.0 and placing that in parenthesis and placing the not ooperaotr in front 
*/
//Exercise 2
/*
You could replace the year !=4 with year <4 or year <=3 because if your year is less than 4 years then it would make the statement true 
*/

//Exercise 3
/*
The students that will graduate according to the new program will be students with gpas above or equal to 2.0 or are in there 4th year.
The students that will not graduate according to the new program will be students not in there fourth year and who do not have gpas above 2.0.

What year student are you ?
Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)

4
Now enter your GPA
1.0
It is time to graduate soon
Press any key to continue . . .

What year student are you ?
Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)

1
Now enter your GPA
1.5
You need more schooling
Press any key to continue . . .

*/

//Exericse 4 Output 
/*
What year student are you ?
Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)

1
Now enter your GPA
4.0
You need more schooling
Press any key to continue . . .

Yes you could replace the else if statement with the single word else, it still works
*/






