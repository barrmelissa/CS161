#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP
#include "Board.cpp"
#include <iostream>
using namespace std;


// Defining class TicTacToe
class TicTacToe
{
private:
    Board newBoard;
    char player;
public:
    TicTacToe(char player);
    void play(int x, int y, char player);
    
};

#endif
