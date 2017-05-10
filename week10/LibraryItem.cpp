/*********************************************************************************
 ** Author: Brett Stephenson
 ** dAte: 3/7/2016
 ** Description: This is hte interface file for the LibraryItem class
 * *******************************************************************************/

#include "LibraryItem.hpp"
#include <string>

/*********************************************************************************
 *                                  Constructor
 * Description: Constructor for the base class of LibraryItem
 * *******************************************************************************/
LibraryItem::LibraryItem(std::string idc, std::string t) {
  idCode = idc;
  title = t;
  checkedOutBy = NULL;
  requestedBy = NULL;
  location = ON_SHELF;
}

/*********************************************************************************
 *                                  getIdCode
 * Description: returns the idCode for the LibraryItem
 * *******************************************************************************/
std::string LibraryItem::getIdCode() {
  return idCode;
}


/*********************************************************************************
 *                                  getTitle
 * Description: returns the title of the LibraryItem
 * *******************************************************************************/
std::string LibraryItem::getTitle() {
  return title;
}


/*********************************************************************************
 *                                  getLocation
 * Description: Returns the location of the item
 * *******************************************************************************/
Locale LibraryItem::getLocation() {
  return location;
}

/*********************************************************************************
 *                                  setLocation
 * Description: sets the location of the item
 * *******************************************************************************/
void LibraryItem::setLocation(Locale l) {
  location = l;
}

/*********************************************************************************
 *                                  getCheckedOutBy
 * Description: Returns a pointer to the person who checked out the Item
 * *******************************************************************************/
Patron* LibraryItem::getCheckedOutBy() {
  return checkedOutBy;
}

/*********************************************************************************
 *                                  setCheckedOutBy
 * Description: sets the checkedoutby method to the person who checked it out
 * *******************************************************************************/
void LibraryItem::setCheckedOutBy(Patron *p) {
  checkedOutBy = p;
}

/*********************************************************************************
 *                                  getRequestedBy
 * Description: Returns the pointer to the patron class
 * *******************************************************************************/
Patron* LibraryItem::getRequestedBy() {
  return requestedBy;
}

/*********************************************************************************
 *                                  setRequestedBy
 * Description: Sets the requestedBy toa pointer to the patron
 * *******************************************************************************/
void LibraryItem::setRequestedBy(Patron *p) {
  requestedBy = p;
}

/*********************************************************************************
 *                                  getDateCheckedOut
 * Description: returns the date it was checkedout
 * *******************************************************************************/
int LibraryItem::getDateCheckedOut() {
  return dateCheckedOut;
}

/*********************************************************************************
 *                                  setDateCheckedOut
 * Description: sets the parameter to the private variable
 * *******************************************************************************/
void LibraryItem::setDateCheckedOut(int date) {
  dateCheckedOut = date;
}



