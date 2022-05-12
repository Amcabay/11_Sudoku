#include "Board.h"

Sudoku::Sudoku()
{
    srand(time(0));
    for (int i = 0; i < 9; i++)
    {
        for (int k = 0; k < 9; k++)
        {
            fill(i, k, 0);
        }
    }

    generateNumber();
}

void Sudoku::fillRegion(int row, int col)
{
    int num = 0;
    for (int i = 0; i < 3; i++) 
    {
        cout << "row " << i << endl;
        for (int k = 0; k < 3; k++) 
        {
            cout << "col " << k << endl;

            while (true)
            {
                num = randomGenerator(9);
                cout << num << endl;
                if (cekRegion(row, col, num))
                {
                    {
                        fill(row + i, col + k, num);
                        break;
                    }
                }
            }
        }
    }
}

void Sudoku::generateNumber()
{

    for (int i = 0; i < 9; i += 3) 
    {
        cout << "Region " << i << " , " << i << endl;
        fillRegion(i, i);
    }

    printBoard();

    int num, cekCount = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] == 0)
            {
                while (true)
                {
                    num = randomGenerator(9);
                    cout << num << endl;
                    if (isValid(i, j, num))
                    {
                        cout << "found valid" << endl;
                        fill(i, j, num);
                        break;
                    }
                }
            }
        }
    }
}
void Sudoku::fill(int row, int col, int num)
{
    board[row][col] = num;
}

void Sudoku::remove(int row, int col)
{
    board[row][col] = 0;
}

void Sudoku::printBoard()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool Sudoku::cekRegion(int rowStart, int colStart, int num)
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[rowStart + i][colStart + j] == num)
                return false;

    return true;
}

bool Sudoku::cekRow(int row, int num)
{
    for (int j = 0; j < 9; j++)
    {
        if (board[row][j] == num)
            return false;
    }
    return true;

}

bool Sudoku::cekKolom(int col, int num)
{
    for (int i = 0; i < 9; i++)
    {
        if (board[i][col] == num)
            return false;
    }
    return true;
}

bool Sudoku::isValid(int row, int col, int num)
{
    return (cekKolom(col, num) && cekRow(row, num) && cekRegion(row - row % 3, col - col % 3, num));
}

int Sudoku::randomGenerator(int num)
{
    int random;

    random = rand() % num + 1;

    return random;
}

int main()
{

    Sudoku board;

    board.printBoard();

}
