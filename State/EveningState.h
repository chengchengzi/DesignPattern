#pragma once
#include "State.h"
#include"SleepingState.h"
#include"RestState.h"
class EveningState :
	public State
{
public:
	EveningState();
	~EveningState();

	void coding(Work *work);
};

