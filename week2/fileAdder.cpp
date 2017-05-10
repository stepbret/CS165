/*****************************************************************************************************************
 ** Author: Brett STephenson
 ** Date: 1/12/2016
 ** Description: This program takes a file for input and adds all the integers in the file.
 * ***************************************************************************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;

int main()
{
  ifstream inputFile;  //Declare object
  ofstream outputFile; // declare ofstream object
  string fileName;     // name of the file to be opened
  int fileNumbers = 0; // varible for the number of integers
  int total = 0;       // the sum of the numbers

  // get the filename from the user
  cout << "Which file would you like to add together?" << endl;
  cin >> fileName;

  //open the file
  inputFile.open(fileName.c_str());
  if (inputFile)
  {  
  //loop until the end of the file
    while (inputFile >> fileNumbers) // if a number was read
    {    total += fileNumbers;
    }
 

  //open the output file
  outputFile.open("./sum.txt");
  
  // write the sum to the file
  outputFile << total;

  //close the file
  outputFile.close();
 
  //close the file
  inputFile.close();

 }
  //File could not be accessed
  else
   cout << "File could not be accessed" <<endl;
  
  return 0;
}
