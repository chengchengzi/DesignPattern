// Facade.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"Facade.h"
using namespace std;

int main()
{
	Facade f = Facade();
	cout << "调用方法组A..." << endl;
	f.methodA();
	cout << "===================" << endl;
	cout << "调用方法组B..." << endl;
	f.methodB();
	
	return 0;
}

