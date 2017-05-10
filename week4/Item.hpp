/*************************************************************************************************************
 ** Author: Brett Stephenson
 ** Date: 1/26/2016
 ** Description: this is the header file for the item class
 * *************************************************************************************************************/
#ifndef ITEM_HPP
#define ITEM_HPP


#include <string>


//item class starts

class Item
{
   //define the private variables
   private: 
	std::string name;
	double price;
	int quantity;

   //declare public variables
   public:
	Item();
	Item (std::string, double, int);
	void setName(std::string);
	void setPrice(double);
	void setQuantity(int);
	std::string getName();
	double getPrice();
	int getQuantity();
};
#endif


