#pragma once

#include"SubSystemOne.h"
#include"SubSystemTwo.h"
#include"SubSystemThree.h"

class Facade
{
public:
	Facade();
	~Facade();

	void methodA();
	void methodB();


private:
	SubSystemOne ssOne;
	SubSystemTwo ssTwo;
	SubSystemThree ssThree;
};

