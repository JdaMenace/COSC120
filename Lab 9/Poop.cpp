 #include< iostream >

using namespace std;

//sutting up prototypes

int findYearlySum(int sales[],int n);

double findAverage(int sum,int n);

//main function

int main()

{

     //declaration

     int *sales;

     int arraysize;

     cout<<"Enter Array Size: ";

     cin>>arraysize;

     //dynamic creation of array

     sales=new int[arraysize];

     cout<<"Enter Monthly Sales"<<endl;

     //reading monthly sales

     for(int i=0;i<arraysize;i++)

          cin>>sales[i];

     //calling yearly sum function

     int sum=findYearlySum(sales,arraysize);

     //calling average function

     double average=findAverage(sum,arraysize);

     //display result

     cout<<"Yearly Sum Is: "<<sum<<endl;

     cout<<"Average Is : "<<average<<endl;

     system("pause");

}//end of main

//function definition for finding sum

int findYearlySum(int sales[],int n)

{

     int sum=0;

     for(int i=0;i<n;i++)

          sum +=sales[i];

     return(sum);

}

//function definiton for finding average

double findAverage(int sum,int n)

{

     double avg=sum/n;

     return(avg);

}