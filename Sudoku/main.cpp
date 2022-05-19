#include <iostream>
#include "Player.h"
#include "Board.h"

int main()
{
    string username;
    Sudoku board;
    cout << "Welcome to Sudoku" << endl;

    cout << "Input nama pemain: ";
    cin >> username;

    board.printBoard();

}