/*********************************************************************************
 ** Author : Brett Stephenson
 ** Date: 2/223/2016 
 ** Description: Template header for class that makes vecotrs.
 * ******************************************************************************/

#ifndef SHIFTVEC_HPP
#define SHIFTVEC_HPP

#include <vector>

template <class T> 
class ShiftVec {
  private:
    std::vector<T> vect;
  public:
    ShiftVec(std::vector<T> v);
    std::vector<T> getVec();
    void shiftRight(int shift);
    void shiftLeft(int shift);
};


#endif
