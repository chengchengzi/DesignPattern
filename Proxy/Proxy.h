#pragma once
#include "Subject.h"
#include "RealSubject.h"

class Proxy :
	public Subject
{
private:
	RealSubject* realSubject;
public:
	Proxy();
	~Proxy();

	void request();
};

