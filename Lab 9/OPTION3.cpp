 //OPTION 3
//Justin DeMinnis

#include<iostream>

using namespace std;

double yearlytotal (double* ,int );

double average(double ,int);


int main()
{

     double *sales;
    int size;
	

     cout<<"Please input the number of monthly sales to be input" <<endl;
     cin>>size;

 sales= new double[size];

	 for(int i = 0; i < size ; i++){
	
     cout<<"Please input the sales for month"<< (i+1) <<endl;
	 cin>>sales[i];

	 }
    double total = yearlytotal(sales,size);
	double average1 = average(total,size);
	
 


     cout<<"The total sales for the year is $"<<total<<endl;

     cout<<"The average monthly sale is  $"<< average1 <<endl;

	 delete [] sales;
	 return 0;

}


double yearlytotal(double sales[],int  howmany)

{
    double sum = 0;

     for(int i=0; i<howmany; i++)
	 {

          sum = sum + sales[i];
	 }

     return sum;

}



double average(double summ, int  howmany1)
{
double aver;

aver=(summ/howmany1);

     return aver;

}

//Exercise Output
/*
Please input the number of monthly sales to be input
4
Please input the sales for month1
123.55
Please input the sales for month2
552.61
Please input the sales for month3
775.45
Please input the sales for month4
991.12
The total sales for the year is 2442.73
The average monthly sale is  610.683
Press any key to continue . . .
*/

