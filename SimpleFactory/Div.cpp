
#include "Div.h"


Div::Div()
{
}


Div::~Div()
{
}

double Div::getResult()
{
	if (num_b == 0) {
		cout << "除数不能为0" << endl;
		return -999;
	}
	double result = num_a / num_b;
	return result;
}
