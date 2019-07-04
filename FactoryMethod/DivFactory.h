#pragma once
#include "IFactory.h"
#include"Div.h"

class DivFactory :
	public IFactory
{
public:
	DivFactory();
	~DivFactory();

	Operator *createOperation();
};

