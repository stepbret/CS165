/******************************************************************************************************************
 * * Author: Brett Stephenson
 * * Date: 1/5/2016
 * * Description: To average 5 numbers
 * ***************************************************************************************************************/

#include <iostream>
using namespace std;

int main()
{
  double a, b, c, d, e;
  double average;

  cout << "Please enter five numbers." << endl;
  cin >> a >> b >> c >> d >> e;

  average = (a + b + c + d +e) / 5;

  cout << "The average of those numbers is:" << endl;
  cout << average << endl;

  return 0;
}    
