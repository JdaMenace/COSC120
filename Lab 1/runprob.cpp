
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

//Function prototypes
void initiatecard(int [], char[]);
void shufflecard(int [], char []);
void displaycard(int[], char []);
void cardAce(char);
void cardTwo(char);
void cardThree(char);
void cardFour(char);
void cardFive(char);
void cardSix(char);
void cardSeven(char);
void cardEight(char);
void cardNine(char);
void cardTen(char);
void cardJack(char);
void cardQueen(char);
void cardKing(char);

int main()
{
 int Number[52];
 char Picture[52];

initiateCard(Number,Picture);
ShuffleCard(Number,Picture);
DisplayCard(Number,Picture);
return 0;
}
void initiatecard(int Number[], char Picture[])
{

}

void shufflecard(int Number[], char Picture[])
{
    int shuffle;
    srand(time(0));
    srand((unsigned)time(NULL));
    for(int start = 51; start > 0; start--)
    {
    shuffle = rand() %(start+1);
    swap(Number[start], Number[shuffle]);

    }
}
