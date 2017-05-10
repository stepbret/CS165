/***************************************************************************************************************
 ** Author: Brett Stephenson
 ** Date: 1/22/2016
 ** Description: This function will sort an array of strings alphabetically
 * ************************************************************************************************************/

#include <string>
#include <cctype>
#include <iostream>
#include <algorithm>
#include <locale>

using std::toupper;
using std::string;
using std::cout;
using std::endl;

/***********************************************************************************************************
 *						stringUpper
 *Description: Converts letters to uppercase in order to compare properly 
 * *********************************************************************************************************/

string stringUpper (string str) {
  for(int i = 0; i < str.length(); i++) {
    str.at(i) = toupper(str.at(i));
  }
  return str;
}

/***********************************************************************************************************
 *						stringSort
 *Description: This function will use a selection sort to sprt alphabetically 
 * *********************************************************************************************************/
void stringSort (string array[], int size)
 {
  
  //declare starting points and holdin values
  int startScan, minIndex;
  string minValue;

  //start loop and assign the variables
  for (startScan = 0; startScan < size - 1; startScan++)
  {
    minIndex = startScan;
    minValue = array[startScan];
    	
	//start second loop and compare values
	for(int index = startScan + 1; index < size; index++)
	  {
	 
	  // if the first value is less than the second value, place the second value in the correct spot
	  if (stringUpper(array[index]) < stringUpper(minValue))
	    {
		minValue = array[index];
		minIndex = index;
	    }
	  }
	array[minIndex] = array[startScan];
	array[startScan] = minValue;
  }
 
//print the values
 for (int i = 0; i < size; i++) {
   cout << array[i]<< endl;
 }
}
/*
int main() {
 string test[] = {"Alligator", "Zebra", "charlie", "kelso"};
 int num = 4;
 stringSort(test, num);
 for (int i = 0; i < num; i++) {
   cout << test[i] << endl;
  }  
return 0;
} */
