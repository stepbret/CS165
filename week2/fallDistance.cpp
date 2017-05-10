/****************************************************************************************************************
 ** Author: Brett Stephenson
 ** Date: 1/12/2016
 ** Description: Function tells you the distance that an obkect will fall in a specific amount of time.
 * ***************************************************************************************************************/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;


/***************************************************************************************************************
 *  
 *                                                fallDistance
 *
 *  This function displays the distance and object has fallen after time t
 ***************************************************************************************************************/

double fallDistance(double t)

{
   double d;  //distnace
   const double g = 9.8;  // acceleration due to gravity

   //prompt for input
   cout << "How long has the object been falling?" << endl;
   cin >> t;

   //calculate
   d = (g * (t *t))/2;

   // return d
    return d;
}
   


int main()
{
   double t;
   fallDistance(t);
   cout << endl;
 
  return 0;
}
