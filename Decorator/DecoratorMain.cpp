// Decorator.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include <iostream>
#include"ConcreteComponent.h"
#include"ConcreteDecoratorA.h"
#include"ConcreteDecoratorB.h"

int main()
{
	ConcreteComponent c = ConcreteComponent();
	ConcreteDecoratorA d1 = ConcreteDecoratorA();
	ConcreteDecoratorB d2 = ConcreteDecoratorB();

	d1.setComponent(&c);
	d2.setComponent(&d1);
	d2.Operation();


	return 0;
}


