/******************************************************************************
 ** Author: Brett Stephenson
 ** Date: 3/8/2016
 ** Description: This is the interface for the album class
 * ****************************************************************************/

#include "LibraryItem.hpp"
#include "Album.hpp"
#include <string>

/*****************************************************************************
 *                              Constructor
 * Description: This is the constructor for the Album class
 * ***************************************************************************/
Album::Album (std::string idc, std::string t, std::string artis) : LibraryItem(idc, t) {
  artist = artis;
}

/*****************************************************************************
 *                              getArtist
 * Description: returns the artist for the album
 * ***************************************************************************/
std::string Album::getArtist() {
  return artist;
}

/*****************************************************************************
 *                              getCheckedoutLength
 * Description: returns the checked out length
 * ***************************************************************************/
int Album::getCheckOutLength() {
  return this->CHECK_OUT_LENGTH;
}

//static member declaration
const int Album::CHECK_OUT_LENGTH = 14;

