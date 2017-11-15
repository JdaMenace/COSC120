// This program will read in 3 grades and print the average of them

//Justin DeMinnis

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
float grade1, grade2, grade3; 
float averageGRADE; 

cout<< "Please input the first grade" <<endl; //Asking for the first grade
cin >>grade1;

cout<<"Please input the second grade" <<endl; //Asking for the second grade
cin >>grade2;

cout<<"Please inout the third grade" <<endl; //Asking for the third grade
cin >>grade3;

averageGRADE = (grade1+grade2+grade3)/3;  //Calculate the average of the three grades

cout <<"The average of the three grades is "<<setprecision(2) <<fixed <<showpoint <<averageGRADE <<endl;



}

/*
Please input the first grade
97
Please input the second grade
98.3
Please inout the third grade
95
The average of the three grades is 96.77
Press any key to continue . . .
*/