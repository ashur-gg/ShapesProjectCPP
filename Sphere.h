// holds meta data for our spheres

#ifndef SPHERE_H
#define SPHERE_H

#include <iostream>
#include "Shape.h"
#include <string>


class Sphere : public Shape {
// variable to hold our radius
private : 
    double radius;

public : 
    // default constructor
    Sphere();

    // parameterized constructor
    Sphere(double radius);

    // Volume function
    double volume();
    // Surface Area function
    double surfaceArea();
    // toString method
    void toString();
    // method to print basic object info
    void printobj();
};
#endif