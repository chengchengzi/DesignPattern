#include "ConcreteDecoratorA.h"



ConcreteDecoratorA::ConcreteDecoratorA()
{
}


ConcreteDecoratorA::~ConcreteDecoratorA()
{
}

void ConcreteDecoratorA::Operation()
{
	component->Operation();
	add_state = "New State";
	std::cout << "具体装饰A的操作" << endl;
}
