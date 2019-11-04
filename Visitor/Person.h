#ifndef _PERSON
#define _PERSON

class Action;

class Person{
	public:
		virtual void Accept(Action* visitor){};
};

class Man:public Person{
	public:
		void Accept(Action* visitor);
};

class Woman : public Person{
	public:
		void Accept(Action* visitor);
};
#endif
