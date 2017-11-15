// This program contains a revised version of the Inventory class
// and uses it to illustrate operator overloading.
// PLACE YOUR NAME HERE.

#include <iostream>
#include <iomanip>
using namespace std;

class Inventory  // class declaration with member functions defined in-line
                 // a quantity member variable has replaced the price variable
{  private:
      char *description;
      int  quantity;
   public:
      Inventory()                               // default constructor
      {  description = new char[6];
         strcpy(description, "empty");
         quantity = 0;
      } 

      Inventory(char* d, int q   )              // constructor
      {  description = new char[strlen(d) + 1]; // Get needed amount of memory
                                                // to hold the description.
         strcpy(description, d);                  
         quantity = q;
      }

      Inventory(Inventory &object)              // copy constructor
      {  description = new char[strlen(object.description) + 1];
         strcpy(description, object.description);                  
         quantity = object.quantity;
      }

      ~Inventory()
		{  delete[] description; }       // Use destructor to free the memory
                                       // allocated for the dynamic variable.
      const char* getDescription()
		{  return description;  }

      double getQuantity()
		{  return quantity;  }

      void setDescription(char* d)       
		{  delete [] description;
	       description = new char[strlen(d) + 1];
		   strcpy(description, d);        
		}                                  

      void setQuantity(int q)
		{   quantity = q;   }

      Inventory operator=(const Inventory &right) // Overload the = operator
		{  
         // Fill in the code to deallocate the memory previously acquired to
         // hold the description.

         // Fill in the code to allocate the right amount of memory to hold the
         // new description.  Place the address of this new memory in the
         // description pointer variable.
			
         // Fill in the code to set the description of this object to right's
         // description. Remember you need to use strcpy to copy a string.

         // Fill in the code set this object's quantity to right's quantity.
         
         return *this;
		}

      int operator+(const Inventory &right)      //Overload the + operator
		{   
         // Fill in the code to return the sum of this object's quantity and 
         // right's quantity.
		}
};

int main()
{  
   // Fill in the code to create an Inventory object named item1 which is a
   // "7 inch screwdriver" with a quantity of 22.

   // Fill in the code to create an Inventory object named item2 which is a
   // "9 inch screwdriver" with a quantity of 14.

   // Fill in the code to create an Inventory object named item3 which is a
   // "wrench" with a quantity of 10.
	   
   cout << "item1: " << item1.getDescription() << "  " 
        << item1.getQuantity()  << endl;
   cout << "item2: " << item2.getDescription() << "  " 
        << item2.getQuantity()  << endl; 
   cout << "item3: " << item3.getDescription() << "  " 
        << item3.getQuantity()  << endl << endl; 

   // Fill in the one statement that will assign item3 
   // all of the values stored in item2.

   cout << "The following two items should now be identical." << endl;
   cout << "item2: " << item2.getDescription() << "  " 
        << item2.getQuantity()  << endl; 
   cout << "item3: " << item3.getDescription() << "  " 
        << item3.getQuantity()  << endl << endl;

   
   // Fill in the code to change item3's description back to "wrench". 

   cout << "The change to item3 should not affect item2." << endl
        << "item2 should still be a screwdriver." << endl;
   cout << "item2: " << item2.getDescription() << "  " 
        << item2.getQuantity()  << endl; 
   cout << "item3: " << item3.getDescription() << "  " 
        << item3.getQuantity()  << endl << endl; 
 		
   cout << "Total number of screwdrivers on hand: " 
        << (// Fill in the code to add the quantities of item1 and item2 by
            // using your overloaded + operator, NOT by using getQuantity.)
        << endl;

   return 0;
}
