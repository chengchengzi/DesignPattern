#include "ConcretePrototype1.h"



ConcretePrototype1::ConcretePrototype1()
{
}


ConcretePrototype1::~ConcretePrototype1()
{
}

ConcretePrototype1 * ConcretePrototype1::clone()
{
	std::cout << "ConcretePrototype1 clone!" << std::endl;
	ConcretePrototype1* cp1_copy = new ConcretePrototype1();
	cp1_copy->name = this->name;
	return 	cp1_copy;
}
