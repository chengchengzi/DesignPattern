#pragma once
#include "Strategy.h"
class ConcreteStrategyA :
	public Strategy
{
public:
	ConcreteStrategyA();
	~ConcreteStrategyA();

	void  AlgorithmInterface();
};

