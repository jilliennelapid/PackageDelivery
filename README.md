# PackageDelivery
A C++ project using mulitple header files and classes to simulate different mailing packages that can be send out.
There are three header files and three .cpp files that contain different classes that define defiferent styles of mailing packages.

## Package.h
    * Contains the class declaration and prototype componenents of the class Package.
    * class Package defines aspects of a normal package.
    
## Package.cpp
    * Implments/defines the aspects of the class Package.
    
## TwoDayPackage.h
    * Contains the class declaration and prototype componenents of the class TwoDayPackage.
    * The class TwoDayPackage is a child class of Package.
    
## TwoDayPackage.cpp
    * Uses and expands upon the contructors and methods from Package.
    * Adds aspects that would relate to a package that would be expedited to two days delivery.
    
## OvernightPackage.h
    * Contains the class declaration and prototype componenents of the class OvernightPackage.
    * The class Overnight Package is a child class of Package.
    
## OvernightPackage.cpp
    * Uses and expands upon the contructors and methods from Package.
    * Adds aspects that would relate to a package that would be expedited to overnight delivery.
    
## testPackages.cpp
    * Makes use of all classes to create objects representing a regular package, two-day delivery package, and overnight delivery package.
