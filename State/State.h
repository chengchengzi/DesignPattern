#pragma once
#include<iostream>

extern class Work;
class State
{
public:
	State();
	~State();

	virtual void coding(Work *work) = 0;
};

