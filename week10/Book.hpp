/*********************************************************************************
 ** Author: Brett Stephenson
 ** dAte: 3/7/2016
 ** Description: Header file for the book class
 * *******************************************************************************/

#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>
#include "LibraryItem.hpp"

class Book : public LibraryItem {
  private: 
    static const int CHECK_OUT_LENGTH;
    std::string author;
  public:
    //constructor
    Book(std::string idc, std::string t, std::string auth);
    std::string getAuthor();
    virtual int getCheckOutLength();
};
#endif
