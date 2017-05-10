/**************************************************************************
 ** Author: Brett Stephenson
 ** Date: 3/5/2016
 ** Description: this is the interface file for the TicTacToe class, and 
                 will play the game.
 * ************************************************************************/

#include "TicTacToe.hpp"
#include "Board.hpp"
#include <iostream>


/*************************************************************************
 *                              Constructor
 * Description: This is the constructor for the TicTacToe class
 * ***********************************************************************/
TicTacToe::TicTacToe(char starter[]) {
  player[0] = starter[0];
  //std::cout << "About to start playing" << std::endl;
  this->play();
}

/*************************************************************************
 *                              Play
 * Description: This starts the game adn keeps looping until the game is 
 *              finished
 * **********************************************************************/
void TicTacToe::play() {
  Board b1;
  //std::cout << "Created the board" <<std::endl;
  state gState = inProg;
  while (gState == inProg) {
    int x;
    int y;
    bool flag = true;
    do {
      std::cout << "Player " << player[0] << ": please enter your move." << std::endl;
      std::cin >> x >> y ; // get the moves
      flag = b1.makeMove(x, y, player[0]);
      b1.print();                    // print the board
    } while (flag == false);
    gState = b1.gameState();
    if (player[0] == 'x') {          // Switch who is who
      player[0] = 'o';
    }
    else {
      player[0] = 'x';
    }
  }
}

int main() {
  char playStart[2]; //hold the variable for who is playing
  std::cout << "Which player should go first?" << std::endl;
  std::cin >> playStart[0];
  TicTacToe game1(playStart);
 // game1.play();

 return 0;
}
