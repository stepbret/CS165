/***************************************************************************
 ** Author: Brett Stephenson
 ** Date: 1/16/2016
 ** Description: This is the header file for the MyInteger Class
 * *************************************************************************/
#ifndef MYINTEGER_HPP
#define MYINTEGER_HPP


class MyInteger {
  private:
    int* pInteger;
    
  public:
    MyInteger(int input);
    ~MyInteger();
    void setMyInt(int myInt);
    int getMyInt();
    MyInteger(const MyInteger &obj); 
    MyInteger operator= (const MyInteger &RHS);
};

#endif 




