#pragma once
#include "Decorator.h"
#include<string>
class ConcreteDecoratorA : public Decorator
{
private:
	string add_state;
public:
	ConcreteDecoratorA();
	~ConcreteDecoratorA();

	void Operation();
};

