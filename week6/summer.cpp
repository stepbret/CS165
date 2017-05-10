/********************************************************************************************************
 ** Authro: Brett Stephenson
 ** Date: 2/8/2016
 ** Description: Recursive function that takes an array and the size and returns the sum of the array
 *********************************************************************************************************/

/*********************************************************************************************************
 *						summer
 * Description: recursive function that will the values of an array
 * ********************************************************************************************************/
#include <iostream>


double summer (double array[], int size) {
     double sum;  //sum of the values
     int index;   //array index
 
   if (size == 0) {
	return 0;
	}
	 else {
	return  array[0] + summer(array + 1, size - 1);
	}
}
/*
int main() {
  double sum[] = {-11,11,11,-11,11,-11};
  int size = 8;
  std::cout <<  summer(sum, size) << std::endl;
 return 0;
} */
