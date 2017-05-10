/*****************************************************************************************************************
 ** Author: Brett STephenson
 ** Date: 1/12/2016
 ** Description: Sorts values into their ascending order
 * ****************************************************************************************************************/

#include <iostream>
using std::cout;
using std::endl;

// Prototype 
void smallSort(int&, int&, int&);


/*
int main()
{
  int a = 231;
  int b = 321;
  int c = 4123;

  smallSort(a, b, c);
 
  cout << a << ", " << b << ", " << c << endl;

return 0;



} */
/******************************************************************************************************************
 *                                                     smallSort
 *Sorts 3 parameters into ascending order
*******************************************************************************************************************/
void smallSort(int& a, int& b, int& c)
{
  int first;
  int second;
  int third;


  // if a > b > c and else 
  if (a > b && a > c){
	if (b > c) {
	first = a;
	second = b;
	third = c;
	}
	else {  	     
	first = a;
	second = c;
	third = b;
	}
  }
  // if b > a > c and if b > c > a
  else if (b > a && b > c){
	if (a > c) {
	first = b;
	second = a;
	third = c;
	}
	else {  	     
	first = b;
	second = c;
	third = a;
	}
  }
  // if c > a > b and if c > b > a	
  else if (c > a && c > b){
	if (a > c) {
	first = c;
	second = a;
	third = b;
	}
	else {  	     
	first = c;
	second = b;
	third = a;
	}
  }
}
