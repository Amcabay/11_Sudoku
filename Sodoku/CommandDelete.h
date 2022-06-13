#pragma once
#include "Interface.h"

class Delete : public Command
{
public:
	Delete();
	~Delete();
	virtual void undo();
	virtual void redo();
	virtual void execute(int, int);
};