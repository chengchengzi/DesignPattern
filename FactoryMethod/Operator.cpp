#include "Operator.h"



Operator::Operator()
{
}


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

