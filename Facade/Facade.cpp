#include "Facade.h"



Facade::Facade()
{
}


Facade::~Facade()
{
}

void Facade::methodA()
{
	std::cout << "方法组A执行..." << std::endl;
	ssOne.methodOne();
	ssTwo.methodTwo();
}

void Facade::methodB()
{
	std::cout << "方法组B执行..." << std::endl;
	ssThree.methodThree();
}
