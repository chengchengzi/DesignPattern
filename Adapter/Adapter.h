#include<iostream>
#include"Adaptee.h"
#include"Target.h"
class Adapter : public Target{
private:
	Adaptee adaptee;
public:
	//Adapter();
	//~Adapter();
	void Request();
};
