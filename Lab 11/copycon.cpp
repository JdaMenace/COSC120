// This program illustrates the use of copy constructors
// PLACE YOUR NAME HERE.

#include <iostream>
#include <iomanip>
using namespace std;

class Inventory  // class declaration with member functions defined in-line
{  
   private:
      char   *description;
      double price;
   public:
      Inventory()                               // default constructor
	  {  price = 0;
	      description = new char[6];
          strcpy(description, "empty");
	  } 
	  Inventory(char* d, double p)              // constructor
	  {  description = new char[strlen(d) + 1]; // Get needed amount of memory
                                                // to hold the description.
         strcpy(description, d);                  
         price = p;
	  }
	  ~Inventory()
      {  delete[] description; }          // Use destructor to free the memory
                                          // allocated for the dynamic variable.
      const char* getDescription()
      {  return description;  }

      double getPrice()
      {  return price;  }

      void setDescription(char* d)       // "Assumes" dynamic description
      {  strcpy(description, d);         // variable has enough memory to hold
      }                                  // the new string. 

      void setPrice(double p)
      {   price = p;   }
};

int main()
{  Inventory toolOne("screwdriver", 2.99);
   // Fill in the code to create a new Inventory object named
   // toolTwo that is initialized with the values of toolOne.
   
   cout << fixed << setprecision(2) << showpoint;
   cout << "toolOne: " << toolOne.getDescription() << "  $" 
        << toolOne.getPrice()  << endl;
   cout << "toolTwo: " << toolTwo.getDescription() << "  $" 
        << toolTwo.getPrice()  << endl << endl;
   
   // Fill in the code to change toolTwo's description to "electric screwdriver".
	                                 
   cout << "toolOne: " << toolOne.getDescription() << "  $" 
        << toolOne.getPrice()  << endl;
   cout << "toolTwo: " << toolTwo.getDescription() << "  $" 
        << toolTwo.getPrice()  << endl << endl;   

 return 0;
}
