#pragma once
#include <string>

using namespace std;

class Player
{
private:
	std::string username;
	int score;
public:
	Player();
	~Player() = default;
	void set_username(std::string);
	void set_score(int);
	std::string get_username();
	int get_score();
};