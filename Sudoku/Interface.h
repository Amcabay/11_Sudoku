#pragma once
#include <iostream>
#include "Board.h"

using namespace std;

class Interface
{
protected:
	Sudoku saveBoard;

public:
	virtual void setSaveBoard() = 0;
	virtual Sudoku getSaveBoard() = 0;
	virtual void undo() = 0;
	virtual void execute() = 0;
};