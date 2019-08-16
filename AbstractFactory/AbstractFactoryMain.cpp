// AbstractFactoryMain.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"CoreFactory.h"
#include"FactoryA.h"
#include"FactoryB.h"
using namespace std;
int main()
{
	cout << "Buy product A" << endl;
	CoreFactory* coreFactoryA = new FactoryA();
	coreFactoryA->createSingleCore()->show();
	coreFactoryA->createMultiCore()->show();
	cout << endl;

	cout << "Buy product B" << endl;
	CoreFactory* coreFactoryB = new FactoryB();
	coreFactoryB->createSingleCore()->show();
	coreFactoryB->createMultiCore()->show();

	return 0;
}
