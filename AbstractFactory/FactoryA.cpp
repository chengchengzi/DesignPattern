#include "FactoryA.h"



FactoryA::FactoryA()
{
}


FactoryA::~FactoryA()
{
}

SingleCore * FactoryA::createSingleCore()
{
	return new SingleCoreA();
}

MultiCore * FactoryA::createMultiCore()
{
	return new MultiCoreA();
}
