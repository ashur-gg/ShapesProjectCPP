// Title : Shapes Project
// Desc  : Shapes program takes inputs for three children classes for our parent Shape class
//         we are calculating volume/surfacearea and handling for exceptions
// Author: Ashur Baroutta
// Date  : 06/26/23

#include <iostream>
#include "Cylinder.h"
#include "Sphere.h"
#include "Cube.h"

using namespace std;

// prototype
double getParameter();

int main() {
  // Create an Array of Shapes
  Shape* shapes[3];
  
  // Create an instance of sphere, cube and cylinder
  
  // Create variables to hold radius and height
  double radius = 0.0, height = 0.0, width = 0.0;

  // Ask the user for the radius of the sphere and then
  // create an instance of that sphere
  
    //cout << "Enter radius for sphere: " << endl;
    radius = getParameter();
  
    // created an instance of sphere and pass radius to the constructor
    Sphere sphere(radius);
  
  // Ask the user for the width of the cube and then 
  // create an instance of that sphere
  
   //cout << "Enter width for the cube: " << endl;
    width = getParameter();
    Cube cube(width);
  
  // Ask the user for the radius of the cylinder
  
   //cout << "Enter radius for the cylinder: "<< endl;
    radius = getParameter();
    
  // Ask the user for the height of the cylinder
  
   // cout << "Enter height for the cylinder: " << endl;
    height = getParameter();
  
  // create an instance of the cylinder
    Cylinder cylinder(radius, height);
  
  // Print each object
    sphere.printobj();
    cube.printobj();
    cylinder.printobj();
  
  // Add each object to your list
    shapes[0] = &sphere;
    shapes[1] = &cube;
    shapes[2] = &cylinder;
    cout << endl;
 
  // Use a for loop
    for(int i = 0; i< 3; i++){
      // Print the  name of the class
      // Print the Surface Area
      // Print the volume
      shapes[i]->toString();
      
    }
      
} // End main


  // Write a method called getParameter that returns a positive integer
  // It must continually ask the user to enter the value until a valid number is entered
  // It must handle invalid values (Exception Handling)


// getParameter method returns positive integer for us
double getParameter(){
  
  double param;

  // loop until we get a positive int to return, throw exceptions
  while(1){ 

    // try block for exception handling
    try{
        cin >> param;
        if(cin.fail() || param < 0 ){ // if not a number or less than 0 
          throw "The number needs to be a positive integer. Please enter a positive integer.";
        }
        
        else {break;}
    }
    // exception handling
    catch (char const *excp)  // Probably need to clear out the buffer
      { 
        //puts(excp);
        cin.clear();
        cin.ignore(123, '\n');
      }
  }
  
  return param;
};