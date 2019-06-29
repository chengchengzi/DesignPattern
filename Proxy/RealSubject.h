#pragma once
#include "Subject.h"
class RealSubject :
	public Subject
{
public:
	RealSubject();
	~RealSubject();

	void request();
};

