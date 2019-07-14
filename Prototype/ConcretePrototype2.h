#pragma once
#include "Prototype.h"
class ConcretePrototype2 :
	public Prototype
{
public:
	ConcretePrototype2();
	~ConcretePrototype2();

	ConcretePrototype2* clone();
};

