/***********************************************************************
 ** Author: Brett Stephenson
 ** Date: 2/23/2016
 ** Description: The interface file for the Regular project derived class
 * **********************************************************************/

#include "RegularProject.hpp"
#include "CustomerProject.hpp"
                    
/****************************************************************************
 *                          RegularProject 
 * Description: Constructor for the derived class
 ***************************************************************************/
RegularProject::RegularProject(double hrs, double mtrls, double trans) : CustomerProject(hrs, mtrls, trans) {
  //setHours(hrs);
  //setMaterials(mtrls);
  //setTransportation(trans);
}


/****************************************************************************
 *                          billAmount                           
 * Description: overides billAmount so that it calculates the proper amount 
 *              for the class, $80 * hours
 ***************************************************************************/
double RegularProject::billAmount() {
  return hours * 80;
}
