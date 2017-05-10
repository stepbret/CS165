/***********************************************************************************
 ** Author: Brett Stephenson
 ** Date: 1/20/2016
 ** Description: This is the header file for the Linsegment class
 * ********************************************************************************/
#ifndef LINSEGMENT_HPP
#define LINESEGMENT_HPP

#include "Point.hpp"

//Declare the linesegment class
class LineSegment
{
   //Preivate variables 
   private:
	Point end1;
	Point end2;
	Point p1;
	Point p2;
  
  //public variables, include get and functions for the linesegment
   public:
	//LineSegment();
	LineSegment(Point p1, Point p2);
	void setEnd1 (Point p1);
	void setEnd2 (Point p2);
	Point getEnd1();
	Point getEnd2();
	double length();
	double slope();
};
#endif 


