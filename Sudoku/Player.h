#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class Player
{
protected:
	string username;
	int scorePlayer;

public:
	Player();
	void setUsername(string);
	string getUsername();
	
	void setScore(int);
	int getScore();
	
};