/******************************************************************************************************
 ** Author: Brett Stephenson
 ** Date: 1/20/2016
 ** Description: This is the point class interface along with the distance to function
 * ***************************************************************************************************/
#include "Point.hpp"
#include <iostream>
#include <cmath>
#include <iostream>

//default constructor and initialize to 0
Point::Point() {
  setXCoord(0);
  setYCoord(0);
}
//constructor with paramenters
Point::Point( double xCoord, double yCoord) {
   setXCoord(xCoord);
   setYCoord(yCoord);
}

//set functions for the x and y coords
void Point::setXCoord(double xCoord) {
   x = xCoord;
}

void Point::setYCoord(double yCoord) {
   y = yCoord;
}

double Point::getXCoord() const {
   return x;
}

double Point::getYCoord() const {
   return y;
}

//distanceTo function, subtract x's, subtract y's to get the length of the legs
//square the legs
double Point::distanceTo(const Point &Point) {
   double legx = (x - Point.getXCoord()); //distance of x leg
   double legy = (y - Point.getYCoord()); //distance of y leg
   return sqrt((legx * legx) + (legy * legy)); // root of the sum of the squares
}
/*
int main() {
  Point p1(-1.5, 0.0);
  Point p2(1.5, 4.0);
  double dist = p1.distanceTo(p2);
  std::cout << dist << std::endl;

return 0;
}
   

*/



