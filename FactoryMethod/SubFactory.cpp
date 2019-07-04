#include "SubFactory.h"



SubFactory::SubFactory()
{
}


SubFactory::~SubFactory()
{
}

Operator *SubFactory::createOperation()
{
	return new Sub();
}
