
//10.4
// Justin DeMinnis

#include <iostream>
using namespace std;

void Bubble(float*,int );
float Average(float*,int );

int main()
{

int size;
float *score ;
float averageSCORE;

cout << "Please input the number of scores" << endl;
cin>> size;

score = new float [size];

for(int p=0; p<size;p++)
{
cout<<"Please enter a score" <<endl;
cin >> *score;
*score++;
}

score= score - size;

Bubble(score,size);
averageSCORE =Average(score,size);


cout<<"The average of the scores is "<<averageSCORE <<endl;

cout<<"Here are the scores in ascending order" <<endl;
for(int i=0; i<size; i++)
{
cout<<*score<<endl;
score++;

}

delete score;

return 0;
}


void Bubble(float *ascending,int howmany)
{
int temp;
int first = howmany -2;
int second = howmany -1;

for(int i=0; i<(first); i++)
{
for(int p=0;p < (second); p++)
{
if((*ascending) > *(ascending+1))
{
temp=(*ascending);
*ascending= *(ascending+1);
*(ascending+1)=temp;
}
ascending++;
}
ascending -= (second);
}

}


float Average(float* ascending ,int howmany)
{

float total =0;

for(int i=0;i< howmany ;i++){
total = total + *ascending;
ascending++;
}
return total/howmany;
}

//Exercise Output 
/*
Please input the number of scores
5
Please enter a score
30
Please enter a score
60
Please enter a score
90
Please enter a score
50
Please enter a score
77
The average of the scores is 61.4
Here are the scores in ascending order
30
50
60
77
90
Press any key to continue . . .
*/
