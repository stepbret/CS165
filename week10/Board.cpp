/**************************************************************************
 ** Author: Brett Stephenson
 ** Date: 3/5/2016
 ** Description: The interface file for the board class
 * ************************************************************************/

#include "Board.hpp"
#include <iostream>

/**************************************************************************
 *                          Constructor
 * Description: Takes the constructor and initializes the board array to .
 * ***********************************************************************/
Board::Board() {
 for (int x = 0; x < 3; x++) {
   for (int y = 0; y < 3; y++) {
     board[x][y] = '.';
   }
 }
}

/*************************************************************************
 *                          makeMove
 * Dscription: Allows the player to make a move
 * **********************************************************************/
bool Board::makeMove(int xMove, int yMove, char player) {
  //std::cout << "Please enter your move." <<std::endl;
  if (board[xMove][yMove] == '.') {
    board[xMove][yMove] = player;
    return true;
  } else {
    std::cout << "that square is already taken." << std::endl;
    return false;
  }
}

/************************************************************************
 *                          gameState
 * Description: This is keeps track of the state of the game
 * **********************************************************************/
state Board::gameState() {
  //row 1 check
  if (board[0][0] == 'x' && board[0][1] == 'x' && board [0][2] == 'x'){
    std::cout << "x wins!" << std::endl;
    return xWin;
  }
  if (board[0][0] == 'o' && board[0][1] == 'o' && board [0][2] == 'o'){
    std::cout << "o wins!" << std::endl;
      return oWin;
  }
  // row 2 check
  if (board[1][0] == 'x' && board[1][1] == 'x' && board [1][2] == 'x'){
    std::cout << "x wins!" << std::endl;
    return xWin;
  }
  if (board[1][0] == 'o' && board[1][1] == 'o' && board [1][2] == 'o'){
    std::cout << "o wins!" << std::endl;
    return oWin;
  }
  //row 3 check
  if (board[2][0] == 'x' && board[2][1] == 'x' && board[2][2] == 'x'){
    std::cout << "x wins!" << std::endl;
   return xWin;
  }
  if (board[2][0] == 'o' && board[2][1] == 'o' && board[2][2] == 'o'){
    std::cout << "o wins!" << std::endl;
   return oWin;
  }

  //column 1 check
  if (board[0][0] == 'x' && board [1][0] == 'x' && board [2][0] == 'x'){
    std::cout << "x wins!" << std::endl;
    return xWin;
  }
  if (board[0][0] == 'o' && board [1][0] == 'o' && board [2][0] == 'o'){
    std::cout << "o wins!" << std::endl;
    return oWin;
  }
  //column 2 check
  if (board[0][1] == 'x' && board[1][1] == 'x' && board [2][1] == 'x') {
    std::cout << "x wins!" << std::endl;
    return xWin; 
  }
  if (board[0][1] == 'o' && board[1][1] == 'o' && board [2][1] == 'o') {
    std::cout << "o wins!" << std::endl;
    return oWin;
  }
  //column 3 check
  if (board[0][2] == 'x' && board[1][2] == 'x' && board [2][2] == 'x'){
    std::cout << "x wins!" << std::endl;
    return xWin; 
  }
  if (board[0][2] == 'o' && board[1][2] == 'o' && board [2][2] == 'o'){
    std::cout << "o wins!" << std::endl;
    return oWin; 
  }
 //backslash check
  if (board[0][0] == 'x' && board[1][1] == 'x' && board [2][2] == 'x') {
    std::cout << "x wins!" << std::endl;
    return xWin;
  }
  if (board[0][0] == 'o' && board[1][1] == 'o' && board [2][2] == 'o') {
    std::cout << "o wins!" << std::endl;
    return oWin;
  }
  //forwardslash check
  if (board[0][2] == 'x' && board[1][1] == 'x' && board [2][0] == 'x'){
    std::cout << "x wins!" << std::endl;
    return xWin;
  }
  if (board[0][2] == 'o' && board[1][1] == 'o' && board [2][0] == 'o'){
    std::cout << "o wins!" << std::endl;
    return oWin;
  }

  //initilaze a counter 
  int counter = 0;
  for (int x = 0; x<3; x++) {
    for (int y = 0; y<3; y++) {
     if(board[x][y] != '.') {
       counter++;
       //std::cout << "Made it to the counter" << counter << std::endl;
     }
    }
  }
  if (counter == 9){
    std::cout << "It's a draw!";
    return draw;
  }
   else {
    return inProg;
  }
}
/************************************************************************
 *                          print Board
 * Description: This will orint the state of the board
 * *********************************************************************/
void Board::print() {
  std::cout << " 0 "<< "1 " << "2" << std::endl;
  for (int i = 0; i<3; i++) {
    std::cout << i;
    for (int j = 0; j<3; j++) {
      std::cout << board[i][j] << " ";
    }
    std::cout << std::endl;
  }
}
/*
int main() {
  Board b1;
  b1.print();
  b1.makeMove(1,1,'X');
  b1.print();
  b1.makeMove(2,2,'X');
  b1.print();
  b1.makeMove(2,2,'O');
  b1.print(); 
return 0;
}
*/
