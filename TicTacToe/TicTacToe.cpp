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

#include "Board.hpp"
#include <iostream>
using namespace std;


/*Default constructor that initializes the array to being empty
 which makes the tic-tac board empty
 */

Board::Board()
{
    //startgame = 0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            board[i][j] = '.';
        }
    }
}

/*Makes the move by taking the x and y coordinates and if the
 space is free returns true otherwise returns false
 */
bool Board::makeMove (int x, int y, char player)
{
    
    if (board[x][y] == '.')
    {
        board[x][y] = player;
        return true;
    }
    else return false;
}

int Board::gameState()
{
    /*Creates a for loop for the possible outcomes, makes less to write out
     checks if there is a win
     */
    for (int i = 0; i<3; i++)
    {
        
        // If there is a win, checks all the possiblilies of a tic tac toe using the for loop
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) || (board[0][i] ==
                                                                           board[1][i] && board[1][i] == board[2][i]) || (board[0][0] == board[1][1] &&
                                                                                                                          board[1][1] == board[2][2]) || (board[0][2] == board[1][1] && board[1][1] == board[2][0]))
        {
            // So we know someone won but this if statements now shows if player x has won
            if( (board[i][0] == 'x' && board[i][1] == 'x' && board[i][2] == 'x') || (board[0][i] ==
                                                                                     'x' && board[1][i] == 'x' && board[2][i] == 'x') || (board[0][0] == 'x' && board[1][1]
                                                                                                                                          == 'x' && board[2][2] == 'x') || (board[0][2] == 'x' && board[1][1] == 'x' && board[2][0] == 'x') )
            {
                return X_WON;
            }
            
            // Again someone has won and this else if statement now shows if player o has won
            else if( (board[i][0] == 'o' && board[i][1] == 'o' && board[i][2] == 'o') || (board[0][i] == 'o'
                                                                                          && board[1][i] == 'o' && board[2][i] == 'o') || (board[0][0] == 'o' && board[1][1] == 'o'
                                                                                                                                           && board[2][2] == 'o') || (board[0][2] == 'o' && board[1][1] == 'o' && board[2][0] == 'o') )
            {
                return O_WON;
            }
        }
        
    }
    
    /*If it goes through the above for loop and does not return anything
     then it goes down to this for loop which resutls in either DRAW or
     UNFINISHED
     */
    
    int temp = 0;
    // Counts the number of times it goes through the loop
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if(board[i][j] != '.')
            {
                temp++;
            }
        }
    }
    // Returns DRAW
    if (temp == 9)
    {
        return DRAW;
    }
    // Returns UNFINISHED
    else
    {
        return UNFINISHED;
    }
    
}

void Board::print()
{
    cout << " " << endl;
    for (int m=0; m<3; m++)
    {
        cout << " " << m;
    }
    cout << endl;
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (j == 0)
            {
                cout << i << " ";
            }
            cout << board[i][j] << " ";
            if (j == 2)
            {
                cout << endl;
            }
        }
    }
}



#endif
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
#include "TicTacToe.hpp"
#include <iostream>
using namespace std;


// Constructor that tells whether x or o should have the first move
TicTacToe::TicTacToe(char firstMove)
{
    player = firstMove;
}

/*Function that actually plays the game, it asks the player
 for their move and displays who wins
 */
void TicTacToe::play(int x, int y, char firstMove)
{
    int status = newBoard.gameState();
    
    
        do
        {
            int x; int y; char firstMove;
            // Has player enter move
            cout << "Player " << static_cast<char>(firstMove) <<
            "please enter your move.";
            
            cin >> x; cin >> y;
            
            // Checks if the move is valid
            if (newBoard.makeMove(int x, int y, char firstMove))
                {
                    // If the move is valid then it records the move
                    newBoard.makeMove(int x, int y, char firstMove);
                    // Then it prints the board state
                    newBoard.print();
                    // Then it updates the status of the game
                    status = newBoard.gameState();
                    if (firstMove == 'x')
                    {
                        firstMove = 'o';
                    }
                    else
                    {
                        firstMove = 'x';
                    }
                }
            else
                {
                    cout << "That square is already taken please choose another one." << endl;
                }

        }
    while (status == UNFINISHED);
        
                
        if (status == X_WON)
                {
                    cout << "Player X won!" << endl;
                    
                }
                
        else if (status == O_WON)
                {
                    cout << "Player O won!" << endl;
                }
                
        else if (status == DRAW)
                {
                    cout << "Draw!" << endl;
                }
    
}

int main()
{
    
    
    int x, y;
    char player;
    cout << "Which player should go first? Please enter 'x' for player x or 'o' for player o." << endl;
    cin >> player;
    
    if(player == 'x')
    {
        cout << "Player x! Please enter your move.";
        cin >> x; cin >> y;
    }
    
    else if(player == 'o')
    {
        cout << "Player o! Please enter your move.";
        cin >> x; cin >> y;
    }
    
    
    TicTacToe play(int x, int y, char player);
    
    return 0;
}
