#pragma once
#include <iostream>
#include <random>
#include <ctime>
#include <vector>
#include <fstream>
#include <filesystem>

#include "Interface.h"
#include "CommandFill.h"
#include "CommandDelete.h"

class Invoker
{
private:
	std::vector<Command*> history;
public:
	Invoker();
	~Invoker() = default;
	void push(Command*);
	Command& pop();
	bool is_empty();
	int get_size();
};