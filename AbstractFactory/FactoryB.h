#pragma once
#include "CoreFactory.h"
#include"SingleCoreB.h"
#include"MultiCoreB.h"
class FactoryB :
	public CoreFactory
{
public:
	FactoryB();
	~FactoryB();

	SingleCore* createSingleCore();
	MultiCore* createMultiCore();
};

