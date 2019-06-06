#pragma once

#include"Strategy.h"
#include"ConcreteStrategyA.h"
#include"ConcreteStrategyB.h"
#include"ConcreteStrategyC.h"

class Context
{
private:
	Strategy *strategy;
public:
	Context();
	Context(Strategy *strategy);
	~Context();

	void ContextInterface();

	void ContextInterface(int type);
};

