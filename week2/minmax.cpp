/*************************************************************************************************************
 ** Author: Brett Stephenson
 ** Date:1/12/2016 
 ** Description: This program finds the minimum and maximum values for a set of interegers entered by the user
 * ***********************************************************************************************************/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
  int numInt;  //number of entries
  int max = -10000; // max value to be printed
  int min = 10000; // min value to be printed

   //Get number of integers to be entered
   cout << "How many integers would you like to enter?" << endl;
   cin >> numInt;
   cout << "Please enter " << numInt << " integers." << endl;

   //Read each number and compare to the others
   for (int a = 1; a <= numInt; a++)
   { 
    int entry;

    cin >> entry;

      // checks to see if the entered value is larger or smaller than the current min and max
    if (entry < min){
	min = entry;          
      }
    else if(entry > max) {
            max = entry;
      }
     
    }

  //prints the min and max values
   cout << "min: " << min << endl;
   cout << "max: " << max << endl; 


  return 0;
}


