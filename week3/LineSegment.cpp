/****************************************************************************************
 ** Author: Brett Stephenson
 ** Date: 1/20/2016
 ** 
 * **************************************************************************************/
#include "LineSegment.hpp"


//default constructor
//LineSegment::LineSegment() {
  //setEnd1(0);
 // setEnd2(0);
//}

//donstructor with parametes
LineSegment::LineSegment(Point p1, Point p2) {
  setEnd1(p1);     //set the end points
  setEnd2(p2);
}

//void methods to set paramenters
void LineSegment::setEnd1(Point p1) {
  end1 = p1;
}

void LineSegment::setEnd2(Point p2) {
  end2 = p2;
}

Point LineSegment::getEnd1() {
  return end1;
}

Point LineSegment::getEnd2() {
  return end2;
}

//length will calculate the distance between the two endpoints
double LineSegment::length() {
  return end1.distanceTo(end2);
}


// will claculate the slope of the line
double  LineSegment::slope() {
  return ((end1.getYCoord() - end2.getYCoord())/(end1.getXCoord() - end2.getXCoord()));
}

/*int main() {

  Point p1(4.3, 7.52);
  Point p2(-17.0, 1.5);
  LineSegment ls1(p1, p2);
  double length = ls1.length();
  double slope = ls1.slope();
  std::cout << length <<std::endl;
  std::cout << slope << std::endl;

return 0;
}
*/
 




