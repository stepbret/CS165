/************************************************************************
 ** Author: Brett Stephenson
 ** Date: 2/23/2016
 ** Description: This is the interface file for the ShiftVec template 
 **              class. 
 * *********************************************************************/

#include "ShiftVec.hpp"
#include <vector>
#include <iostream>
#include <string>
/************************************************************************
 *                          ShiftVec constructor
 * Description: This takes a vector as a parameter and initialize it to 
 *              the template data member
 * **********************************************************************/
template <class T>
ShiftVec<T>::ShiftVec(std::vector<T> v) {
   vect = v;
}



/************************************************************************
 *                          shiftRight
 * Description: This takes an int parameter and shifts all the values to 
 *              the right by that much
 * **********************************************************************/
template <class T>
void ShiftVec<T>::shiftRight(int rght) {
  
/*  int end = (vect.size()-0);
  for (int y = 0; y < rght; y++) {
    T temp = vect.back();
    for (int x = 0; x < end; x++) {
      std::swap(vect[end-x], vect[end-(x+1)]);
          }
          vect.front() = temp;
          }
          }*/
//there's a really funny story about this code
//
  int shift = rght % vect.size();
  std::vector<T> copyVect(vect);
  //while (vect.front() != 
  int middle = shift;
  for (int i = 0 ; i < vect.size(); i++) {
    vect[shift] = copyVect[i];
    if (shift == (vect.size()-1)) {
        shift = 0;
    }else {
     shift++;
    }
  } 
}

/************************************************************************
 *                          shiftLeft
 * Description: This takes an int parameter and shifts all the values to 
 *              the right by that much
 * **********************************************************************/
template <class T>
void ShiftVec<T>::shiftLeft(int lft) {
 
 /* int end = (vect.size()-0);
  for (int y = 0; y < lft; y++) {
    T temp = vect.front();
    for (int x = 0; x < end; x++) {
      std::swap(vect[x], vect[(x+1)]);
          }
          vect.back() = temp;
          }
          }*/
// this code too WE LEARNED THAT BOOLS ARE STORED AS 1 BIT, AND YOU CAN'T POINT TO A BIT
//
  int shift = lft % vect.size();
  std::vector<T> copyVect(vect);
  shift = vect.size() - shift;
  //int middle = shift;
  for (int i = 0; i < vect.size(); i++) {
    vect[shift] = copyVect[i];
    if (shift == vect.size() -1) {
      shift = 0;
    } else {
      shift++;
    }
  }
}

/************************************************************************
 *                          getVec
 * Description: Returns the vec data member
 * **********************************************************************/
template<class T>
std::vector<T> ShiftVec<T>::getVec() {
  return vect;
}


/*
template ShiftVec<int>::ShiftVec(vector<int> v);
template ShiftVec<double>::ShiftVec(vector<double> v);
template ShiftVec<bool>::ShiftVec(vector<bool> v);
template ShiftVec<std::string>::ShiftVec(vector<std::string> v);*/
template class ShiftVec<double>;
template class ShiftVec<bool>;
template class ShiftVec<std::string>;
template class ShiftVec<int>;

/*
int main() {
  
  std::vector<int> myVec;
  for (int i = 0; i < 5; i++) {
    myVec.push_back(i);
  }
  std::cout <<"The size of myVec: " <<  myVec.size() << std::endl;
  ShiftVec<int> sv(myVec);
  sv.shiftLeft(12);
  std::vector<int> result = sv.getVec();
  for (int k = 0; k < result.size(); k++) {
    std::cout << result[k] << std::endl;
  }
 return 0;

}
*/










