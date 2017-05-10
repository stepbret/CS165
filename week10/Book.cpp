/*************************************************************************
 ** Author: Brett Stephenson
 ** Date: 3/7/2016
 ** Description: This is the interface file for the book class
 * **********************************************************************/

#include "Book.hpp"
#include "LibraryItem.hpp"
#include <string>

/*************************************************************************
 *                              Constructor
 * Description this is the constructor for the book class
**************************************************************************/
Book::Book(std::string idc, std::string t, std::string auth) : LibraryItem( idc, t) {
  author = auth;
}

/***********************************************************************
 *                          getAuthor
 * Description: returns the author of the book
 * *********************************************************************/
std::string Book::getAuthor() {
  return author;
}

/***********************************************************************
 *                          getCheckOutLength
 * description: Returns the check out length
 * *********************************************************************/
int Book::getCheckOutLength() {
  return this-> CHECK_OUT_LENGTH;
}

//static member declaration
const int Book::CHECK_OUT_LENGTH = 21;

