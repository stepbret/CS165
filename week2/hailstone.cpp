/*****************************************************************************************************************
 ** Author: Brett Stephenson
 ** Date: 1/12/2016
 ** Description: A function that performs a hailstone sequence in which a series of operations is
 ** performed until 1 is reached
 * ****************************************************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/******************************************************************************************************************
 * * Description: this function with take an inout positive integer and you divide by two
 * * to get to the next number in the sequence, if the number is odd then the integer should be multiple by 3
 * * and add one then divide by 2.
 * ***************************************************************************************************************/

int hailstone(int number)
{
   
   int counter = 0; //number of times it has looped

   // While loop so that if 1 is enter it will not loop
   while ( number != 1) {
	// if statement to determine the next sequence
 	if ( number % 2 == 0) {
	   number = (number / 2);
	}
	else {
	   number = ((number * 3) + 1);
	}
	// counter
	counter++;
    

    // if the function correct?
    // cout << number << endl;

  }
 // returns the number of steps it took
 return counter;
}


/*
int main()
{
  int number; //define number
  int counter;  //define counter

  //get number
  cout << "What number to start with" <<endl;
  cin >> number;

  //set counter to the thing
  counter =  hailstone(number);
  
  // where is the counter
  cout << counter << endl;

return 0;
}*/
