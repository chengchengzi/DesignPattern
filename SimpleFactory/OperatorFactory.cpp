#include "pch.h"
#include "OperatorFactory.h"


OperatorFactory::OperatorFactory()
{
}


OperatorFactory::~OperatorFactory()
{
}

Operator* OperatorFactory::createOperator(char op)
{
	Operator *oper = nullptr;
	switch (op)
	{
	case '+':
		oper = new Add();
		break;
	case '-':
		oper = new Sub();
		break;
	case '*':
		oper = new Mul();
		break;
	case '/':
		oper = new Div();
		break;
	default:
		cout << "输入的运算符有误" << endl;
		break;
	}
	return oper;
}
