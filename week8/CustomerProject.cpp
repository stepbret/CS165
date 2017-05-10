/***********************************************************************
 ** Author: Brett Stephenson
 ** date: 2/23/2016
 ** Description: This is the interface file for the CustomerProject
 * *********************************************************************/
#include "CustomerProject.hpp"
#include <iostream>

/***********************************************************************
 *                          CustomerProject Constructor
 * description: Constructor for the class, takes 3 doubles and sets them
 *              to the private variables
 * ********************************************************************/
CustomerProject::CustomerProject(double hrs, double mtrls, double trans) {
  setHours(hrs);
  setMaterials(mtrls);
  setTransportation(trans);
}

/***********************************************************************
 *                          setHours
 * description: Set the hours to the private variables
 * ********************************************************************/
void CustomerProject::setHours(double hrs) {
  hours = hrs;
}

/***********************************************************************
 *                         etMaterials
 * description: sets the materials to the private variable
 * ********************************************************************/
void CustomerProject::setMaterials(double mtrls) {
  materials = mtrls;
}
  
/***********************************************************************
 *                         setTransportation
 * description: sets the transportation to the private variable
 * ********************************************************************/
void CustomerProject::setTransportation(double trans) {
  transportation = trans;
}

/***********************************************************************
 *                         getHours
 * description: returns the amount of hours
 * ********************************************************************/
double CustomerProject::getHours() {
  return hours;
}

/***********************************************************************
 *                         getMaterials
 * description: sets the materials to the private variable
 * ********************************************************************/
double CustomerProject::getMaterials() {
  return materials;
}

/***********************************************************************
 *                         getTransportation
 * description: returns transportation
 * ********************************************************************/
double CustomerProject::getTransportation() {
  return transportation;
}

/*
int main() {
  CustomerProject p1(3.0,4.5,8.0);
  std::cout << p1.getHours() << std::endl;

  return 0;
}
*/
