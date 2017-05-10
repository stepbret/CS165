/***************************************************************************
 ** Author: Brett Stephenson
 ** Date: 3/5/2016
 ** Description: This is the header file for the TicTacToe class
 * *************************************************************************/

#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

#include "Board.hpp"

class TicTacToe {
  private:
    friend class Board;
    int turn;
    char player[2];
  public:
    TicTacToe(char starter[]);
    void play();
};
#endif

