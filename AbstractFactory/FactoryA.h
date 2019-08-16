#pragma once
#include "CoreFactory.h"
#include"SingleCoreA.h"
#include"MultiCoreA.h"
class FactoryA :
	public CoreFactory
{
public:
	FactoryA();
	~FactoryA();

	SingleCore* createSingleCore();
	MultiCore* createMultiCore();
};

