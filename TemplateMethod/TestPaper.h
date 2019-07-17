#pragma once
#include<iostream>
class TestPaper
{
public:
	TestPaper();
	~TestPaper();

	void testQuestion1();
	void testQuestion2();

	virtual void testAnswer1() = 0;
	virtual void testAnswer2() = 0;
};

