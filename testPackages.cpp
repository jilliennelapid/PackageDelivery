#include "TwoDayPackage.h"
#include "OvernightPackage.h"

// Commented out parts are remnants of another way of writing the IDs for
// the packages (which only relied on the static variable ID).

int main()
{
  // Creates a normal Package object p1.
  Package p1("John Smith", "1020 Orange St.", "Lakeland", "FL", 33111, 10.5, 0.4);
  // p1.printPackageInfo();
  // cout << endl;

  // Creates a Two-Day Package 
  TwoDayPackage p2("Bob George", "21 Pine Rd.", "Cambridge", "MA", 44444, 10.5, 0.65, 2.0);
  // p2.printPackageInfo();
  // cout << endl;

  // Creates an Overnight Package
  OvernightPackage p3("Don Kelly", "9 Main St.", "Denver", "CO", 66666, 12.25, 0.7, 0.25);
  // p3.printPackageInfo();
  // cout << endl;


  // Calls printPackageInfo for each object
  p1.printPackageInfo();
  cout << endl;
  p2.printPackageInfo();
  cout << endl;
  p3.printPackageInfo();
  cout << endl;
  
}