#pragma once
#include <iostream>
#include <string.h>
#include "Player.h"
#include "Board.h"
#include "CommandDelete.h"

using namespace std;

class GameManager
{
protected:
	Sudoku *board;
	Player *player;

public:
	GameManager();

	void Initialize();
	Player* getPlayer();
	void setPlayer(Player*);
	void redo();
	void undo();

	bool checkWin();

	Sudoku* getBoard();
};
