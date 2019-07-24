#include "ConcreteBuilder.h"



ConcreteBuilder::ConcreteBuilder()
{
}


ConcreteBuilder::~ConcreteBuilder()
{
}

void ConcreteBuilder::buildPartA()
{
	product.add("部件A");
}

void ConcreteBuilder::buildPartB()
{
	product.add("部件B");
}

Product ConcreteBuilder::getProduct()
{
	return product;
}
