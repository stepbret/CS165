/*****************************************************************************
 ** Author: Brett Stephenson
 ** Date: 2/23/2016
 ** Description: This is the header file for the customerproject class
 * **************************************************************************/
#ifndef CUSTOMERPROJECT_HPP
#define CUSTOMERPROJECT_HPP

class CustomerProject {
  protected:
    double hours, materials, transportation;
  
  public:
    //CustomerProject();
    CustomerProject(double hrs, double mtrls, double trans);
    void setHours(double hrs);
    void setMaterials(double mtrls);
    void setTransportation(double trans);
    double getHours();
    double getMaterials();
    double getTransportation();
    virtual double billAmount() const = 0;

};
#endif


