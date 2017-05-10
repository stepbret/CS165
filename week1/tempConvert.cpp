/****************************************************************************************************************
 * * Author: Brett Stephenson
 * * Date: 1/5/2016
 * * Description: Converts Celsius into Fahrenheit
 * **************************************************************************************************************/

#include <iostream>
using namespace std;

int main() 
{
  double celsius;
  double fahrenheit;
 
 cout << "Please enter a Celsius temperature." << endl;
 cin >> celsius;

 fahrenheit = (((celsius * 9) / 5) +32);

 cout << "The equivalent Fahrenheit temperature is:" << endl;
 cout << fahrenheit << endl;

 return 0;
}  
