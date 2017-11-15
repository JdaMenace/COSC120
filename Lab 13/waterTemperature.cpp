#include<iostream>
// This program asks the user to input the temperature of water
// If the temperature of the water is 65 or more than the water will
// be suitable for swimming, otherwise it will not.

int main()
{
	double waterTemp;  // temperature of water input by user

	cout << "Please input the temperature of the water"<< endl;
	cin >> waterTemp;

	if (waterTemp >= 65)
		cout <<"The water temperature is fine for swimming" << endl;
	else
		cout <<"The water temperature is not good for swimming" << endl;
}