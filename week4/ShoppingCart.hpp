/**************************************************************************************************************
 ** Author: Brett Stephenson
 ** Date: 1/26/2016
 ** Description: This is the ShoppingCart class header file
 * **********************************************************************************************************/
#ifndef SHOPPINGCART_HPP
#define SHOPPINGCART_HPP

#include "Item.hpp"


class ShoppingCart 
{
   //define the private variables
   private:
        //Item *item;
	Item *item[100];		
	int arrayEnd;

   //define the public variabes and the constructor
   public:
	ShoppingCart();
	double totalPrice();
	void addItem(Item &item);
};
#endif 

