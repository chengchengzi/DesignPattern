#include "Facade.h"



Facade::Facade()
{
}


Facade::~Facade()
{
}

void Facade::methodA()
{
	std::cout << "������Aִ��..." << std::endl;
	ssOne.methodOne();
	ssTwo.methodTwo();
}

void Facade::methodB()
{
	std::cout << "������Bִ��..." << std::endl;
	ssThree.methodThree();
}
