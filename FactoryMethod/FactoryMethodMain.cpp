// FactoryMethod.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"Operator.h"
#include"IFactory.h"
#include"AddFactory.h"
#include"DivFactory.h"
#include"MulFactory.h"
#include"SubFactory.h"

using namespace std;

int main()
{
	IFactory *operFactory = new SubFactory();
	Operator *oper = operFactory->createOperation();
	oper->setNumberA(2);
	oper->setNumberB(3);
	double result = oper->getResult();
	cout << result << endl;

	if (operFactory != nullptr) {
		delete operFactory;
		operFactory = nullptr;
	}
	if (oper != nullptr) {
		delete oper;
		oper = nullptr;
	}
	
	return 0;
}

