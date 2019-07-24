#pragma once
#include"Product.h"
class Builder
{
public:
	Builder();
	~Builder();

	virtual void buildPartA() = 0;
	virtual void buildPartB() = 0;
	virtual  Product getProduct() = 0;

};

