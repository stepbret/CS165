/*******************************************************************************
 ** Author: Brett Stephenson
 ** Date: 3/7/2016
 ** Description: interface for the Patron class
 * *****************************************************************************/

#include "Patron.hpp"
#include <string>
#include <vector>

/*******************************************************************************
 *                              Patron Constructor
 * Description: Take two string parameters and sets the private variables
 * ****************************************************************************/
Patron::Patron (std::string idn, std::string n) {
  idNum = idn;
  name = n;
}

/*******************************************************************************
 *                              getIdNum 
 * Description: returns the idnum of the patron
 * ****************************************************************************/
std::string Patron::getIdNum() {
  return idNum;
}

/*******************************************************************************
 *                              getName 
 * Description: returns the name of the patron
 * ****************************************************************************/
std::string Patron::getName() {
  return name;
}

/*******************************************************************************
 *                              getCheckedOutItems 
 * Description: returns the checked out items of the patron
 * ****************************************************************************/
std::vector<LibraryItem*> Patron::getCheckedOutItems() {
  return checkedOutItems;
}

/*******************************************************************************
 *                              addLibraryItem 
 * Description: adds an item to the vector of the patron's checked out items
 * ****************************************************************************/
void Patron::addLibraryItem (LibraryItem* b) {
  checkedOutItems.push_back(b);
}

/*******************************************************************************
 *                              removeLibraryItem 
 * Description: removes and item from the vector of checkedout items
 * ****************************************************************************/
void Patron::removeLibraryItem(LibraryItem* b) {
  for (int x = 0; x < checkedOutItems.size(); x++) {
    if (checkedOutItems[x] == b) {
      checkedOutItems.erase(checkedOutItems.begin() + x-1);
    }
  }
}

/*******************************************************************************
 *                              getFineAmount 
 * Description: returns the fine amount
 * ****************************************************************************/
double Patron::getFineAmount() {
  return fineAmount;
}

/*******************************************************************************
 *                               amendFine
 * Description: A positive amount increase the fineamount, negative decreases
 * ****************************************************************************/
void Patron::amendFine(double amount) {
  fineAmount += amount;
}








