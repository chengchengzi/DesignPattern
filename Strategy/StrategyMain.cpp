// Strategy.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include"Context.h"
using namespace std;
int main()
{
	cout << "策略模式" << endl;
	Context context;
	context = Context(&ConcreteStrategyA());
	context.ContextInterface();

	context = Context(&ConcreteStrategyB());
	context.ContextInterface();

	context = Context(&ConcreteStrategyC());
	context.ContextInterface();

	cout << endl;

	cout << "策略模式结合工厂模式" << endl;
	Context context2;
	context2.ContextInterface(1);
	context2.ContextInterface(2);
	context2.ContextInterface(3);
	return 0;
    
}

