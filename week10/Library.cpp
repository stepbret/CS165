/*****************************************************************************
 ** Author: Brett Stephenson
 ** Date: 3/7/2016
 ** Description: This is the interface for the Linrary class
 * ***************************************************************************/

#include "Library.hpp"
#include <vector>
#include <string>

/*****************************************************************************
 *                              Library constructor
 * Description: Default constructor that initializes the currentDate to 0
 * **************************************************************************/
Library::Library() {
  currentDate = 0;
}

/*****************************************************************************
 *                              addLibraruItem
 * Description: Adds the items to the vector of pointers
 * **************************************************************************/
void Library::addLibraryItem(LibraryItem* item) {
  holdings.push_back(item);
}

/*****************************************************************************
 *                              addPatron
 * Description: This adds the Patron in the parameter to a vector of members
 * **************************************************************************/
void Library::addPatron(Patron* p) {
  members.push_back(p);
}

/*****************************************************************************
 *                              checkOutLibraryItem
 * Description: Checks to see if the items it in the library,
 *              Checks to see if the patron is in the library
 *              Checks if the item is already checked out
 *              Checks to see if the item is on hold
 *               if all those don't fail, add the item to the checkedOutBy
 *               and update the dateCheckedOut and location
 *              If the item is on hold fo that patron, update the patrons
 *               checkedOutItems 
 *              returns check out successful
 * **************************************************************************/
std::string Library::checkOutLibraryItem(std::string PatronID, std::string ItemID) {
  LibraryItem * item = getLibraryItem(ItemID);
  Patron * patron = getPatron(PatronID);

  if(item == NULL)
    return "item not found";
  
  if(patron == NULL)
    return "patron not found";

  // the right item is already checked out
  if (getLibraryItem(ItemID)->getLocation() == CHECKED_OUT) {
    return "item already checked out";
  }
  // if the item is on hold by another patron
  if (getLibraryItem(ItemID)->getLocation() == ON_HOLD_SHELF) {
    return "item on hold for another patron";
  }
  if (item->getRequestedBy() == patron) {
    item->setCheckedOutBy(patron);
    item->setDateCheckedOut(this->currentDate);
    patron->addLibraryItem(item);
    item->setLocation(CHECKED_OUT);
    item->setRequestedBy(NULL);
    return "check out successful";
  }
  else {
    item->setCheckedOutBy(patron);
    item->setDateCheckedOut(this->currentDate);
    patron->addLibraryItem(item);
    item->setLocation(CHECKED_OUT);
    return "check out successful";
    }
}

/**************************************************************************
 *                              returnLibraryItem
 * Descrption: If the item in not in the library, return item not fouind
 * ***********************************************************************/
std::string Library::returnLibraryItem(std::string ItemID) {
  LibraryItem* item = getLibraryItem(ItemID);
  
  if(item == NULL)
    return "item not found";

  //returns who checked it out and removes the item from their list
  Patron *patron = item->getCheckedOutBy();
  if(item->getLocation() == ON_SHELF)
    return "Item already in Library";

  patron->removeLibraryItem(item);  

  if(item->getRequestedBy() != NULL) {
    item->setLocation(ON_HOLD_SHELF);
    return "item placed on hold shelf for another patron";
  }
  else {
    item->setLocation(ON_SHELF);
    item->setCheckedOutBy(NULL);
    return "Item placed on shelf";
  }
 
}

/*************************************************************************
 *                          requestLibraryItem
 * Description: This will requests a libraryitem for a patron, if the 
 *              item doesn't exsist, returns no item found,
 *              if the patron isn't fouind return patron not found
 *              if the item is already requests, then item already on hold
 *              update requestsed by, and change location to on holdshelf
 * ***********************************************************************/
std::string Library::requestLibraryItem(std::string PatronID, std::string ItemID) {
  // set the item and patron to make it easier
  LibraryItem* item = getLibraryItem(ItemID);
  Patron* patron = getPatron(PatronID);

  if(item == NULL)
    return "item not found";
  
  if(patron == NULL)
    return "patron not found";

  if (getLibraryItem(ItemID)->getRequestedBy() != NULL) {
    return "item is already on hold";
  }
  else {
    getLibraryItem(ItemID)->setRequestedBy(getPatron(PatronID));
    
    if ((getLibraryItem(ItemID)->getLocation()) == ON_SHELF) {
      getLibraryItem(ItemID)->setLocation(ON_HOLD_SHELF);
    }
    return "request successful";
  }
}

/**************************************************************************
 *                          payFine
 * Description: uses amendfine to update to the fine of the patron
 * ***********************************************************************/
std::string Library::payFine(std::string patronID, double payment) {
  Patron* patron = getPatron(patronID);
  //if the patron is not found
  if (patron == NULL) 
   return "Patron not found"; 
  getPatron(patronID)->amendFine(-payment);
  return "payment successful";
}

/**************************************************************************
 *                          incrementCurrentDate
 * Description: increments current dates by 1 and increases each fine by
 *              10 cents for each item them have checkedout
 * ************************************************************************/
void Library::incrementCurrentDate() {
  currentDate++;
  for (int x = 0; x < members.size(); x++) {
    for (int i = 0; i < members[x]->getCheckedOutItems().size(); i++) {
    if(currentDate - members[x]->getCheckedOutItems().at(i)->getDateCheckedOut() > members[x]->getCheckedOutItems().at(i)->getCheckOutLength()) {
     members[x]->amendFine(0.10);   
     }
   }
 }
}
/***************************************************************************
 *                          getPatron
 * Description: returns the patron of the ID number given
 * ************************************************************************/
Patron* Library::getPatron(std::string PatronID) {
  for (int x = 0; x < members.size(); x++) {
    if (members[x]->getIdNum() == PatronID) {
      return members[x];
    }
  }
}

/**************************************************************************
 *                          getLibraryItem
 * Description: This returns the library item from the idCode
 * ************************************************************************/
LibraryItem* Library::getLibraryItem(std::string ItemID) {
  for (int x = 0; x < holdings.size(); x++) {
    if(holdings[x]->getIdCode() == ItemID) {
      return holdings[x];
    }
  }
}





