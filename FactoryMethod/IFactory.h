#pragma once

#include"Operator.h"

class IFactory {
public:
	virtual Operator *createOperation() = 0;
};
