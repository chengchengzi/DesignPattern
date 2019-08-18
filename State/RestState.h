#pragma once
#include "State.h"
class RestState :
	public State
{
public:
	RestState();
	~RestState();

	void coding(Work *work);
};

