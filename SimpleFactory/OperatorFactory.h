#pragma once
#include"Operator.h"
#include"Add.h"
#include"Sub.h"
#include"Mul.h"
#include"Div.h"
#include<string>
class OperatorFactory
{
public:
	OperatorFactory();
	~OperatorFactory();
	Operator* createOperator(char op);
};

