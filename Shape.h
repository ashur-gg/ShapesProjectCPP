// our abstract class
#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape { 

  public : 
    // virtual functions to be inherited

    // a toString method to display relevant info
    virtual void toString() { 
      cout << "will be overridden" << endl;
    }
    // a volume method
    virtual double volume() = 0;

    // a surface area method
    virtual double surfaceArea() = 0;


};
#endif