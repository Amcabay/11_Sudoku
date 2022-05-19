#pragma once
#include <iostream>
#include <time.h>

using namespace std;
class Sudoku
{
private:
	int board[9][9];
	int change[9][9];
	//void fillRegion(int, int);

public:
	Sudoku();

	bool cekRegion(int, int, int);
	bool cekRow(int, int);
	bool cekKolom(int, int);
	bool isValid();
	bool fillRest();
	bool isValid(int, int, int);
	bool findEmpty(int&, int&);
	//bool Check_Conflicts(int, int, int);

	void generateNumber();
	void fill(int, int, int);
	void remove(int, int);
	void printBoard();
	void fillRegion(int, int);
	//void Add_First_Cord();
	//void Help_Solve(int, int);
	//void Solve();
	
	int randomGenerator(int);

	
};
