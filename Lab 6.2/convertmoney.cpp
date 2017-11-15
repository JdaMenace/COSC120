#include <iostream>
#include <iomanip>
using namespace std;


// This program will input American money and convert it to foreign currency

// Justin DeMinnis

// Prototypes of the functions
void  convertMulti(float dollars, float& euros, float& pesos);
void  convertMulti(float dollars, float& euros, float& pesos, float& yen);
float convertToYen(float dollars);
float convertToEuros(float dollars);
float convertToPesos(float dollars);


int main ()


{
	float dollars;
	float euros;
	float pesos;
	float yen;
	
	cout << fixed << showpoint << setprecision(2);

	cout << "Please input the amount of American Dollars you want converted " 
		 << endl;
	cout << "to euros and pesos" << endl;
	cin >> dollars;
	
	//    Fill in the code to call convertMulti with parameters dollars, euros and pesos
	convertMulti(dollars,euros,pesos);

	//    Fill in the code to output the value of those dollars converted to both euros and pesos 
	cout <<"Converted to euros " <<euros <<endl;
	cout <<"Converted to pesos " <<pesos <<endl;

	cout << "Please input the amount of American Dollars you want converted\n";
	cout << "to euros, pesos and yen" << endl;
	cin >> dollars;
	
	//    Fill in the code to call convertMulti with parameters dollars, euros, pesos and yen
	convertMulti(dollars,euros,pesos,yen);
	//    Fill in the code to output the value of those dollars converted to  euros, pesos and yen 
	cout <<"Converted to euros " <<euros <<endl;
	cout <<"Converted to pesos " <<pesos <<endl;
	cout <<"Converted to yen " <<yen <<endl;

	
	cout << "Please input the amount of American Dollars you want converted\n";
	cout << "to yen" <<endl;
	cin >> dollars;
	
	//    Fill in the code to call convertToYen 
	yen = convertToYen(dollars);

	//    Fill in the code to output the value of those dollars converted to yen
	cout << "Converted to yens " <<yen<<endl;
	
	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to euros" << endl;
	cin  >> dollars;
	
	//    Fill in the code to call convertToEuros
	euros = convertToEuros(dollars);
	//    Fill in the code to output the value of those dollars converted to euros 
	cout << "Converted to euros " <<euros <<endl;
	
	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to pesos " << endl;
	cin >> dollars;
	
	//    Fill in the code to call convertToPesos
	pesos = convertToPesos(dollars);
	

	//    Fill in the code to output the value of those dollars converted to pesos 
	
	cout <<"Converted to pesos " << pesos <<endl;
	
	return 0;
}


// All of the functions are stubs that just serve to test the functions
// Replace with code that will cause the functions to execute properly



//  ************************************************************************
//                           convertMult
//                           
//   task:     This function takes a dollar value and converts it to euros
//             and pesos
//   data in:  dollars
//   data out: euros and pesos
//
//   ***********************************************************************


void  convertMulti(float dollars, float& euros, float& pesos)

{     
	cout << "The function convertMulti with dollars, euros and pesos "
		 << endl <<" was called with " << dollars <<" dollars" << endl << endl;
	
	euros = dollars *1.06;
	pesos = dollars *9.73;

}


//  ************************************************************************
//                           convertMult
//                           
//   task:     This function takes a dollar value and converts it to euros
//             pesos and yen
//   data in:  dollars
//   data out: euros pesos yen
//
//   ***********************************************************************

void  convertMulti(float dollars, float& euros, float& pesos, float& yen)

{
	cout << "The function convertMulti with dollars, euros, pesos and yen"
		 << endl << " was called with " << dollars << " dollars" << endl << endl;
	euros = dollars *1.06;
	pesos = dollars *9.73;
	yen = dollars* 124.35;

	
	
}


//  ****************************************************************************
//                           convertToYen
//                           
//   task:          This function takes a dollar value and converts it to yen
//   data in:       dollars
//   data returned: yen
//
//   ***************************************************************************

float convertToYen(float dollars)

{
	cout << "The function convertToYen was called with " << dollars <<" dollars"
	 	 << endl << endl;

	double yend = dollars*125.35;
	
	return yend;
}

//  ****************************************************************************
//                           convertToEuros
//                           
//   task:          This function takes a dollar value and converts it to euros
//   data in:       dollars
//   data returned: euros 
//
//   ***************************************************************************
		

float convertToEuros(float dollars)
{
	cout << "The function convertToEuros was called with " << dollars
		 << " dollars" << endl << endl;

	double eurosd = dollars *1.06;

    
	return eurosd;
}

//  *****************************************************************************
//                           convertToPesos
//                           
//   task:          This function takes a dollar value and converts it to pesos       
//   data in:       dollars
//   data returned: pesos
//
//   ****************************************************************************
float convertToPesos(float dollars)

{
	cout << "The function convertToPesos was called with " << dollars
		 << " dollars" << endl;
	double pesosd = dollars * 9.73;


    return pesosd;
}

/*
Please input the amount of American Dollars you want converted
to euros and pesos
5.55
The function convertMulti with dollars, euros and pesos
 was called with 5.55 dollars

Converted to euros 5.88
Converted to pesos 54.00
Please input the amount of American Dollars you want converted
to euros, pesos and yen
6.98
The function convertMulti with dollars, euros, pesos and yen
 was called with 6.98 dollars

Converted to euros 7.40
Converted to pesos 67.92
Converted to yen 867.96
Please input the amount of American Dollars you want converted
to yen
10.45
The function convertToYen was called with 10.45 dollars

Converted to yens 1309.91
Please input the amount of American Dollars you want converted
 to euros
11.20
The function convertToEuros was called with 11.20 dollars

Converted to euros 11.87
Please input the amount of American Dollars you want converted
 to pesos
41.20
The function convertToPesos was called with 41.20 dollars
Converted to pesos 400.88
Press any key to continue . . .
*/
