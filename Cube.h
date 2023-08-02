// holds cube meta data

#ifndef CUBE_H
#define CUBE_H

#include "Shape.h"
#include <iostream>
#include <string>

class Cube : public Shape {

// double to hold our cubes width
private :
  double width;

public : 
  // default constructor
  Cube();
  // parameterized constructor
  Cube(double width);
  // volume function
  double volume();
  // surface area function
  double surfaceArea();
  // toString method
  void toString();
  // printobj method for basic info
  void printobj();
};
#endif