//OPTION 2
//Justin DeMinnis

#include <iostream>
using namespace std;

bool idfind(int*,int, int);

int main()
{

int size,idnum;

cout<<"Please input the number of id numbers to be read :" <<endl;
cin>>size;

int *sizePTR = new int[size];

for(int i=0; i<size ;i++)
{
cout<<"Enter an id number" <<endl;
cin>> sizePTR[i];
}

cout<<"Please input an id number to be searched" << endl;
cin>>idnum;

idfind(sizePTR,size,idnum);
delete []sizePTR;

return 0;
}

bool idfind(int *ptr,int howmany, int number)
{
	int i =0;

	while(i<howmany)
	{
	if(ptr[i]==number){
	cout << number <<" is in the array" <<endl;
	return true;
	}
	else
	i++;
	}
	cout << number <<" is not in the array" <<endl;

}



//Exercise Output
/*
Please input the number of id numbers to be read :
5
Enter an id number
1
Enter an id number
2
Enter an id number
3
Enter an id number
4
Enter an id number
5
Please input an id number to be searched
99
99is not in the array
Press any key to continue . . .

Please input the number of id numbers to be read :
3
Enter an id number
1
Enter an id number
2
Enter an id number
3
Please input an id number to be searched
3
3 is in the array
Press any key to continue . . .


*/
