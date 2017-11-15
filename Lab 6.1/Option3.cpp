//Justin DeMinnis Option 3

#include <iostream>
using namespace std;



void calculateaverage(int,int, int&);
int main ()
{
	int grade,gradesum=0,finalscore;
int numgrades;
	cout << "Enter in the number of grades" <<endl;
	cin >> numgrades;
for(int i=0 ; i<=numgrades; i++){

	cout <<"Enter a numeric grade between 0-100" <<endl;
	cin >> grade;

	gradesum = grade + gradesum;
}
calculateaverage(numgrades,gradesum,finalscore);

if(finalscore>= 90 && finalscore <=100)
{
	cout <<"The grade is A" <<endl;
}
else if(finalscore>= 80 && finalscore <90)
{
	cout <<"The grade is B" <<endl;
}
else if(finalscore>= 70 && finalscore <80){
	cout<<"The grade is C" <<endl;
}
else if(finalscore>=60 && finalscore <70){
	cout<<"The grade is D" <<endl;
}
else {
	cout <<"The grade is F" <<endl;
}
return 0;
}


void calculateaverage(int number,int average, int&gradeaverage)
{
	gradeaverage = (average/number);
}


//Exercise Output 
/*
Enter in the number of grades
5
Enter a numeric grade between 0-100
90
Enter a numeric grade between 0-100
80
Enter a numeric grade between 0-100
70
Enter a numeric grade between 0-100
70
Enter a numeric grade between 0-100
90
Enter a numeric grade between 0-100
85
The grade is A
Press any key to continue . . .

Enter in the number of grades
5
Enter a numeric grade between 0-100
30
Enter a numeric grade between 0-100
21
Enter a numeric grade between 0-100
50
Enter a numeric grade between 0-100
60
Enter a numeric grade between 0-100
47
Enter a numeric grade between 0-100
25
The grade is F
Press any key to continue . . .

*/
