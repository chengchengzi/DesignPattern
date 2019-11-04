#ifndef _ACTION
#define _ACTION

#include""

class Action{
	public:
		virtual void GetManConclusion(Man * concreteElementA){};
		virtual void GetWomanConclusion(Woman* concreteElementB){};
};

class Success : public Action{
	public:
		void GetManConclusion(Man* concreteElementA);
		void GetWomanConclusion(Woman* concreteElementB);
};

class Failing : public Action{
	public:
		void GetManConclusion(Man* concreteElementA);
		void GetWomanConclusion(Woman* concreteElementB);
};
#endif
