#pragma once
#include "Operator.h"
class Mul :
	public Operator
{
public:
	Mul();
	~Mul();

	double getResult();
};

