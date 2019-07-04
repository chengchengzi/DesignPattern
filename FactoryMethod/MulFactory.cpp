#include "MulFactory.h"



MulFactory::MulFactory()
{
}


MulFactory::~MulFactory()
{
}

Operator *MulFactory::createOperation()
{
	return new Mul();
}
