#include "OvernightPackage.h"

// Constructor
OvernightPackage::OvernightPackage(const string & _name, const string & _address, const string & _city, const string & _state, int _ZIP, double _weight, double _costPerOunce, double _addFeePerOunce)
: Package(_name, _address, _city, _state, _ZIP, _weight, _costPerOunce)
{
  addFeePerOunce = _addFeePerOunce;
}

// Calculates cost by adding the additional fee per ounce to the cost per ounce
// and then multiplies that sum by the weight.
double OvernightPackage::calculateCost() const
{
  return (addFeePerOunce + costPerOunce) * weight;
}

// set function for feePerOunce; does not take values below zero.
void OvernightPackage::setOvernightFeePerOunce(double _addFeePerOunce)
{
  if(_addFeePerOunce >= 0)
  {
    addFeePerOunce = _addFeePerOunce;
  }
  else
  {
    cout << "Error: Invalid Addtional Fee per Ounce entered." << endl;
    _addFeePerOunce = 0;
  }
}

// Displays the information for an Overnight Package.
void OvernightPackage::printPackageInfo() const
{
  cout << "----------------------------------------"
       << endl
       << "Overnight Package ID: " << id
       << endl << endl
       << name  
       << endl
       << address << endl 
       << city << ", " << state << " " << ZIP << endl << endl
       << "Cost: $" << calculateCost() << endl 
       << "----------------------------------------";
}