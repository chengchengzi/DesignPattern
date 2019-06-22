#include"Decorator.h"

void Decorator::setComponent(Component * component)
{
	this->component = component;
}

void Decorator::Operator() {
	if (component != nullptr) {
		component->Operation();
	}
}

