/*******************************************************************************
 ** Author: Brett Stephenson
 ** Date: 3/7/2016
 ** Description : This is the interface file for the movie class
 * *****************************************************************************/

#include "Movie.hpp"
#include "LibraryItem.hpp"
#include <string>

/********************************************************************************
 *                              Constructor
 * Description: This is the constructor for the Movie class
 * *****************************************************************************/
Movie::Movie(std::string idc, std::string t, std::string dir) : LibraryItem(idc, t) {
  director = dir;
}

/******************************************************************************
 *                              getDiretor
 *  Description: Returns the director of the movie
 * ***************************************************************************/
std::string Movie::getDirector() {
  return director;
}
/******************************************************************************
 *                              getCheckOutLength
 * Description: returns the checkoutlength
 * ****************************************************************************/
int Movie::getCheckOutLength() {
  return this->CHECK_OUT_LENGTH;
}

//static member declaration
const int Movie::CHECK_OUT_LENGTH = 7;
