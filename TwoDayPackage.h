#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include "Package.h"

class TwoDayPackage : public Package
{
  private:
    double flatFee;

  public:
    // Constructor.
    TwoDayPackage(const string & name, const string & address, const string & city, const string & state, int ZIP, double weight, double costPerOunce, double flatFee);

    // set function.
    void setFlatFee(double _flatFee);

    // Calculates new cost with the flat fee.
    double calculateCost() const;

    // Prints the package info for a two day package.
    void printPackageInfo() const;
};
#endif