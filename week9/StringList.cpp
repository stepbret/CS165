/**************************************************************************
 ** Author: Brett Stpehenson
 ** Date: 2/28/2016
 ** Description: This is the interface file for the StingList linked list
 **              it includes a copy constructor   
 * ***********************************************************************/

#include "StringList.hpp"

#include <vector>
#include <string>
#include <iostream>

/*************************************************************************
 *                          Constructor 
 * Description: Default constructor for the linked list, starting point
 * **********************************************************************/
StringList::StringList() {
  head = NULL;
}

/*************************************************************************
 *                         Copy Constructor 
 * Description: Copy constructor will provide a deep copy of the linked
 *              Should cycled through the linked list and add a new node
 *              for each
 * **********************************************************************/
StringList::StringList(const StringList &list) { 
 ListNode *nodePtr = list.head; // assign pointer to head of list
 //delete head;
 std::string strcpy = nodePtr->str;
 this->head = new ListNode(strcpy);
 while (nodePtr != NULL) {  //while the nodePtr is not the last element 
   strcpy = nodePtr->str;
   this->add(strcpy);
   nodePtr = nodePtr->next;
  // delete
 }
}
/*************************************************************************
 *                           Overloaded  =
 * Description: Default constructor for the linked list, starting point
 * **********************************************************************/
StringList StringList::operator=(const StringList &RHS) {
  ListNode *nodePtr = RHS.head;
  delete head;
  std::string strcpy = nodePtr->str;
  this->head = new ListNode(strcpy);
  nodePtr = nodePtr->next;
    while (nodePtr != NULL) {
      strcpy = nodePtr->str;
      this->add(strcpy); //copy the Right hand sides str value over to this one
      nodePtr = nodePtr->next;  //move on to the next node
    }
 return *this;
}
/************************************************************************
 *                          add
 * Description: Will cycle through the linked list and place a node at 
 *              the end of the list
 * *********************************************************************/
void StringList::add(std::string strIn) {
  if (head == NULL)
    head = new ListNode(strIn);
  else {
    ListNode *nodePtr = head;
    while (nodePtr->next != NULL)
      nodePtr = nodePtr->next;
    nodePtr->next = new ListNode(strIn);
  }
}
/*************************************************************************
 *                      positinOf                                                     
 * Description: Returns the position in the list for the first occurance
 *              of the parameter. otherwise return -1 
 *************************************************************************/
int StringList::positionOf(std::string strCompare) {
  ListNode *nodePtr = head;
  int pos = 0;
  while (nodePtr->str != strCompare) {
    pos++;
    nodePtr = nodePtr->next;
    if (nodePtr == NULL)
      return pos = -1;
  }
  return pos;
}

/*************************************************************************
 *                      setNodeVal                                                     
 * Description: Sets the value of the node at that position to the value
 *             to the value of the string parameter 
 *************************************************************************/
bool StringList::setNodeVal(int pos, std::string insert) {
  ListNode *nodePtr = head;
  //int count = 0;
  for (int x = 0; x < pos; x++) {
     if(nodePtr->next == NULL)
      return false;
      nodePtr = nodePtr->next;
    
  }
  nodePtr->str = insert;
  return true;
}

/***********************************************************************
 *                      getAsVector
 * Description: This will return the list as a vector
 * *********************************************************************/
std::vector<std::string> StringList::getAsVector() {
  ListNode *nodePtr = head;
  std::vector<std::string> vout;
  while( nodePtr != NULL) {
    vout.push_back(nodePtr->str);
    nodePtr = nodePtr->next;
  }
  return vout;
}

/***********************************************************************
 *                      Desctructor
 * Description: Deallocates the memory for the class
 * ********************************************************************/
StringList::~StringList() {
  ListNode *nodePtr = head;

  while (nodePtr != NULL) {
    ListNode *garbage = nodePtr;
    nodePtr = nodePtr->next;
    delete garbage;
  }
}
/*
int main () {
  std::string string1("This String");
  std::string string2("Other String");
  StringList s1;
  s1.add("This String");
  s1.add(string2);
  s1.add("Last String");

  std::vector<std::string> vect = s1.getAsVector();

  //lil'print loop
  std::cout << "First loop" << std::endl;
  for(int x = 0; x <3; x++) {
    std::cout << vect[x] << std::endl;
  }
  
  s1.setNodeVal(3,"Final String");
  vect = s1.getAsVector();
 
  //second lil print loop
  std::cout << "Second loop of vect" <<std::endl;
  for(int x = 0; x <3; x++) {
    std::cout << vect[x] << std::endl;
  }
 int position;
 position = s1.positionOf(string2);
 std::cout <<"Position of string2" << std::endl
 << position << std::endl;

 StringList s2;
 s2 = s1;
 std::vector<std::string>vect2 = s2.getAsVector(); 
  for(int x = 0; x <3; x++) {
    std::cout <<"This is in vect2: " <<  vect2[x] << std::endl;
  }
 s2.setNodeVal(1, "More String");
 vect2 = s2.getAsVector();
  for(int x = 0; x <3; x++) {
    std::cout <<"This is in vect2: "<< vect2[x] << std::endl;
  }
  
  for(int x = 0; x <3; x++) {
    std::cout << vect[x] << std::endl;
  }
  return 0;

}
*/

