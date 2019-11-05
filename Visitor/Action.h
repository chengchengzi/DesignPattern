#ifndef _ACTION
#define _ACTION

#include"Person.h"
#include<typeinfo>
class Action{
	public:
		virtual void GetManConclusion(Man * concreteElementA){};
		virtual void GetWomanConclusion(Woman* concreteElementB){};
};

class Success : public Action{
	public:
		void GetManConclusion(Person* concreteElementA);
		void GetWomanConclusion(Person* concreteElementB);
};

class Failing : public Action{
	public:
		void GetManConclusion(Person* concreteElementA);
		void GetWomanConclusion(Person* concreteElementB);
};
#endif
