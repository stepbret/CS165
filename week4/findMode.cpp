/****************************************************************************************************************
 ** Author: Brett Stephenson
 ** Date: 1/26/2016
 ** Description: This function wil find the mode of a set of data that is passed to an array
 * *************************************************************************************************************/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*************************************************************************************************************
 *                                             Find Mode
 *Loops through the array to find the number used the most in the array
 *************************************************************************************************************/
vector <int> findMode(int inputArray[], int size) {

  int compareArray [size];
  int frequency = 0;
  int countArray [size];
  int data = inputArray[0]; 
 
//copy all values from the input arrau into the compare array
 for(int c = 0; c < size; c++) {
	compareArray[c] = inputArray[c];
}

// sort the array to compare values to previous values
  sort(inputArray, inputArray + size);
  sort(compareArray, compareArray + size);


// loop through each value of the array and figure out how many times the number shows up
// If it matches. tick the frequency counter. 
// Do I need to store the freq in a different array?
// only output values who haven't been seen yet
 for(int i = 0; i < size; i++) {
	for (int j = 0; j < size; j++) {
		if (compareArray[i] == inputArray[j]) {
				frequency++;
			}
		} 

	countArray[i] = frequency;
	frequency = 0;
}

/*
 for (int h = 0; h < size; h++) {
	cout << countArray[h] << endl;
     }
 cout << "This is the end of the count array" << endl;
*/


//Initialize the max variable to the first number and define the vector
  int max;
  vector<int> result;

//loop through the frequency array and place the values who correspond in the vector
  for(int m = 0; m < size; m++) {
       if (max <= countArray[m]) {
	max = m;	
         	
    }
   
        result.push_back(inputArray[max]);
        
 }

// sort the vector and return the vector
 sort(result.begin(), result.end());

// cout << result[max] << endl;
/*for (int y = 0; y < max; y++) {
cout << result[y] << endl;
}*/
 
 //cout <<  result[size] <<endl;  
return result;
    
}
/*
int main() {
  
  int inArray[] = {3,-2,-3,1,1,1,1,1,1,1,5,432};
  int sizeA = 12;
  findMode(inArray, sizeA);
 

return 0;
}*/
