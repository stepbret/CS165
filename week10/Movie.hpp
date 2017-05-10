/*********************************************************************************
 ** Author: Brett Stephenson
 ** dAte: 3/7/2016
 ** Description: Header file for the movie class
 * *******************************************************************************/

#ifndef MOVIE_HPP
#define MOVIE_HPP

#include <string>
#include "LibraryItem.hpp"

class Movie : public LibraryItem {
  public:
    static const int CHECK_OUT_LENGTH;
    std::string director;
  public:
    //constructor
    Movie(std::string idc, std::string t, std::string dir);
    std::string getDirector();
    int getCheckOutLength();
};

#endif
