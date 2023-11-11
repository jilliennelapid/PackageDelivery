#include "Package.h"

// Must initialize the static variable to a value at implementation
int Package::ID = 1;

// Constructor
Package::Package(const string & _name, const string & _address, const string & _city, const string & _state, int _ZIP, double _weight, double _costPerOunce)
{
  name = _name;
  
  address = _address;
  city = _city;
  state = _state;
  ZIP = _ZIP;
  
  weight = _weight;
  costPerOunce = _costPerOunce;
  id = ID;

  ID = ID + 1;
}

// set function for weight; does not take values below zero.
void Package::setWeight(double _weight)
{
  if(_weight >= 0)
  {
    weight = _weight;
  }
  else
  {
    cout << "Error: Invalid weight entered." << endl;
    _weight = 0;
  }
}

// set function for costPerOunce; does not take values below zero
void Package::setCostPerOunce(double _costPerOunce)
{
  if(_costPerOunce >= 0)
  {
    costPerOunce = _costPerOunce;
  }
  else
  {
    cout << "Error: Invalid Cost per Ounce entered." << endl;
    _costPerOunce = 0;
  }
}

// Calculates the cost by multiplying the weight of the package
// with the cost per ounce.
double Package::calculateCost() const
{
  return weight * costPerOunce;
}

// Displays the information about the package
void Package::printPackageInfo() const
{
  cout << "----------------------------------------"
       << endl
       << "Package ID: " << id
       << endl << endl
       << name  
       << endl
       << address << endl 
       << city << ", " << state << " " << ZIP << endl << endl
       << "Cost: $" << calculateCost() << endl 
       << "----------------------------------------";
}