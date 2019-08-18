#pragma once
#include "State.h"
#include"Work.h"
class SleepingState :
	public State
{
public:
	SleepingState();
	~SleepingState();

	void coding(Work *work);
};

