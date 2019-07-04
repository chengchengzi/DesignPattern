#include "AddFactory.h"



AddFactory::AddFactory()
{
}


AddFactory::~AddFactory()
{
}

Operator *AddFactory::createOperation()
{
	return new Add();
}
