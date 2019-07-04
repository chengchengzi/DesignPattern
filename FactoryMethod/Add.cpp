#include "Add.h"



Add::Add()
{
}


Add::~Add()
{
}

double Add::getResult() {
	double result = getNumberA() + getNumberB();
	return result;
}