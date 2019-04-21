#pragma once
#include "Operator.h"
#include<iostream>
using namespace std;
class Div :
	public Operator
{
public:
	Div();
	~Div();
	double getResult();
};

