#include "FactoryB.h"



FactoryB::FactoryB()
{
}


FactoryB::~FactoryB()
{
}

SingleCore * FactoryB::createSingleCore()
{
	return new SingleCoreB();
}

MultiCore * FactoryB::createMultiCore()
{
	return new MultiCoreB();
}
