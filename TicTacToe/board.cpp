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









