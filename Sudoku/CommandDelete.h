#pragma once
#include <iostream>
#include "Interface.h"

using namespace std;

class CommandDelete : public Interface
{
public:
	void setSaveBoard(Sudoku);
	Sudoku getSaveBoard();
	void undo(int, int, int);
	void execute(int, int);
};