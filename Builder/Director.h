#pragma once
#include"Builder.h"
class Director
{
public:
	Director();
	~Director();
	
	void construct(Builder * builder);
};

