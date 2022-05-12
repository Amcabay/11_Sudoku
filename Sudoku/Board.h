#pragma once
#include <iostream>
#include <time.h>

using namespace std;
class Sudoku
{
private:
	int board[9][9];

	void fillRegion(int, int);
public:
	Sudoku();

	int randomGenerator(int);

	bool cekRegion(int, int, int);
	bool cekRow(int, int);
	bool cekKolom(int, int);
	bool isValid(int, int, int);

	void generateNumber();
	void fill(int, int, int);
	void remove(int, int);
	void printBoard();
};

