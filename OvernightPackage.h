#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h"

class OvernightPackage : public Package
{
  private:
    double addFeePerOunce;

  public:
    // Constructor.
    OvernightPackage(const string & _name, const string & _address, const string & _city, const string & _state, int _ZIP, double _weight, double _costPerOunce, double _addFeePerOunce);

    // Calculates the cost with the additional fee per ounce.
    double calculateCost() const;

    // set function
    void setOvernightFeePerOunce(double _addFeePerOunce);

    // Prints out the information for an Overnight Package.
    void printPackageInfo() const;
};
#endif