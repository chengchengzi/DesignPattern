#pragma once
#include<iostream>

class Operator
{
public:
	Operator();
	~Operator();

	void setNumberA(double numberA = 0.0);
	void setNumberB(double numberB = 0.0);
	double getNumberA();
	double getNumberB();
	virtual double getResult() = 0;

private:
	double numberA;
	double numberB;
};

