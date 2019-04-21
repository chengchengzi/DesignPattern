// Factory.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"OperatorFactory.h"
using namespace std;

int main()
{
	OperatorFactory OF = OperatorFactory();
	Operator *oper = OF.createOperator('/');
	oper->setNumA(2);
	oper->setNumB(0);
	double result = oper->getResult();
	cout << "result: " << result << endl;
	return 0;
}
