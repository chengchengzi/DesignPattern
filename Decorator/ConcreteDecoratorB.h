#pragma once
#include "Decorator.h"
class ConcreteDecoratorB :
	public Decorator
{
public:
	ConcreteDecoratorB();
	~ConcreteDecoratorB();

	void Operation();
	void addBehavior();
};

