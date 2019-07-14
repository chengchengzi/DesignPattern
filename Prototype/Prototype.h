#pragma once
#include<string>
#include<iostream>
class Prototype {
protected:
	std::string name;

public:
	void setName(std::string n) {
		name = n;
	}

	std::string getName() {
		return name;
	}

	virtual Prototype * clone() = 0;
};