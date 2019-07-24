#include "Director.h"



Director::Director()
{
}


Director::~Director()
{
}

void Director::construct(Builder * builder)
{
	builder->buildPartA();
	builder->buildPartB();
}
