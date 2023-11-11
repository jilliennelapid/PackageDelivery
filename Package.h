#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Package
{
  protected:
    string name, address, city, state;
    int ZIP;
    double weight, costPerOunce;
    int id;

    static int ID;
    
  public:
    // Package Constructor.
    Package(const string & _name, const string & _address, const string & _city, const string & _state, int _ZIP, double _weight, double _costPerOunce);

    // set functions.
    void setWeight(double _weight);
    void setCostPerOunce(double costPerOunce);

    // Calculates the cost of mailing.
    double calculateCost() const;

    // Prints all package information.
    void printPackageInfo() const;
};
#endif