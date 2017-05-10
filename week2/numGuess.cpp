/*****************************************************************************************************************
 ** Author: Brett Stephenson
 ** Date: 1/12/2016
 ** Description: A game that allows the user to provide a number for the player to guess and will continue until the  **   number is guessed
 * ****************************************************************************************************************/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
   int num;  //number for the player to guess
   int guess; // guesses that they have tried
   int tries = 0 ;  //number of tries

   //Getting the number
   cout << "Enter the number for the player to guess." << endl;
   cin >> num;
 
   // the guessing game starts
   cout << "Enter your guess." << endl;

   do 
   {
      // get user guess, incriment tries
   cin >> guess;
   tries++;

   // if/then to decide if the number matches
      if (guess == num){
         cout << "You guess it in " << tries << " tries." << endl;
         }
      else if (guess > num){
      cout << "Too high - try again." << endl;
         }
      else if (guess < num){
      cout << "Too low - try again." << endl;
         }
   } while ( guess != num);

  return 0;
}
