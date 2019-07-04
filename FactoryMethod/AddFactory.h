#pragma once
#include "IFactory.h"
#include"Add.h"
class AddFactory :
	public IFactory
{
public:
	AddFactory();
	~AddFactory();

	Operator *createOperation();
};

