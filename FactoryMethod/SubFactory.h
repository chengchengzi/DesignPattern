#pragma once
#include "IFactory.h"
#include"Sub.h"
class SubFactory :
	public IFactory
{
public:
	SubFactory();
	~SubFactory();

	Operator *createOperation();
};

