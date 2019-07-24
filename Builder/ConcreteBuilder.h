#pragma once
#include "Builder.h"
class ConcreteBuilder :
	public Builder
{
public:
	ConcreteBuilder();
	~ConcreteBuilder();

	 void buildPartA();
	 void buildPartB();
	 Product getProduct();

private:
	Product product;
};

