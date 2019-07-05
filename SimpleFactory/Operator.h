#pragma once
class Operator
{

protected:
	double num_a;
	double num_b;

public:
	Operator() :num_a(0.0),num_b(0.0){};
	~Operator();

	void setNumA(int a);
	void setNumB(int b);
	double getNumA();
	double getNumB();
	virtual double getResult();

};

