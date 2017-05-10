/************************************************************************************
 ** Authot: Brett Stephenson
 ** Date: 2/28/2016
 ** Description: Linked list of strings that is a linked list that will list strings
                 this is the header file
 ***********************************************************************************/

#ifndef STRINGLIST_HPP
#define STRINGLIST_HPP

#include <string>
#include <vector>
class StringList {
  private:
    struct ListNode {
      std::string str;
      ListNode *next;
      ListNode(std::string strIn, ListNode *next1 = NULL) {
         str = strIn;
        next = next1;
      }
    };
    ListNode *head;

  public:
    StringList();
    ~StringList();
    StringList(const StringList& list);
    StringList operator= (const StringList& RHS);
    void add(std::string);
    int positionOf (std::string);
    bool setNodeVal(int, std::string);
    std::vector<std::string> getAsVector();
};

#endif

