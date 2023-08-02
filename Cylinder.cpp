// code for our cylinder computations

#include "Cylinder.h"
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

// default constructor
Cylinder::Cylinder() : radius(0.0), height(0.0) {}

// parameterized constructor
Cylinder::Cylinder(double radius, double height) : radius(radius), height(height) {}

// volume function
double Cylinder::volume() {
  return M_PI * pow(radius,2) * height;
}

// surface area function
double Cylinder::surfaceArea(){
  //return 2.0 * M_PI * radius * (radius + height);
  return ((2.0 * M_PI * radius * height) + (2.0 * M_PI * radius * radius));
}

// toString method
void Cylinder::toString(){
  cout << typeid(*this).name() << endl;
  cout << "Surface Area: " << setw(9) << fixed << setprecision(3) << surfaceArea() << endl;
  cout << "Volume:       " << setw(9) << fixed << setprecision(3) << volume() << endl;
}

void Cylinder::printobj(){
  cout << "Cylinder{radius="<< fixed << setprecision(1) << radius << ", height=" << height<< "}" << endl;
}