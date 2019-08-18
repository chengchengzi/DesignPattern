#pragma once
#include "State.h"
#include"NoonState.h"
class ForeNoonState :
	public State
{
public:
	ForeNoonState();
	~ForeNoonState();

	void coding(Work *work);
};

