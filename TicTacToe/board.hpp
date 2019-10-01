#ifndef BOARD_HPP
#define BOARD_HPP
#include <string>
using namespace std;


enum gameState {X_WON, O_WON, DRAW, UNFINISHED};

// Class Board declared
class Board
{
private:
    char board[3][3];
    //int startgame; // Do I need this??
    
public:
    // Default constructor
    Board();
    // Bool to make move based on each players turn
    bool makeMove(int x, int y, char player);
    // Returns who wins the game
    int gameState();
    // Prints the board
    void print();
    
};

#endif
