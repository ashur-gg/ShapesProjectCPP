// hold the actual code/computations for our spheres

#include "Sphere.h"
#include "cmath"
#include <iostream>
#include <iomanip>

using namespace std;

// default constructor
Sphere::Sphere() : radius(0.0) {}

// parameterized constructor taking in a radius
Sphere::Sphere(double radius) : radius(radius){}

// volume function
double Sphere::volume(){
  // uses PI and pow function from cmath lib
  return (4.0/3.0) * M_PI * pow(radius,3);
}

// surface area function
double Sphere::surfaceArea(){
  // uses PI and pow function from cmath lib
  return 4.0 * M_PI * radius * radius;
  
}

// toString method
void Sphere::toString(){
  cout << typeid(*this).name() << endl;
  cout << "Surface Area: " << setw(9) << fixed << setprecision(3) << surfaceArea() << endl;
  cout << "Volume:       " << setw(9) << fixed << setprecision(3) << volume() << endl;
  cout << endl;
}

// printobj method
void Sphere::printobj(){
  cout << "Sphere{radius="<< fixed << setprecision(1) <<  radius << "}" << endl;
}