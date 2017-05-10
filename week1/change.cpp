/*******************************************************************************************************************
 * * Author: Brett Stephenson
 * * Date: 1/5/2016
 * * Description: Returns number of coins for change.
 * *****************************************************************************************************************/

#include <iostream>
using namespace std;

int main() {

  int change, Q, D, N, P;

  cout << "Please enter an amount in cents less than a dollar." << endl;
  cin >> change;

  Q = change/25;
  change = change%25;

  D = change/10;
  change = change%10; 
  
  N = change/5;
  change = change%5;

  P = change;

  cout << "Your change will be:" << endl;
  cout << "Q: " << Q << endl;
  cout << "D: " << D << endl;
  cout << "N: " << N << endl;
  cout << "P: " << P << endl;

  return 0;
} 
