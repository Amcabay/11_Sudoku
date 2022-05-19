#include "CommandDelete.h"

void CommandDelete::setSaveBoard(Sudoku saveBoard)
{
	this->saveBoard = saveBoard;
}

Sudoku CommandDelete::getSaveBoard()
{
	return saveBoard;
}

void CommandDelete::undo(int row, int col, int num)
{
	saveBoard.fill(row, col, num);
}

void CommandDelete::execute(int row, int col)
{
	saveBoard.remove(row, col);
}