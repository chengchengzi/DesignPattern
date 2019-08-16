#pragma once
#include"SingleCore.h"
#include"MultiCore.h"
class CoreFactory
{
public:
	CoreFactory();
	~CoreFactory();
	
	virtual SingleCore* createSingleCore() = 0;
	virtual MultiCore* createMultiCore() = 0;
};

