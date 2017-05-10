/***************************************************************************************
 ** Author: Brett Stephenson
 ** Date 1/19/2016
 ** Description: This is the header file for the point class
 * ***********************************************************************************/

#ifndef POINT_HPP
#define POINT_HPP

//point class declaration
class Point
{
   //define private paramenters
   private:
	double x;
	double y;

   //define public variable, constructor and methods
   public:
	Point();
	Point (double xCoord, double yCoord);
	void setXCoord (double xCoord);
	void setYCoord (double yCoord);
	double getXCoord() const;
	double getYCoord() const;
	double distanceTo(const Point&);
};
#endif





