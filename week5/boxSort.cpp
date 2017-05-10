/**************************************************************************************************************
 ** Author: Brett Stephenson
 ** Date: 2/2/2016
 ** Description: Bubble sort that will sort an array of Boxes from greatest volume to least volume. 
 * ***********************************************************************************************************/

#include "Box.hpp"
#include <iostream>

/***************************************************************************************************************
 *						boxSort
 * Description: this function will use a bubble sorting mechanism to sort and array of objects called 
 * boxes from greatest volume to elast volume. 
 * ************************************************************************************************************/

void boxSort(Box array[], int size)
{
  Box temp;
  bool swap;

  do
   { 
     swap = false;
     for (int count = 0; count < (size -1); count++)
	{
	  if (array[count].getVolume() < array[count + 1].getVolume())
	  {
	   temp = array[count];
	   array[count] = array[count + 1];
	   array[count + 1] = temp;
	   swap = true;
	  }
	}
   } while(swap);
}

/*
void display(Box array[], int size)
{
 for (int i = 0; i <size; i++) {
	std::cout << array[i].getVolume() << std::endl;  
  }
}
int main () {
  Box box1(3, 2, 6);
  Box box2(432,1,45);
  Box box3(3, 4, 5);

  Box boxArray [] = {box1, box2, box3};
  int num = 3;
  boxSort(boxArray, num);
  display(boxArray, num);
  for (int i = 0; i < num; i++) {
	std::cout << boxArray[i] << std::endl;
	}
return 0;
}*/
