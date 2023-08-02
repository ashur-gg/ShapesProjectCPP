// meta data for our cylinders 

#ifndef CYLINDER_H
#define CYLINDER_H

#include <iostream>
#include "Shape.h"
#include <string>
using namespace std;

class Cylinder : public Shape{
private: 
  double radius;
  double height;

public: 
  // default constructor
  Cylinder();

  // parameterized constructor
  Cylinder(double radius, double height);

  // volume function
  double volume();

  // surface area function
  double surfaceArea();

  // toString method
  void toString();

  void printobj();
};

#endif