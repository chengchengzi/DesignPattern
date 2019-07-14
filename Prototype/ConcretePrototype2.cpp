#include "ConcretePrototype2.h"



ConcretePrototype2::ConcretePrototype2()
{
}


ConcretePrototype2::~ConcretePrototype2()
{
}

ConcretePrototype2 * ConcretePrototype2::clone()
{
	//Éî¿½±´
	std::cout << "ConcretePrototype2 clone!" << std::endl;
	ConcretePrototype2* cp2_copy = new ConcretePrototype2();
	cp2_copy->name = this->name;
	return cp2_copy;
}
