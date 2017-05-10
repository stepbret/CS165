/****************************************************************************************************************
 ** Author: Brett Stephenson
 ** Date: 1/26/2016
 ** Description: This is the interface for the ShoppingCart class
 * **************************************************************************************************************/
#include <string>
#include "ShoppingCart.hpp"

/***************************************************************************************************************
 *					Shopping Cart constructor
 * Description: Initializes each element of the array to NULL and initializes arrayEnd to 0
 * ************************************************************************************************************/
ShoppingCart::ShoppingCart() {
  for (int i = 0; i <100; i++) {
	item*[i] = NULL;
	}
 arrayEnd = 0;
}

/***************************************************************************************************************
 *					addItem
 * Description: This takes a point to an item and adds the item to the array. then It should set arrayEnd to the
 * next availble memory spot.  
 * ************************************************************************************************************/
void ShoppingCart::addItem (&Item) {
 item*[arrayEnd] = &Item;
 arrayEnd = item*[arrayEnd] + 1;
}

 
/***************************************************************************************************************
 *					totalPrice	
 * Description: This takes the price from each item in the array and adds them together to get the total of 
 * of the cart
 * ************************************************************************************************************/
double ShoppingCart::totalPrice() {
  double total = 0;
  for (int i = 0; i < arrayEnd; i++) {
	total += ((item*[i].getPrice()) * (item*[i].getQuantity()));
}
 return total;
}
/*
int main() {

 Item a("Affidavit", 179.99, 12);
 Item b("Bildungsroman", 0.7, 20);

 ShoppingCart sc1;
 sc1.addItem(&a);
 sc1.addItem(&b);

 double diff = sc1.totalPrice();

return 0;
}
8/

