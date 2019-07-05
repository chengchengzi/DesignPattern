#include "Operator.h"


Operator::~Operator()
{
}

void Operator::setNumberA(double numberA)
{
	this->numberA = numberA;
}

void Operator::setNumberB(double numberB)
{
	this->numberB = numberB;
}

double Operator::getNumberA()
{
	return numberA;
}

double Operator::getNumberB()
{
	return numberB;
}

double Operator::getResult()
{
	double result = 0.0;
	return result;
}

