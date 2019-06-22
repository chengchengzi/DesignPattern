#pragma once

#include"Component.h"
#include<iostream>
using namespace std;

class Decorator : public Component{
protected:
	Component *component;

public:
	void setComponent(Component *component);
	void Operator();

};