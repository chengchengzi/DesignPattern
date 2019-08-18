#pragma once
#include "State.h"
#include"AfterNoonState.h"
class NoonState :
	public State
{
public:
	NoonState();
	~NoonState();

	void coding(Work *work);
};

