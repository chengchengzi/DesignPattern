#include "ConcreteBuilder.h"



ConcreteBuilder::ConcreteBuilder()
{
}


ConcreteBuilder::~ConcreteBuilder()
{
}

void ConcreteBuilder::buildPartA()
{
	product.add("����A");
}

void ConcreteBuilder::buildPartB()
{
	product.add("����B");
}

Product ConcreteBuilder::getProduct()
{
	return product;
}
