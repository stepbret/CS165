/*****************************************************************************************
 ** Author: Brett Stephenson
 ** Date: 1/16/2016
 ** Description: This is the constructor and method file for the square subclass
 * ***************************************************************************************/

#include "Square.hpp"
#include "Rectangle.hpp"


/*****************************************************************************************
 *                                  Square Constructor
 * Decription: This is the constructor for the square subclass, it should take the 
 *             the parameter and pass them to the rectangle constructor
 * **************************************************************************************/
Square::Square (double side) : Rectangle (side, side) {
}

/*****************************************************************************************
 *                                  setLength Override
 * Decription: Takes the side and passes it to the setlength method in the Rectangle class
 * **************************************************************************************/
void Square::setLength(double side) {
  setLength(side);
  setWidth(side);
}

/*****************************************************************************************
 *                                  setLength Override
 * Decription: Takes the side and passes it to the setlength method in the Rectangle class
 * **************************************************************************************/
void Square::setWidth(double side) {
  setWidth(side);
  setLength(side);
}



