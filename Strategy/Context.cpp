#include "pch.h"
#include "Context.h"


Context::Context()
{
}

Context::Context(Strategy * strategy)
{
	this->strategy = strategy;
}

Context::~Context()
{
}

void Context::ContextInterface()
{
	strategy->AlgorithmInterface();
}

void Context::ContextInterface(int type)
{
	Strategy *strategy = nullptr;
	switch (type)
	{
	case 1: {
		ConcreteStrategyA concreteStrategyA;
		strategy = &concreteStrategyA;
		break;
	}
	case 2: {
		ConcreteStrategyB concreteStrategyB;
		strategy = &concreteStrategyB;
		break;
	}
	case 3: {
		ConcreteStrategyC concreteStrategyC;
		strategy = &concreteStrategyC;
		break;
	}

	default:
		break;
	}
	strategy->AlgorithmInterface();
}
