// This program demonstrates the use of inheritance
// PLACE YOUR NAME HERE

#include <iostream>
#include <string>
using namespace std;



class DogType                 // name of the base class
{
      private:
              string name;    // name of dog 
              float weight;   // weight of dog
              string color;   // color of dog
      public:
              DogType()
              {
		 name = "Unknown";
	             weight = 0;
                 color = "unknown";
              } // default constructor
                 
  DogType(string n, float w, string c)
	  {
		     name = n;
		     weight = w;
			 color = c;
	  }  // constructor

	   void printDogInfo() const   // prints dog information
	  {
	              cout << "The dog's name is " << name << endl;
		 cout << "The dog's weight is " << weight << endl;
		 cout << "The dog's color is " << color << endl << endl;
	  }
      };

class ShowDogType: public DogType
      // The name of the derived class followed by a colon, then the word
      // public to indicate that it is inheriting members, and finally the 
      // name of the base class from which it inherits those members
{
         private:
                  int numOfContests;  // number of contests entered 
                  int numOfWins;      // number of contests won
         public:
                  ShowDogType::ShowDogType(string n, float w, string c, int con,  int win): DogType( n, w, c)
	    {
		numOfContests = con; // assigns con to private variable numOfContests
		numOfWins = win;     // assigns win to private variable numOfWins
	     }

	  ShowDogType::ShowDogType(): DogType()
	  {
                    
		numOfContests = 0;  // set default contests to 0;
		numOfWins = 0;      // set default wins to 0;
	  }

	// The other member variables (name, weight, color) are given 
	// default values by the call to the default constructor DogType() 

	void ShowDogType::printShowDogInfo() const 
	{
		printDogInfo();
		cout << "The dog has been entered in " << numOfContests 
	                     << " contests" << endl;
		cout << "The dog has won " << numOfWins << " contests" << endl <<endl;
	}
          }; 

//  Fill in the code to create the class RaceDogType.  See Exercise 1 below

int main()
{
    ShowDogType  dog1("Fido", 12, "Black", 12, 2);  
    ShowDogType  dog2;
	
// Fill in the code to define an object called dog3 that has the following information:
// name --->  Anchovi
// weight --> 14 
// color ---> Black
// number of races -----> 28
// number of wins  -----> 27

// Fill in the code to define an object calle dog4 that has all default values


dog1.printShowDogInfo();
dog2.printShowDogInfo();
    
// Fill in the code to print out all the information about dog3
// Fill in the code to print out all the information about dog4
  
    return 0;
}
