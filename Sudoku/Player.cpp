#include "Player.h"

Player::Player()
{
	username = " ";
	scorePlayer = 0;
}

void Player::setUsername(string name)
{
	this->username = name;
}

string Player::getUsername()
{
	return username;
}