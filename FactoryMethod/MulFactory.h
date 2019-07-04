#pragma once
#include "IFactory.h"
#include"Mul.h"
class MulFactory :
	public IFactory
{
public:
	MulFactory();
	~MulFactory();

	Operator *createOperation();
};

