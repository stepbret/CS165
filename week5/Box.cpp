/******************************************************************************
 ** Author: Brett Stephenson
 ** Date: 1/19/2016
 ** Description: Function definitions for box
 * ***************************************************************************/

#include <iostream>
#include "Box.hpp"


//initialize with empty constructor
Box::Box(){
  setHeight(1);
  setWidth(1);
  setLength(1);
}

//contructor with parameters
Box::Box(double h, double w, double l){
   setHeight(h);
   setWidth(w);
   setLength(l);
}

//set functions to define the variables for the box
void Box::setLength(double l) {
   length = l; 
}

void Box::setHeight(double h) {
   height = h;
}

void Box::setWidth(double w) {
   width = w;
}

//get functions to perform calculations

double Box::getVolume() {
   return (length * width * height);
}

double Box::getSurfaceArea() {
   return ((2 * length) + (2 *width) + (2 * height));
}


/*
int main() {
  box box1(3, 4, 5);
  std::cout << box1.getSurfaceArea();
  

return 0;
}*/
