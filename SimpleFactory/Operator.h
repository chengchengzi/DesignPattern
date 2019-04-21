#pragma once
class Operator
{

protected:
	double num_a;
	double num_b;

public:
	Operator();
	~Operator();

	void setNumA(int a = 0);
	void setNumB(int b = 0);
	double getNumA();
	double getNumB();
	virtual double getResult();

};

