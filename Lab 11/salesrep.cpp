// This program introduces the use of friend functions.  It also reviews the
// use of static member variables and functions.
// PLACE YOUR NAME HERE.

#include <iostream>
using namespace std;

class SalesForce
{ 
   private:
      static double salesGoal;        // static variable shared by 
                                      // all class objects
      int    snum;                    // sales rep. number
      double monthlySales;

   public: 
      static void initGoal(double);   // static function to set salesGoal       
      
      SalesForce(){snum = monthlySales = 0;}  // default constructor
      SalesForce(int, double);        // constructor
      void displayInfo();             // displays an object's member data
      bool metGoal();                 // indicates if sales goal has been met

      friend void salesReport(SalesForce &); // declares a friend function
};

// Static Member Variable Definitions
double SalesForce::salesGoal;

// Member Function Implementation Section

void SalesForce::initGoal(double amt)
{  
   salesGoal = amt;
}

SalesForce::SalesForce(int num, double amt)   // constructor
{  snum = num;
   monthlySales = amt;
}

void SalesForce::displayInfo()
{  cout << "Sales Rep Number: " << snum << "  Total sales $" << monthlySales
        << endl;
}

bool SalesForce::metGoal()
{  if(monthlySales >= salesGoal)
      return true;
   else
      return false;
}

// Client Code

// Function prototypes
void salesReport(SalesForce &);

int main()
{ 
   double goalAmount;

   cout << "Input monthly sales goal: ";
   cin  >> goalAmount;
   SalesForce::initGoal(goalAmount);      // set the sales goal for the class
   SalesForce repOne(101, 13500);         // create 1st sales rep.
   SalesForce repTwo(202, 16800);         // create 2nd sales rep.

   salesReport(repOne);
   salesReport(repTwo);
   
   return 0;
}

/**************************************************************************
 *                           salesReport                                  *
 * This function produces a sales report using data in a SalesForce       *
 * object. Since the SalesForce class has declared this a friend function,*
 * it can access private members of SalesForce class objects directly,    *
 * by using the dot operator, instead of through calls to public member   *
 * functions.                                                             *
 **************************************************************************/

void salesReport(SalesForce & rep)  
{
   cout << "Report for Sales Rep. number: " << rep.snum << endl;
   cout << "Monthly sales: $" << rep.monthlySales
        << "   Goal: $" << rep.salesGoal << endl;

   if (rep.metGoal())
      cout << "Met sales goal\n\n";
   else
      cout << "Did not meet sales goal\n\n";
}