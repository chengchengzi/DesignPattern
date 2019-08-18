#pragma once
#include "State.h"
#include"EveningState.h"
class AfterNoonState :
	public State
{
public:
	AfterNoonState();
	~AfterNoonState();

	void coding(Work *work);
};

