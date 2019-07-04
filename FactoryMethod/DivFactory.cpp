#include "DivFactory.h"



DivFactory::DivFactory()
{
}


DivFactory::~DivFactory()
{
}

Operator *DivFactory::createOperation()
{
	return new Div();
}
