#include "Mul.h"



Mul::Mul()
{
}


Mul::~Mul()
{
}

double Mul::getResult() {
	double result = getNumberA() * getNumberB();
	return result;
}