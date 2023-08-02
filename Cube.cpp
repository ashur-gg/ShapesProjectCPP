// holds the code for cube computations etc

#include "Cube.h"
#include <iostream>
#include <iomanip>


using namespace std;

// Default constructor
Cube::Cube() : width(0.0) {}

// parameterized constructor
Cube::Cube(double width) : width(width) {}

// volume function 
double Cube::volume() {
  return width * width * width;
}

// surface area function
double Cube::surfaceArea() {
  return width * width * 6;
}

// toString method
void Cube::toString(){
  cout << typeid(*this).name() << endl;
  cout << "Surface Area: " << setw(9) << fixed << setprecision(3) << surfaceArea() << endl;
  cout << "Volume:       " << setw(9) << fixed << setprecision(3) << volume() << endl;
  cout << endl;
}

// print obj method 
void Cube::printobj(){
  cout << "Cube{width=" << fixed << setprecision(1) << width << "}" << endl;
}

