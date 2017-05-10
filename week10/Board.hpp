/**************************************************************************
 ** Author: Brett Stephenson
 ** Date: 3/5/2016
 ** Description: This is the header file for the board class
 * ***********************************************************************/

#ifndef BOARD_HPP
#define BOARD_HPP
#include <string>

enum state {xWin, oWin, draw, inProg};

class Board {
  private:
   char board[3][3];

  public:
    Board();
    bool makeMove(int xMove, int yMove, char player);
    state gameState();
    void print();
};

#endif
