#include <iostream>
#include <fstream>

using namespace std;

int main()
{

	char studentname[50];
	int idnumber;
	char address[50];


	ofstream outfile;

	outfile.open("P://student.dat");

	outfile << "Justin DeMinnis" <<endl;
	outfile << "0334754" <<endl;
	outfile << "707 Goldsborough Street Salisbury MD 21804" <<endl;

	outfile.close();

	ifstream infile;

	infile.open("P://student.dat");

	infile.getline(studentname,50);
	cout << studentname << endl;
	infile >> idnumber;
	cout << idnumber <<endl;
	infile.ignore();
	infile.getline(address,50);
	cout << address <<endl;


	infile.close();

	return 0;

}

