/**********************************************************************************************
 ** Author: Brett Stephenson
 ** Date: 1/8/2016
 ** Description: Will convert decimal integers into binary, and binary in decimal integers
 * *******************************************************************************************/
#include <iostream>
#include <string>
#include <cmath>

using std::string;

/*****************************************************************************************
 *					binToDec
 *		Description: Converts a binary number to an integer
 * **************************************************************************************/

int binToDec (string str, int counter) {
 
  // base case, if counter is equal to 0 then stop the function
 if (counter == 0) {
   return 0;
  }
 else {
  //if there is a '1' in that spot, count the number and divide by a power of 2 for the recursive
  if (str[8-counter] == '1') {
   return (128 /( std::pow(2,(8 - counter)))) + binToDec(str, counter - 1);
   }

  //if there is a 0 in the spot then move on and don't add the proper number
  else {
   return binToDec(str, counter -1);
   } 
  }
}

int binToDec(string st) {
  return binToDec(st, 8);
}

/*****************************************************************************************
 *					decToBin
 *		Description: Converts a binary number to an integer
 * **************************************************************************************/
string decToBin (int num) {

  //  if the number entered is 0 otherwise fall through
  if(num == 0 )
    return "0";
  // if the number is equal to 1 add a 1, otherwise fall through
  if(num == 1) 
    return "1";
  // if the modulus of the number is equal to 0 put a 0
  if(num % 2 == 0)
     return decToBin(num / 2) + "0";
  //else throw out a 1 if none of those condidions are met
  else 
     return decToBin(num / 2) + "1";

}

/*
int main() {
 int num = 10;
 std::cout << decToBin(num) << std::endl;
 return 0;
}*/
