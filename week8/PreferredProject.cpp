/*********************************************************************
 ** Author: Brett Stepheneson
 ** date: 2/23/2016
 ** Description: This is the interface file for the preffered object
                 class
 * *******************************************************************/

#include "PreferredProject.hpp"
#include "CustomerProject.hpp"

/********************************************************************
 *                          PreferredProject constructor
 * Description: constructor takes 3 doubls and passes them to the
 *              set methods
 * *****************************************************************/
PreferredProject::PreferredProject(double hrs, double mtrls, double trans): CustomerProject(hrs, mtrls, trans) {
 // setHours(hrs);
 // setMaterials(mtrls);
 // setTransportation(trans);
}

/******************************************************************
 *                      billAmount
 * Description: This is an overloaded function to provide billing
 *              for the project. 
 * ****************************************************************/
double PreferredProject::billAmount() const {
  if (hours > 100) {
    return 8000 + (materials * 0.9) + (transportation * 0.85);
  } else {
    return (hours * 80) + (materials * 0.9) + (transportation * 0.85);
  }
}

