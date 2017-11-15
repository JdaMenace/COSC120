// This program introduces the use of static member variables.
// PLACE YOUR NAME HERE.

#include <iostream>
using namespace std;

class SavingsAcct 
{ 
    private:
       int acctNum;                        // "regular" member variables
       double balance;

       // Fill in the code to declare a static int variable named
       // nextAcctNumber.       

       // Fill in the code to declare a static double variable named
       // totalDeposits.
 
   public:
      SavingsAcct();                       // default constructor
      SavingsAcct(double);                 // constructor
      void newAcctInfo();
      double getTotalDeposits();
      void displayAcctInfo();
      void deposit(double);
      void withdraw(double);
};

// Static Variable Definitions 

// Fill in the code to define the static variable nextAcctNumber and 
// initialize it to 5000.

// Fill in the code to define the static variable totalDeposits and initialize
// it to 0.

// Member Function Implementation Section

SavingsAcct::SavingsAcct()                 // default constructor
{ 
	// Fill in the code to assign acctNum the next available account number.
    // Fill in the code to increment the next available account number.

    balance = 0;
    newAcctInfo();
}

SavingsAcct::SavingsAcct(double startBal)  // constructor
{   // Fill in the code to assign acctNum the next available account number.
    // Fill in the code to increment the next available account number.
    
    // Fill in the code to set balance to the starting balance passed in. 

    // Fill in the code to add this account's starting balance to the static 
    // variable named totalDeposits. 

    newAcctInfo(); 
}

void SavingsAcct::newAcctInfo()
{   cout << "New account number: " << acctNum << "   Initial Balance: $"
         << balance << endl;
}

double SavingsAcct::getTotalDeposits()
{   return totalDeposits;
}

void SavingsAcct::displayAcctInfo()
{  
   // Fill in the code to display the account's account number and balance.
}

void SavingsAcct::deposit(double amt)
{   
   // Fill in the code to implement this function. The amount passed in must
   // be added to the account's balance. Remember that any change to an
   // account's balance also affects totalDeposits.
}

void SavingsAcct::withdraw(double amt)
{   // This function is not being implemented at this time.
}

// Client code

int main()
{  
   // Fill in the code to create acct1 with a starting balance of $100.
   // Fill in the code to create acct2 with a starting balance of $250.

   // Fill in the code to deposit $50 in acct2.

   // Fill in the code to display the account information for acct1. 
   // Fill in the code to display the account information for acct2.

   // Fill in the code to display totalDeposits. 

   return 0;
}
