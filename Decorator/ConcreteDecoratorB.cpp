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
	cout << "����װ��B�Ĳ���" << endl;
}

void ConcreteDecoratorB::addBehavior()
{
	cout << "����װ��B����Ϊ" << endl;
}
