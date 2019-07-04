#include "Div.h"



Div::Div()
{
}


Div::~Div()
{
}

double Div::getResult() {
	if (getNumberB() == 0) {
		std::cout << "除数不能为0！" << std::endl;
		return -999;
	}
	double result = getNumberA() / getNumberB();
	return result;
	
}
