#pragma once
#include<iostream>

class Operator
{
public:
	Operator() :numberA(0.0), numberB(0.0) {};
	~Operator();

	void setNumberA(double numberA);
	void setNumberB(double numberB);
	double getNumberA();
	double getNumberB();
	virtual double getResult() = 0;

private:
	double numberA;
	double numberB;
};

