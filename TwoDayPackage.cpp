#include "TwoDayPackage.h"

// Constructor
TwoDayPackage::TwoDayPackage(const string & _name, const string & _address, const string & _city, const string & _state, int _ZIP, double _weight, double _costPerOunce, double _flatFee)
: Package(_name, _address, _city, _state, _ZIP, _weight, _costPerOunce)
{
  flatFee = _flatFee;
}

// set function for flatFee; does not take values below zero.
void TwoDayPackage::setFlatFee(double _flatFee)
{
  if(_flatFee >= 0)
  {
    flatFee = _flatFee;
  }
  else
  {
    cout << "Error: Invalid Flat Fee value entered." << endl;
    _flatFee = 0;
  }
}

// Adds the flatFee to the base cost calculation from the class Package.
double TwoDayPackage::calculateCost() const
{
  return this->flatFee + Package::calculateCost();
}

// Displays the information for a Two-Day Package.
void TwoDayPackage::printPackageInfo() const
{
  cout << "----------------------------------------"
       << endl
       << "Two-Day Package ID: " << id
       << endl << endl
       << name  
       << endl
       << address << endl 
       << city << ", " << state << " " << ZIP << endl << endl
       << "Cost: $" << calculateCost() << endl 
       << "----------------------------------------";
}