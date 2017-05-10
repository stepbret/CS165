/********************************************************************************************
 ** Author: Brett Stephenson
 ** Date: 1/16/2016
 ** Description: This is the hpp file for the Sqaure class. It should be inhereted from
 **              the rectangle class and should only take one parameter to be initialized 
 * *****************************************************************************************/

#include "Rectangle.hpp"
#ifndef SQUARE_HPP
#define SQUARE_HPP

class Square : public Rectangle {
  public:
    Square(double side);
    void setLength(double side);
    void setWidth(double side);

};
#endif 




