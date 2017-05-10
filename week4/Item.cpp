/***************************************************************************************************************
 ** Author: Brett Stephenson
 ** Date: 1/26/2016
 ** Description: The interface file for the Item Class
 * ************************************************************************************************************/
#include <string>
#include "Item.hpp"

using std::string;

/****************************************************************************************************************
 *                                     Item()
 *Description: Default contructor for the item class, it will initialize name to blank, price to 0 and quantity
 * to zero
 * **************************************************************************************************************/

Item::Item() {
   setName("");
   setPrice(0.0);
   setQuantity(0);
}


/****************************************************************************************************************
 *                                     Item constructor
 * Description: This is the contructor it will take the 3 parameters and initalize them
 * **************************************************************************************************************/
Item::Item(string itemName, double itemPrice, int itemQuantity) {
   setName(itemName);
   setPrice(itemPrice);
   setQuantity(itemQuantity);
}


/****************************************************************************************************************
 *                                     setName
 *Description: Sets the name to the private variable
 * **************************************************************************************************************/
void Item::setName(string itemName) {
   name = itemName;
}
 
 
/****************************************************************************************************************
 *                                     setPrice
 *Description: Sets the price to the private variable
 * **************************************************************************************************************/
void Item::setPrice(double itemPrice) {
   price = itemPrice;
}

/****************************************************************************************************************
 *                                     setQuantity
 *Description: Set the quantity to the private variable
 * **************************************************************************************************************/
void Item::setQuantity(int itemQuantity) {
   quantity = itemQuantity;
}



/****************************************************************************************************************
 *                                      getName 
 *Description: returns the name of the item
 * **************************************************************************************************************/
string Item::getName() {
   return name;
}


/****************************************************************************************************************
 *                                      getPrice 
 *Description: returns the price of the item
 * **************************************************************************************************************/
double Item::getPrice() {
   return price;
}


/****************************************************************************************************************
 *                                      getQuantity 
 *Description: returns the name of the item
 * **************************************************************************************************************/
int Item::getQuantity() {
   return quantity;
}


int main() {
return 0;
}
