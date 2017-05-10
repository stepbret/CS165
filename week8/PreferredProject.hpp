/*************************************************************************
 ** Author: Brett Stephenson
 ** Date: 1/23/2016
 ** Description: This si the head file for the PreferredProject derfived
                class from the customerProject class
 * **********************************************************************/

#include "CustomerProject.hpp"
#ifndef PREFERREDPROJECT_HPP
#define PREFERREDPROJECT_HPP

class PreferredProject : public CustomerProject {
  public:
    PreferredProject(double hrs, double mtrls, double trans);
    virtual double billAmount() const;

};
#endif
