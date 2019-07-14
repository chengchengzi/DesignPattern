#pragma once
#include "Prototype.h"
class ConcretePrototype1 :
	public Prototype
{
public:
	ConcretePrototype1();
	~ConcretePrototype1();

	ConcretePrototype1 * clone();
};

