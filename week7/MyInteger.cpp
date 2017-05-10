/***********************************************************************************
 ** Author: Brett Stephenson
 ** Date: 2/16/2016
 ** Description: This is the definition method for the MyInteger Class
 * ********************************************************************************/

#include "MyInteger.hpp"
#include <iostream>

/**********************************************************************************
 *                              MyInteger Copy Constructor
 * Description: This is the copy constructor for the MyIntegerClass takes an object 
 *              of MyInteger and makes an idetnical object and allocates the 
 *              memory for the integer
 * ********************************************************************************/
MyInteger::MyInteger (const MyInteger &obj) {
  pInteger = new int;
  pInteger = obj.pInteger;
} 

/**********************************************************************************
 *                              MyInteger Constructor
 * Description: This si the constructor for the MyIntegerClass takes an integer 
 *              and makes an object of the integer
 * ********************************************************************************/
MyInteger::MyInteger (int input) {
  pInteger = new int;
  *pInteger = input;
}

/**********************************************************************************
 *                              setMyInt
 * Description: sets the values passed to the constructor and sets it to the
 *              the pointer
 * ********************************************************************************/
void MyInteger::setMyInt (int myInt) {
  //delete pInteger;
  int a = myInt;
  pInteger = new int(a);
  //*pInteger = myInt;
}

/**********************************************************************************
 *                              etMyInt
 * Description: returns the int in the pointer
 * *******************************************************************************/
int MyInteger::getMyInt() {
  return *pInteger;
}

/**********************************************************************************
 *                              Overloaded = 
 * Description: This will set the value of two MyInteger objects to each other
 * ********************************************************************************/
MyInteger MyInteger::operator=(const MyInteger &RHS) {
   delete pInteger;
   int a = *RHS.pInteger;
   pInteger = new int (a);
   //pInteger = RHS.pInteger;
   return *this;
}


/**********************************************************************************
 *                              Destructor
 *Description: This will destruct the object and allow more free memory
 * *******************************************************************************/
MyInteger::~MyInteger() {
}
/*
int main() {
  MyInteger num1(17);
  MyInteger num2 = num1;
  std::cout << num1.getMyInt() << std::endl;
  std::cout << num2.getMyInt() << std::endl;

  num2.setMyInt(9);
  std::cout << num1.getMyInt() <<std::endl;
  std::cout << num2.getMyInt() <<std::endl;
  
  MyInteger num3(42);
  num2 = num3;
  std::cout << num2.getMyInt() <<std::endl;
  std::cout << num3.getMyInt() <<std::endl;
 
  num3.setMyInt(1);
  std::cout << num2.getMyInt() <<std::endl;
  std::cout << num3.getMyInt() <<std::endl;
 
   
 
 return 0;
  
}
*/






