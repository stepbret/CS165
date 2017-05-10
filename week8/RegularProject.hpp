/*********************************************************************
 ** Author: Brett Stephenson
 ** date: 2/23/2016
 ** Description: This is the header file for the derived class of the
                 CustomerProject
 * ********************************************************************/

#include "CustomerProject.hpp"
#ifndef REGULARPROJECT_HPP
#define REGULARPROJECT_HPP

class RegularProject : public CustomerProject {
  public:
    RegularProject(double hrs, double mtrls, double trans);
    virtual double billAmount();
};

#endif 

