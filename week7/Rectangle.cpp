/************************************************************************************************************
 ** Author: Brett Stephneson
 ** Date: 1/16/2016
 ** Description: This is the constructor and method definition file for the rectangle class
 * *********************************************************************************************************/
#include "Rectangle.hpp"
#include <iostream>

/****************************************************************************************
 *                                  Rectangle Constructor
 *  Description: Default constructor and initialize everything
 * *************************************************************************************/
//Rectangle::Rectangle() {
//  setLength(1);
//  setWidth(1);
//}


/****************************************************************************************
 *                                  Rectangle Constructor
 *  Description: constructor and initialize everything, using values
 * *************************************************************************************/
Rectangle::Rectangle(double l, double w){
  setLength(l);
  setWidth(w);
}


/****************************************************************************************
 *                                  setLength
 *  Description: Sets the length to the private variable
 * *************************************************************************************/
void Rectangle::setLength(double l) {
  length = l;
}


/****************************************************************************************
 *                                  setWidth
 *  Description: Set the width to the private variable
 * *************************************************************************************/
void Rectangle::setWidth(double w){
  width = w;
}


/****************************************************************************************
 *                                  Permimeter
 *  Description: Takes the length and width and calculates the perimeter
 * *************************************************************************************/
double Rectangle::perimeter(){
  return (2 * length + 2 * width);
}


/****************************************************************************************
 *                                  getArea
 *  Description: Takes the length and the width and returns the area of the rectangle
 * *************************************************************************************/
double Rectangle::area(){
  return (length * width);
}

/*
int main() {
  Square s1(3);
  std::cout << s1.perimeter() << std::endl;
 return 0;
}
*/
