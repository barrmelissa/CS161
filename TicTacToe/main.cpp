#include "TicTacToe.hpp"
#include <iostream>
#include <string>
using namespace std;



int main()
{
    
    
    int x, y;
    char firstMove;
    cout << "Which player should go first? Please enter 'x' for player x or 'o' for player o." << endl;
    cin >> firstMove;
    
    if(firstMove == 'x')
    {
        cout << "Player x! Please enter your move.";
        cin >> x; cin >> y;
    }
    
    else if(firstMove == 'o')
    {
        cout << "Player o! Please enter your move.";
        cin >> x; cin >> y;
    }
    
    
    TicTacToe play(int x, int y, char firstMove);

    return 0;
}
