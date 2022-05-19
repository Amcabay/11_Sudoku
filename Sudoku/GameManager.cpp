#include "GameManager.h"

GameManager::GameManager()
{
	board = new Sudoku();
	player = new Player();
}

void GameManager::Initialize()
{
	board->generateNumber();
	board->printBoard();
}

Sudoku* GameManager::getBoard()
{
	return board;
}

void GameManager::setPlayer(Player* player)
{
	this->player = player;
}

Player* GameManager::getPlayer()
{
	return player;
}

void GameManager::undo()
{

}

void GameManager::redo()
{

}