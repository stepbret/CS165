/*********************************************************************************
 ** Author: Brett Stephenson
 ** dAte: 3/7/2016
 ** Description: Header file for the album class
 * *******************************************************************************/

#ifndef ALBUM_HPP
#define ALBUM_HPP

#include <string>
#include "LibraryItem.hpp"

class Album : public LibraryItem {
  private:
    static const int CHECK_OUT_LENGTH;
    std::string artist;
  public:
    //constructor
    Album(std::string idc, std::string t, std::string artis);
    std::string getArtist();
    int getCheckOutLength();
};

#endif
