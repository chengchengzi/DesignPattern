#include "ConcreteDecoratorB.h"



ConcreteDecoratorB::ConcreteDecoratorB()
{
}


ConcreteDecoratorB::~ConcreteDecoratorB()
{
}

void ConcreteDecoratorB::Operation()
{
	component->Operation();
	addBehavior();
	cout << "具体装饰B的操作" << endl;
}

void ConcreteDecoratorB::addBehavior()
{
	cout << "具体装饰B的行为" << endl;
}
