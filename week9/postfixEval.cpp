/*******************************************************************************
 ** Author: Brett Stephenson
 ** Date: 2/29/2016
 ** Description: This a postfix evaluation of an expression. Which means that
 **   ir take a c-style string, put elements on a stack and then pop them back 
 **   off when it sees a number, then perform the operation when it sees an
 **   operand
 * ****************************************************************************/
#include <cstring>
#include <iostream>
#include <stack>
#include <cstdlib>
#include <cctype>

double postfixEval (char in[]) {
  std::stack<double> nums;
  double eval;
  char *input;
  input = std::strtok(in, " ");  //break string into first token
  while (input != NULL) {
    float strNum = 0;
    if (isdigit(input[0])) {  // if the token is a digit, put it on the stack
        float strNum = atof(input);
        nums.push(strNum);
        }
    else {
        double first = 0.0;  //initialize a 'first' variable
        double second = 0.0; //initiale a second variable
        first = nums.top();  // get the first num
        nums.pop();          // delete it off the top
        second = nums.top(); // assign second number
        nums.pop();          // delete off the top
        if(input[0] == '+') {
          eval = second + first;
          }
        else if (input[0] == '-') {
          eval = second - first;
          }
        else if (input[0] == '*') {
          eval = second * first;
          }
        else if(input[0] == '/') {
          eval = second / first;
          }
        nums.push(eval);
    }
    input = std::strtok(NULL, " "); //continue where the previous token left off
  }
  return nums.top();
}
/*
int main() {
  char cStyleString[] = "10 2 8 * + 3 -";
  std::cout << "The eval is " << postfixEval(cStyleString) << std::endl;
  return 0;
} */
