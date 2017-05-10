/*****************************************************************************
 ** Author: Brett Stephenson
 ** Date: 1/19/2016
 ** Description: This is the interface and declaration file
 * ***************************************************************************/
#ifndef BOX_HPP
#define BOX_HPP


//Box class declaration and interface
class Box
{
   //define the private paramenters 
   private:
	double length;
	double width;
	double height;

   // define the public variables, constructor and prototypes
   public:
	Box();
	Box(double l, double w, double h);
	void setLength(double l);
	void setWidth(double w);
	void setHeight(double h);
	double getVolume();
	double getSurfaceArea();
};
#endif
