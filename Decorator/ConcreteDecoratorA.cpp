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
	std::cout << "����װ��A�Ĳ���" << endl;
}
